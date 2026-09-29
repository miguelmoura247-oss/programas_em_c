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
