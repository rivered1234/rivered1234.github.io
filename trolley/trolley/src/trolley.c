/*This programm is made to help you guide trolleys choose the most eficient path
  This is for educational purposes only.*/


#include <stdio.h>

int main() {
long long right, left;
int check_cost;

 // Infinite loop
    while (1) {



	// Prompt the user to enter the cost for going left
        printf("Please enter the cost of going left: ");
	check_cost = scanf("%lld", &left);

		// Check end of file input
		if (check_cost == EOF) {
			printf("Terminating.\n");
			return 0;
		}

		// Check if the input is a number: input must return 1
        	else if (check_cost !=1) {
			printf("No left cost provided.\n");
       			return 1;
 		}

	// Prompt the user to enter the cost for going right
       	printf("Please enter the cost of going right: ");
	check_cost = scanf("%lld", &right);

		// Check if the input is a number: input must return 1
		if (check_cost !=1) {
			printf("No right cost provided.\n");
			return 1;
		}



        /* Compare the two numbers
	(left > right = right)*/
	if (right < left) {
	    printf("Go right.\n");
        }
	//(left < right = left)
	else if (left < right) {
            printf("Go left.\n");
        }
	//(left == right = l)
	else {
            printf("Go left.\n");
        }


    }
    return 0;
}
