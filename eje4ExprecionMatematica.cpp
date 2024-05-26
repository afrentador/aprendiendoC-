#include <iostream>

int main(){
    float a, b, c, d, e, f, result;
    std::cout<<"Humano ingresa los valores numericos a continuacio\n";
    std::cout<<"Valor a: ";std::cin>>a;
    std::cout<<"Valor b: ";std::cin>>b;
    std::cout<<"Valor c: ";std::cin>>c;
    std::cout<<"Valor d: ";std::cin>>d;
    std::cout<<"Valor e: ";std::cin>>e;
    std::cout<<"Valor f: ";std::cin>>f;
    result= (a+(b/c)) / (d+(e/f));

    std::cout<<"\nHumano aqui tienes el resultado: "<<result<<"\n";

    system("pause");
    return 0;
}