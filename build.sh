#!/bin/bash
#the following script builds the bankApp application
#the application demonstrates the use of object oriented programming by storing the functions and objects
#relevant to the application in a class to be called from
#once built, the app can be invoked by ./bankApp without any command line arguments

echo Building bankApp..
g++ bankApp.cpp bankAccount.cpp -o bankApp
echo Building complete.
