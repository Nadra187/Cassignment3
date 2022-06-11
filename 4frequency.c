//frequency of each element in an array 
#include<stdio.h>

int main(){
    int l,i,count,j;
    //scanning the elements of the array
    printf("Enter the count of the numbers.\n");
    scanf("%d",&l);
    int num[l],dup[l];
    printf("Enter the numbers.\n");
    for(i=0;i<l;i++){
        scanf("%d",&num[i]);
        dup[i]=-1;
    }
    //finding
    for(i=0;i<l;i++){
        count=1;
        for(j=i+1;j<l;j++){
            if(num[i]==num[j]){
                count++;
                dup[j]=0;
            }
        }
        if(dup[i]!=0){
            dup[i]=count;
        }
    }
    for(i=0;i<l;i++){
        if(dup[i]>=1){
            printf("frequency of %d is %d.\n",num[i],dup[i]);
        }
    }
    return 0;
}