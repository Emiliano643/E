#include<iostream>
#include<conio.h>

using namespace std;

int main() {
    int numero[] = {4, 21, 56, -4, 456, 98, 76, 76, 43, 10};
    int i, j, aux;
    int comparaciones = 0;
    int intercambios = 0;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10 - i ; j++) {
            comparaciones++;
            if (numero[j] > numero[j + 1]) {
                intercambios++;
                aux = numero[j];
                numero[j] = numero[j + 1];
                numero[j + 1] = aux;
            }
        }
    }

    cout << "Orden Ascendente ";
    for (i = 0; i < 10; i++) {
        cout << numero[i] << " ";
    }
    cout << "\nOrden Descendente: ";
    for(i=9; i>=0; i--){
        cout << numero[i] << " ";
    }

    cout << "\nNúmero de comparaciones: " << comparaciones << endl;
    cout << "Número de intercambios: " << intercambios << endl;

    getch();
    return 0;
}


