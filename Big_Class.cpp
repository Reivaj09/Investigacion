//
// Created by javir on 10/4/2021.
//

#include "Big_Class.h"


Store::Store() {}
Store::Store(IPaymentProcess *paymentProcess) : paymentProcess(paymentProcess) {}

void Store::buy() {
    this->paymentProcess->pay();
}

Store::~Store() {
}







