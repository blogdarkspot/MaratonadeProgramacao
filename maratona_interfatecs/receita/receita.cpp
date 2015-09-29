#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

/**
 * @brief Classe com a toda a definição do remédio
 */
class Remedio {
   private:

   	std::string nome;
    int mg, tempo, mgTotal;

   public:

	Remedio(std::string n, int m, int t, int mT) {
	nome = n;
	tempo = t;
	mgTotal = mT;
	mg = m;
    }

    std::string getNome() const { return nome; }

    int getMg() const { return mg; }

    int getPeriodo() const { return tempo; }

    int getTotalCaixa() const { return mgTotal; }

	bool operator<(const Remedio &r) const { return r.nome > this->nome; }

	~Remedio() {}
};

/**
 * @brief calcula o mmc de uma lista de números
 * O programa faz a interação, se achar algum numero divisivel
 * ele faz a interção novamente com o mesmo numero. caso não seja
 * divisivel ele incrementa 1 e faz isso até todo os numeros da lista
 * se tornarem 1
 * @param nums lista de numeros para o mmc
 *
 * @return retorna o mmc
 */
int mmc(std::vector<int> nums) {
    int ret = 1, iDiv = 2, iTemp = 1;
    int j = 0;
    do {
	iTemp = 1;
	;
	for (int i = 0; i < nums.size(); i++) {
	    if (!(nums[i] % iDiv)) {
		iTemp = iDiv;
		nums[i] /= iDiv;
	    }
	    if (i == nums.size() - 1 && iTemp > 1) {
		ret *= iTemp;
		iTemp = 0;
		i = -1;
	    }
	}
	iDiv++;
	j = 0;
	for (int &i : nums) j += i;
    } while (j != nums.size());
    return ret;
}
/**
 * @brief imprime o resultado no formato desejado
 *
 * @param lista lista de remedios
 * @param totalHoras total de horas
 * @param totalDias total de dias que teve que tomar remedio
 * @param caso numero do teste
 */
void print(std::vector<Remedio> &lista, int totalHoras, int totalDias,
	   int caso) {
    std::cout << "Caso " << caso << ":" << std::endl;
    std::cout << "Total de dias = " << totalDias << std::endl;
    for (auto &r : lista) {
	int mgTot = ((totalHoras / r.getPeriodo()) * r.getMg()) + r.getMg();
	int boxTot = (mgTot / r.getTotalCaixa());
	mgTot % r.getTotalCaixa() ? boxTot += 1 : boxTot += 0;
	std::cout << r.getNome() << " " << mgTot << " " << boxTot << std::endl;
    }
}

/**
 * @brief
 *
 * @param lista
 * @param caso
 */
void execAlg(std::vector<Remedio> &lista, int caso) {
    std::vector<int> mmcList;
    int mmcRet, totalDias = 0;
    for (auto &r : lista) mmcList.push_back(r.getPeriodo());
    mmcRet = mmc(mmcList);
    totalDias = mmcRet / 24;
    if (mmcRet % 24) totalDias++;
    print(lista, mmcRet, totalDias, caso);
}

int main(void) {
    // variaveis
    int q, n, d, i, c, caso = 1;
    std::string sRemedio;
    std::vector<Remedio> lista;
    std::cin >> q;
    while (q--) {
	std::cin >> n;
	while (n--) {
	    std::cin >> sRemedio >> d >> i >> c;
	    Remedio temp(sRemedio, d, i, c);
	    lista.push_back(temp);
	}
	std::sort(lista.begin(), lista.end());
	execAlg(lista, caso);
	caso++;
	lista.clear();
	std::cout << std::endl;
    }
    return 0;
}
