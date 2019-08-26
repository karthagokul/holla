#include "connectionpool.h"
#include "mqttclient.h"

ConnectionPool::ConnectionPool()
{
  mosqpp::lib_init();
  //create an instance of router
  //create an instance of event manager
}

ConnectionPool::~ConnectionPool()
{
  mosqpp::lib_cleanup();
  //cleanup please
}

bool ConnectionPool::init()
{

  return true;
}
