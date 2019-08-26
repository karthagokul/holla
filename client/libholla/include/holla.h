#ifndef _HOLLA
#define _HOLLA

/**
  High Level Features

  **/

//Presentation Controller

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


class HollaEventObserver
{
  public:
    virtual void BuddyMessageEventReceived(const BuddyMessageEvent &)=0;
};

class HollaEventManager
{
  private:
    bool dispatchToClient(); //Send to client
  public:
    bool dispatchToServer(); //post to server
    bool registerMe(HollaEventManager *aObserver);

  private:
};


class Holla
{
  public:
    Holla();
    void onlogin();
    ~Holla();

};

#endif
