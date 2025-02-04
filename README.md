# Clock e Temporizadores

## Descrição
Este repositório contém o código desenvolvido para as atividades do **Capítulo 5 - C5O123A**, parte da **Unidade 4** da disciplina de **Embarcação e Tecnologias**. O projeto consiste em dois sistemas de temporização utilizando o **Raspberry Pi Pico W** e o **Pico SDK**:

# Repositório Clock e Temporizadores

Este repositório contém códigos para temporizadores e outros projetos relacionados. Existem dois códigos principais em duas branches separadas: `Atividade_1` e `Atividade_2`. Siga as etapas abaixo para testar cada código individualmente.

## Passo 1: Clonar o Repositório

Se você ainda não tiver o repositório clonado, execute o seguinte comando:

```bash
git clone https://github.com/Gilmaiane23/Clock_e_Temporizadores.git
cd Clock_e_Temporizadores

```

## Passo 2: Testando o Código na Branch Atividade_1
   1. Mude para a branch atividade_1:

```bash
 git checkout Atividade_1
```

   2. Compile e carregue o código no microcontrolador.

## Passo 3: Testando o Código na Branch Atividade_2

   1. Mude para a branch Atividade_2:

```bash
 git checkout Atividade_2
```

   2. Compile e carregue o código no microcontrolador.



## 🖥 Simulação
Vídeo demonstrativo: [📹 ATIVIDADE 1] (https://www.youtube.com/watch?v=-brHw-H8O3E)

Vídeo demonstrativo: [📹 ATIVIDADE 2] (https://youtu.be/gU-vVe90m7o)

## Sobre as atividades
- **Atividade_1_TemporizadorPeriodico**  
  Contém o código do semáforo com temporização de 3 segundos para cada alteração de sinal. O semáforo é acionado por LEDs (vermelho, amarelo e verde), com uso da função `add_repeating_timer_ms()`.

- **Atividade_2_OneShot**  
  Contém o código para a implementação de um temporizador de um disparo (One Shot) acionado por um botão. O sistema aciona LEDs (azul, vermelho e verde) com a função `add_alarm_in_ms()`. A mudança de estado dos LEDs ocorre após 3 segundos.


## Requisitos
- **Raspberry Pi Pico W**
- **VS Code** com suporte ao **Pico SDK**
- **Wokwi** para simulação
- **BitDogLab** para experimentação com o LED RGB

