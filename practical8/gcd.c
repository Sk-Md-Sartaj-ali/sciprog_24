#include<stdio.h>

// Defining the iterative function
int iterativeGCD(int a, int b){
    int temp;
    while(b!=0){
        temp= b;
        b=a%b;
        a=temp;
    }
    return a;
}

// Defining the recursive function
int recursiveGCD(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return (recursiveGCD(b,a%b));
    }
}

int main(){
    // Declaring variables
    int a,b, error;

    // Taking input
    printf("Please enter two positive integers:\n");
    error=scanf("%d %d", &a,&b);

    // Validating input
    if(error!=2){
        printf("Please enter two integers!\n");
        return 1;
    }
    if (a<=0 || b<=0){
        printf("Please enter positive integers\n");
        return 1;
    }
    if (a<=0 || b<=0){
        printf("Please enter positive integers\n");
        return 1;
    }

    // Calling the functions and printing the GCD values
    printf("iterativeGCD(%d, %d)=%d\n",a,b,iterativeGCD(a,b));
    printf("recursiveGCD(%d, %d)=%d\n",a,b,recursiveGCD(a,b));
    return 0;
}
