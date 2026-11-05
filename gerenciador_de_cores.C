#include <stdio.h>

// Definição da estrutura para armazenar a cor RGB
typedef struct {
    int r; // Vermelho (0-255)
    int g; // Verde (0-255)
    int b; // Azul (0-255)
} CorRGB;

// Função para garantir que o valor esteja entre 0 e 255
int validarCanal(int valor) {
    if (valor < 0) return 0;
    if (valor > 255) return 255;
    return valor;
}

// Função para criar uma nova cor
CorRGB criarCor(int r, int g, int b) {
    CorRGB novaCor;
    novaCor.r = validarCanal(r);
    novaCor.g = validarCanal(g);
    novaCor.b = validarCanal(b);
    return novaCor;
}

// Função para exibir a cor no formato RGB
void exibirRGB(CorRGB cor) {
    printf("RGB(%d, %d, %d)\n", cor.r, cor.g, cor.b);
}

// Função para exibir a cor no formato Hexadecimal
void exibirHex(CorRGB cor) {
    // %02X formata o número como hexadecimal com 2 dígitos em maiúsculo
    printf("#%02X%02X%02X\n", cor.r, cor.g, cor.b);
}

int main() {
    int r, g, b;

    printf("--- Gerenciador de Cores RGB ---\n");
    
    // Entrada de dados do usuário
    printf("Digite o valor para Vermelho (0-255): ");
    scanf("%d", &r);
    
    printf("Digite o valor para Verde (0-255): ");
    scanf("%d", &g);
    
    printf("Digite o valor para Azul (0-255): ");
    scanf("%d", &b);

    // Criação da cor utilizando a estrutura
    CorRGB minhaCor = criarCor(r, g, b);

    // Exibição dos resultados
    printf("\n--- Resultados ---\n");
    printf("Formato RGB: ");
    exibirRGB(minhaCor);
    
    printf("Formato HEX: ");
    exibirHex(minhaCor);

    return 0;
}
