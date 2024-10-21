#include <stdio.h>
#define ex11

#ifdef ex1
int main()
{
    int A[12];
    int i;
    int maiornum = 0;

    for(i = 0; i < 12; i++)
    {
        do
        {
            printf("digite um numero\n");
            scanf("%d", &A[i]);
        }
        while (A[i]<0);
        if(A[i] > maiornum)
        {
            maiornum = A[i];
        }
    }
    for(i =0; i<12; i++)
    {
        if (A[i] > 121)
        {
            printf("%d e maior que 121\n", A[i]);
        }
    }
}
#endif // ex1

#ifdef ex2
int main()
{
    int A[8];
    int B[8];
    int i;
    for(i=0; i<8; i++)
    {
        printf("digite um numero\n");
        scanf("%d", &A[i]);
        B[i] = A[i];
    }

    for(i=0; i<8; i++)
    {
        printf("%d\n", A[i]);
    }
    for(i=0; i<8; i++)
    {
        printf("triplo %d\n", B[i]*3);
    }
}
#endif // ex2

#ifdef ex3
int main()
{
    int A[6];
    int i;
    int quadrado;
    int soma = 0;

    for(i=0; i<6; i++)
    {
        do
        {
            printf("digite um numero negativo\n");
            scanf("%d", &A[i]);
        }
        while(A[i]>0);
        quadrado=pow(A[i],2);
        soma = soma + quadrado;
    }
    printf("a soma dos quadrados e: %d", soma);
}
#endif // ex3

#ifdef ex4
int main()
{
    int A[10];
    int i;
    int maiornum = 0;
    int vezes = 0;
    int posicao[10];
    int p = 0;


    for(i=0; i<10; i++)
    {
        do
        {
            printf("digite um numero positivo\n");
            scanf("%d", &A[i]);
        }
        while (A[i]<0);
        if (A[i] > maiornum)
        {
            maiornum = A[i];
        }
    }
    for(i=0; i<10; i++)
    {
        if (A[i] == maiornum)
        {
            vezes++;
            printf("maior num: %d posicao:  %d\n", maiornum, i+1);
        }
    }
    printf("vezes que o maior numero aparece: %d\n", vezes);

}
#endif //ex4

#ifdef ex5
int main(){
int A[10];
int B[10];
int i;
for(i=0; i<10;i++){
    do{
    printf("digite um numero\n");
    scanf("%d", &A[i]);
    }while(A[i]<0);
    B[i] = A[i] - A[i] - A[i];
}
for(i=0; i<10;i++){
    printf("vetor a: %d\n", A[i]);
    printf("vetor b: %d\n", B[i]);
}
return 0;
}
#endif //ex5

#ifdef ex6
int main(){
int A[15];
int B[15];
int i;
for (i=0; i<15; i++){
    printf("digite um numero\n");
    scanf("%d", &A[i]);
}
}
#endif // ex6

#ifdef ex7
int main(){
int quantia;
int A[quantia];
int B[quantia];
int i;
do{
printf("digite a quantidade de numeros que deseja armazenar\n");
scanf("%d", &quantia);
}while(quantia < 4 || quantia >= 20);

for(i=0; i<quantia; i++){
printf("digite um numero\n");
scanf("%d", &A[i]);
B[i] = A[i];
}
for(i=0;i<quantia;i++){
    printf("numero A: %d\n",A[i]);
}
for(i=quantia;i>0;i--){
    printf("numero B: %d\n", B[i-1]);

}

}
#endif // ex7

#ifdef ex8
int main(){
int A[5];
int B[5];
int C[5];
int D[15];
int vezneg = 0;
int i;

for (i=0; i<5;i++){
printf("digite um numero para o vetor A:\n");
scanf("%d", &A[i]);
    D[i] = A[i];
    if (A[i]<0){
        vezneg++;
    }

}
for (i=0; i<5; i++){
    printf("digite um numero para o vetor B\n");
    scanf("%d", &B[i]);
    D[i+5] = B[i];
    if(B[i]<0){
        vezneg++;
    }
}
for (i=0; i<5; i++){
    printf("digite um numero para o vetor C\n");
    scanf("%d", &C[i]);
    D[i+10] = C[i];
    if(C[i]<0){

        vezneg++;
    }
}
for (i=0; i<15; i++){
    printf("Numero %d: %d\n", i+1, D[i]);

}
 if(vezneg == 1){
    printf("foi inserido 1 numero negativo");
    }
    else{
    printf("foram inseridos %d numeros negativos", vezneg);
    }
}
#endif // ex8

#ifdef ex9
int main(){
int A[10];
int B[10];
int i;

for(i=0;i<10;i++){
printf("digite um numero\n");
scanf("%d", &A[i]);
B[i] = (A[i]/2);
}

for(i=0;i<10;i++){
printf("numero %d do vetor A: %d\n", i+1, A[i]);
if(A[i>4]){
    printf("o numero atual e maior que quatro e ele aparece na posicao %d do vetor A\n", i);
}
}
for(i=0;i<10;i++){
printf("numero %d do vetor B: %d\n", i+1, B[i]);
if(B[i>4]){
printf("o numero atual e maior que quatro e ele aparece na posicao %d do vetor B\n", i);
}
}

}

#endif // ex9

#ifdef ex10
int main(){
int i;
int multiplicacao;
int numero;
printf("insira o numero para fazer a tabuada\n");
scanf("%d", &numero);

for(i=0;i<10;i++){
    multiplicacao = numero * (i+1);
    printf("%d x %d: %d\n", numero, i+1, multiplicacao);
}
}
#endif // ex10

#ifdef ex11
int main(){
int A[12];
int i;
int maiortemp = 0;
int menortemp = 100;
int media = 0;
int soma = 0;
for(i=0;i<12;i++){
    printf("digite a temperatura do mes %d:\n", i+1);
    scanf("%d", &A[i]);
    soma = soma + A[i];
    if(A[i] > maiortemp){
        maiortemp = A[i];}
    if(A[i]<menortemp){
        menortemp = A[i];

    }
    }

for(i=0;i<12;i++){
printf("temperatura do mes %d: %d\n", i+1, A[i]);
}
printf("media: %d graus\n", soma / 12);
printf ("a maior temperatura foi de: %d graus\n", maiortemp);
printf ("a menor temperatura foi de: %d graus\n", menortemp);
}
#endif // ex11

#ifdef ex18
int main(){
int A[8];
int B[8];
int C[8];
int D[8];
int par = 0;
int imp = 0;
int i;

for(i=0;i<8;i++){
    printf("digite o valor a\n");
    scanf("%d", &A[i]);
    printf("digite o valor b\n");
    scanf("%d", &B[i]);
    if (i % 2 == 0){
    D[par] = A[i];
    par++;
    D[par] = B[i];
    par++;}
    else{
    C[imp] = A[i];
    imp++;
    C[imp] = B[i];
    imp++;
    }}
for (i=0;i<8;i++){
    printf("indices impares: %d\n", C[i]);
}

for (i=0;i<8;i++){
    printf("indices pares: %d\n", D[i]);
}
}

#endif // ex18
