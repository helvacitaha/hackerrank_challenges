#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	
    int z=(2*n)-1;
    int a[z][z];
    
    for(int i=n;i>0;i--)
    {
        int t=n-i;
        for(int j=t;j<z-t;j++)
        {
            for(int k=t;k<z-t;k++)
            {
                a[j][k]=i;    
            }
        }
    }
    
    for(int i=0;i<z;i++)
    {
        for(int j=0;j<z;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
      
    return 0;
}
