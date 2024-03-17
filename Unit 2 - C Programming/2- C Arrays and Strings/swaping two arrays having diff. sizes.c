#include <stdio.h>
#include <stdlib.h>


void swap(int*a,int*b,int a_size,int b_size){
int size = (a_size < b_size? a_size : b_size);
    int i;
    for(i=0;i<size;i++)
    {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;

        printf("a=%d \n b=%d \n",a[i],b[i]);
    }
}

int main()
{
    int a[5]={1,2,3,4,5}; int a_size=5;
    int b[3]={10,20,30}; int b_size=3;
    swap(a,b,a_size,b_size);

    return 0;
}
