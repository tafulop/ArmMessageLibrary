/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArmMessage.cpp
 * Author: fulop
 * 
 * Created on March 14, 2016, 4:37 PM
 */

#include "ArmMessage.h"


/* default constructor */
ArmMessage::ArmMessage() {
}

/* copy constructor */
ArmMessage::ArmMessage(const ArmMessage& orig) {
}

/* destructor */
ArmMessage::~ArmMessage() {
}

/* Parameterized constructor */
ArmMessage::ArmMessage(ArmMessageType t){
    this->messageType = t;
}