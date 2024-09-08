# include<stdio.h>
   int main(){
   int choice = 0;
  printf("Enter your choice:");
  scanf("%d",&choice);
     switch(choice){
    case 0:
    printf("Hello!\n");
    break;
    case 1:
    printf("Bonjour\n");
    break;
    case 2:
    printf("Hola\n");
    break;
    case 3:
    printf("Namaste\n");
    break;
    default:
    printf("Sorry,I dont know that Language");
  }
  return 0;
}
    
  