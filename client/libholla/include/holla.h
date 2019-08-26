#ifndef _HOLLA
#define _HOLLA

/**
  High Level Features

  **/

//Presentation Controller



/*
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
};*/

class ConnectionPool;
class Holla
{
  public:
    Holla();
    void onlogin();
    ~Holla();
private:
    ConnectionPool *conMan;
};

#endif
