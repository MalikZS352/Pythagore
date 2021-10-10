#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float *AB = malloc(sizeof(float));
    float *BC = malloc(sizeof(float));
    float *AC = malloc(sizeof(float));
    printf("Combien de centimètre mesure AB?\n");
    scanf("%f", AB);
    printf("Combien de centimètre mesure BC?\n");
    scanf("%f", BC);
    *AB = (*AB) * (*AB);
    *BC = (*BC) * (*BC);
    *AC = (*AB) + (*BC);
    printf("Selon le théorème de Pythagore l'hypothénuse AC mesure %.2f cm \n", sqrt(*AC));
    free(AB);
    free(BC);
    free(AC);
}
