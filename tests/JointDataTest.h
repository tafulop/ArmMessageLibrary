/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   JointDataTest.h
 * Author: fulop
 *
 * Created on Mar 14, 2016, 5:07:32 PM
 */

#ifndef JOINTDATATEST_H
#define JOINTDATATEST_H

#include <cppunit/extensions/HelperMacros.h>

#include "../JointData.h"
#include <iostream>

class JointDataTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(JointDataTest);

    CPPUNIT_TEST(instantiationTest);

    CPPUNIT_TEST_SUITE_END();

public:
    JointDataTest();
    virtual ~JointDataTest();
    void setUp();
    void tearDown();

private:
    
    void instantiationTest();
    
};

#endif /* JOINTDATATEST_H */

