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

    //scanf("%i", &B);                                                //Função para colocar inputs no código

    int A=1;
    int B=1;

    while(A<=10){
        printf("TesteA=%i\n",A);
        A=A+1;
    }
    do {
        printf("TesteB=%i\n",B);
        B=B+1;
    }while(B<=10);

    /*
    A diferença do Do While para o While é que o Do While executará
    ao menos uma vez, porque verifica se a condição é satisfeita
    somente no final, enquanto que o While verifica no início,.
    */

    return 0;                                                       //Aqui foi colocado 0 por conta do tipo de função que a main é

}
