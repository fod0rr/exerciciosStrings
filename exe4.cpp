//Exe. 4 Formato de Citação Bibliográfica
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

string toCitationFormat(string nome) {
    stringstream ss(nome);
    string token;
    vector<string> tokens;
    while (getline(ss, token, ' ')) {
        tokens.push_back(token);
    }
    string formattedName = tokens[tokens.size() - 1] + ", ";
    for (size_t i = 0; i < tokens.size() - 1; ++i) {
        formattedName += tokens[i].substr(0, 1) + ". ";
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
        cout << toCitationFormat(nome) << endl;
    }
    arquivo.close();
    return 0;
}
