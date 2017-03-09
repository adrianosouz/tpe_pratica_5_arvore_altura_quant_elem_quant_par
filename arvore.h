#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED


typedef struct arvvar ArvVar;

ArvVar* arvv_cria(char c);
void    arvv_insere(ArvVar* a,ArvVar* sa);
void    arvv_imprime(ArvVar* a);
int     arvv_vazia(ArvVar* a);
int     arvv_pertence(ArvVar* a, char c);
void    erd (ArvVar* a);
void    arvv_libera(ArvVar* a);
int     arvv_altura(ArvVar* a);



typedef struct arv Arv;

Arv* arv_criavazia(void);

Arv* arv_cria(char c, Arv* e, Arv* d);

Arv* arv_libera(Arv* a);

int arv_vazia(Arv* a);

int arv_pertence(Arv* a, char c);

Arv* arv_imprime(Arv* a);

Arv* arv_imprime_pos(Arv* a);

void ead(Arv* a);

int max2(int a,int b);

int arv_altura(Arv* a);

int arv_quantidade(Arv* a);

char quantidade_par(Arv* a);

int e_par(char a);

int funcao_par(Arv* a);

#endif // ARVORE_H_INCLUDED
