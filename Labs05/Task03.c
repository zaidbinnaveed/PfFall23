#include <stdio.h>
int main() {
	        char ans;
          printf("Are you sure to delete [Y/y] / [N/n] ?");
          scanf("%c", &ans);
          switch(ans) {
        	case 'Y':
          	printf("Deleted Successfully!");
          	break;
        	case 'y':
          	printf("Deleted Successfully!");
          	break;
            case 'N':
          	printf("Delete Cancelled!");
          	break;
            case 'n':
          	printf("Delete Cancelled!");
          	break;
          	default:
          	printf("Enter a valid option");
		  }
         
          	return 1;
          }
       
        