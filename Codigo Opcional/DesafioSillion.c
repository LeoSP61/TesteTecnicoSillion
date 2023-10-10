#include <avr/io.h>

int main(void) {
    // Configurar PB0 como entrada e PB1 como saída
    DDRB &= ~(1 << PB0);  // PB0 como entrada
    DDRB |= (1 << PB1);   // PB1 como saída
    
    while (1) {

        // Verificar o estado do botão
        if (PINB & (1 << PB0)) {
            // Botão não pressionado (nível alto), desligue o motor
            PORTB &= ~(1 << PB1);  // PB1 em nível lógico baixo

        } 
        
        else {
            // Botão pressionado (nível baixo), ligue o motor
            PORTB |= (1 << PB1);  // PB1 em nível lógico alto
        }
    }
    
    return 0;
}
