/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   JointData.cpp
 * Author: fulop
 * 
 * Created on March 14, 2016, 4:46 PM
 */

#include "JointData.h"

JointData::JointData() {
}

JointData::JointData(const JointData& orig) {
}

JointData::~JointData() {
}

std::string JointData::getJointId(){
    return this->jointId;
}

float JointData::getAngle(){
    return this->angle;
}