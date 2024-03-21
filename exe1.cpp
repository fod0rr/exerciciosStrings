//Exe. 1 Cascata de Mensagens
#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;

void clearScreen() {
    cout << "\033[2J\033[1;1H";
}

int main() {
    string mensagem;
    cout << "Digite uma mensagem: ";
    getline(cin, mensagem);
    clearScreen();
    int delayMillis = 100000;
    int linha = 5;
    for (char c : mensagem) {
        cout << string(linha, '\n') << string(40, ' ') << c << endl;
        cout.flush();
        usleep(delayMillis);
        linha++;
    }
    cout << endl;
    return 0;
}