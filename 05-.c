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

    int a;      //Uma forma de se definir as vari�veis � colocar o tipo da vari�vel primeiro

    a = 3;      // O valor depois

    int b=4;    //Outra forma e colocar o tipo e o valor tudo de uma vez

    int c=-1;



    printf("O 1 coeficiente eh %i.\nO 2 coeficiente eh %i.\nO 3 coeficiente eh %i.\n", a,b,c);

    int s,p;

    s=a+b+c;
    p=a*b*c;

    printf("A soma dos valores eh %i.\n", s);

    printf("O produto dos valores eh %i.\n", p);

    return 0;                                                       //Aqui foi colocado 0 por conta do tipo de fun��o que a main �

}
