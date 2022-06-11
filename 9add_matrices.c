//to add two matrices of same size 
#include<stdio.h>

int main(){
    //scanning the matrices
    int size,r,c;
    printf("Enter the size of the matrices(less than 5). \n");
    scanf("%d",&size);
    printf("Enter the elements of the first matrix: \n");
    int first[size][size],second[size][size],sum[size][size];
    for(r=0;r<size;r++){
        for(c=0;c<size;c++){
            printf("Element [%d] [%d] :" ,r,c);
            scanf("%d",&first[r][c]);
        }
    }
    printf("Enter the elements of the second matrix: \n");
    for(r=0;r<size;r++){
        for(c=0;c<size;c++){
            printf("Element [%d] [%d] :" ,r,c);
            scanf("%d",&second[r][c]);
        }
    }
    //printing 
    printf("First Matrix: \n");
    for(r=0;r<size;r++){
        for(c=0;c<size;c++){
            printf("%d ",first[r][c]);
        }
        printf("\n");
    }
    printf("Second Matrix: \n");
    for(r=0;r<size;r++){
        for(c=0;c<size;c++){
            printf("%d ",second[r][c]);
        }
        printf("\n");
    }
    //adding
    printf("Sum of two matrices: \n");
    for(r=0;r<size;r++){
        for(c=0;c<size;c++){
            sum[r][c]=first[r][c]+second[r][c];
            printf("%d  ",sum[r][c]);
        }
        printf("\n");
    }
    return 0;
}