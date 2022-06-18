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

    int a;      //Uma forma de se definir as variáveis é colocar o tipo da variável primeiro

    a = 3;      // O valor depois

    int b=4;    //Outra forma e colocar o tipo e o valor tudo de uma vez

    int c=-1;



    printf("O 1 coeficiente eh %i.\nO 2 coeficiente eh %i.\nO 3 coeficiente eh %i.\n", a,b,c);

    int s,p;

    s=a+b+c;
    p=a*b*c;

    printf("A soma dos valores eh %i.\n", s);

    printf("O produto dos valores eh %i.\n", p);

    return 0;                                                       //Aqui foi colocado 0 por conta do tipo de função que a main é

}
