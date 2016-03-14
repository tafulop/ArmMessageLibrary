/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   JointData.h
 * Author: fulop
 *
 * Created on March 14, 2016, 4:46 PM
 */

#ifndef JOINTDATA_H
#define JOINTDATA_H

#include <iostream>

#include "ArmMessage.h"

class JointData : public ArmMessage{
    
public:
    
    /**
     * Invokable constructor.
     * 
     * @param jointId
     * @param angle
     */
    JointData(std::string jointId, float angle)
        :   ArmMessage(JOINT_DATA),
            jointId (jointId),
            angle   (angle)
    {}

    /**
     * Copy constructor.
     * @param orig
     */
    JointData(const JointData& orig);
    
    /**
     * Destructor.
     */
    virtual ~JointData();
    
    /**
     * Returns the ID of the Joint whom the message belongs.
     * @return 
     */
    std::string getJointId();
    
    /**
     * Returns the angle from the message.
     * @return 
     */
    float getAngle();
    
    
private:
    
    /* To store joint ID */
    std::string jointId;
    
    /* Store angle */
    float angle;
    
    /**
     * Default constructor.
     */
    JointData();
};

#endif /* JOINTDATA_H */

