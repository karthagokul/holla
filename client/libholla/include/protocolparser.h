#ifndef PROTOCOLPARSER_H
#define PROTOCOLPARSER_H

#include <iostream>

//for now tightly coupled with google protobuf
class ProtocolParser
{
  public:
    ProtocolParser();
    const Event* decode(const std::string &message);
    const std::string encode(const Event* e);
};


#endif // PROTOCOLPARSER_H
