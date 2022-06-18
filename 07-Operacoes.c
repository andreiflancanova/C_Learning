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

    int B,H,A;      //Uma forma de se definir as variáveis é colocar o tipo da variável primeiro

    printf("Digite o valor da base: ");
    scanf("%i", &B);                                //Função para colocar inputs no código

    printf("Digite o valor da altura: ");
    scanf("%i", &H);

    A=B*H;

    printf("A area do retangulo eh eh %i.\n", A);

    return 0;                                                       //Aqui foi colocado 0 por conta do tipo de função que a main é

}
