#include <iostream>
#include "Big_Class.h"
#include "Adaption_Little_Class1.h"
using std::cout;
using std::endl;
using std::string;

int main() {

    auto* BN = new BancoNacional();
    auto* BNServicios = new PaymentProcessorBancoNacional(BN);
    auto* Mini_Super = new Store(BNServicios);

    string answer = Mini_Super->buy() ? "Si" : "No";
    cout << answer <<endl;

    return 0;
}