//to find determinant of the matrix
#include<stdio.h>

int main(){
    //scanning the matrix
    printf("Enter the elements of the matrix(order 3X3): \n");
    int m[3][3],det,r,c;
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("Element [%d] [%d] :" ,r+1,c+1);
            scanf("%d",&m[r][c]);
        }
    }
    //printing the matrix
    printf("The matrix is: \n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%d ",m[r][c]);
        }
        printf("\n");
    }
    //finding determinant
    det=m[0][0]*(m[1][1]*m[2][2]-m[1][2]*m[2][1])-m[0][1]*(m[1][0]*m[2][2]-m[1][2]*m[2][0])+m[0][2]*(m[1][0]*m[2][1]-m[1][1]*m[2][0]);
    printf("The dterminant of the given matrix = %d.",det);

}

   