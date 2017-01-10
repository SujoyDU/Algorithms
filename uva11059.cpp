#include <stdio.h>
#include <iostream>
using namespace std;

/**
int main() {
    int n;

    while((scanf("%d", &n))!=EOF){
        int numbers[n];
        int minimum=0;
        int negativeCount=0;
        for(int i=0; i<n; i++)
        {

            scanf("%d",&numbers[i]);
            if(numbers[i]<0){
                negativeCount++;
                if(minimum > numbers[i]){
                    minimum = numbers[i];
                }
            }
        }

        if(n==1){
            if(numbers[0]<0) printf("product : 0\n");
            else printf("product : %d\n",numbers[0]);
        }
        else if(negativeCount%2 == 0) {
            int product=1;
            for(int i=0; i<n; i++)
            {
                product = product * numbers[i];
            }
            printf("product : %d\n",product);
        }
        else {
            int product=1;
            for(int i=0; i<n; i++)
            {
                if(numbers[i]!=minimum){
                    product = product *numbers[i];
                }
            }
            printf("product : %d\n",product);
        }
    }
}
**/
// -1 10 -7 10 -6 0 -6
int main() {
    int n;

    while((scanf("%d", &n))!=EOF){
        int product =1;
        int negativeProduct =1;
        int minimumNumber = -11;
        int maxProduct =0;
        int k=0;
        for(int i=0; i<n; i++)
        {
            int number;
            scanf("%d", &number);
            if(number == 0){
                //maxProduct
                if(k %2 !=0) negativeProduct = -(negativeProduct / minimumNumber);
                maxProduct = (negativeProduct > product) ? negativeProduct : product;
                negativeProduct = -11;
                product =1;
                minimumNumber = -11;
            }
            else if(number <0){
                if(number > minimumNumber){
                    minimumNumber = number;
                }
                negativeProduct = negativeProduct * number * product;
                product =1;
                k++;
                //if(negativeProduct > 0) product = product * negativeProduct;
            }

            else product = product * number;

        }

        if(maxProduct)
        //product > negativeProduct ? printf("%d\n", product) : printf("%d\n", negativeProduct);
    }

}
