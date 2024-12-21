//program 1

//write a program to calculate perimeter of rectangle take a&b ,from the user 

#include <stdio.h>
int main(){
  int a,b;
  printf("enter the value of a\n");
  scanf("%d",&a);
  printf("enter the value of b\n");
  scanf("%d",&b);
  printf("perimeter of rectangle of a and b is %d ",2*(a+b));
  return 0;
}

//program 2

//take a number(n) from user and output its cube(n*n*n);
#include <stdio.h>
int main(){
  int n;
  printf("enter a number :\n ");
  scanf("%d",&n);
  printf("cube of %d is %d",n,n*n*n);
  return 0;
}

//program 3

//write a program to calculate area of a square (side is given)
#include <stdio.h>
int main(){
  int side;
  printf("enter side : ");
  scanf("%d",&side);
  printf("area of square is %d",side *side);
  return 0;
  
}

//program 4

//write a program to calculate area of a circle 

#include <stdio.h>
int main(){
  int r;
  printf("enter the radius of the circle : ");
  scanf("%d",&r);
  printf("the area of the circle is : %f",3.14*r*r);
  return 0;
}