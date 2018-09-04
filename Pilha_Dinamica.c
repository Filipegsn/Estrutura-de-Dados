#include <stdio.h>
#include <stdlib.h>

struct elemento_pilha{
int info;
struct elemento_pilha *prox;
};

typedef struct{
struct elemento_pilha *top;
}pilha;

void init(pilha *p){
p->top=NULL;
printf("Pilha inicializada \n\n");
system("pause");
}

int vazia(pilha *p){
    if(p->top==NULL)
        return 1;
    else
        return 0;
}

void push(pilha*p,int elemento){ /// EMPILHAR
    struct elemento_pilha *pl;

    pl=(struct elemento_pilha *) malloc(sizeof(struct elemento_pilha));
    pl->info=elemento;
    pl->prox=p->top;
    p->top=pl;
}

int pop(pilha *p){ /// DESEMPILHAR
    int valortop;
    struct elemento_pilha *aux;
        if (vazia(p)==1){
            printf("\n erro! Pilha VAZIA! \n");
            exit(1);
        }
        else{
            valortop=p->top->info;
            aux=p->top;
            p->top=p->top->prox;
            free(aux);
            return valortop;
        }
}

int top(pilha *p){
    if (vazia(p)){
        printf("\n erro! Pilha VAZIA! \n");
        exit(1);
    }
    else{
        printf("\n TOPO %d", p->top->info);
    }
}

void mostrar(pilha *p){
    pilha aux;
    if (vazia(p)==1)
        printf("A pilha esta VAZIA \n");
    else{
        for(aux.top=p->top; vazia(&aux)!= 1; aux.top=aux.top->prox){
            printf("\n\n info: %d \n",aux.top->info);
            printf("\n----------------------------");
            printf("\n aux.top = %d",aux.top);
            printf("\n aux.top->proximo = %d \n",aux.top->prox);
        }
    }
}
int main()
{
    pilha pi;
    int num, op;
    init(&pi);
    do{
        system("cls");
        printf("1 - Inserir \n");
        printf("2 - Mostrar \n");
        printf("3 - Remover \n");
        printf("Escolher: ");
        scanf("%d", &op);
        switch(op){
    case 1:
        printf("Informe um valor:\n");
        scanf("%d", &num);
        push(&pi,num);
        break;
    case 2:
        mostrar(&pi);
        system("pause");
        break;
    case 3:
        top(&pi);
        printf("\n E sera eliminado da pilha...");
        pop(&pi);
        system("pause");
        break;
        }
    }while(op!=5);

    return 0;
}
