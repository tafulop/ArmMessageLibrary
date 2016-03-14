/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   JointDataTest.cpp
 * Author: fulop
 *
 * Created on Mar 14, 2016, 5:07:32 PM
 */

#include "JointDataTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION(JointDataTest);

JointDataTest::JointDataTest() {
}

JointDataTest::~JointDataTest() {
}

void JointDataTest::setUp() {
}

void JointDataTest::tearDown() {
}

void JointDataTest::instantiationTest() {
   
    std::string id = "id1234";
    float ang = 1232.023;
    bool success = true;
    
    JointData j = JointData(id, ang);
    
    if(j.getAngle() != ang)success = false;
    std::cout << "Step 1. Angle: " << j.getAngle() << std::endl;
    
    if(j.getJointId() != id)success = false;
    std::cout << "Step 2. ID: " << j.getJointId() << std::endl;
    
    CPPUNIT_ASSERT(success);
}



