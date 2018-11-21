/*
 * Event.h
 *
 *  Created on: Oct. 14, 2018
 *      Author: CHENX
 */
#include <string>
#include <ctime>

#ifndef EVENT_H_
#define EVENT_H_
class Event{
    public:
    Event();

    const std::string& getEventInfo() const {
        return eventInfo;
    }

    void setEventInfo(const std::string& eventInfo = "") {
        this->eventInfo = eventInfo;
    }

    const std::string& getEventTitle() const {
        return eventTitle;
    }

    void setEventTitle(const std::string& eventTitle = "") {
        this->eventTitle = eventTitle;
    }

    const std::string& getEventType() const {
        return eventType;
    }

    void setEventType(const std::string& eventType = "") {
        this->eventType = eventType;
    }

    const tm& getExpiredTime() const {
        return expiredTime;
    }

    void setExpiredTime(const tm& expiredTime) {
        this->expiredTime = expiredTime;
    }

    const tm& getPostTime() const {
        return postTime;
    }

    void setPostTime(const tm& postTime) {
        this->postTime = postTime;
    }

    bool isStatus() const {
        return status;
    }

    void setStatus(bool status = false) {
        this->status = status;
    }

    void setPostTimeAsCurrentTime(){
        time_t now = time(0);
        tm *temp = gmtime(&now);
        this->postTime = *temp;
    }

    //return UTC format of time in string type
    std::string getPostTimeString(){
        tm temp = this->postTime;
        char *buffer;
        buffer = asctime(&temp);
        std::string strBuffer(buffer);
        return strBuffer;
    }

    //return UTC format of time in string type
        std::string getExpiredTimeString(){
            tm temp = this->expiredTime;
            char *buffer;
            buffer = asctime(&temp);
            std::string strBuffer(buffer);
            return strBuffer;
        }

    private:
    std::string eventType= "";
    std::string eventTitle= "";
    std::string eventInfo= "";
    bool status = false;
    tm postTime;
    tm expiredTime;


};




#endif /* EVENT_H_ */
