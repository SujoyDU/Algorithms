#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void printArray(int arr[], int s)
{
    //printf("Input array: %d\n",&arr[0]);
    for(int i=0; i<s; i++)
        printf("%d ",arr[i]);
    printf("\n");
}

void mergeArray(int inputArray[],int low,int mid,int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    int tempArray1[n1];
    int tempArray2[n2];
    //printf("Input array: %d\n",&inputArray[0]);

    for(int i=0; i<n1; i++)
    {
        //printf("%d \n",i);
        tempArray1[i]=inputArray[low+i];
    }
    for(int i=0; i<n2; i++)
    {
        tempArray2[i] = inputArray[mid+1+i];
    }
    int k=0;
    int l=0;
    int p=low;
    while(k<n1 && l<n2)
    {
        if(tempArray1[k]<=tempArray2[l])
        {
            inputArray[p]=tempArray1[k];
            k++;
        }

        else {
            inputArray[p]=tempArray2[l];
            l++;
        }
        p++;
    }
    while(k<n1){
        inputArray[p] = tempArray1[k];
        p++;
        k++;
    }

    while(l<n2){
        inputArray[p] = tempArray2[l];
        p++;
        l++;
    }

    //printArray(inputArray,high+1);
}
void mergeSort(int inputArray[], int low, int high)
{
    if(low < high)
    {
        int mid = (low+high)/2;
        mergeSort(inputArray,low,mid);
        mergeSort(inputArray,mid+1,high);
        mergeArray(inputArray,low,mid,high);
    }
    //printArray(inputArray,high+1);
}

void printVal(int x)
{
    printf("In function: \n");
    printf("add: %d, val: %d\n", &x,x);
    x= x+100;
    printf("add: %d, val: %d\n", &x,x);
    printf("Out function: \n");

}


void changeVal(int x[])
{
    printf("In function: \n");
    printArray(x,3);
    for(int i=0; i<3;i++)
        x[i]+=1;
    printArray(x,3);
    printf("Out function: \n");

}
int main(){
    int inputArray[10] = {10,2,6,1,4,3,9,7,8,5};
    //printf("Original array: %d\n",&inputArray[0]);
    int len= (sizeof(inputArray)/sizeof(inputArray[0]));
    mergeSort(inputArray,0,len-1);
    printArray(inputArray,len);

    /**testing reference
    int x=10;
    printf("add: %d, val: %d\n", &x,x);
    printVal(x);
    printf("add: %d, val: %d\n", &x,x);


    int xy[3]={1,2,3};
    printArray(xy,3);

    changeVal(xy);
    printArray(xy,3);

    **/
}
