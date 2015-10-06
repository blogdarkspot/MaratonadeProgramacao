#include <vector>
#include <iostream>
#include <functional>
#include <algorithm>

typedef struct edge {
    int x;
    int y;
    int value;
} edge;

class UnionFindCustom {
   private:
    std::vector<int> sizeTree;
    std::vector<int> elements;
    int totalValue;

   public:
    UnionFindCustom(int iSize) {
	sizeTree.resize(iSize);
	elements.resize(iSize);

	for (int i = 0; i < iSize; i++) {
	    elements[i] = i;
	    sizeTree[i] = 1;
	}

	totalValue = 0;
    }

    int getRoot(int iElement) {
	while (iElement != elements[iElement]) {
	    iElement = elements[elements[iElement]];
	}
	return iElement;
    }

    void addElement(const edge &element) {
	int rootX = getRoot(element.x);
	int rootY = getRoot(element.y);
	if (rootX != rootY) {
	    if (sizeTree[rootX] >= sizeTree[rootY]) {
		elements[rootY] = rootX;
		sizeTree[rootX] += sizeTree[rootY];
	    } else {
		elements[rootX] = rootY;
		sizeTree[rootY] += sizeTree[rootX];
	    }
	    totalValue += element.value;
	}
    }

    int getTotal() const { return totalValue; }
};

int main() {
    std::vector<edge> edges;
    int m, n, total;
    edge temp;

    while (std::cin >> m >> n && m != 0 && n != 0) {
	edges.clear();
	total = 0;
	UnionFindCustom ufc(m);

	while (n--) {
	    std::cin >> temp.x >> temp.y >> temp.value;
	    edges.push_back(temp);
	}

	std::sort(edges.begin(), edges.end(), [](const edge &f, const edge &s) {
	    return f.value < s.value;
	});
	for (auto &e : edges) {
		total += e.value;
	    ufc.addElement(e);
	}
	std::cout << total -  ufc.getTotal() << std::endl;
    }

    return 0;
}
