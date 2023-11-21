#include <iostream>

using namespace std;

// Define the Box structure
struct Box {
    int length;
    int width;
    int height;
};

// Function to calculate the volume of a box
int calculateVolume(const Box& box) {
    return box.length * box.width * box.height;
}

// Function to determine if a box can pass through the tunnel
bool canPassThroughTunnel(const Box& box, int tunnelHeight) {
    return box.height < tunnelHeight;
}

int main() {
    int n; // Number of boxes
    cout << "Enter the number of boxes: ";
    cin >> n;

    // Array to store information about each box
    Box boxes[n];

    // Input information for each box
    for (int i = 0; i < n; ++i) {
        cout << "Enter dimensions (length width height) for box " << i + 1 << ": ";
        cin >> boxes[i].length >> boxes[i].width >> boxes[i].height;
    }

    const int tunnelHeight = 41;

    // Output the volume of each box that can pass through the tunnel
    cout << "Volumes of boxes that can pass through the tunnel:\n";
    for (int i = 0; i < n; ++i) {
        if (canPassThroughTunnel(boxes[i], tunnelHeight)) {
            int volume = calculateVolume(boxes[i]);
            cout << volume << endl;
        }
    }

    return 0;
}
