#include <stdio.h>
#include <math.h>
int main() {
	     int number1=0;
	     int number2=0;
	     char op;
	     int ans=0;
	     
	     printf("Enter an operator:");
	     scanf(" %c", &op);
	     printf("\n");
	     printf("Enter your first number:");
	     scanf("%d", &number1);
	     printf("Enter your second number:");
	     scanf(" %d",&number2);
	     switch(op)
	     {
	     	case '+':
	     		ans = number1 + number2;
	     		break;
	     	case '-':
	     		ans = number1 - number2;
	     		break;
	     	case '/':
	     		ans = number1 / number2;
	     		break;
	     	case '*':
	     		ans = number1 * number2;
	     		break;
	     		default:
	     		printf("Enter Valid Operator");
		 }
		 printf("%d",ans);
		 return 1;
	}
	     
        