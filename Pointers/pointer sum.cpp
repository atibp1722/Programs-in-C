#include <stdio.h>
#include <conio.h>
#define ROW 2
#define COL 3

int sum(int(*array)[3]);

int main(void)
{
    int a[ROW][COL] = { {1 , 2, 3} ,
                        {4 , 5, 6} };
    printf(" sum = %d\n", sum (a));
    return 0;
}

int sum(int(*array)[3]) 
{
    int i,j, sum = 0;
    for (i =0; i < ROW ; i ++) {
        for (j =0; j < COL ; j ++) {
            sum = sum + *(*( array +i )+j);
        }
    }
    return sum; /* HERE */
}
