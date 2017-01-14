/************
MCPA STL CTF 2015
Grabbag Challenge 200

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
	printf("Can you pass the challenge!\n\n");
	printf("++My priority is to get the Iron Man weapon turned over to the people of the United States of America. \n\n--Well, you can forget it. I am Iron Man. The suit and I are one. To turn over the Iron Man suit would be to turn over myself, which is tantamount to indentured servitude or prostitution, depending on what state you're in. You can't have it. I'm your nuclear deterrent. It's working. We're safe. America is secure. You want my property? You can't have it. But I did you a big favor.\n\n++And that favor is....?\n\n");

	getline(cin, input);

	int i = 0;

	//flag below
	if(!input.compare("--I have successfully privatized world peace!")){ printf("\nOK\n");}
	else { printf("\nTry again...\n"); }

}

