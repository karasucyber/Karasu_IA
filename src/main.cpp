#include "core/assistant.h"
#include <iostream>

int main() {
    Assistant assistente;
    std::string pergunta;

    std::cout << "Olá Sr Kauã ! o que o sr precisa ?:\n";
    while (true) {
        std::cout << "> ";
        std::getline(std::cin, pergunta);

        if (pergunta == "sair") break;
        std::cout << assistente.ask(pergunta) << std::endl;
    }
    return 0;
}

