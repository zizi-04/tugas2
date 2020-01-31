#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Zivanka Nafisa Wongkaren - 16919369
//Muhammad Fawwaz Naabigh - 16519184
//Jeremy David Dipahotma - 16019423
int main(void)
{
    int i;
    int N;
    printf("Jumlah polinom: ");
    scanf("%d", &N);
    int c[N];
    int n[N];
    int dc[N];
    int dn[N];
    char d[N];
    for(int i=0;i<N;++i){
        printf("Masukan koefisien polinom ke-%d: ", i+1);
        scanf("%d", &c[i]);
        printf("Masukan pangkat polinom ke-%d: ", i+1);
        scanf("%d", &n[i]);
    }
    for(int i=0;i<N;++i){
        dc[i] = c[i] * n[i];
        dn[i] = n[i]-1;
        if (i > 0){
            if (dc[i] > 0){
                printf("+%dX^%d", dc[i], dn[i]);
            }
        }
        else {
            printf("%dX^%d", dc[i], dn[i]);
        }

    }

    return 0;
}
