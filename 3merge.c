//merge two arrays in descending order
#include<stdio.h>

int main(){
    //scanning the elements of both arrays
    int count;
    printf("Enter the number of elements in both the arrays.\n");
    scanf("%d",&count);
    printf("Enter the elements of the arrays in descending order.\n");
    printf("FIRST ARRAY: \n");
    int first[count],second[count],merged[count*2],i,j,temp;
    for(i=0;i<count;i++){
        scanf("%d",&first[i]);
    }
    printf("SECOND ARRAY: \n");
    for(i=0;i<count;i++){
        scanf("%d",&second[i]);
    }
    //merging
    for(i=0;i<(count*2);i++){
        if(i<count){
            merged[i]=first[i];
        }
        else{
            merged[i]=second[i-count];
        }
    }
    //sorting
    for(i=0;i<(count*2);i++){
        for(j=i+1;j<(count*2);j++){
            if(merged[i]<merged[j]){
                temp=merged[i];
                merged[i]=merged[j];
                merged[j]=temp;
            }
        }
    }
    printf("Merged array in descending order is \n");
    for(i=0;i<(count*2);i++){
        printf("%d \n",merged[i]);
    }
    return 0;
}