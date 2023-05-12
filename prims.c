#include<stdio.h>
#include<time.h>
#define MAX 30

int i,j,n,ne=1; 
int a,b,u,v;
int visited[MAX]={0},cost[MAX][MAX]; 
int min,mincost=0;

void main()
{	
    printf("\nEnter the number of companies:");	
    scanf("%d",&n);	

    printf("\nEnter the distance between them in an adjacency matrix:\n");	
        for (i=1;i<=n;i++)	  
            for (j=1;j<=n;j++) 
            {		
                scanf("%d",&cost[i][j]);		
                if(cost[i][j]==0)		    
                cost[i][j]=999;	
            }	

    visited[1]=1;	
    clock_t begin=clock();
    printf("\n");

    while(ne<n)
    {	
      min=999;	
      for (i=1;i<=n;i++) // minimum value of the adjacent edge
      { 
        for (j=1;j<=n;j++) // edge from selected node
        {		    
          if(cost[i][j]<min)		     
            if(visited[i]!=0)
                {			
                    min=cost[i][j];			
                    a=u=i;			
                    b=v=j;		
                }
        }
      }   		
        if(visited[u]==0 || visited[v]==0) // detect the cycle in graph
            {			
                printf("\nConnection from 6
                %d-%d , Distance:%d\n",a,b,min);
                ne++;
                mincost+=min;			
                visited[b]=1; 		
            }		
        cost[a][b]=cost[b][a]=999;	
    }	

    printf("\nMinimun cost for laying a cable=%d\n",mincost);

    clock_t end = clock();
    double total_time = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nTotal time taken=%f\n", total_time);
}