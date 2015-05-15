#include <string>
#include <iostream>

using namespace std;

int main() {
    int n;
    string texto;
    string arrumada;
    cin >> n;
    cin.ignore();
    while (n--) {
    getline(cin, texto, '\n');
    arrumada.resize(texto.size());
    int j = 0;
    for (int i = (texto.size() / 2) - 1; i >= 0; --i, j++)
        arrumada[j] = texto[i];
    for (int i = texto.size()-1; i >= texto.size() / 2 ; --i, j++)
        arrumada[j] = texto[i];
    cout << arrumada << endl;
    }
    return 0;
}
