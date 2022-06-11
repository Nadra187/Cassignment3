//merge two arrays in descending order
#include<stdio.h>

int main(){
    //scanning the elements of both arrays
    int count;
    printf("Enter the number of elements in both the arrays.\n");
    scanf("%d",&count);
    printf("Enter the elements of the arrays in descending order.\n");
    printf("FIRST ARRAY: \n");
    int arr1[count],arr2[count],merged[count*2],i,j,k;
    for(i=0;i<count;i++){
        scanf("%d",&arr1[i]);
    }
    printf("SECOND ARRAY: \n");
    for(i=0;i<count;i++){
        scanf("%d",&arr2[i]);
    }i=0,j=0,k=0;
    while((i<count)&&(j<count)){
        if (arr1[i]<arr2[j]){
            merged[k]=arr2[j];
            k++,j++;
        }
        else if(arr1[i]>=arr2[j]){
            merged[k]=arr1[i];
            k++,i++;
        }
    }
    if(i==count){
        merged[k]=arr2[j];
    }
    else if(j==count){
        merged[k]=arr1[i];
    }
    printf("Merged array in descending order is \n");
    for(i=0;i<(count*2);i++){
        printf("%d \n",merged[i]);
    }
    return 0;
}