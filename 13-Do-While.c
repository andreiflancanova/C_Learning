//Incluir biblioteca de dados no programa: Liberar fun??es para serem usadas no programa
#include<stdio.h>                               //Standard Input Output

 /*
    Coment?rios que precisam de muitas linhas podem ser escritos atrav?s
    deste artif?cio aqui
    */
                                                                       //Criar a fun??o principal
int main()                                                          //O compilador vai entender que tudo que est? dentro das chaves ? a fun??o principal
{
    printf("Pesquisa de Iniciacao Cientifica - IMEF - FURG\n");     //O comando printf mostra na tela para o usu?rio uma mensagem especificada por voc?

    printf("Bolsista: Andrei Ferreira Lancanova\n");                //o "\n" tem a fun??o de fazer pular para outra linha. Para organizar

    printf("Orientador: Prof. Dr. Andre Meneghetti\n");

    //scanf("%i", &B);                                                //Fun??o para colocar inputs no c?digo

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
    A diferen?a do Do While para o While ? que o Do While executar?
    ao menos uma vez, porque verifica se a condi??o ? satisfeita
    somente no final, enquanto que o While verifica no in?cio,.
    */

    return 0;                                                       //Aqui foi colocado 0 por conta do tipo de fun??o que a main ?

}
