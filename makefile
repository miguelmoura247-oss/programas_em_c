# Define o compilador C
CC = gcc

# Define as flags de compilação
# -Wall: Ativa os avisos comuns
# -g: Inclui informações de depuração
CFLAGS = -Wall -g

# Alvo padrão: compila os dois programas (gravação e leitura)
all: gravar ler

# Regra para compilar o programa de gravação
gravar: exArq.c modulo.h
	$(CC) $(CFLAGS) exArq.c -o gravar

# Regra para compilar o programa de leitura
ler: lerarquivo.c modulo.h
	$(CC) $(CFLAGS) lerarquivo.c -o ler

# Limpa os arquivos executáveis e o arquivo de dados gerado
.PHONY: clean
clean:
	rm -f gravar ler arquivo.txt