#include <stdio.h>

//Substring Matching Algorithms//
//KMP ALGO//


/**
#include <time.h>
#include <iostream>
using namespace std;

int main (int argc, char** argv)
{
    // reset the clock
    timespec tS;
    tS.tv_sec = 0;
    tS.tv_nsec = 0;
    clock_settime(CLOCK_PROCESS_CPUTIME_ID, &tS);
    ...
    ... <code to check for the time to be put here>
    ...
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tS);
    cout << "Time taken is: " << tS.tv_sec << " " << tS.tv_nsec << endl;

    return 0;
}
**/

/**
//UVA-13130
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        bool escala = true;
        int a,x;
        scanf("%d", &a);
        for(int j=0;j<4; j++)
        {
            scanf("%d", &x);
            if(a+1 != x){
                escala = false;
            }
            a=x;

        }
        printf("%s\n",escala ? "Y":"N");
    }
}
**/


/**
//UVA-13108
int main()
{
    int n;
    scanf("%d",&n);
    int results[] = {0,1,2,4,8,16,31,57,99};
    for(int i=0; i<n; i++)
    {

        int number;
        scanf("%d",&number);
        if(number<9)
        {
            printf("%d\n",results[number]);
        }
        else
        {
            int sum1 =1;
            int sum2 =1;
            //finding nC4
            for(int j=number-3; j<number+1; j++)
            {
                sum1 = sum1*j;
            }
            sum1 = sum1/24;
            //finding nC2
            for(int j=number-1; j<number+1; j++)
            {
                sum2=sum2*j;
            }
            sum2=sum2/2;

            printf("%d\n",sum1+sum2+1);
        }

    }
    return 0;
}

**/

