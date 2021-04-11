//
// Created by javir on 10/4/2021.
//

#include "Big_Class.h"


Store::Store() {}
Store::Store(IPaymentProcess *paymentProcess) : paymentProcess(paymentProcess) {}

string Store::toString() {
    stringstream s;
    s << "HELLO WORD" << endl;
    return s.str();
}

void Store::buy() {
    this->paymentProcess->pay();
}

Store::~Store() {
}







