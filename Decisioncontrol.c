//Write  a program to Swap values of two int type variables.
//Method 1 using if Statement 
#include <stdio.h>
int main(){
  int x;
  printf("Enter a number:");
  scanf("%d",&x);
  if(x>0){
    printf("Positive");
  }if(x<=0){
    printf("Non-Positive");
  }
  
}

//Method 2 using if else Statement
#include <stdio.h>
int main(){
  int x;
  printf("Enter a number:");
  scanf("%d",&x);
  if(x>0){
    printf("Positive");
  }else{
    printf("Non-Positive");
  }
  
}

//Method 3 using using condtional operator(? :)
//Ternary operator
#include <stdio.h>
int main(){
  int x;
  printf("Enter a number:");
  scanf("%d",&x);
  x>0?printf("Positive"):printf("Non-Positive");
}
