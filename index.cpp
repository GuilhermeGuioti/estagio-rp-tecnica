//1. Programa para verificar se um número pertence à sequência de Fibonacci
#include <iostream>
using namespace std;

bool pertenceFibonacci(int n) {
    int a = 0, b = 1, c = 0;
    while (c <= n) {
        if (c == n)
            return true;
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

int main() {
    int numero;
    cout << "Informe um numero: ";
    cin >> numero;

    if (pertenceFibonacci(numero)) {
        cout << "O numero " << numero << " pertence a sequência de Fibonacci." << endl;
    } else {
        cout << "O numero " << numero << " NÃO pertence a sequência de Fibonacci." << endl;
    }

    return 0;
}

//2. Programa para verificar a existência e quantidade da letra 'a' em uma string
#include <iostream>
#include <string>
using namespace std;

int contarA(string texto) {
    int count = 0;
    for (char c : texto) {
        if (tolower(c) == 'a') {
            count++;
        }
    }
    return count;
}

int main() {
    string texto;
    cout << "Digite uma string: ";
    getline(cin, texto);

    int quantidade = contarA(texto);

    if (quantidade > 0) {
        cout << "A letra 'a' aparece " << quantidade << " vezes na string." << endl;
    } else {
        cout << "A letra 'a' não aparece na string." << endl;
    }

    return 0;
}

//3. Qual será o valor da variável SOMA? Resultado: O valor de SOMA será 78.
#include <iostream>
using namespace std;

int main() {
    int INDICE = 12;
    int SOMA = 0;
    int K = 1;

    while (K <= INDICE) {  // Ajustar para K <= INDICE
        SOMA = SOMA + K;
        K = K + 1;
    }

    cout << "O valor da variavel SOMA e: " << SOMA << endl;

    return 0;
}

/*4. Complete o próximo elemento das sequências:
a) 1, 3, 5, 7, 9
Lógica: Esta é uma sequência de números ímpares, onde o próximo número é sempre o anterior mais 2.
b) 2, 4, 8, 16, 32, 64, 128
Lógica: Cada número é o dobro do anterior.
c) 0, 1, 4, 9, 16, 25, 36, 49
Lógica: Esta é uma sequência de quadrados perfeitos: 0², 1², 2², 3², 4², 5², 6², 7².
d) 4, 16, 36, 64, 100
Lógica: Esta é uma sequência de quadrados de números pares: 2², 4², 6², 8², 10².
e) 1, 1, 2, 3, 5, 8, 13
Lógica: Esta é a sequência de Fibonacci, onde cada número é a soma dos dois anteriores.
f) 2, 10, 12, 16, 17, 18, 19, 20
Lógica: Seguidos por incrementos consecutivos de 1.
*/

/*5. Desafio dos interruptores e lâmpadas
Passos para resolver o problema:
Ligue o primeiro interruptor e deixe ligado por alguns minutos.
Desligue o primeiro interruptor e ligue o segundo.
Vá até a sala das lâmpadas.
A lâmpada acesa é controlada pelo segundo interruptor.
A lâmpada apagada, mas quente, é controlada pelo primeiro interruptor.
A lâmpada apagada e fria é controlada pelo terceiro interruptor.
Com isso, é possível identificar qual interruptor controla qual lâmpada.
*/