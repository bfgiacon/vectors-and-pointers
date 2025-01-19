#include <cctype>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

std::vector<std::shared_ptr<int>>
criarPonteiro(std::vector<int> vector) {                                // a função de criação de vetor de ponteiros, recebe um vetor de int
  std::vector<std::shared_ptr<int>> ptr_v;                              // crio um vetor de ponteiros vazio
  for (auto i : vector) {                                               // para cada elemento do vetor v
    ptr_v.push_back(std::make_shared<int>(i));                          // criarei um ponteiro (make shared) para cada elmento e o colocarei no vetor de ponteiros
  }
  return ptr_v;                                                         // retorno o vetor de ponteiros
}

void exibirValores(std::vector<std::shared_ptr<int>> vetorPonteiro) {   // uma função para exibir os valores do vetor de ponteiros, pega como parametro um vetor de ponteiros 
  for (auto i : vetorPonteiro) {                                        // para cada elemento do vetor de ponteiros
    std::cout << *i << std::endl;                                       // exibe o conteudo do ponteiro
  }
}

void dobraValores(std::vector<std::shared_ptr<int>> vetorPonteiro) {    // uma função para multiplicar os valores do vetor de ponteiros, pega como parametro um vetor de ponteiros 
  for (auto i : vetorPonteiro) {                                        // para cada elemento do vetor de ponteiros
    *i = *i * 2;                                                        // agora o conteudo vai ser o conteudo multiplicado por 2
  }
}

int main() {

  std::vector<int> v = {1, 2, 3, 4, 5};                                  // cria um vetor de int

  auto ptr_v = criarPonteiro(v);                                         // chama a função de criar vetor de ponteiros, passando o vetor de ponteiros para uma variavel
  exibirValores(ptr_v);                                                  // chama a função de exibir valores, passando o vetor de ponteiros
  std::cout << "--------------" << std::endl;
  dobraValores(ptr_v);                                                   // chama a função de dobrar valores, passando o vetor de ponteiros
  exibirValores(ptr_v);
}