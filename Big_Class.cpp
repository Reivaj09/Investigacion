//
// Created by Javier on 10/4/2021.
//

#include "Big_Class.h"


Store::Store() = default ;
Store::Store(IPaymentProcess *paymentProcess) : paymentProcess(paymentProcess) {}

bool Store::buy() {
    return this->paymentProcess->pay() ? true : false;
}

Store::~Store() {
}







