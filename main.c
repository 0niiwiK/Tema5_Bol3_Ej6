#include <stdio.h>
#define TAM 50

// Prototipos
void pedirCadena(char *cad);
void cadenaArrayLimpio(char *cad, int tama, char *res);
int calculaTamanoCadena(char *cad);
void imprimirSubcadena(char *cad, int tama);

int main() {
    char cadena[TAM];
    printf("Introduzca la cadena original: ");
    pedirCadena(cadena);
    int tama= calculaTamanoCadena(cadena);
    char cad[tama];
    cadenaArrayLimpio(cadena,tama,cad);
    imprimirSubcadena(cad,tama);
    return 0;
}

void pedirCadena(char *cad){
    scanf("%[^\n]", cad);
    fflush(stdin);
}

int calculaTamanoCadena(char *cad){
    int caracteres=0,i=0;
    do {
        if (cad[i]!=' '){
            caracteres++;
            i++;
        } else
        i++;
    } while (cad[i]!='\0');
    return caracteres;
}

void cadenaArrayLimpio(char *cad, int tama, char *res){
    int j=0;
    for (int i=0; i < tama; i++) {
        while (cad[j]=='\0' || cad[j]==' ')
            j++;
        res[i]=cad[j];
        j++;
    }
}

void imprimirSubcadena(char *cad, int tama){
    for (int i = 0; i < tama; ++i) {
        printf("%c ",cad[i]);
    }
}