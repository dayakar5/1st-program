#include <stdio.h>
#include<stdlib.h>

struct node{
    unsigned dist[20];
    unsigned from[20];
}rt[10];

int main() {
    int dmart[20][20];
    int i,j,k,count=0,n;

    printf("\nenter the no of nodes\n");
    scanf("%d",&n);
    printf("\nenter the cost matrix\n");   
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&dmart[i][j]);
            rt[i].dist[j] = dmart[i][j];
            rt[i].from[j] = j;
        }
    }

    do{
        count = 0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                for(k=0;k<n;k++){
                    if(rt[i].dist[j] > dmart[i][k] + rt[k].dist[j]){
                        rt[i].dist[j] = rt[i].dist[k] + rt[k].dist[j];
                        rt[i].from[j] = k;
                        count++;
                    }
                }
            }
        }
    }while(count != 0);

    for(i=0;i<n;i++){
        printf("\nstate value for router %d is",i+1);
        for(j=0;j<n;j++){
            printf("\nnode %d via %d is distance %d",j+1,rt[i].from[j]+1,rt[i].dist[j]);
        }
    }

    return 0;
}
