#ifndef EVENT_H
#define EVENT_H

class Event
{
  public:
    virtual void error()=0;

    // Time Stamp
};

class StatusEvent: public Event
{
  public:
    virtual void profilePicChanged()=0;
};

class MessageEvent:public Event
{

};

class BuddyMessageEvent:public MessageEvent
{

};

class GroupMessageEvent:public MessageEvent
{

};

class EventFactory
{
  public:
    Event();
};

#endif // EVENT_H
