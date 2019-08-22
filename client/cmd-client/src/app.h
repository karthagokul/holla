#ifndef _HOLLA_APP
#define _HOLLA_APP
#include <iostream>

class HollaApp
{
  public:
  HollaApp();
  bool exec(int argc,char **argv);
  bool routeCommands(const std::string &command);
  ~HollaApp();
};

#endif
