//to count a total number of duplicate elements in an array
#include<stdio.h>

int main(){
    //scanning all the elements
    int count,l;
    printf("Enter the count of the numbers.\n ");
    scanf("%d",&l);
    int num[l],dup[l],i,j,final=0;
    printf("Enter the numbers.\n");
    for(i=0;i<l;i++){
        scanf("%d",&num[i]);
        dup[i]=-1;
    }
    //printing the duplicates
    //dup array will have the count at the first index of the duplicate element.
    //and at other index of the dupliacate ,it wiil store 0
    //and for unique it will store 1
    //in short dup will store the count and for repeating, 0
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
        if(dup[i]>1){
            final++;
        }
    }
    printf("Total number of duplicate elements=%d \n",final);
    return 0;
}