#include <iostream>

int main(){
    float n1,n2,suma,resta,mul,div;
    std::cout<<"Ingresa un valor = ";
    std::cin>>n1;
    std::cout<<"Ingresa el siguiente numero = ";
    std::cin>>n2;
    suma=n1+n2;
    resta=n1-n2;
    mul=n1*n2;
    div=n1/n2;
    std::cout<<"El resultado de la suma="<<suma<<"\n";
    std::cout<<"El resultado de la resta="<<resta<<"\n";
    std::cout<<"El resultado de la multiplicacion="<<mul<<"\n";
    std::cout<<"El resultado de la divicion="<<div<<"\n";


    system("pause");
    return 0;
}