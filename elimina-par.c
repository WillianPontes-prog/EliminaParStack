#include "stack.h"

int main () {
    //
    int tam = 6;
    Stack *s = create (tam);
    srand(time(NULL));
    int i;

    for (i = 0; i < tam; i++) {
        push (s, rand()%10);
    }

    print (s);

    //programa
    Stack* aux = create (tam);

    int cont = 0;

    for (i = 0; i < tam; i++) {
        int n = pop(s);
        if(n%2 != 0){
            push(aux, n);
            cont ++;
        }
    }

    for(i = 0; i < cont; i++){
        int n = pop(aux);
        push(s, n);
    }


    //print (aux);
    print (s);

    /*TERMINAR*/
    destroy (s);
    destroy (aux);
}
