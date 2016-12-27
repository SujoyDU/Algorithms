#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;


void preLPS(char *pat, int *lps) {
     //printf("pattern is %s and len: %d\n",*pat,strlen(pat));
    //printf("pattern len: %d\n",strlen(pat));
    int lenOfPat = strlen(pat);
    lps[0]=0;
    int i=1;
    int len=0;

    while(i<lenOfPat){
        if(pat[i]==pat[len]){
            len++;
            lps[i]=len;
            i++;
        }
        else {
            if(len>0)
                len = lps[len-1];
            else {
                lps[i]=0;
                i++;
            }
        }
    }
}
int main(){

    /**
    int x=10;
    int *p = &x;
    int *q = p;
    printf("x value:%d x address:%d\n", x, &x);
    printf("p value:%d *p value:%d &p value:%d\n",p,*p, &p);
    printf("q value:%d *q value:%d &q value:%d\n",q,*q,&q);


    int a[]={1,2,3,4,5,6};
    int *num = a;
    printf("num value:%d *num value:%d &num value:%d\n",num,*num, &num);

    for(int i=0; i<sizeof(a)/sizeof(a[0]); i++,*num++){
        printf("%d %d\n",*num,num);
    }
    **/

    char *pattern = "aaabaaaba";
    char *text = "aaabaacaaxaaabaaabaaaabaa";

    printf("pattern len: %d || text len: %d\n",strlen(pattern),strlen(text));
    int lenOfPattern = strlen(pattern);
    int lps[lenOfPattern];

    preLPS(pattern,lps);
    int *demo = lps;

    for(int i=0; i<lenOfPattern; i++,*demo++){
        printf("%d %d\n",*demo,demo);
    }


}
