//to find maximum and minimum element in an array
#include<stdio.h>

int main(){
    int count,i,max,min;
    //scanning the elements of the array
    printf("Enter the count of the numbers.\n");
    scanf("%d",&count);
    int num[count];
    printf("Enter the numbers.\n");
    for(i=0;i<count;i++){
        scanf("%d",&num[i]);
    }
    //finding
    max=min=num[0];
    for(i=0;i<count;i++){
        if(num[i]>max){
            max=num[i];
        }
        if(num[i]<min){
            min=num[i];
        }
    }
    printf("Maximum element= %d.\n",max);
    printf("Minimum element= %d.",min);
    return 0;
}