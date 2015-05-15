//
#include<string>
#include<iostream>

using namespace std;

/**
*Compara duas strings e tras o maior valor de uma substring comum
*@dependeces <string>
*@param[in]  string_one
*@param[in]  string_two
*@return  int tamanho da maior substring entre as duas
*/

int algoritmo_lcs (const string &string_one, const string &string_two) {
   //criando uma matriz dinamicamente com o tamanho das strings
   //tem que criar a matriz com tamanho + 1 a coluna 0 e linha zero
   // tem que ser preenchida com o valor zero pois é utilizado na hora de montar a conta
    int **matriz = new int*[string_one.length()+1];
    for(size_t i = 0; i <= string_one.length(); i++) {
        matriz[i] = new int[string_two.length()+1];
        //zerando a matriz para limpar o lixo de memoria
        for (size_t  j = 0; j <= string_two.length(); j++)
            matriz[i][j] = 0;
    }
    // o valor na posição n m da matriz é o total de todos
    //os caracteres comuns entre as duas strings
    for(size_t i = 1 ; i <= string_one.length(); i++) {
        for(size_t j = 1 ; j<= string_two.length(); j++) {
            if(string_one[i-1] == string_two[j-1])
                matriz[i][j] = matriz[i-1][j-1] + 1;
            else
                matriz[i][j] = max(matriz[i][j-1], matriz[i-1][j]);

            }
    }
    return matriz[string_one.length()][string_two.length()];
}


int algoritmo_maior_substring_comum (const string &string_one, const string &string_two) {
   //criando uma matriz dinamicamente com o tamanho das strings
   //tem que criar a matriz com tamanho + 1 a coluna 0 e linha zero
   // tem que ser preenchida com o valor zero pois é utilizado na hora de montar a conta
    int **matriz = new int*[string_one.length()+1];
    for(size_t i = 0; i <= string_one.length(); i++) {
        matriz[i] = new int[string_two.length()+1];
        //zerando a matriz para limpar o lixo de memoria
        for (size_t  j = 0; j <= string_two.length(); j++)
            matriz[i][j] = 0;
    }
    //a variavel contador ira comparar o valor
    int contador = 0;
    for(size_t i = 1 ; i <= string_one.length(); i++) {
        for(size_t j = 1 ; j <= string_two.length(); j++) {
            if(string_one[i-1] == string_two[j-1]) {
                  matriz [i][j] = matriz[i-1][j-1] + 1;
                  if(matriz[i][j] > contador)
                    contador = matriz[i][j];
            }
            else
                matriz[i][j] = 0;
            }
    }
    return contador;
}

int main (){
    string  a, b;
    while(getline(cin, a)) {
        getline(cin, b);
        cout << algoritmo_maior_substring_comum(a, b) << endl;
    }
    return 0;
}
