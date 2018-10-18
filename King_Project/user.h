/*
 * User.h
 *
 *  Created on: Oct. 14, 2018
 *      Author: CHENX
 */
#include <string>
#include <vector>
#include "Event.h"
#include "Property.h"

#ifndef USER_H_
#define USER_H_

class User{
    public:
    User();

    const std::string& getEmail() const {
        return email;
    }

    void setEmail(const std::string& email = "") {
        this->email = email;
    }

    const std::vector<Event>& getEventList() const {
        return eventList;
    }

    void setEventList(const std::vector<Event>& eventList) {
        this->eventList = eventList;
    }

    const std::string& getLegalName() const {
        return legalName;
    }

    void setLegalName(const std::string& legalName = "") {
        this->legalName = legalName;
    }

    const std::string& getPassWord() const {
        return passWord;
    }

    void setPassWord(const std::string& passWord = "") {
        this->passWord = passWord;
    }

    const std::string& getPhone() const {
        return phone;
    }

    void setPhone(const std::string& phone = "") {
        this->phone = phone;
    }

    const std::string& getUserName() const {
        return userName;
    }

    void setUserName(const std::string& userName = "") {
        this->userName = userName;
    }

    private:
        std::string userName= "";
        std::string passWord= "";
        std::string legalName= "";
        std::string email= "";
        std::string phone= "";
        std::vector<Event> eventList;
};

class Tenant: public User{
    public:
    Tenant();

    const Property& getItsProperty() const {
        return itsProperty;
    }

    void setItsProperty(const Property& itsProperty) {
        this->itsProperty = itsProperty;
    }

    private:
    Property itsProperty;
};

class Landlord: public User{
    public:
    Landlord();

    const std::vector<Property>& getItsPropertyList() const {
        return itsPropertyList;
    }

    void setItsPropertyList(const std::vector<Property>& itsPropertyList) {
        this->itsPropertyList = itsPropertyList;
    }

    private:
        std::vector<Property> itsPropertyList;	//a vector contains it's property
};



#endif /* USER_H_ */
