/************
MCPA STL CTF 2015
Grabbag Challenge 300_2

Kyle J. Smathers

*************/

#include <stdio.h>
//#include <thread>
//#include <chrono>
#include <string>
#include <iostream>
#include <istream>

using namespace std;


int main()
{
	string input;

	printf("Critical System Intrusion Detected!!!: \nEnabling Emergency S.H.I.E.L.D Protection Protocol...\n\n");
	//this_thread::sleep_for(seconds(1));
	printf("\nEnter manual override password now to prevent system total deep freeze! \n");

	getline(cin, input);


	char dword[172] = "A2sYoDduihadiuHAUDIhawudhAUIS7gSlOqcVSbSHdiulawhdVGhlIHRydXRoIGlzLi4uIEkgYW0gSXJvbiBtYW4uZmxhZzogNklUV04tMzRHUDUtVElRV00gICAqKipTVEVBTSBDT0RFKioqWUIDHA8ya7s8dHAHIUSHDiucha";
	//flag is base64 encoded: ZmxhZzogNklUV04tMzRHUDUtVElRV00gICAqKipTVEVBTSBDT0RFKioq

	int i = 0;
	for(i; i < input.length(); i++)
	{
	    
	  //printf("i: %i and %c\n",i, dword[i + 49]);
	  
	  if(input.at(i) != NULL && input.at(i) != dword[i + 89])
	    break;
  
	    
	}
	
	//made it to end
	if(i == 56 && input.length() == 56)
	{
	  printf("Phase 1 Access code accepted. Please enter phase 2 code into secondary system. System returning to normal.\n\n");
	  return 0;
	}
	else
	{
	  printf("User verification failed... System entering cryo-statis. Goodbye Tony.....\n");
	  return 1;
	}
}