#include "app.h"


HollaApp::HollaApp()
{

}

bool HollaApp::exec(int argc,char **argv)
{
  std::string input;

  //provide an event loop for testing
  while(input!="exit")
  {
      std::cin >> input;
      if(routeCommands(input)==false)
      {
        return false;
      }
  }

  return true;
}

bool HollaApp::routeCommands(const std::string &command)
{
  std::cout<<command<<std::endl;
  return true;
}

HollaApp::~HollaApp()
{

}


/* Command line Parsing */
//#include <string>
//#include <iostream>
//#include <algorithm>
//#include "tclap/CmdLine.h"

//using namespace TCLAP
//// Wrap everything in a try block.  Do this every time,
//// because exceptions will be thrown for problems.
//try {
//  // Define the command line object.
//  CmdLine cmd("Command description message", ' ', "0.9");

//  // Define a command argument and add it to the command line.
//  ValueArg<string> cmdArg("c","command","Command to Operate",true,"login","string");
//  cmd.add( cmdArg );

//  // Define a switch and add it to the command line.
//  SwitchArg reverseSwitch("r","reverse","Print name backwards", false);
//  cmd.add( reverseSwitch );

//  // Parse the args.
//  cmd.parse( argc, argv );

//  // Get the value parsed by each arg.
//  string name = cmdArg.getValue();
//  bool reverseName = reverseSwitch.getValue();

//  // Do what you intend too...
//  if ( reverseName )
//  {
//    reverse(name.begin(),name.end());
//    cout << "My name (spelled backwards) is: " << name << endl;
//  }
//  else
//    cout << "My name is: " << name << endl;


//} catch (ArgException &e)  // catch any exceptions
//{ cerr << "error: " << e.error() << " for arg " << e.argId() << endl; }
