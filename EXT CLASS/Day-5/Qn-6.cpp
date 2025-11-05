#include<stdio.h>
int main() {
int a,i,min;
    scanf("%d",&a);
    int arr[a];
    for (i=0;i<a;i++){
         scanf("%d",&arr[i]);
    }
    min=arr[0];
    for (i=1;i<a;i++){
      if (arr[i]<min){
        min=arr[i];
    }
    }
    printf("%d",min);
    return 0;
}


