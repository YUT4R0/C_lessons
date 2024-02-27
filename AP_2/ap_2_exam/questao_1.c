// Pedro Yutaro Mont Morency Nakamura
// Davi Guilherme Assuncao Pinheiro
// Arthur Vinicius Menezes Bernardes
// Thiago Pincegher Simoes
// Benicio Mozan Santos Vale
// Carlos Henrique Walthier
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para armazenar as informações de uma pessoa
struct Pessoa
{
  char nome[50];
  char sobrenome[50];
  int idade;
  float altura;
  float peso;
};

// Função para cadastrar um registro novo
void cadastrarRegistro(FILE *file)
{
  struct Pessoa pessoa;

  printf("Digite o nome: ");
  scanf("%s", pessoa.nome);

  printf("Digite o sobrenome: ");
  scanf("%s", pessoa.sobrenome);

  printf("Digite a idade: ");
  scanf("%d", &pessoa.idade);

  printf("Digite a altura: ");
  scanf("%f", &pessoa.altura);

  printf("Digite o peso: ");
  scanf("%f", &pessoa.peso);

  // Escreve as informações no file
  fwrite(&pessoa, sizeof(struct Pessoa), 1, file);

  printf("Registro cadastrado com sucesso!\n");
}

// Função para mostrar o nome da pessoa com menor peso
void mostrarMenorPeso(FILE *file)
{
  struct Pessoa pessoa;
  struct Pessoa menorPeso;

  // Move o ponteiro para o início do file
  rewind(file);

  // Lê o primeiro registro
  fread(&menorPeso, sizeof(struct Pessoa), 1, file);

  // Lê os registros restantes e encontra a pessoa com menor peso
  while (fread(&pessoa, sizeof(struct Pessoa), 1, file) == 1)
  {
    if (pessoa.peso < menorPeso.peso)
    {
      menorPeso = pessoa;
    }
  }

  printf("Nome da pessoa com menor peso: %s %s\n", menorPeso.nome, menorPeso.sobrenome);
}

// Função para mostrar nome e sobrenome de todas pessoas registradas
void mostrarTodosRegistros(FILE *file)
{
  struct Pessoa pessoa;

  // Move o ponteiro para o início do file
  rewind(file);

  // Lê e imprime todos os registros
  while (fread(&pessoa, sizeof(struct Pessoa), 1, file) == 1)
  {
    printf("Nome: %s %s, Idade: %d, Altura: %.2f, Peso: %.2f\n", pessoa.nome, pessoa.sobrenome, pessoa.idade, pessoa.altura, pessoa.peso);
  }
}

// Função para alterar a idade de uma determinada pessoa no registro
void alterarIdade(FILE *file)
{
  struct Pessoa pessoa;
  char nomeAlvo[50];
  int novaIdade;

  printf("Digite o nome da pessoa cuja idade será alterada: ");
  scanf("%s", nomeAlvo);

  // Move o ponteiro para o início do file
  rewind(file);

  // Busca a pessoa pelo nome e lê seu registro
  int encontrou = 0;
  while (fread(&pessoa, sizeof(struct Pessoa), 1, file) == 1)
  {
    if (strcmp(pessoa.nome, nomeAlvo) == 0)
    {
      encontrou = 1;
      break;
    }
  }

  if (encontrou)
  {
    // Pergunta pela nova idade
    printf("Digite a nova idade para %s: ", nomeAlvo);
    scanf("%d", &novaIdade);

    // Atualiza a idade no registro
    pessoa.idade = novaIdade;

    // Move o ponteiro para trás do registro que acabou de ser lido
    fseek(file, -sizeof(struct Pessoa), SEEK_CUR);

    // Escreve o registro atualizado no file
    fwrite(&pessoa, sizeof(struct Pessoa), 1, file);

    printf("Idade alterada com sucesso!\n");
  }
  else
  {
    printf("Pessoa não encontrada.\n");
  }
}

// Função para mostrar o nome da pessoa mais jovem
void mostrarMaisJovem(FILE *file)
{
  struct Pessoa pessoa;
  struct Pessoa maisJovem;

  // Move o ponteiro para o início do file
  rewind(file);

  // Lê o primeiro registro
  fread(&maisJovem, sizeof(struct Pessoa), 1, file);

  // Lê os registros restantes e encontra a pessoa mais jovem
  while (fread(&pessoa, sizeof(struct Pessoa), 1, file) == 1)
  {
    if (pessoa.idade < maisJovem.idade)
    {
      maisJovem = pessoa;
    }
  }

  printf("Nome da pessoa mais jovem: %s %s\n", maisJovem.nome, maisJovem.sobrenome);
}

int main()
{
  FILE *file;
  int opt;
  // opens "people.txt" file for read and writing
  file = fopen("people.txt", "a+");
  if (file == NULL)
  {
    printf("Erro ao abrir o file.\n");
    return 1;
  }
  do
  {
    printf("\nMenu de Opções:\n");
    printf("1 - Cadastrar um registro novo\n");
    printf("2 - Mostrar o nome da pessoa com menor peso\n");
    printf("3 - Mostrar nome e sobrenome de todas pessoas registradas\n");
    printf("4 - Alterar idade de uma determinada pessoa no registro\n");
    printf("5 - Nome da pessoa mais jovem\n");
    printf("6 - Sair do Programa\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
      cadastrarRegistro(file);
      break;
    case 2:
      mostrarMenorPeso(file);
      break;
    case 3:
      mostrarTodosRegistros(file);
      break;
    case 4:
      alterarIdade(file);
      break;
    case 5:
      mostrarMaisJovem(file);
      break;
    case 6:
      printf("Programa encerrado.\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
    }

  } while (opt != 6);
  fclose(file);
  return 0;
}
