# Clock e Temporizadores

## Descrição
Este repositório contém o código desenvolvido para as atividades do **Capítulo 5 - C5O123A**, parte da **Unidade 4** da disciplina de **Embarcação e Tecnologias**. O projeto consiste em dois sistemas de temporização utilizando o **Raspberry Pi Pico W** e o **Pico SDK**:

1. **Atividade 1: Semáforo com Temporizador Periódico**  **Branch: Atividade_1**
2. **Atividade 2: Temporizador de Um Disparo (One Shot)** **Branch: Atividade_2**

## Estrutura do Repositório
O repositório está organizado em dois diretórios principais, cada um correspondendo a uma das atividades:

- **Atividade_1_TemporizadorPeriodico**  
  Contém o código do semáforo com temporização de 3 segundos para cada alteração de sinal. O semáforo é acionado por LEDs (vermelho, amarelo e verde), com uso da função `add_repeating_timer_ms()`.

- **Atividade_2_OneShot**  
  Contém o código para a implementação de um temporizador de um disparo (One Shot) acionado por um botão. O sistema aciona LEDs (azul, vermelho e verde) com a função `add_alarm_in_ms()`. A mudança de estado dos LEDs ocorre após 3 segundos.

## 🖥 Simulação
Vídeo demonstrativo: [📹 ATIVIDADE 1] (https://www.youtube.com/watch?v=-brHw-H8O3E)

Vídeo demonstrativo: [📹 ATIVIDADE 2] (https://youtu.be/gU-vVe90m7o)


## Requisitos
- **Raspberry Pi Pico W**
- **VS Code** com suporte ao **Pico SDK**
- **Wokwi** para simulação
- **BitDogLab** para experimentação com o LED RGB

## Como Usar

### 1. Clone o Repositório
Para clonar o repositório, execute o seguinte comando no seu terminal:

```bash
git clone https://github.com/Gilmaiane23/Clock-e-Temporizadores.git
```
2. Compile e carregue o código no microcontrolador.

3. Verifique a Atividade a ser executada (se é a atividade 1 ou atividade 2)

