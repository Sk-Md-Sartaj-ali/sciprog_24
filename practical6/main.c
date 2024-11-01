#include <stdio.h>

//Declaring the matmult function which computes matrix multiplication
void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]);

int main(void){
	
	//Initialising variables and defining arrays
	int n=5, p=3, q=4;
	double A[n][p], B[p][q], C[n][q];
	
	//Declaring i,j,k variables
	int i, j, k;

	//Intialising matrix C to zero
	for(i=0;i<n;i++){
		for(j=0;j<q;j++)
			C[i][j] = 0;
	}

	//Intialising matrix A to i+j values where i and j are rows and columns
	for(i=0;i<n;i++){
                for(j=0;j<p;j++)
                        A[i][j] = i+j;
	}

	//Intialising matrix B to i-j values where i and j are rows and columns
	for(i=0;i<p;i++){
                for(j=0;j<q;j++)
                        B[i][j] = i-j;
        }

	//Calling matmult function for matrix multiplication by passing arrays and their sizes
	matmult(n,p,q,A,B,C);

	//Printing matrix A
	printf("\nThe matrix A is: \n\n");
	for(i=0;i<n;i++){
                for(j=0;j<p;j++)
                        printf("%3.0f",A[i][j]);
        	printf("\n");
	}	

	//Printing matrix B
	printf("\nThe matrix B is: \n\n");
	for(i=0;i<p;i++){
                for(j=0;j<q;j++)
                        printf("%3.0f",B[i][j]);
                printf("\n");
        }

	//Printing matrix C
	printf("\nThe matrix C is: \n\n");
	for(i=0;i<n;i++){
                for(j=0;j<q;j++)
                        printf("%3.0f",C[i][j]);
                printf("\n");
        }



	return 0;
}

