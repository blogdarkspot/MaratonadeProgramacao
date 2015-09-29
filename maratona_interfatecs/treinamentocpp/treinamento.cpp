#include <vector>
#include <iostream>

/**
 * @brief Faz o reajuste da matriz e preenche ela com o char 'a'
 * @param &m  referencia para uma matriz de vector
 * @param iSize tamanho da matriz
 */
void resize_matriz(std::vector<std::vector<char> > &m, int iSize) {
    m.resize(iSize);
    for (int i = 0; i < iSize; i++) {
	m[i].resize(iSize);
	for (int j = 0; j < iSize; j++) m[i][j] = 'a';
    }
}

/**
 * @brief resolução do problema
 *
 * percorre a matriz até sair do range dela e preenche as variaveis c e i
 * com as informações de saída.
 *
 * @param m matriz de entrada
 * @param c direção que a bolinha saiu
 * @param i numero da linha ou coluna que a bolinha saiu
 */
void execAlg(const std::vector<std::vector<char> > &m, char inC, int inI,
	     int &iR, char &cR) {
    int x = 0, y = 0;

    switch (inC) {
	case 'E': {
	    x = inI - 1;
	    y = 0;
	    break;
	}
	case 'D': {
	    x = inI - 1;
	    y = m.size() - 1;
	    break;
	}
	case 'S': {
	    x = 0;
	    y = inI - 1;
	    break;
	}
	case 'I': {
	    x = m.size() - 1;
	    y = inI - 1;
	    break;
	}
    }
    while (x >= 0 && y >= 0 && x < m.size() && y < m.size()) {
	if (m[x][y] == 'D') {
	    switch (inC) {
		case 'E':
		    inC = 'I';
		    break;
		case 'D':
		    inC = 'S';
		    break;
		case 'I':
		    inC = 'E';
		    break;
		case 'S':
		    inC = 'D';
		    break;
	    }
	}
	if (m[x][y] == 'I') {
	    switch (inC) {
		case 'E':
		    inC = 'S';
		    break;
		case 'D':
		    inC = 'I';
		    break;
		case 'I':
		    inC = 'D';
		    break;
		case 'S':
		    inC = 'E';
		    break;
	    }
	}
	if (inC == 'E') y++;
	if (inC == 'D') y--;
	if (inC == 'I') x--;
	if (inC == 'S') x++;
    }
    if (x < 0) {
	cR = 'S';
	iR = y + 1;
    }
    if (x == m.size()) {
	cR = 'I';
	iR = y + 1;
    }
    if (y < 0) {
	cR = 'E';
	iR = x + 1;
    }
    if (y == m.size()) {
	cR = 'D';
	iR = x + 1;
    }
}

int main(void) {
    // variaveis
    int n, m, l, c, o, iR;
    char b, x, cR;
    std::vector<std::vector<char> > matriz;
    while (std::cin >> n && std::cin >> m) {
	resize_matriz(matriz, n);  // reajusta a matriz para o novo tamanho
	while (m--) {
	    std::cin >> l >> c >> b;
	    matriz[l - 1][c - 1] = b;
	}
	std::cin >> o >> x;
	execAlg(matriz, x, o, iR, cR);		    // Faz o teste
	std::cout << iR << " " << cR << std::endl;  // imprimi resultado
    }
}
