#include <stdio.h>
#include<stdlib.h>
#include<string.h>


int main() {
    int i ,ch,lp;
    char cipher[20],plain[20],key[20];

    while(1){
        printf("\n MENU");
        printf("\n 1.encry \n 2.decryp \n 3.exit");
        printf("\n enter yout choice : ");
        scanf("%d",&ch);

        switch(ch){
            case 1 :printf("\n Data Encryption");
                    printf("\nenter the plain text : ");
                    fflush(stdin);
                    gets(plain);
                    printf("\n enter the key : ");
                    gets(key);
                    lp = strlen(key);
                    for(i=0;plain[i] != '\0';i++){
                       cipher[i] = plain[i] ^ lp;
                    }
                    cipher[i] = '\0';
                    printf("\n encrypted text is ");
                    puts(cipher);
                    break;
            case 2 :printf("\n Data Decrption");
                    for(i=0;cipher[i] != '\0';i++){
                        plain[i] = cipher[i] ^ lp;
                    }
                    printf("\n decrpted text is ");
                    puts(plain);
                    break;
            case 3 :exit(0);                  
        }
    }
    

    return 0;
}
