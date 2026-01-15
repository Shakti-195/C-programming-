#include <stdio.h>

void main(){
    int a[10]; int i;
    printf("Enter The Numbers: \n");
    for ( i = 0; i <= 9; i++){
        scanf("%d" , & a[i]);
    }

    printf("Array:\n");
    for ( i = 0; i <= 9; i++){
        printf("%p\t" , & a[i]); 
    }
    

}