#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,j,n,temp,a[100];
  printf("enter array size/n");
  scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
               temp = a[j+1];
               a[j+1] = a[j];
               a[j] = temp;
            }
        }
    }

    printf("sorted array is ");
        for(i=0; i<n; i++)
        {
            printf("%d  ",a[i]);
        }



    return 0;
}
