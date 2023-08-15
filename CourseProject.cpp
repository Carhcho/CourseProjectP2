#include <iostream>
#include "CD.h"
#include "List.h"
using namespace std;

ostream& operator<<(ostream& os, const CD& dt)
{
	os << "Title: " << dt.songTitle << " Artist: " << dt.songArtist << " Length: " << dt.songLength;
	return os;
}

int main() {
	string title, artist, newTitle, newArtist;
	double lenght, newLenght;
	int number, option = 0, bad =2;
	List songs;
	do {
		cout << endl;
		cout << "1. Add a new song to your collection" << endl;
		cout << "2. Remove a song from your collection" << endl;
		cout << "3. Update a song in your collection" << endl;
		cout << "4. Display your collection" << endl;
		cout << "5. Display the total lenght of all your music" << endl;
		cout << "6. Quit" << endl;
		cout << " Enter an option: ";
		cin >> option;

		switch (option)
		{
		case 1: //adding
			cout << "Choose a slot to add a song: " << endl;
			cin >> number;
			bad = songs.check(number);
				
			if ( bad == 1) {
				cout << "This slot is full try a different one." << endl;
				break;
			}
			
			cout << "Enter new title: " << endl;
			cin >> newTitle;
			cout << "Enter new artist: " << endl;
			cin >> newArtist;
			cout << "Enter new lenght: " << endl;
			cin >> newLenght;
			songs.addSong(number , newTitle, newArtist, newLenght);
			cout << "New song added: " << endl;
			cout << songs.songList[number] << endl;
			break;

		case 2: //removing
			cout << "Choose a slot to remove a song: " << endl;
			cin >> number;
			songs.removeSong(number);
			cout << songs.songList[number] << endl;
			break;

		case 3: //updating
			cout << "Choose a slot to update the song: " << endl;
			cin >> number;
			bad = songs.check(number);
			if (bad == 0) {
				cout << "slot empty, nothing to update. try again." << endl;
				break;
			}
			cout << "Enter new title: " << endl;
			cin >> newTitle;
			cout << "Enter new artist: " << endl;
			cin >> newArtist;
			cout << "Enter new lenght: " << endl;
			cin >> newLenght;
			songs.updateSong(number, newTitle, newArtist, newLenght);
			cout << songs.songList[number] << endl;
			break;

		case 4:
			for (int i = 0; i < 5; i++) {
				cout << i << "  " << songs.songList[i] << endl;
			}
			break;

		case 5:
			cout << "Your collection's total length in minutes is: ";
			cout << songs.totalLenght() << endl;
			break;

		case 6:
			cout << "Good Bye!";

		default:
			cout << "option not available, try again." << endl;
			break;
		}
	} while (option != 6);	
}
