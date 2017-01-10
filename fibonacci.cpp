#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


void fibon(int n){
    if (n==0) printf("F(0): 0\n");
    unsigned long long int fib[n];
    /**
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(int16_t));
    printf("%d\n",sizeof(int32_t));
    printf("%d\n",sizeof(int64_t));
    printf("%d\n\n",sizeof(int8_t));

    printf("%u\n",sizeof(uint8_t));
    printf("%u\n",sizeof(uint16_t));
    printf("%u\n",sizeof(uint32_t));
    printf("%u\n\n",sizeof(uint64_t));

    **/

    fib[0]=0;
    fib[1]=1;
    for(int i=2; i<=n; i++)
        fib[i]= fib[i-1]+fib[i-2];
    printf("F(n): %llu\n",fib[n]);
}


int recFibon(int n){
    if (n==0) return 0;
    else if (n==1) return 1;
    else return recFibon(n-1)+recFibon(n-2);
}
int main()
{
    int n;
    printf("Enter fibonacci F(n): ");
    scanf("%d", &n);
    fibon(n);
    //printf("F(n): %d\n",recFibon(n));
}
