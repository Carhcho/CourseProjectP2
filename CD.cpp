#include "CD.h"

void CD::SetSongTitle(string t)
{
	songTitle = t;
}

void CD::SetSongLength(double l)
{
	songLength = l;
}

void CD::SetSongArtist(string a)
{
	songArtist = a;
}

string CD::GetSongTitle()
{
	return songTitle;
}

double CD::GetSongLength()
{
	return songLength;
}

string CD::GetSongArtist()
{
	return songArtist;
}

CD::CD()
{
	songTitle = "empty";
	songArtist = "empty";
	songLength = 0.0;
}





