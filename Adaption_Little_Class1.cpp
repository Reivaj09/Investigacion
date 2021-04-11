//
// Created by Javier on 10/4/2021.
//

#include "Adaption_Little_Class1.h"

PaymentProcessorBancoNacional::PaymentProcessorBancoNacional(BancoNacional *bn) : BN(bn) {}

void PaymentProcessorBancoNacional::pay() {
    this->BN->charge();
}

PaymentProcessorBancoNacional::~PaymentProcessorBancoNacional() {}
