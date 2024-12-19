
#include <stdio.h>
#include <string.h>



int main() {
    char a[20],b[20],c[20];
    char flag , esc;
    int i,j=0,n,I=0;
    
    printf("enter the data\n");
    scanf("%s",&a);
    printf("enter the flag\n");
    scanf("%s",&flag);
    printf("enter the escp\n");
    scanf("%s",&esc);
    n = strlen(a);
    b[j] = flag;
    j++;
    for(i=0;i<n;i++){
        if(a[i] == flag || a[i] == esc){
            b[j] = esc;
            j++;
            b[j] = a[i];
        }else{
            b[j] = a[i];
        }
        j++;
    }
    b[j] = flag;
    j++;
    for(i=0;i<j;i++){
        printf("%c",b[i]);
    }
    printf("\nafter trans\n");
    b[j] = '\0';
    j++;
    for(i=0;i<j;i++){
        if(b[i] == esc){
            i++;
            c[I] = b[i];
        }else{
            c[I] = b[i];
        }
        I++;
    }
    for(i=0;i<I;i++){
        printf("%c",c[i]);
    }
    return 0;
}
