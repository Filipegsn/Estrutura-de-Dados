#define MAX 10

typedef struct Agenda{
    int tel;
    char nome[40];
}Agendas;

typedef struct E_Pilha{
    int topo;
    Agendas vet[MAX];
}pilha;

void empilha(pilha *val, ag x);
void desempilha(pilha *val);
int cheia(pilha *val);
int vazia(pilha *val);
void imprime(pilha *val);
