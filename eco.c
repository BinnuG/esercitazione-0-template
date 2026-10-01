#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 4) {
        fprintf(stderr, "Uso: %s TESTO INTERO REALE\n", argv[0]);
        return 2;
    }

    char *testo = argv[1];
    int n = atoi(argv[2]);
    float f = atof(argv[3]);
    (void)testo;

    printf("%s %d %f\n",testo, n, f);

    return 0;
}
