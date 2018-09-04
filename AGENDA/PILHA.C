#define "Biblio.h"

int cheia(pilha *val){
    if(val ->topo == MAX-1) return 1;
    else return 0;
}

int vazia(pilha *val){
    if(val -> -1) return 1;
    else return 0;
}

void empilha(pilha *val, Agendas x){
    system("cls");
    val->topo++;
    val->vet[val->topo] - x;

    printf("\n\n\n---CADASTRO DE CONTATOS---");
    printf("NOME:");
    gets()
}
