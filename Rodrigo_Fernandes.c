#include <stdio.h>


int main(void) {

  // Nome e email do aluno
  printf("\n");
  printf("Rodrigo Fernandes da Silva\n");
  printf("rodrigofs60@gmail.com\n");
  printf("\n");

  // Definindo variaveis
  double total[6];            // Número do valor total
  int nr_categorias;          // Número de categorias
  char nome_categoria[25+1];  // Nome da categoria 25 caracteres + byte nulo
  int nr_itens_categoria;     // Número de itens na categoria
  double desconto = 0;        // Desconto
  int parcelas = 0;           // Parcelas

  // Lê número de categorias
  printf("Numero de categorias: ");
  scanf("%2d", &nr_categorias);

  // Definindo variaveis
  char tipo_pagamento[2];
  char descricao[nr_itens_categoria][26];
  double quantidade;
  char unidade[4];
  char moeda[3];
  double valor;

  // Repeticao para rodar o codigo quantas vezes for necessario
  for(int i=0; i<nr_categorias; i++) {
    // Lê nome da categoria e número de itens na categoria
    printf("\nNome da categoria: ");
    scanf("%s", nome_categoria);
    printf("\nNumero de itens: ");
    scanf("%d", &nr_itens_categoria);
    total[0] = total[0] + nr_itens_categoria;

    for(int j=0; j<nr_itens_categoria; j++ ) {
      printf("\nDescricao: ");
      scanf("%s",descricao[25]);

      printf("\nQuantidade: ");
      scanf("%lf", &quantidade);

      printf("\nUnidade de medida: ");
      scanf("%s", unidade);

      printf("\nMoeda: ");
      scanf("%s", moeda);

      printf("\nValor: ");
      scanf("%lf", &valor);
      printf("\n");

      printf("\tDescricao = %s | Quantidade = %5.2f | Unidade = %s | Moeda = %s | Valor = %5.2f\n",descricao[25], quantidade, unidade, moeda, valor);

      total[1] = (quantidade * valor) + total[1];
    }
  }
  printf("\n");
  printf("TOTAL DE ITENS: %.0f\n", total[0]);
  printf("VALOR TOTAL : R$%.2f\n", total[1]);
  printf("DESCONTO: R$%.2f\n", total[1]*0.105);
  printf("VALOR A PAGAR: R$%.2f\n", total[1] - (total[1]*0.105));
  printf("Digite a forma de pagamento: A (A vista) ou P (Parcelado)\n");
  scanf("%s", &tipo_pagamento[1]);

  // Definindo as parcelas
  switch (tipo_pagamento[1]){
    case'A':
    printf("VALOR:R$%.2f\n", total[1] - (total[1]*0.105));
    break;

    case'P':
    printf("DIGITE O NUMERO DE PARCELAS: ");
    scanf("%d", &parcelas);
    printf("VALOR DA PARCELA:R$%.2f\n", (total[1] - (total[1]*0.105))/ parcelas);
    break;
  }
}
