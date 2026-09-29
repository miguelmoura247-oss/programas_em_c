# 🛒 Sistema de Gestão de Estoque e Produtos em C

Um sistema em linguagem C desenvolvido para cadastro, consulta e atualização de preços de produtos com suporte a controle de validade para itens perecíveis.

---

## 📌 Funcionalidades

- **Cadastro de Produtos**:
  - Armazena nome, código de barras, preço, quantidade e tipo (perecível/não perecível).
  - **Validação Automática de Validade**: Compara a data de vencimento informada com a data atual do sistema via `<time.h>`. Produtos já vencidos são rejeitados automaticamente.
- **Consulta de Preço**:
  - Busca rápida de produtos via código de barras.
- **Atualização de Preço**:
  - Permite alterar o valor cadastrado de qualquer item existente.
- **Menu Interativo**:
  - Interface via terminal com navegação em *loop* simples e intuitiva.

---

## 🛠️ Tecnologias Utilizadas

- **Linguagem**: C (C99 ou superior)
- **Bibliotecas Padrão**:
  - `<stdio.h>` — Entradas e saídas de dados.
  - `<string.h>` — Manipulação e comparação de strings (`strcmp`).
  - `<time.h>` — Obtenção automática da data atual do sistema (`time`, `localtime`).

---

## 🚀 Como Executar

### Pré-requisitos
Possuir um compilador C instalado no seu sistema, como o **GCC** (*GNU Compiler Collection*).

### Passos para Compilação e Execução

1. **Clone ou baixe o repositório:**
   ```bash
   git clone [https://github.com/seu-usuario/seu-repositorio.git](https://github.com/seu-usuario/seu-repositorio.git)
   cd seu-repositorio
