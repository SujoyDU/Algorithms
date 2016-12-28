#include <stdio.h>
#include <string.h>
#include <stack>
#include <stdlib.h>
using namespace std;

//Parenthesis problem!!!!
//(([]))[)
int main()
{
    int n;
    scanf("%d", &n);
    char c;
    c=getchar();
    //printf("enter: %c",c);
    for (int i=0; i<n; i++)
    {
        //printf("starting loop\n");
        stack<char>parenthesis;
        char input[128];
        int k=0;
        while((c = getchar()) != '\n' ){
            input[k]=c;
            k++;
        }
        input[k]='\0';
        int len = strlen(input);
        //printf("%d\n", len);

        for(int i=0; i<len; i++)
        {
            if(!parenthesis.empty() && input[i]==')' && parenthesis.top()=='('){
                parenthesis.pop();
            }
            else if(!parenthesis.empty() && input[i]==']' && parenthesis.top()=='['){
                parenthesis.pop();
            }
            else if(!parenthesis.empty() && input[i]==')' && parenthesis.top()!='('){
                break;
            }
            else if(!parenthesis.empty() && input[i]==']' && parenthesis.top()!='['){
                break;
            }
            else parenthesis.push(input[i]);
        }
        if(parenthesis.empty()) printf("Yes\n");
        else printf("No\n");
        //printf("void: %c\n",c);
        //printf("entry: %s\n",input);
    }
    return 0;
}
