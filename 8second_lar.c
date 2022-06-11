//to find second largest elemnt in the array
#include<stdio.h>

int main(){
    int count,i,j,max,second_max;
    //scanning the elements of the array
    printf("Enter the count of the numbers.\n");
    scanf("%d",&count);
    int num[count];
    printf("Enter the numbers.\n");
    for(i=0;i<count;i++){
        scanf("%d",&num[i]);
    }
    //finding
    max=second_max=num[0];
    for(i=1;i<count;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    for(i=1;i<count;i++){
        if((num[i]>second_max)&&(num[i]<max)){
            second_max=num[i];
        }
    }
    printf("Second highest number in the array= %d",second_max);
}