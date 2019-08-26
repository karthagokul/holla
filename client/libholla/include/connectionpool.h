#ifndef CONNECTIONPOOL_H
#define CONNECTIONPOOL_H

#define _ENABLE_MQTT_TRANSPORT_

//to be fine tuned like below to encapuslate the network layer
#ifdef _ENABLE_MQTT_TRANSPORT_
class MQTTClient;
#endif

class ProtocolParser;

class ConnectionPool
{
  public:
    ConnectionPool();
    ~ConnectionPool();
    bool init();

  private:
    MQTTClient *channel;
    ProtocolParser *parser;

};

#endif // CONNECTIONPOOL_H
