
#include <stdio.h>

int main() {
    int a[20],b[20],c[20];
    int i , n , k =0,I=0,j=0;
    
    printf("enter n value\n");
    scanf("%d",&n);
    printf("enter valuess\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i =0;i<n;i ++){
        if(a[i] == 1){
            k++;
            b[j] = a[i];
            if(k == 5){
                j++;
                b[j] = 0;
                k = 0;
            }
        }else{
            k = 0;
            b[j] = a[i];
        }
        j++;
    }
    for(i=0;i<j;i++){
        printf("%d ",b[i]);
    }
    k=0;
    printf("\nelemeinatng 0s \n");
    for(i=0;i<j;i++){
        if(b[i] == 1){
            k++;
            c[I] = b[i];
            if(k==5){
                I++;
                i = i + 2;
                c[I] = b[i];
                k =0;
            }
        }else{
            k = 0;
            c[I] = b[i];
        }
        I++;
    }
    for(i=0;i<n;i++){
        printf("%d ",c[i]);
    }
    return 0;
}
