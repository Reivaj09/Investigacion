//
// Created by jason on 11/4/2021.
//

#include "Adaption_Little_Class2.h"

PaymentProcessorPaypal::PaymentProcessorPaypal(Paypal *Pp) : PP(Pp) {}

bool PaymentProcessorPaypal::pay() {
    return this->PP->charge() ? true : false;
}

PaymentProcessorPaypal::~PaymentProcessorPaypal() {}
