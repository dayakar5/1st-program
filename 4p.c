#include <stdio.h>


int main() {
   int path[5][5], min, a[5][5], p;
    int st = 1, ed = 5, stp, edp, t[5], index;

    printf("enter the cost matrix\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter the number of paths\n");
    scanf("%d", &p);

    printf("paths\n");
    for (int i = 1; i <= p; i++) {
        for (int j = 1; j <= 5; j++) {
            scanf("%d", &path[i][j]);
        }
    }

    for (int i = 1; i <= p; i++) {
        t[p] = 0;
        stp = st;
        for (int j = 1; j <= 5; j++) {
            edp = path[i][j + 1];
            t[i] += a[stp][edp];
            if (edp == ed){
                break;
            }else{
                stp = edp;
            }
        }
    }
    min = t[st];
    index = st;
    for (int i = 1; i <= p; i++) {
        if (min > t[i]) {
            min = t[i];
            index = i;
        }
    }

    printf("minimum cost is %d\n", min);
    printf("minimum path is ");
    for (int i = 1; i <= 5; i++) {
        printf("----->  %d", path[index][i]);
        if (path[index][i] == ed) {
            break;
        }
    }

    return 0;
}
