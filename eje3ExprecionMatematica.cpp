#include <iostream>

int main()
{
    float a, b, res;
    std::cout << "Por favor ingresa un Numero: \n";
    std::cout << "valor a:";
    std::cin >> a;
    std::cout << "valor b:";
    std::cin >> b;
    res = a / b + 1;
    std::cout.precision(3);
    std::cout << "\nEste es tu Resultado" << res << "\n";
    system("pause");
    return 0;
}