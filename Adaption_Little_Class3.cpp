#include "Adaption_Little_Class3.h"

PaymentProcessorBancoProMerica::PaymentProcessorBancoProMerica(BancoProMerica* bp) : BP(bp) {}

bool PaymentProcessorBancoProMerica::pay() {
    return this->BN->charge() ? true : false;
}

PaymentProcessorBancoProMerical::~PaymentProcessorBancoProMerica() {}
