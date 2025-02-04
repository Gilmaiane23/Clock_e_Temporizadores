# Atividade 1: Temporizador Periódico - Semáforo

Este repositório contém o código desenvolvido para a **Atividade 1** da disciplina, que implementa um semáforo com temporização de 3 segundos para cada alteração de sinal. O semáforo é acionado por LEDs (vermelho, amarelo e verde), utilizando a função `add_repeating_timer_ms()` do Pico SDK.

## 📌 Descrição

O código simula um semáforo com LEDs que alternam de acordo com um temporizador. A cada 3 segundos, o semáforo muda entre as cores:

1. **Vermelho**
2. **Amarelo**
3. **Verde**

Este comportamento é implementado com a função `add_repeating_timer_ms()` para criar um temporizador periódico.

## Instruções de Uso

## 🛠 Componentes
- **Raspberry Pi Pico W**
- **LEDs (Azul, Vermelho, Verde) + Resistores 330Ω**
- **Botão (Pushbutton)**

## 🖥 Simulação
Vídeo demonstrativo: [📹 Clique aqui] (https://youtu.be/-brHw-H8O3E)

## 🚀 Execução
### Requisitos
- **Pico SDK, CMake, Ninja, Compilador ARM**

## Como Executar
1. Clone este repositório:
   ```bash
   git clone https://github.com/Gilmaiane23/Clock_e_Temporizadores.git
   ```
2. Compile e carregue o código no microcontrolador.

