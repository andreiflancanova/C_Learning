//Incluir biblioteca de dados no programa: Liberar fun��es para serem usadas no programa
#include<stdio.h>                               //Standard Input Output

 /*
    Coment�rios que precisam de muitas linhas podem ser escritos atrav�s
    deste artif�cio aqui
    */
                                                                       //Criar a fun��o principal
int main()                                                          //O compilador vai entender que tudo que est� dentro das chaves � a fun��o principal
{
    printf("Pesquisa de Iniciacao Cientifica - IMEF - FURG\n");     //O comando printf mostra na tela para o usu�rio uma mensagem especificada por voc�

    printf("Bolsista: Andrei Ferreira Lancanova\n");                //o "\n" tem a fun��o de fazer pular para outra linha. Para organizar

    printf("Orientador: Prof. Dr. Andre Meneghetti\n");

    int I=1000;         //Vari�veis tipo Integer

    float D=100.59;     //Vari�veis tipo Float

    char T='A';       //Vari�veis tipo Character

    char S='?';

    printf("Colocar o numero inteiro: %i\n",I);
    //scanf("%i", &B);                                                //Fun��o para colocar inputs no c�digo

    printf("Colocar o numero float: %f\n",D);
    //scanf("%i", &H);


    printf("Colocar a letra: %c\n",T);
    //scanf("%i", &H);

    printf("Colocar o simbolo: %c\n",S);
    //scanf("%i", &H);

    return 0;                                                       //Aqui foi colocado 0 por conta do tipo de fun��o que a main �

}
