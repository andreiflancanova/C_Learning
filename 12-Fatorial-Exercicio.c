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

    //scanf("%i", &B);                                                //Fun��o para colocar inputs no c�digo

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
        O s�mbolo "!=" significa diferente
        O s�mbolo "==" significa igual
        O s�mbolo "=" serve apenas PARA DEFINIR O VALOR DE UMA VARI�VEL
        */
        printf("Para C= %i, ",C);
        F=C*F;                              // A linguagem tamb�m aceitaria F*=C que � igual a F=F*C
        printf("o fatorial vale %i.\n",F);
        C=C+1;
        /*
        Outra forma de definir o incremento:
        Aumentar 1 ++C
        Diminuir 1 --C
        Para o comando for, o par�metro inicial pode ficar em branco
        */

    }

    for (;C2>=1;--C2){
        F2*=C2;
    }
    printf("O fatorial pela 2a forma eh %i\n",F2);

    return 0;                                                       //Aqui foi colocado 0 por conta do tipo de fun��o que a main �

}
