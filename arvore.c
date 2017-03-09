#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

/*
struct arvvar
{

    char info;
    struct arvvar* prim;
    struct arv* prox;

};


ArvVar* arvv_cria(char c)
{
    ArvVar *a =(ArvVar*)malloc(sizeof(ArvVar));
    a->info = c;
    a->prim = NULL;
    a->prox = NULL;
    return a;
}

void arvv_insere(ArvVar* a,ArvVar* sa)
{
  sa->prox = a->prim;
  a->prim = sa;
}



void arvv_libera(ArvVar* a)
{
    ArvVar* p = a->prim;
    while(p!=NULL){
        ArvVar* t = p->prox;
        arvv_libera(p);
        p = t;
    }
    free(a);
}

int arvv_vazia(ArvVar* a)
{
    return a==NULL;
}

void arvv_imprime(ArvVar* a)
{
   ArvVar* p;
   printf("<%c\n",a->info);
   for(p=a->prim;p!=NULL;p=p->prox)
    arvv_imprime(p);
   printf(">");
}

int arvv_pertence(ArvVar* a, char c)
{
    ArvVar* p;
    if(a->info==c)
        return 1;
    else
        {
        for(p=a->prim;p!=NULL;p=p->prox)
        {
            if(arvv_pertence(p,c))
                return 1;
        }
        }

        return 0;
}


int arvv_altura(ArvVar* a)
{
    int hmax = -1;
    ArvVar* p;

    for(p=a->prim; p!=NULL;p=p->prox)
    {
        int h = arvv_altura(p);
        if (h > hmax)
            hmax = h;
    }
    return hmax + 1;
}
*/


/*ou

if(c==a->info)
return 1;
else if(arv_pertence(a->esq,c))
retunr 1;
else
return arv_pertence(a->dir,c)

}
*/

struct arv
{

    char info;
    struct arv* esq;
    struct arv* dir;

};

Arv* arv_criavazia(void)
{
    return NULL;
}

Arv* arv_cria(char c, Arv* e, Arv* d)
{
    Arv* p = (Arv*)malloc(sizeof(Arv));
    p->info = c;
    p->esq = e;
    p->dir = d;
    return p;
}

Arv* arv_libera(Arv* a)
{
    if(!arv_vazia(a))
    {
        arv_libera(a->esq);
        arv_libera(a->dir);
        free(a);
    }
    return NULL;
}

int arv_vazia(Arv* a)
{
    return a==NULL;
}

Arv* arv_imprime(Arv* a)
{
    printf("<");
    if(!arv_vazia(a))
    {
        printf("%c",a->info);
        arv_imprime(a->esq);
        arv_imprime(a->dir);

    }
    printf(">");
}

int e_par(char a)
{
    return a == '0'||a == '2'||a == '4'||a == '6';
}

int funcao_par(Arv* a)
{
     if(arv_vazia(a))
        return 0;
        return e_par(a->info) + funcao_par(a->esq) + funcao_par(a->dir);
}


int arv_quantidade(Arv* a)
{
    if(a == NULL)
        return 0;
    else
      return 1 + arv_quantidade(a->dir)+ arv_quantidade(a->esq);

}


/*char* char_bin (Arv* a)
{
   char bin[arv_cria(c,e,d) + 1] = { 0 };
   int i;

   for ( i = arv_cria(c,e,d) - 1; i >= 0; i--)
   {
      bin[i] = (c % 2) + '0';
      c /= 2;
   }

   // Retorna a string com a representacao binaria do argumento

   return bin;
}*/


Arv* arv_imprime_pos(Arv* a)
{
    printf("<");
    if(!arv_vazia(a))
    {
        arv_imprime(a->esq);
        arv_imprime(a->dir);
        printf("%c",a->info);
    }
    printf(">");
}

void ead(Arv* a)
{
    printf("<");
    if (a!=NULL)
    {
        ead(a->esq);
        printf ("%c", a->info);
        ead(a->dir);
    }
    printf(">");
}


int arv_pertence(Arv* a, char c)
{
    if(arv_vazia(a))
        return 0;
    else
        return a->info==c ||
               arv_pertence(a->esq,c) ||
               arv_pertence(a->dir,c);
}

/*ou

if(c==a->info)
return 1;
else if(arv_pertence(a->esq,c))
retunr 1;
else
return arv_pertence(a->dir,c)

}*/

int max2(int a,int b)
{
    return (a>b) ? a : b;/*se a condicao for verdadeira, a expressao 1 eh avaliada;
                          caso contrario, avalia-se a expressao 2*/
    /*if(a>b)
    maximo a;
    else
    maximo = b;*/
}

int arv_altura(Arv* a)
{
    if(arv_vazia(a))
        return -1;
    else
        return 1 + max2(arv_altura(a->esq),arv_altura(a->dir));
}

