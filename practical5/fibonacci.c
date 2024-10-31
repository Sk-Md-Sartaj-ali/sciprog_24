#include <stdio.h>
#include <math.h>

// Declaring the function with pointers as parameters
void fib(long int *a, long int *b);

int main(void){

	//Declaring the variables
	int n, i; 
	long int a, b;
	
	printf("Enter n value : ");
	//Taking input
	scanf("%d", &n);
	//Verifying n value is greater than or equal to 1
	if(n<1){
		printf("Enter a value greater than equal to 1");
		return 0;
	}
	a = 0;
	b = 1;
	//Calculating and printing  fibonacci series
	for(i=0;i<n;i++){
		printf("%ld ",a);
		if(i%10 == 0) printf("\n");
		fib(&a,&b);
	}

	return 0;
}

//Defining the function
void fib(long int *a, long int *b){
	
	long int temp;
	temp = *b;
	*b = *b+*a;
	*a = temp;

	return;
}

