//
// Created by Javier on 10/4/2021.
//
#ifndef UNTITLED1_BIG_CLASS_H
#define UNTITLED1_BIG_CLASS_H
#include <iostream>
#include <sstream>
#include "IPaymentProccess.h"


class Store{
protected:
    IPaymentProcess* paymentProcess;
public:
    Store();
    Store(IPaymentProcess *paymentProcess);

    bool buy();

    virtual ~Store();
};
#endif //UNTITLED1_BIG_CLASS_H