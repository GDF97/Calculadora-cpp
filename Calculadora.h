#include <iostream>
#include <cmath>
#include <stdlib.h>

int Somar(int x, int y){
    return x+y;
}

int Sub(int x, int y){
    return x-y;
}

int Mult(int x, int y){
    return x*y;
}

int Dividir(int x, int y){
    return x/y;
}

int main() {
    // Write C++ code here
        int opc, x, y;
    
    do{
        std::cout << "1-Somar\n2-Subtrair\n3-Multiplicar\n4-Dividir\n0-Sair\nEscolha alguma das opções acima: ";
        std::cin >> opc;
        if(opc == 1){
            std::cout << "Digite o primeiro numero: ";
            std::cin >> x;
            std::cout << "Digite o segundo numero: ";
            std::cin >> y;
            std::cout << x << "+" << y << "=" << Somar(x,y) << std::endl;
            std::cout << "\n";
        }
        else if(opc == 2){
            std::cout << "Digite o primeiro numero: ";
            std::cin >> x;
            std::cout << "Digite o segundo numero: ";
            std::cin >> y;
            std::cout << x << "-" << y << "=" << Sub(x,y) << std::endl;
            std::cout << "\n";
        }
        else if(opc == 3){
            std::cout << "Digite o primeiro numero: ";
            std::cin >> x;
            std::cout << "Digite o segundo numero: ";
            std::cin >> y;
            std::cout << x << "x" << y << "=" << Mult(x,y) << std::endl;
            std::cout << "\n";
        }
        else if(opc == 4){
            std::cout << "Digite o primeiro numero: ";
            std::cin >> x;
            std::cout << "Digite o segundo numero: ";
            std::cin >> y;
            std::cout << x << "/" << y << "=" << Dividir(x,y) << std::endl;
            std::cout << "\n";
        }
        else if(opc == 0){
            std::cout << "Você escolheu sair";
        }
        else{
            std::cout << "Selecione uma opção válida!!\n";
            std::cout << "\n";
        }
    } while(opc != 0);
    
    return 0;
}