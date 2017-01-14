/************
MCPA STL CTF 2015
Part 3 of pa500

Kyle J. Smathers

*************/


#include <stdio.h>
//#include <thread>
//#include <chrono>
#include <string>
#include <iostream>
#include <istream>

using namespace std;
//using namespace chrono;

//not used, just extra noise in analysis
static string one = "a";
static string two = "b";
static string three = "c";
static string four = "d";
static string five = "e";
static string six = "f";
static string seven = "g";
static string eight = "h";
static string nine = "i";
static string ten = "j";
static string eleven = "k";
static string twelve = "l";
static string thirteen = "m";
static string fourteen = "n";

char charlist[55] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!";

bool checkPW(char, int);

int main()
{
	string input;

	printf("Tony, is that you....? I've been trapped down in your workshop for 3 days now!!\nJarvis wont let me out without the \"password\" he says??? \nHe wont even let me make a call!!  \n\n");
	//this_thread::sleep_for(seconds(1));
	printf("\nSo what is the password! I've about had it with this stupid A.I.!!!!  \n\n");

	getline(cin, input);


	//iLOVEpepperPoTTS! = 8-37-40-47-30-15-4-15-15-4-17-41-14-45-45-44-52

	
	if (input.at(0) != NULL && checkPW(input.at(0), 8))
		if (input.at(1) != NULL && checkPW(input.at(1), 37))
			if (input.at(2) != NULL && checkPW(input.at(2), 40))
				if (input.at(3) != NULL && checkPW(input.at(3), 47))
					if (input.at(4) != NULL && checkPW(input.at(4), 30))
						if (input.at(5) != NULL && checkPW(input.at(5), 15))
							if (input.at(6) != NULL && checkPW(input.at(6), 4))
								if (input.at(7) != NULL && checkPW(input.at(7), 15))
									if (input.at(8) != NULL && checkPW(input.at(8), 15))
										if (input.at(9) != NULL && checkPW(input.at(9), 4))
											if (input.at(10) != NULL && checkPW(input.at(10), 17))
												if (input.at(11) != NULL && checkPW(input.at(11), 41))
													if (input.at(12) != NULL && checkPW(input.at(12), 14))
														if (input.at(13) != NULL && checkPW(input.at(13), 45))
															if (input.at(14) != NULL && checkPW(input.at(14), 45))
																if (input.at(15) != NULL && checkPW(input.at(15), 44))
																	if (input.at(16) != NULL && checkPW(input.at(16), 52))
																	{
																		printf("\nFINALLY!........Oh is that so...Well...Thanks for telling me.\n\n");
																		system("pause");
																		return 0;
																	}
	
	printf("\n(nothing happens)\n");
	system("pause");
	return 0;
}


//GB 2B uses function call to check input
bool checkPW(char inputChar, int charListIndex)
{

	if (inputChar == charlist[charListIndex])
		return true;
	else
		return false;
}