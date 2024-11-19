#include<math.h>
#include<stdio.h>
#include<stdlib.h>

// Declaring factorial function 
int factorial(int x);

int main(void)
{
    // Declaring variables	
    int order,i;
    double *terms,e;
    
    // Requesting for order from user and taking input
    printf("Please enter the order you wish to use:\n");
    scanf("%d",&order);
    
    // Dynamically allocating memory and initialisng terms array with each power of x 
    terms = (double *)malloc(order*sizeof(double));
    for (i=0;i<order; i++){
	    terms[i] = 1.0/(double)(factorial(i+1));
			    }
    // Computing the e value by summming up all the elements in terms arry
    e=1.0;
    for (i=0;i<order; i++){
	
    	e = e+terms[i];
	}
	
    // Printing the computed e and the difference with actual e value
    printf("e is estimated as %.10lf, with difference %e\n",e, e-exp(1.0));

    // Freeing the memory
    free(terms);
    return 0;


}

// Defining the factorial function
int factorial(int x)
{
    if (x<0){
	    printf("You must use a positive number\n");
	    return -1;
    }
    else if (x==0){
	    return 1;
    }
    else{
	    return (x*factorial(x-1));
    }



}

/* Reason for higher difference with increasing order
This is due to limitation of terms array, after a specific order the values becomes negative and there by increasing the difference of computed e and actual e */



