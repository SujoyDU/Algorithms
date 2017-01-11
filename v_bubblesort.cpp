#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int16_t inputArray[10]= {10,2,6,1,4,3,9,7,8,5};

    int16_t len = sizeof(inputArray)/(sizeof(inputArray[0]));

    printf("length: %d %d\n",len,sizeof(len));
    for(int i=0; i<len; i++)
        printf("%d ",inputArray[i]);
    printf("\n");


    for (int i=0; i<len; i++)
    {
        for(int j=i+1; j<len; j++)
        {
            if(inputArray[j]<inputArray[i])
            {
                int temp=inputArray[i];
                inputArray[i]=inputArray[j];
                inputArray[j]=temp;
            }
        }
        for(int k=0; k<len; k++)
            printf("%d ",inputArray[k]);
        printf("\n");
    }
    for(int i=0; i<len; i++)
        printf("%d ",inputArray[i]);


}
