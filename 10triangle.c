//to display lower triangular of a given matrix
#include<stdio.h>

int main(){
    //scanning the matrix
    int size,r,c;
    printf("Enter the size of the matrix(less than 5). \n");
    scanf("%d",&size);
    printf("Enter the elements of the matrix: \n");
    int matrix[size][size];
    for(r=0;r<size;r++){
        for(c=0;c<size;c++){
            printf("Element [%d] [%d] :" ,r+1,c+1);
            scanf("%d",&matrix[r][c]);
        }
    }
    //printing the matrix
    printf("The matrix is: \n");
    for(r=0;r<size;r++){
        for(c=0;c<size;c++){
            printf("%d ",matrix[r][c]);
        }
        printf("\n");
    }
    //setting zero
    for(r=1;r<size;r++){
        for(c=0;c<r;c++){
            matrix[r][c]=0;
        }
    }
    //printing new matrix
    printf("Setting zero in lower triangular matrix: \n");
    for(r=0;r<size;r++){
        for(c=0;c<size;c++){
            printf("%d ",matrix[r][c]);
        }
        printf("\n");
    }
    return 0;
}