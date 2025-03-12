#include<stdio.h>
int main(){

    //variable to store the number of rows
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    int a=rows;

    //loop to iterate through the rows
    for(int i=1;i<=a;i++){
        
        //loop to print the spaces
        for(int j=a-i;j>=1;j--)
        {
            printf(" ");
            
        }

        //loop to print the numbers
        for(int k=0;k<i;k++)
        {
            printf("%d",k+i);
        }

        int j=i*2-1;

        //loop to print the numbers
        for(j;j>i;j--)
        {
            printf("%d",j-1);
        }

        printf("\n");
    }
    return 0;
}
