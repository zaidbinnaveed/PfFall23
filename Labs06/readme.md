Question 1;
#include<stdio.h>

int main(){
int K;
int a=0;
printf("enter a positive number to check if its a perfect square:");
scaf("%d",&K);

for(int j=1; j<K ;j = j+1) {
if (K%j==0) {
a=j+a;
}
}
if (a==K) {
printf("Your number is perfect");
}
if (a!=K) {
printf("Your number is not a perfect number");
}
return 0;
}
