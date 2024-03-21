//Exe. 3 Formato de Agenda Telefônica
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

string toAgendaFormat(string nome) {
    stringstream ss(nome);
    string token;
    vector<string> tokens;
    while (getline(ss, token, ' ')) {
        tokens.push_back(token);
    }
    reverse(tokens.begin(), tokens.end());
    string formattedName = tokens[0] + ", ";
    for (size_t i = 1; i < tokens.size(); ++i) {
        formattedName += tokens[i] + " ";
    }
    return formattedName;
}

int main() {
    ifstream arquivo("nomes.txt");
    if (!arquivo) {
        cerr << "Erro ao abrir o arquivo." << endl;
        return 1;
    }
    string nome;
    while (getline(arquivo, nome)) {
        cout << toAgendaFormat(nome) << endl;
    }
    arquivo.close();
    return 0;
}
