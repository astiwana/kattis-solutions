// ***Quadrant Selection Solution***
// Difficulty: 1.2
// Time Limit: 1 second, Memory Limit: 1024 MB
// CPU Time: 0.00 s
// Author: No author
// Source: Canadian Computing Competition 2017
// Link: https://open.kattis.com/problems/quadrant


#include <stdio.h>

int main(void)
{
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x > 0 && y > 0)
    {
        printf("1");
    }
    else if (x > 0 && y < 0)
    {
        printf("4");
    }
    else if ( x < 0 && y < 0)
    {
        printf("3");
    }
    else
    {
        printf("2");
    }
}
