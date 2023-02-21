#include <stdio.h>
int main(void){
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    printf("\n Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("\n Digite o segundo número: ");
    scanf("%d", &n2);
    printf("\n Digite o terceiro número: ");
    scanf("%d", &n3);

    printf("\n (n1 == n2) && (n1 == n3) = %d", ((n1 == n2) && (n1 == n3)));
    printf("\n (n1 >= n2) || (n1 <= n3) = %d", ((n1 >= n2) || (n1 <= n3)));
    printf("\n !(n1 != n2 || !(n1 != n3) = %d)", !((n1 != n2) || (n1 != n3)));
}