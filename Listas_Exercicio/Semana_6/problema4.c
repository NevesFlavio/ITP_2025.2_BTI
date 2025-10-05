#include <stdio.h>

int main()
{
    int v[10];
    int visitado[10] = {0};
    int ilha = 0;

    printf("Digite as ilhas, separadas por um espaco: ");
    
    for (int i = 0; i < 10; i++)
    {
        
        scanf("%d", &v[i]);
    }

    while (1)
    {
        if (visitado[ilha] == 1)
        {
            printf("%d\n", ilha);
            break;
        }
        visitado[ilha] = 1;
        ilha = v[ilha];
    }

    return 0;
}
