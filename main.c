
#include <stdio.h>

int main()
{
    int A[5] = {14, 8, 21, 11, 25};
    int D[7] = {0, 0, 0, 0, 0, 0, 0};
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeD = sizeof(D) / sizeof(D[0]);
    int k, t;

    for(int i = 0; i < sizeA; i++){
        k = 1;
        int x = A[i]%sizeD;
        t= x;

        while(D[x] != 0){
            x = t;
            x = x + ((k * k)%sizeD);
            k = k + 1;
        }

        D[x] = A[i];

        for(int j = 0; j < sizeD; j++)
            printf("%d\t", D[j]);
        printf("\n");

    }
    printf("DONE");

    return 0;
}
