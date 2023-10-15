// Programmer: Zaid Bin Naveed
   ID:23K-0028
   Date:15 October, 2023 //
   
   Q1:-
   #include <stdio.h>

int main()
{
	int n1, n2;
	int rem=0;
	int q=0;
	int temp;
	
	printf("Enter first number: ");
	scanf("%d", &n1);
	printf("Enter second number: ");
	scanf("%d", &n2);
	temp=n2;
	
	while(temp>=n1)
	{
		rem=temp-n1;
		q+=1;
		temp-=n1;
	}
	printf("The remainder of the division of %d and %d is: ", n1,n2);
	printf("%d", rem);
	printf("\n");
	printf("The quotient of the division of %d and %d is: ", n1,n2);
	printf("%d", q);
}

Q2:-
int main()
{
	int n=0;
	printf("Enter n: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter Array of %d Elements \n",n);
	
	int j=0;

	while(j<n)
	{
		printf("Enter Element %d: ",j+1);
		scanf(" %d",&arr[j]);
		j++;
	}
	
	int d=0;
	printf("\nNow Enter Integer to Rotate Array:  ");
	scanf("%d",&d);
	printf("\nYour Array Before Rotation: ");
	
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("%d, ",arr[i]);
	}
	
	int temp1=0;
	for(i=0;i<d;i++)
	{
		temp1=arr[0];
		for(j=0;j<n;j++)
		{
			arr[j]=arr[j+1];
			if(j==n-1){
				arr[j]=temp1;
			}
		}
	}
	
	printf("\nYour Array After Rotation: ");
	for(i=0;i<n;i++)
	{
		printf("%d, ",arr[i]);
	}
}

Q3:-
#include <stdio.h>

int main()
{
	int n, rem;
	int sum=0;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	int i;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("The sum of the digits is %d", sum);
}

Q4:-
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int r1, r2, c1, c2, temp1, temp2;
	bool is_symm;
	is_symm= true;
	
	//taking input for the order of matrix
	printf("Enter the rows of the first matrix: ");
	scanf("%d", &r1);
	printf("Enter the columns of the first matrix: ");
	scanf("%d", &c1);
	printf("\n");
	
	//taking inputs for the orfder of the second matrix
	printf("Enter the rows of the second matrix: ");
	scanf("%d", &r2);
	printf("Enter the columns of the second matrix: ");
	scanf("%d", &c2);
	printf("\n");
	
	int i, j;
	int mat1[r1][c1];
	int mat2[r2][c2];
	
	//taking inputs for the matrix
	for(i=0; i<r1; i++)
	{
		temp1=i+1;
		for(j=0; j<c1; j++)
		{
			temp2=j+1;
			printf("Enter the element to be stored at %d, %d of the first matrix:", temp1, temp2);
			scanf("%d", &mat1[i][j]);
		}
	}
	printf("\n");
	for(i=0; i<r2; i++)
	{
		temp1=i+1;
		for(j=0; j<c2; j++)
		{
			temp2=j+1;
			printf("Enter the element to be stored at %d, %d of the second matrix:", temp1, temp2);
			scanf("%d", &mat2[i][j]);
		}
	}
	printf("\n");
	//checking for the symmetry
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c1; j++)
		{
			if(mat1[i][j]!=mat2[j][i])
			{
				is_symm=false;
				break;
			}
		}
	}
	if(is_symm==true)
	{
		printf("Yes, the matrices are symmetric. ");
	}
	else 
	{
		printf("No, the matrices are not symmetric. ");
	}
}

Q7:-
#include <stdio.h>

