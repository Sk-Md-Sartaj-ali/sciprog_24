#include<stdio.h>
#include<stdlib.h>

// Declaring functions
int *allocatearray(int n);
void fillwithones(int *p, int n);
void printarray(int *p, int n);
void freepointer(int *p);

int main(void)
{
    // Declaring variables
    int size = 11;
    int *array;
    
    // Calling function for dynamic memory allocation
    array = allocatearray(size);
    // Calling function to fill the array with ones
    fillwithones(array,size);
    // Printing the array elements
    printarray(array,size);
    // Calling function to free the pointer memory
    freepointer(array);
    
    return 0;
}
// Defining all the functions

int *allocatearray(int n)
{
    int *temp;
    temp = (int *)malloc(n * sizeof(int));
    return temp;
}

void fillwithones(int *p, int n)
{
    int i;
    for (i=0; i<n;i++)
    {
        p[i]=1;
    }
}

void printarray(int *p, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" %d ",p[i]);
    }
    printf("\n");
}

void freepointer(int *p)
{
    free(p);
}
