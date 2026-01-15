#include <stdio.h>

#define MAX 5 //Maximum size of the stack

int stack[MAX];
int top = -1; //indicates an empty stack 

//function to add an elememt to the stack 

void push(int value){
    if(top == MAX-1){
        printf("STACK OVERFLOW\n");
    }else{
        stack[++top]=value;
        printf("%d pushed to stack\n",value);
    }
}

//Function to remove an element from stack
int pop(){
    if(top == -1){
        printf("STACK UNDERFLOW\n");
        return -1;
    }else{
        return stack[top--];
    }
}

//Function to display all elements in the stack 
void display(){
    if(top == -1){
        printf("STACK IS EMPTY\n");
    }else{
        printf("STACK ELEMENTS: ");
        for(int i = top;i>=0;i--){
            printf("%d",stack[i]);
        }
        printf("\n");
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    display();

    printf("%d popped from stack\n",pop());
    display();
    
    return 0;
}