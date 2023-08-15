#include "List.h"
#include "CD.h"

void List::addSong(int number, string title, string artist, double lenght)
{
	if (songList[number].GetSongTitle() == "empty") {
		songList[number].SetSongTitle(title);
		songList[number].SetSongArtist(artist);
		songList[number].SetSongLength(lenght);
	}
	else {
		cout << "This slot is full try a different one." << endl;
	}
}

void List::removeSong(int n)
{
	songList[n].SetSongTitle("empty");
	songList[n].SetSongArtist("empty");
	songList[n].SetSongLength(0.0);
}

void List::updateSong(int number, string title, string artist, double lenght)
{
	songList[number].SetSongTitle(title);
	songList[number].SetSongArtist(artist);
	songList[number].SetSongLength(lenght);
}

int List::check(int number)
{
	if (songList[number].GetSongTitle() != "empty") {
		return 1;
	}
	else {
		return 0;
	}
}

double List::totalLenght()
{
	double total = 0.0;
	for (int i = 0; i < 5; i++) {
		total += songList[i].GetSongLength();
	}
	return total;
}


