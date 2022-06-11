//to insert value in the array(sorted list)
#include<stdio.h>

int main(){
    int count,i,j,temp;
    //scanning the elements of the array
    printf("Enter the count of the numbers.\n");
    scanf("%d",&count);
    int l=count;
    int num[l],add;
    printf("Enter the numbers.\n");
    for(i=0;i<l;i++){
        scanf("%d",&num[i]);
    }
    //inserting
    printf("Enter the count of additional numbers to be inserted in the given array.\n");
    scanf("%d",&add);
    printf("Enter the numbers.\n");
    for(i=count;i<count+add;i++){
        scanf("%d",&num[i]);
    }

    //sorting
    for(i=0;i<count+add;i++){
        for(j=i+1;j<count+add;j++){
            if(num[i]>num[j]){
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("NEW ARRAY WILL BE: \n" );
    for(i=0;i<count+add;i++){
        printf("%d \n",num[i]);
    }
    return 0;
}