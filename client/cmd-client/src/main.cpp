#include "app.h"
int main(int argc, char** argv)
{
  HollaApp app;
  //Optimize ? in better way ?
  int ret=-1;
  if(app.exec(argc,argv))
  {
    ret=0;
  }
  return ret;
}

