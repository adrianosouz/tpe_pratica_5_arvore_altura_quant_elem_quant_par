#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"


/*int main()
{
    ArvVar* a = arvv_cria('a');
    ArvVar* b = arvv_cria('b');
    ArvVar* c = arvv_cria('c');
    ArvVar* d = arvv_cria('d');
    ArvVar* e = arvv_cria('e');
    ArvVar* f = arvv_cria('f');
    ArvVar* g = arvv_cria('g');
    ArvVar* h = arvv_cria('h');
    ArvVar* i = arvv_cria('i');
    ArvVar* j = arvv_cria('j');

    arvv_insere(c,d);
    arvv_insere(b,e);
    arvv_insere(b,c);
    arvv_insere(i,j);
    arvv_insere(g,i);
    arvv_insere(g,h);
    arvv_insere(a,g);
    arvv_insere(a,f);
    arvv_insere(a,b);

    arvv_imprime(a);


    return 0;
}
*/


int main()
{

    Arv* a = arv_criavazia();
    int x,y,z;


    Arv* p1 =arv_cria('2',NULL,NULL);
    Arv* p2 =arv_cria('3',NULL,NULL);
    Arv* p3 =arv_cria('0',p2,NULL);

    Arv* p4 =arv_cria('6',p1,p3);

    a = p4;
    arv_imprime(a);
    printf("\n\n");
    /*quantidade_par(a);
    /*printf("\n\n");
    ead(a);
    printf("\n\n");
    arv_imprime_pos(a);*/


    x = arv_altura(a);
    printf("\n\nA altura da arvore eh: %d\n\n",x);

    y = arv_quantidade(a);
    printf("\nA arvore possui %d elementos\n\n",y);

    z = funcao_par(a);
    printf("quantidade de elementos pares: %d",z);


    /*Arv* a;

    a = arv_cria('a',
                 arv_cria('b',
                          arv_criavazia(),
                          arv_cria('d',arv_criavazia(),arv_criavazia())
                         ),
                 arv_cria('c',
                          arv_cria('e',arv_criavazia(),arv_criavazia()),
                          arv_cria('f',arv_criavazia(),arv_criavazia())
                         )
                );
    arv_imprime(a);
    printf("\n\n");
    ead(a);
    printf("\n\n");
    arv_imprime_pos(a);
    */


    return 0;
}
