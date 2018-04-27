#include<stdio.h>

int main(void)
{
  int t,n,i,j,temp,x,y,count,cook[50],rack[50];

  scanf("%d",&t);
  while(t--)
    {
      scanf("%d",&n);

      for(i=0;i<n;i++)
	scanf("%d",&cook[i]);

      for(i=0;i<n;i++)
	scanf("%d",&rack[i]);

      for(i=n-2;i>=0;i--)
	{
	  for(j=0;j<=i;j++)
	    {
	      if(cook[j] > cook[j+1])
		{
		  temp=cook[j];
		  cook[j]=cook[j+1];
		  cook[j+1]=temp;
		}
	      if(rack[j] > rack[j+1])
		{
		  temp=rack[j];
		  rack[j]=rack[j+1];
		  rack[j+1]=temp;
		}
	    }
	}
      x=y=count=0;

      while(x<n && y<n)
	{
	  if(cook[x]<=rack[y])
	    {
	      count++;
	      x++;
	      y++;
	    }
	  else
	    y++;
	}
      printf("%d\n",count);
    }
  return 0;
}
