#ifndef _HOLLA_APP
#define _HOLLA_APP
#include <iostream>

class Holla;
class HollaApp
{
  public:
  HollaApp();
  bool exec(int argc,char **argv);
  bool routeCommands(const std::string &command);
  ~HollaApp();

  private:
  Holla *hollaPController;
};

#endif
