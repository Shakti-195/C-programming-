#include <stdio.h>

int linearsearch(int a[],int n , int key ){
    int i;

    for(i = 0; i < n; i++){
        if (a[i] == key)
        return i;

    }
    return -1;
}

int main() {
    int a[100],n,key,i;

    scanf("%d",&n);

    for(i = 0; i<n; i++)
    scanf("%d", &a[i]);
    scanf("%d",&key);

    int pos = linearsearch(a,n,key);
    if(pos == -1)
    printf("Not found \n");
    else
    printf("Found at %d\n",pos + 1);

    return 0;

}

