//Exe. 2 Palindromo
#include <iostream>
#include <algorithm>

using namespace std;

bool isPalindrome(string str) {
    str.erase(remove_if(str.begin(), str.end(), ::isspace), str.end());
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

int main() {
    string mensagem;
    cout << "Digite uma mensagem: ";
    getline(cin, mensagem);
    if (isPalindrome(mensagem))
        cout << "A mensagem é um palíndromo." << endl;
    else
        cout << "A mensagem não é um palíndromo." << endl;
    return 0;
}
