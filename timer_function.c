//Atividade  1 - Usando add_repeating_timer para controle de leds
//Gilmaiane Porto Silva

#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

// Modo de simulação: 1 para Wokwi, 0 para BitDogLab
#define WOKWI_MODE 1

// Definição dos LEDs
#define LED_RED 13
#define LED_GREEN 11
#define LED_BLUE 12

#if WOKWI_MODE
    #define LED_YELLOW 10  // No Wokwi, o amarelo tem um pino separado
#endif

int estado = 0;  // Começa no estado do vermelho

void inicializacao() {
    gpio_init(LED_RED);
    gpio_set_dir(LED_RED, GPIO_OUT);

    gpio_init(LED_GREEN);
    gpio_set_dir(LED_GREEN, GPIO_OUT);

    gpio_init(LED_BLUE);
    gpio_set_dir(LED_BLUE, GPIO_OUT);

    #if WOKWI_MODE
        gpio_init(LED_YELLOW);
        gpio_set_dir(LED_YELLOW, GPIO_OUT);
    #endif

    // Liga o LED vermelho ao iniciar
    gpio_put(LED_RED, 1);
}

bool mudar_semaforo(struct repeating_timer *t) {
    // Desliga todos os LEDs
    gpio_put(LED_GREEN, 0);
    gpio_put(LED_RED, 0);
    gpio_put(LED_BLUE, 0);
    
    #if WOKWI_MODE
        gpio_put(LED_YELLOW, 0);  // Desliga o amarelo no Wokwi
    #endif

    // Atualiza o estado do semáforo
    if (estado == 0) {
        #if WOKWI_MODE
            gpio_put(LED_YELLOW, 1);  // No Wokwi, acende o LED amarelo separado
        #else
            gpio_put(LED_RED, 1);
            gpio_put(LED_GREEN, 1);  // Na BitDogLab, vermelho + verde = amarelo
        #endif
        estado = 1;
    } else if (estado == 1) {
        gpio_put(LED_GREEN, 1);  // Verde aceso
        estado = 2;
    } else {
        gpio_put(LED_RED, 1);  // Vermelho aceso
        estado = 0;
    }

    return true; // Continua repetindo o timer
}

int main() {
    stdio_init_all();
    inicializacao();

    struct repeating_timer timer;
    add_repeating_timer_ms(3000, mudar_semaforo, NULL, &timer);

    while (1) {
        sleep_ms(1000);
        printf("Rotina necessária!\n");
    }

    return 0;
}
