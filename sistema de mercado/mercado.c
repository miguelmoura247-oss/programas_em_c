#include <stdio.h>
#include <string.h>
#include <time.h>

typedef struct {
    char nome_produto[20];
    char codigo[13];
    float preco;
    int quantidade;
    int tipo;
    int dia,mes,ano; //para validade
}item;

typedef struct{ 
    int dia_hoje;
    int mes_hoje;
    int ano_hoje;
}data_hoje;

data_hoje obter_data_atual() {
    data_hoje hoje;
    time_t t = time(NULL);
    struct tm *data_atual = localtime(&t);

    hoje.dia_hoje = data_atual->tm_mday;
    hoje.mes_hoje = data_atual->tm_mon + 1;
    hoje.ano_hoje = data_atual->tm_year + 1900;

    return hoje;
}


void cadatrar_item(item produto[],int *i, data_hoje hoje) {
    printf("Digite o nome do produto:\n");
    scanf("%19s",produto[*i].nome_produto);
   
    printf("Digite o codigo de barras do produto:\n");
    scanf("%12s",produto[*i].codigo);
   
    printf("Digite o preço do produto:\n");
    scanf("%f",&produto[*i].preco);
   
    printf("Digite a quantidade de itens:\n");
    scanf("%d",&produto[*i].quantidade);
   
    printf("Digite se o produto é perecivel\n 0-para perecível ou 1- para não perecível" );
    scanf("%d",&produto[*i].tipo);
   
    if (produto[*i].tipo == 0) {
        int vencido = 0;

        printf("Digite o dia/mes/ano de vencimento do produto (ex: DD/MM/AAAA):\n");
        scanf("%d/%d/%d", &produto[*i].dia, &produto[*i].mes, &produto[*i].ano);
       
        // Validação da data
        if (produto[*i].ano < hoje.ano_hoje) {
            vencido = 1;
        } else if (produto[*i].ano == hoje.ano_hoje) {
            if (produto[*i].mes < hoje.mes_hoje) {
                vencido = 1;
            } else if (produto[*i].mes == hoje.mes_hoje) {
                if (produto[*i].dia < hoje.dia_hoje) {
                    vencido = 1;
                }
            }
        }
       
        if (vencido) {
            printf("\nERRO: Produto vencido! O cadastro não foi aceito.\n");
            // Limpa os dados do produto não aceito e cancela
            produto[*i].dia = 0;
            produto[*i].mes = 0;
            produto[*i].ano = 0;
            return; 
        } else {
            printf("\nProduto perecível cadastrado com sucesso!\n");
            (*i)++; // Confirma o cadastro do produto válido
        }
    } 
    // Se for Não Perecível (1)
    else {
        produto[*i].dia = 0;
        produto[*i].mes = 0;
        produto[*i].ano = 0;
       
        printf("\nProduto não perecível cadastrado com sucesso!\n");
        (*i)++; // Confirma o cadastro
    }
}


void exibir_preco_produto(int *i,item produto[]){
    char codigo_teste[13];
    int encontrado = 0;
    if (*i == 0) {
        printf("\nNenhum produto cadastrado.\n");
        return;
    }

    printf("Digite o código de barras do produto que deseja consultar:\n");
    scanf("%12s", codigo_teste);

    for(int j = 0; j < *i; j++) {
        if(strcmp(produto[j].codigo, codigo_teste) == 0){
        printf("o preço do produto,%s,é: %.2f\n", produto[j].nome_produto, produto[j].preco);
        encontrado = 1;
        break; 
        }
    }
    if (!encontrado) {
        printf("Produto não cadastrado ou código inválido.\n");
    }
}

void alterar_preco_produto(int *i, item produto[]) {
    char codigo_teste[13];
    if (*i == 0) {
        printf("\nNenhum produto cadastrado.\n");
        return;
    }
    printf("Digite o código de barras do produto que deseja alterar o preço:\n");
    scanf("%12s", codigo_teste);
    
    for(int j = 0; j < *i; j++) {

        if(strcmp(produto[j].codigo, codigo_teste) == 0){
            float novo_preco;
            printf("Digite o novo preço para o produto %s:\n", produto[j].nome_produto);
            scanf("%f", &novo_preco);
            produto[j].preco = novo_preco;
            printf("Preço atualizado com sucesso!\n");
            return; // Sai da função após atualizar o preço
        }
    }
    printf("Produto não cadastrado ou código inválido.\n");
}

void main(){
      int n;
      int i = 0;
      item produto[20];
      data_hoje hoje = obter_data_atual();
      do {

        printf("=== Escolha uma das opções abaixo ===\n");
        printf("1- Cadastrar produto\n");
        printf("2- Exibir preço de um produto \n");
        printf("3- alterar preço do produto\n");
        printf("4- encerrar sistema\n");
     
        scanf("%d", &n);

        switch (n) {
            case 1:
           
               cadatrar_item(produto,&i,hoje);
                break;
               
            case 2:
                exibir_preco_produto(&i,produto);
            break;
            case 3:
                alterar_preco_produto(&i, produto);
                break;
               
            case 4:
                printf("Saindo do programa");
                break;
               
            default:
                printf("Opção inválida!!");
                break;
        }
    } while (n != 4);
}
