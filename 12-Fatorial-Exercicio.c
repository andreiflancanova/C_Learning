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

    int C,N,F;
    C=1;
    F=1;

    int C2,N2,F2;
    F2=1;

    printf("Insira o numero de sua escolha: ");
    scanf("%i",&N);

    C2=N;

    while(C<=N) {
        /*
        Na linguagem C:
        O símbolo "!=" significa diferente
        O símbolo "==" significa igual
        O símbolo "=" serve apenas PARA DEFINIR O VALOR DE UMA VARIÁVEL
        */
        printf("Para C= %i, ",C);
        F=C*F;                              // A linguagem também aceitaria F*=C que é igual a F=F*C
        printf("o fatorial vale %i.\n",F);
        C=C+1;
        /*
        Outra forma de definir o incremento:
        Aumentar 1 ++C
        Diminuir 1 --C
        Para o comando for, o parâmetro inicial pode ficar em branco
        */

    }

    for (;C2>=1;--C2){
        F2*=C2;
    }
    printf("O fatorial pela 2a forma eh %i\n",F2);

    return 0;                                                       //Aqui foi colocado 0 por conta do tipo de função que a main é

}
