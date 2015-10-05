#include <string>
#include <iostream>
#include <set>
#include <algorithm>  //for_each
#include <vector>

/**
 * @brief 
 *
 * @param tString
 * @param position
 */
void print(const std::vector<char> &tString, const int position) {
    for (int i = 0; i < tString.size(); i++) {
		std::cout << " " << tString[i];
    }
    std::cout << std::endl;
}

/**
 * @brief 
 *
 * @param wordFormatted
 */
void enumeration(std::vector<char> &wordFormatted) {
	for ( int i = 0; i < wordFormatted.size(); i++) {
		std::vector<char>::iterator it = wordFormatted.begin();
		for (int 		
		do {
			for( std::vector<char>::iterator ik = it; ik != it + i; ik++ )
				std::cout << *ik << " ";
			std::cout << std::endl;
		}while (std::next_permutation(it, it + i));
	}	
}

 /**
 * @brief recebe uma palavra e um set e remove letras repetidas e converte para maiúscula
 * em ordem alfabetica
 *
 * @param word [in] palavra para formatar
 * @param wordFormatted [in/out] retorna um set com todos os chars
 *
 * @return 
 */
void formatWord(std::string word, std::vector<char> &wordFormatted) {
	std::set<char> tSet;
    std::for_each(word.begin(), word.end(), [&](char &c) {
		c = std::toupper(c);
		tSet.insert(c);
    });  // converte todas as letras para maiúscula e insere no set
	for ( auto &c : tSet ) { wordFormatted.push_back(c); }
}

int main(int argc, char **argv) {
    int n;
    std::string word;
    std::vector<char> wordFormatted;
    std::cin >> n;
    while (n--) {
		std::cin >> word;
		formatWord(word, wordFormatted);
		enumeration(wordFormatted);
    }
}
