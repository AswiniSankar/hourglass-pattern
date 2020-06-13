#include<stdio.h>
int main()
{
  int a[50][50],i,j,n,m,max;
  scanf("%d%d",&n,&m);
  if (n<3 || m<3)
    printf("\ncan't find the maximum of hourglass for this input.input should be greater than 3\n"); 
  else
   {
   for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      scanf("%d",&a[i][j]);
    printf("\n***the matrix***\n");
   for(i=0;i<n;i++)
    {for(j=0;j<m;j++)
      printf("%3d",a[i][j]);
      printf("\n");
    }
  for(i=0;i<n-2;i++)
  {for(j=0;j<m-2;j++)
    {   int sum= (a[i][j]+a[i][j+1]+a[i][j+2])+(a[i+1][j+1])+(a[i+2][j]+a[i+2][j+1]+a[i+2][j+2]);
        if(max<sum)
          max=sum;
    }
  }
    printf("\n%d",max);
  }
  printf("\n");
  return 0;
}

