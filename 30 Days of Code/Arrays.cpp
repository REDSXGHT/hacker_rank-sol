#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x;
    char arr[10000];
    scanf("%d",x);
    for(int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
        
    }   
    for(int i=x;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
