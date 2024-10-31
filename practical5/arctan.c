	
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Declaring fuctions
double artanh1(double x, double delta);
double artanh2(double x, double delta);


int main(void) 
{
	//Declaring and defining variables
	double delta,x;
	int i;
	double tan1[200], tan2[200];
	//Taking delta as input
	printf("Enter the delta value: ");
	scanf("%lf",&delta);
	x = -0.9;
	//Calculating desired values and assigning to arrays
	for(i=0;i<181;i++){

		tan1[i] = artanh1(x,delta);
		tan2[i] = artanh2(x,delta);
		x = x+0.01;
	}

	x = -0.9;
	//Printing the values
	for(i=0;i<181;i++){
	
		printf("\nRelative Difference of tan1 and tan2 at %.2lf is: %.10lf",x,fabs(tan1[i]-tan2[i])/tan2[i]);
		x  += 0.01;

	}

	return 0;
}

//Defining the artanh1 function
double artanh1(double x, double delta){
	
	double val,sum=0;
	int i=0;
	do{
	
		val=pow(x,2*i+1)/(2*i+1);
		sum += val;
		i++;
	}while (fabs(val) >= delta);
	
	return sum;
}

//Defining the artanh1 function
double artanh2(double x, double delta){

        double a;
	a = 0.5*(log(1+x)-log(1-x));
	return a;
}


