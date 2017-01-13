/*
 *  ORGANIZAÇÃO E RECUPERAÇÃO DA INFORMAÇÃO
 * 
 *  TRABALHO 2 
 * 
 *  AUTORES:
 *  |          NOME                  RA
 *  |  # Leandro P. Novak          555555
 *  |  # Diogo K. C. Nishikawa     586854
 *  |  # Joao                      555555
 * 
 *  DESCRIÇÃO:
 *  |   O trabalho propõe a criação de um programa para execução em linha de comando, o qual desempenha duas funções distintas:
 *  |        - Criação de uma Árvore B;
 *  |        - Busca e inserção de chaves em uma Árvore B.
 *  |
 *  |   I - Especificação
 *  |       Deve ser implementado um programa que atenda à especificação seguinte. Nesta especificação, o programa é arvoreB, mas o grupo pode decidir pelo nome que lhe convier.
 *  |
 *  |       NAME
 *  |           arvoreB - cria, busca e insere chaves em uma Árvore B
 *  |
 *  |       SYNOPSIS
 *  |           arvoreB -t grau_minimo
 *  |
 *  |       DESCRIPTION
 *  |           -t grau_minimo
 *  |               Com a opção -t, especifica-se o grau mínimo da Árvore B e cria-se a árvore. 
 *  |               Após a criação, o programa deve apresentar um menu com três opções: 1 - Inserção, 2 - Busca, 3 - Sair.
 *  |
 *  |   II - Opções e retornos do menu
 *  |       2.1 - Inserção:
 *  |               1. A inserção deve receber como parâmetro uma chave a ser inserida; 
 *  |               2. A chave deve sempre ser inserida em um nó folha; 
 *  |               3. A inserção deve garantir que as propriedades da árvore B sejam mantidas; 
 *  |               4. Após inserção, devem ser retornados o nó no qual a chave foi inserida, e um índice i indicando a posição de inserção.
 *  | 
 *  |       2.2 - Busca:
 *  |               1. A busca deve receber como parâmetro uma chave a ser localizada, e deve retornar o nó no qual a chave foi encontrada, juntamente com um índice i indicando a posição da chave no nó;
 *  |               2. Se a chave não estiver na árvore, a busca deve retornar a mensagem “CHAVE NÃO ENCONTRADA!”.
 *  | 
 *  |       2.3 - Sair:
 *  |               1. Encerra o programa.
 *  |
 *  |       OBS.1: O programa deve ser implementado na linguagem de programação C.
 *  |       OBS.2: Todo o código deve ser adequadamente comentado e é obrigatório que contenha a identificação completa dos autores.
 * 
*/

#include <stdio.h>
#include <stdlib.h>

#define TRUE  0
#define FALSE 1

typedef int bool;

static   int nodeIndex = 0;
unsigned int treeDegree;

struct Node
{
    int  key;
    int  index;
    bool leaf;
};

// Alocação de nó
struct Node* nodeAlloc()
{
    struct Node* node = malloc(sizeof(struct Node));
    
    node.key   = 0;
    node.leaf  = TRUE;
    node.index = ++nodeIndex;
    
    return node;
}

// Criação da árvore com um grau determinado pelo usuário
bool createTree(unsigned int degree, struct Node* root)
{
    if(degree >= 2)
    {
        treeDegree = degree;
        
        root = nodeAlloc();
        
        return TRUE;
    }
    
    else
    {
        return FALSE;
    }
}

void insertKey(int key)
{
    // TO DO
}

// Busca pela chave passada como parâmetro
// A função retornará o nó e o indíce da posição da chave encontrada; caso não tenha a chave, será retornará a mensagem de falha “CHAVE NÃO ENCONTRADA!”.
void searchKey(int key)
{
    if()
    {
        // TO DO
    }
    else
    {
        printf("CHAVE NAO ENCONTRADA!\n");
    }
}

int main(int argc, char** argv)
{
    // TO DO
}
