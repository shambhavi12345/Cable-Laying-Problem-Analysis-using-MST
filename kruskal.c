#include<stdio.h>
#include<time.h>
#define MAX 30

int i,j,n,ne=1; 
int a,b,u,v;
int parent[MAX]={-1},cost[MAX][MAX];
int min,mincost=0;
int find(int);
int uni(int,int);

void main()
{
	printf("\nEnter the number of companies:");
	scanf("%d",&n);

	printf("\nEnter the distance between them in an adjacency matrix:\n");
	for(i=1;i<=n;i++) 
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=999;
		}
	}
      
    clock_t begin=clock(); 
    printf("\n");

	while(ne<n) 
	{
	min=999;
		for(i=1;i<=n;i++) // minimum edge from the matrix 
		{
			for(j=1;j<=n;j++)
			{
				if(cost[i][j]<min)
				{
					min=cost[i][j];
					a=u=i;
					b=v=j;
				}
			}
		}
		u=find(u);  
		v=find(v);
		if(uni(u,v))
		{
			printf("\n%d Connection from (%d,%d),Distance =%d\n",ne++,a,b,min);
			mincost +=min;
		}
		cost[a][b]=cost[b][a]=999;
	}
	printf("\nMinimum cost for laying a cable = %d\n",mincost);

	clock_t end = clock();
    double total_time = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nTotal time taken=%f\n", total_time);
}
int find(int i) // find the parent u , v
{
	while(parent[i])
	i=parent[i];
	return i;
}
int uni(int i,int j) // check whether u and v have same parent or not, to avoid cycle
{          
	if(i!=j)
	{
		parent[j]=i;
		return 1;
	}
	return 0;
    
}