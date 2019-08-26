#include "holla.h"
#include "connectionpool.h"

Holla::Holla()
{
  conMan =new ConnectionPool();
}

Holla::~Holla()
{
  delete conMan;
}
