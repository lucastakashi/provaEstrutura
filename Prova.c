#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
int matriz[7][7];
int i,j;
int aux = 0;
int eleito,menor, posicaoDoMenor;
int diag;
srand(time(NULL));
for(i=0;i<7;i++){
for(j=0;j<7;j++){
matriz[i][j]= rand()%14;
printf[%d][%d];
if (matriz[i][j]> matriz [i+1][j+1] ) {
aux = matriz[i][j];
matriz[i][j] = matriz[i+1][j+1];
matriz[i+1][j+1]= aux;
}
}
}
}
 printf("\n\nDiagonal \n \n);
  for (aux=0;aux<=14;aux++){
  }
   for (diag=1;diag<=aux+1;diag++){
        printf("/t");


   }

  typedef struct No{

struct No* diagonal;



   No*
   No* criarArvore(){ return NULL; }

int ArvoreVazia(No* raiz){
    int getValor(No** no){
  if ((*no) != NULL){
    return (*no)->aux;
  }
}
void gerarArquivoDot(FILE** arquivoDot, No* raiz){
if(raiz != NULL){
aux;
if(getValor(&raiz->diagonal)!=0{
        sprintf(matriz,"%d":sw-> [label=\"diag"\]; /n, raiz-> aux, getValor(&raiz>diagonal));

fprintf((*arquivoDot), "%s", diagonal);
}
gerarArquivoDot(arquivoDot,raiz->diagonal;
}
}
}

