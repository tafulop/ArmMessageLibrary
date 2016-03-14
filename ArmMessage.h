/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArmMessage.h
 * Author: fulop
 *
 * Created on March 14, 2016, 4:37 PM
 */

#ifndef ARMMESSAGE_H
#define ARMMESSAGE_H

class ArmMessage {
public:
    
    // Stores the possible message types
    enum ArmMessageType{JOINT_DATA};
    
    /**
     * Creates an arm message with a specified type.
     * @param t
     */
    ArmMessage(ArmMessageType t);
   
    
    /**
     * Copy constructor.
     * @param orig
     */
    ArmMessage(const ArmMessage& orig);
    
    
    /**
     * Destructor.
     */  
    virtual ~ArmMessage();
    
    
protected:
    
    /**
     * Default constructor.
     */
    ArmMessage();
    
    
private:
    
    ArmMessageType messageType;
    
    

};

#endif /* ARMMESSAGE_H */