int main()
{
	int mat1[2][2];
	int mat2[2][2];
	int res[2][2];
	int i,j, k;
	
	//taking inputs for the array
	printf("Fill up the first matrix.");
	printf("\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("Enter %d, %d element in the matrix 1: ", i+1,j+1);
			scanf("%d", &mat1[i][j]);
		}
	}
	printf("\n");
	
	printf("Fill up the second matrix.");
	printf("\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("Enter %d, %d element in the matrix 2: ", i+1,j+1);
			scanf("%d", &mat2[i][j]);
		}
	}
	
	//multiplying matrices 
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			res[i][j]=0;
			for(k=0; k<2; k++)
			{
				res[i][j]+=mat1[i][k]*mat2[k][j];
			}
		}
	}
	
	//displaying the final array
	printf("\n");
	printf("The result of multiplacation is:\n\n");
	printf("\t%d\t%d", res[0][0], res[0][1]);
	printf("\n");
	printf("\t%d\t%d", res[1][0], res[1][1]);
}
Q8:-
#include <stdio.h>

int main()
{
	int n;
	
	//taking input for the size of the array 
	printf("Enter the number of inputs you need to give: ");
	scanf("%d", &n);
	
	//intializing the arrays 
	int arr[n];
	
	int i, j, temp;
	//filling up the array
	for(i=0; i<n; i++)
	{
		printf("Enter %d number: ", i+1);
		scanf("%d", &arr[i]);
	}

	//sorting
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1-i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	//printing the sorted array
	printf("The sorted array is:\n");
	for(i=0; i<n; i++)
	{
		if(i<n-1)
		{
		printf("%d, ", arr[i]);
		}
		else
		{
			printf("%d", arr[i]);
		}
	}
}

Q9:-
#include <stdio.h>

int main()
{
	int x, y;
	//taking inputs for the number of baranches and mobiles in each branch
	printf("Enter the number of branches: ");
	scanf("%d", &x);
	printf("\nEnter the number of mobile phones in each branch: ");
	scanf("%d", &y);
	
	int in_arr[x][y];
	int c, i;
	
	//filling up the array with bills.
	for(c=0; c<x; c++)
	{
		for(i=0; i<y; i++)
		{
			printf("Enter bill for branch %d mobile %d: ", c+1, i+1);
			scanf("%d", &in_arr[c][i]);
		}
	}
	printf("\n");
	
	int total_bill=0; //for the total bill of all branches
	int bill_branch; //for each branch bill
	int max_branch; //for ID of branch with max bill
	int mobile, branch; //for mobile and branch IDs with max bill
	int max_B_bill=0; //for checking the branch with max bill
	int max_s=0; //for checking the mobile with max bill
	
	//doing calculations on data
	for(c=0; c<x; c++)
	{
		bill_branch=0;
		for(i=0; i<y; i++)
		{
			if(in_arr[c][i]>max_s)
			{
				mobile=i+1;
				branch=c+1;
				max_s=in_arr[c][i];
			}
			total_bill=total_bill+in_arr[c][i];
			bill_branch=bill_branch+in_arr[c][i];
		}
		printf("Total bill for brach %d is: %d\n", c+1, bill_branch);
		if(bill_branch>max_B_bill)
		{
			max_branch=c+1;
			max_B_bill=bill_branch;
		}
	}
	
	//printing the results
	printf("\nTotal bill for all %d branches is: %d", x, total_bill);
	printf("\nThe branch where maximum bill arrived is branch %d", max_branch);
	printf("\n%d mobile from %d branch had the maximum bill.", mobile,branch);
}

Q10:-
#include <stdio.h>

int main() 
{
    int S, N;
	//Taking inputs for N and S
    printf("Enter Number S: ");
    scanf("%d", &S);
    printf("Enter the size of the array: ");
    scanf("%d", &N);
	
    int arr[N];
	int i;
	//filling up the array
    for (i=0; i<N; i++) 
	{
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int j=0;
    int k=0;
    int sum=0;
	//doing all the calculations here
    for (i=0; i<N; i++) 
	{
        sum+=arr[i];
        while(sum>S) 
		{
            sum-=arr[j];
            j+=1;
        }
		if (sum==S) 
		{
            k=i;
            break;
        }
    }
	//printing the outputs here
    if (sum==S) {
        printf("The elements from index %d to %d, when summed, result in %d.\n", j, k, S);
    } else {
        printf("No subarray found with a sum of %d.\n", S);
    }
}

