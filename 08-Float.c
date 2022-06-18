//Incluir biblioteca de dados no programa: Liberar funções para serem usadas no programa
#include<stdio.h>                               //Standard Input Output

 /*
    Comentários que precisam de muitas linhas podem ser escritos através
    deste artifício aqui
    */
                                                                       //Criar a função principal
int main()                                                          //O compilador vai entender que tudo que está dentro das chaves é a função principal
{
    printf("Pesquisa de Iniciacao Cientifica - IMEF - FURG\n");     //O comando printf mostra na tela para o usuário uma mensagem especificada por você

    printf("Bolsista: Andrei Ferreira Lancanova\n");                //o "\n" tem a função de fazer pular para outra linha. Para organizar

    printf("Orientador: Prof. Dr. Andre Meneghetti\n");

    int I=1000;         //Variáveis tipo Integer

    float D=100.59;     //Variáveis tipo Float

    char T='A';       //Variáveis tipo Character

    char S='?';

    printf("Colocar o numero inteiro: %i\n",I);
    //scanf("%i", &B);                                                //Função para colocar inputs no código

    printf("Colocar o numero float: %f\n",D);
    //scanf("%i", &H);


    printf("Colocar a letra: %c\n",T);
    //scanf("%i", &H);

    printf("Colocar o simbolo: %c\n",S);
    //scanf("%i", &H);

    return 0;                                                       //Aqui foi colocado 0 por conta do tipo de função que a main é

}
