//to print all unique elements in an array
#include<stdio.h>

int main(){
    int count,i;
    //scanning the elements of the array
    printf("Enter the count of the numbers.\n");
    scanf("%d",&count);
    int num[count];
    printf("Enter the numbers.\n");
    for(i=0;i<count;i++){
        scanf("%d",&num[i]);
    }

    //printing the unique numbers
    int flag;
    printf("The Unique Numbers are \n");
    for(i=0;i<count;i++){
        flag=0;
        for(int j=0;j<count;j++){
            if((num[i]==num[j])&&(j!=i)){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d \n",num[i]);
        }
    }
    return 0;
}