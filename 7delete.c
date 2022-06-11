//to delete an element at the desired position from an array
#include<stdio.h>

int main(){
    int count,i,pos;
    //scanning the elements of the array
    printf("Enter the count of the numbers.\n");
    scanf("%d",&count);
    int num[count];
    printf("Enter the numbers.\n");
    for(i=0;i<count;i++){
        scanf("%d",&num[i]);
    }
    printf("Enter the position where to delete.\n");
    scanf("%d",&pos);
    //deleting
    for(i=pos;i<count-1;i++){
        num[i]=num[i+1];
    }
    num[count-1]='\0';
    printf("New array: \n");
    for(i=0;i<count-1;i++){
        printf("%d \n",num[i]);
    }
    return 0;
}