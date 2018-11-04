#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    printf("enter size of array \n");
    scanf("%d",&n);

    // we cannot do a[n] as it will give compilation error so we need to allocate
    //memory using malloc

   int *a = (int*) malloc (n*sizeof(int));



    //using calloc
     //int *a = (int*) calloc (n,sizeof(int));
    for (int i = 0; i<n; i++)
    {
        a[i] = i+1;
    }

    //free(a); // it shows some garbage value
    //a= NULL;// after free adjust pointer to null
    // a[2] = 6; // we are still able to chang


    int *b = (int*)realloc(a,(n/2)*sizeof(int)); // in thi 2 elements remains same and rest elements are deallocated
    // this call will create new memory of size n and copies the value of previous block a


//int *a = (int*)realloc(a,o); // deallocate all members
// this is similar to free(a)


    int *b = (int*)realloc(NULL,n*sizeof(int));
    // equivalent to calling malloc this does not copy elements of previous memory



    printf("prev block address = %d , new address = %d\n",a,b);

    for (int i = 0; i<n; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
