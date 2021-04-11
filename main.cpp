#include <iostream>
#include "Big_Class.h"
#include "Adaption_Little_Class1.h"
using std::cout;
using std::endl;

int main() {

    BancoNacional* BN = new BancoNacional();
    PaymentProcessorBancoNacional* BNServicios = new PaymentProcessorBancoNacional(BN);
    Store* Mini_Super = new Store(BNServicios);

    std::string answer = Mini_Super->buy() ? "Si" : "No";
    cout << answer <<endl;

    return 0;
}
