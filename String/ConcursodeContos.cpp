// Copyright 2015 <Fábio da Silva Santana>

#include<string>
#include<iostream>

int main(int argc, char *argv[]) {
  int N, L, L_aux,  C, C_aux, Pages;
  std::string palavra;
  while (std::cin >> N >> L >> C) {
    L_aux = 0;
    C_aux = 0;
    Pages = 1;
    while (N--) {
      std::cin >> palavra;
      C_aux += palavra.size();
      if (C_aux > C) {
        C_aux = palavra.size();
        L_aux++;
        if (L_aux == L) {
          Pages++;
          L_aux = 0;
        }
      }
      C_aux += 1;
    }
    std::cout << Pages << std::endl;
  }
  return 0;
}
