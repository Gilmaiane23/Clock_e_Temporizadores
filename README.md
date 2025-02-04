# Atividade 1: Temporizador Periódico - Semáforo

Este repositório contém o código desenvolvido para a **Atividade 1** da disciplina, que implementa um semáforo com temporização de 3 segundos para cada alteração de sinal. O semáforo é acionado por LEDs (vermelho, amarelo e verde), utilizando a função `add_repeating_timer_ms()` do Pico SDK.

## Descrição

O código simula um semáforo com LEDs que alternam de acordo com um temporizador. A cada 3 segundos, o semáforo muda entre as cores:

1. **Vermelho**
2. **Amarelo**
3. **Verde**

Este comportamento é implementado com a função `add_repeating_timer_ms()` para criar um temporizador periódico.

## Instruções de Uso

### Modos de Simulação

Para escolher entre os dois modos de simulação (Wokwi ou BitDogLab), altere a definição da constante `WOKWI_MODE` no código. Se estiver utilizando o **Wokwi**, defina como `1`; se estiver utilizando o **BitDogLab**, defina como `0`.

```c
// Modo de simulação: 1 para Wokwi, 0 para BitDogLab
#define WOKWI_MODE 1

## Vídeo de Demonstração
```bash
   
   ```