
#include <stdio.h>
#include <string.h>



int main() {
    
    int i,j,k,n,t,p,flag=1,m=0;
    int a[10],b[10],d[10],q[10],r[10];

    printf("\nenter the no of elements\n");
    scanf("%d",&n);
    printf("\nenter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nenter the no of divsor elements\n");
    scanf("%d",&k);
    printf("\nenter the  divsor elements\n");
    for(i=0;i<k;i++){
        scanf("%d",&d[i]);
    }

    p = k - 1 + n;
    for(i=n;i<p;i++){
        a[i] = 0;
    }
    for(i=0;i<k;i++){
        r[i] = a[i];
    } 

    for(i=0;i<n;i++){
        if(d[0] == r[0]){
            for(j=0;j<k;j++){
                if(d[j] == r[j]){
                    b[j] = 0;
                }else{
                    b[j] = 1;
                }
            }
            q[i] = 1;
        }else{
            for(j=0;j<k;j++){
                if(r[j] == 0){
                    b[j] = 0;
                }else{
                    b[j] = 1;
                }
            }
            q[i] = 0;
        }
        for(t=0;t<k-1;t++){
            r[t] = b[t+1];
        }
        r[k-1] = a[k+i];
    }

    printf("\nthe remainder to be stuffed is\n");
    for(i=0;i<k-1;i++){
        printf("%d",r[i]);
    }

    for(i=n;i<p;i++){
        a[i] = r[m];
        m++;
    }
    for(i=0;i<k;i++){
        r[i] = a[i];
    } 

    for(i=0;i<n;i++){
        if(d[0] == r[0]){
            for(j=0;j<k;j++){
                if(d[j] == r[j]){
                    b[j] = 0;
                }else{
                    b[j] = 1;
                }
            }
            q[i] = 1;
        }else{
            for(j=0;j<k;j++){
                if(r[j] == 0){
                    b[j] = 0;
                }else{
                    b[j] = 1;
                }
            }
            q[i] = 0;
        }
        for(t=0;t<k-1;t++){
            r[t] = b[t+1];
        }
        r[k-1] = a[k+i];
    }
    printf("\nfinal reainder is \n");
    for(i=0;i<k-1;i++){
        printf("%d",r[i]);
    }

    for(i=0;i<k-1;i++){
        if(r[i] == 1){
            flag = 0;
        }
    }

    if(flag == 1){
        printf("\ndata receieved succesfully\n");
    }else{
        printf("\ndata corrupted\n");
    }

    return 0;
}
