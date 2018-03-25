#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	int i,m,j;
	for(i=1;i<=9;i++){
	
	  for(j=1;j<=9;j++)
	    {
		m=i*j;
	    printf("%2d*%2d = %2d ",i,j,m);
        }
        printf("\n");
}
}
