#include<stdio.h>


const int row_number = 3;
const int line_number = 3;


int main(int argc, char** argv) {

    char *line[] = {"a", "b", "c"};



    for (int i = 0; i < 3; i++) {
        printf("Nom %d: %s\n", i + 1, line[i]);
    }
    printf("Nombre de colonne : %d, nombre de ligne : %d", row_number, line_number);
    return 0;
}

