#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct node {
    int value;
    node *next;
};

node *root;

void evalPointer(){
    int *p;
    int x=100;
    p=&x;
    printf("address of x: %d\nvalue of x: %d\n",&x,x);
    printf("address of x is assigned to pointer p\n");
    printf("address of x in pointer p (value of pointer): %d\nvalue of x pointed by the pointer: %d\naddress value of pointer: %d",p,*p,&p);

}

void insertValue(int x){
    printf("insert value: %d\n",x);
    node *newNode;
    newNode = (node*)malloc(sizeof(node));
    newNode->value=x;
    newNode->next=NULL;


    if(root == NULL){
       //printf("head is empty\nInserting to head!");
       root = newNode;
    }

    else {
        node *currentNode;
        currentNode = root;
        //printf("head is not empty!");
        //printf("traversing nodes ->");
        int it=1;
        while(currentNode->next != NULL) {
            currentNode = currentNode->next;
            it++;
        }
        //printf("inserting in %d number of child\n",++it);
        currentNode->next = (node*)malloc(sizeof(node));
        currentNode = currentNode->next;
        currentNode->value =x;
        currentNode->next = NULL;
    }
}

void deleteValue( int x){
    printf("delete value: %d\n",x);
    if(root == NULL){
        printf("link list is empty!!\n");
    }
    else {
       node *currentNode,*parentNode;
       currentNode = root;
       parentNode = root;
       while(currentNode->value !=x){
            parentNode = currentNode;
            currentNode = currentNode->next;
       }
       if(currentNode == NULL) {
         printf("value does not match. Unable to delete!!\n");
       }
       else {
        parentNode->next = currentNode->next;
       }

    }

}
void printValue(){

    //printf("%d\n",root->value);
    if(root == NULL){
        printf("head is empty\n");
    }
    else{
        node *currentNode;
        currentNode = root;
        while(currentNode!=NULL){
            printf("%d\n",currentNode->value);
            currentNode = currentNode->next;
        }
    }
}

void sortValue(){
    printf("sorting\n\n");
    node *temp1, *temp2;
    int temp;
    //bubblesort: taking the first value and comapring to others. updating the value is large
    for( temp1 = root ; temp1!=NULL ; temp1 = temp1->next )
    {
      for( temp2 = temp1->next ; temp2!=NULL ; temp2 = temp2->next )
      {

            if( temp1->value > temp2->value )
            {
                  temp = temp1->value;
                  temp1->value = temp2->value;
                  temp2->value = temp;
            }

      }
    }

}

int main(){
    //evalPointer();

    //node *currentNode;

    root = NULL;
    //printf("%d\n",&root);
    //currentNode = NULL;

    //int x;
    //scanf("%d", &x);

    insertValue(10);
    insertValue(2);
    insertValue(9);
    insertValue(8);
    insertValue(15);
    insertValue(3);
    insertValue(14);
    //printf("%d", root->value);
    printValue();
    sortValue();
    deleteValue(14);
    printValue();

    //root= (node*)malloc(sizeof(node));
    //currentNode = (node*)malloc(sizeof(node));

    //root->value = 10;
    //root->next = NULL;
    //printf("%d",root->value);
}
