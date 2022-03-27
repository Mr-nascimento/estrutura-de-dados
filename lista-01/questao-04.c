#include <stdio.h>

void hanoi(int numero_discos, char torre_inicial, char torre_aux, char torre_result)
{
    if (numero_discos >= 1)
    {
        hanoi(numero_discos - 1, torre_inicial, torre_result, torre_aux);
        printf("O disco %d moveu da torre %c para torre %c \n", numero_discos, torre_inicial, torre_result);
        hanoi(numero_discos - 1, torre_aux, torre_inicial, torre_result);
    }
}
int main()
{
    int numero_discos;

    printf("Numero de discos: ");
    scanf("%d", &numero_discos);
    hanoi(numero_discos, 'A', 'B', 'C');

    system("pause");
    return 0;
}