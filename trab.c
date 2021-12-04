#include <stdlib.h>
#include <conio.h>
#include <stdio.h>


struct livro
{
    char nome;
    int preco;
    char autor;
    int codigo;
};

struct livro produtos[30];

struct livro tempoVento;
struct livro theWitcher;
struct livro harryPotter;
struct livro senhorAneis;
struct livro duna;

void incluirProduto() {
    char nomeLivro;
    int precoLivro;
    char autorLivro;
    int codigoLivro;

    int posArray = 5;

    printf("\n");

    printf("Voce escolheu a opcao de: Incluir Produto\n");

    printf("\n");

    printf("Preencha os seguintes dados do produto:\n");

    printf("\n");

    printf("Codigo do livro: ");
    scanf("%i", &codigoLivro);
    printf("Nome do livro: ");
    scanf("%s", &nomeLivro);
    printf("Autor do livro: ");
    scanf("%s", &autorLivro);
    // printf("\n");
    printf("Preco do livro: ");
    scanf("%i", &precoLivro);

    printf("\n");
    printf("Livro Cadastrado!\n");


    struct livro novoLivro;
    novoLivro.nome = nomeLivro;
    novoLivro.preco = precoLivro;
    novoLivro.autor = autorLivro;
    novoLivro.codigo = codigoLivro;

    produtos[posArray] = novoLivro;

    posArray++;

}

void imprimirListaProdutos() {

    // printf("\n");

    printf("Voce escolheu a opcao de: Visualizar os Produtos");

    // printf("\n");

    printf("1: %c", produtos[0].autor);
}

void consultarValorProduto() {
    int codDigitado;


    printf("Voce escolheu a opcao de: Consultar o valor de um produto\n");
    printf("\n");

    printf("Digite o codigo do produto \n");


    scanf("%i", &codDigitado);

    printf("\n");

    printf("O valor do livro escolhido e %i e o nome do livro e %c", produtos[codDigitado].preco, produtos[codDigitado].nome);

}

void funcaoDeTeste() {
    printf("funciona desgraca \n");
    printf("printa isso aqui %c", produtos);
}

main(){
    // O Tempo e o Vento
    tempoVento.nome = "O Tempo e o Vento";
    tempoVento.preco = 35;
    tempoVento.codigo = 1;
    tempoVento.autor = "Erico Verissimo";

    // The Witcher
    theWitcher.nome = "The Witcher";
    theWitcher.preco = 29;
    theWitcher.codigo = 2;
    theWitcher.autor = "Andrzej Sapkowski";

    // Harry Potter
    harryPotter.nome = "Harry Potter";
    harryPotter.preco = 25;
    harryPotter.codigo = 3;
    harryPotter.autor = "J.K. Rowling";

    // Senhor dos Aneis
    senhorAneis.nome = "Senhor dos Aneis";
    senhorAneis.preco = 40;
    senhorAneis.codigo = 4;
    senhorAneis.autor = "J.R.R. Tolkien";

    // Duna
    duna.nome = "Duna";
    duna.preco = 80;
    duna.codigo = 5;
    duna.autor = "Frank Herbert";

    // --------------------------------------- //

    produtos[0] = tempoVento;
    produtos[1] = theWitcher;
    produtos[2] = harryPotter;
    produtos[3] = senhorAneis;
    produtos[4] = duna;

    // --------------------------------------- //

    int optEscolhida;

    printf("Ola, bem vindo a livraria ElSchenkito, digite sua opcao abaixo: \n");

    printf("\n");

    printf("(1) - Incluir um Produto \n");
    printf("(2) - Visualizar os produtos \n");
    printf("(3) - Consultar o Valor de um produto \n");

    printf("\n");

    printf("Digite um numero de 1 a 3: \n");
    scanf("%i", &optEscolhida);

    if (optEscolhida == 1)
    {
        incluirProduto();
    }
    else if (optEscolhida == 2)
    {
        imprimirListaProdutos();
    }
    else if (optEscolhida == 3)
    {
        consultarValorProduto();
    }
    else if (optEscolhida == 4)
    {
        funcaoDeTeste();
    }
    else {
        printf("A opcao escolhida e invalida");
    }

    printf("\n");

    printf("\n");
    printf("Muito Obrigado por Escolher a Livraria ElSchenkito \n");


    return 0;

}
