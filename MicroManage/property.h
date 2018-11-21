/*
 * Property.h
 *
 *  Created on: Oct. 14, 2018
 *      Author: CHENX
 */
#include <string>

#ifndef PROPERTY_H_
#define PROPERTY_H_

class Property{
    public:
    Property();

    const std::string& getAddress() const {
        return address;
    }

    void setAddress(const std::string& address = "") {
        this->address = address;
    }

    void* getItsLandlord() const {
        return itsLandlord;
    }

    void setItsLandlord(void* itsLandlord) {
        this->itsLandlord = itsLandlord;
    }

    void* getItsTenantList() const {
        return itsTenantList;
    }

    void setItsTenantList(void* itsTenantList) {
        this->itsTenantList = itsTenantList;
    }

    const std::string& getPropertyId() const {
        return propertyId;
    }

    void setPropertyId(const std::string& propertyId = "") {
        this->propertyId = propertyId;
    }

    private:
        std::string propertyId = "";
        std::string address = "";
        void* itsTenantList;	//point to a vector contains it's tenant list
        void* itsLandlord;		//point to it's landlord
};



#endif /* PROPERTY_H_ */
