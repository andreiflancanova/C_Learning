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


    float N1=8.5;
    float N2=9.2;
    float MA=(N1+N2)/2;         //Se o resultado de uma operação for um número float e se definir como int, só aparecerá a parte int do resultado.

    printf("A media das suas notas eh %f\n",MA);
    //scanf("%i", &B);                                                //Função para colocar inputs no código


    return 0;                                                       //Aqui foi colocado 0 por conta do tipo de função que a main é

}
