/*6. Write a program that takes a matrix as
     input and prints its reverse matrix.
*/

#include<stdio.h>

int main()
{
    int row , column ;

    printf("Enter row length please : ");
    scanf("%d" , &row);

    printf("\nEnter column length please : ");
    scanf("%d" , &column);

    int arr[row][column] , k , r  ;
    for(k = 0 ; k < row ; k++)
    {
        for(r = 0 ; r < column ; r++)
        {
            printf("Enter elements of row %d column %d\n" , k+1 , r+1);
            scanf("%d" , &arr[k][r]);

        }
    }

    system ("cls") ;

    printf("\nThe given Matrix is : \n\n");
    for(k = 0 ; k < row ; k++)
    {
        for(r = 0 ; r < column ; r++)
        {
            printf("\t%d   " , arr[k][r]);
        }
        printf("\n");
    }

    printf("\nThe Reverse matrix is : \n\n");

    for(k = 0 ; k < row ; k++)
    {
        for(r = column - 1 ; r >= 0  ; r--)
        {
            printf("\t%d   " , arr[k][r]);
        }
        printf("\n");
    }
   return 0 ;
}
    //This is the END of this program.
    //Thank you.
