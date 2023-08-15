#pragma once
#include <string>
#include <iostream>
using namespace std;

class CD
{
public:
	void SetSongTitle(string t);
	void SetSongLength(double l);
	void SetSongArtist(string a);
	string GetSongTitle();
	double GetSongLength();
	string GetSongArtist();
	string songTitle;
	double songLength;
	string songArtist;
	CD();
	
};

