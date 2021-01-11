
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
int n; 

scanf("%d",&n);

if(n%2==1||(n>=6&&n<=20))    // if n is even or 6<=n<=20 , then it prints weird

    printf("Weird");

else

    printf("Not Weird");

return 0;
}
