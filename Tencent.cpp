#include<stdio.h>
int A[100][100]={0};
int count=1;
int x=1;
int y=1;
int lefttoright(int count,int x,int y,int n);
int righttoleft(int count,int x,int y,int n);
int uptodown(int count,int x,int y,int n);
int downtoup(int count,int x,int y,int n);

int main()
{
  int n;
  scanf("%d",&n);
  printf("%d\n",n);
  int sum=n*n;
  
  for(int i=0;i<=2*n-2;i++)
  {
    
    switch(i%4)
    {
      case 0:	if(x==1)
				  {
				    A[x][y]=count;
				    count++;
				  }
				  for(y++;A[x][y]==0&&y<=n;y++)
				  {
				    printf("(%d %d)\n",x,y);
				    A[x][y]=count;
				    count++;
				  }
				  y--;
      		 	printf("%d %d %d %d \n",count,x,y,n);
      		 	break;
      case 1: 	for(x++;A[x][y]==0&&x<=n;x++)
				  {
				  	printf("(%d %d)\n",x,y);
				    A[x][y]=count;
				    count++;
				  }
				  x--;
      			printf("%d %d %d %d \n",count,x,y,n);
      		 	break;
  	  case 2:	for(y--;A[x][y]==0&&y>=1;y--)
				  {
				  	printf("(%d %d)\n",x,y);
				    A[x][y]=count;
				    count++;
				  }
				  y++;
  	   			printf("%d %d %d %d \n",count,x,y,n);
      	    	break;
      case 3:
      		 	for(x--;A[x][y]==0&&x>=1;x--)
				  {
				  	printf("(%d %d)\n",x,y);
				    A[x][y]=count;
				    count++;
				  }
				  x++;
      		  	printf("%d %d %d %d \n",count,x,y,n);
          		break;
    }
  }
  for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
  {
    printf("%d ",A[i][j]);
  }
}

