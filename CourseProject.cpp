/******************************************

Course Project

You are to design a system to keep track of either a CD or DVD/Blu-ray collection. The program will only work exclusively with either CDs or DVDs/Blu-rays since some of the data is different. Which item your program will work with will be up to you. Each CD/DVD/Blu-ray in the collection will be represented as a class, so there will be one class that is the CD/DVD/Blu-ray. The CD class will be limited to five (5) songs, and the class will need to keep an array of five (5) strings for the song titles. It should also maintain the length of each song and the total length of the CD, as well as the artist name. The DVD/Blu-ray class will have a data member for the title of the movie, length of the movie, the year of the movie, and for the names of two of the main actors in the movie. There will be a class that maintains the list of CD/DVDs/Blu-rays. This list can be limited to just 5 CD/DVD/Blu-rays and provide a method to add a CD/DVD/Blu-ray, to remove a CD/DVD/Blu-ray, and to update a CD/DVD/Blu-ray.

The program should provide a menu for the user to be able to add, delete, update and display the information in a CD/DVD/Blu-ray. The Course Project must follow standard code formatting, as shown in the textbook code and examples. It must have a comment block at the top of the code file with a detailed description of what the program does. Functions must have a comment block with a detailed description of what it does.

The Course Project must follow standard code formatting, as shown in the textbook code and examples. It must include a comment block at the top of the code file with a detailed description of what the program does. Functions must also have a comment block with a detailed description of what it does.
Author: Cesar Roncancio

Created : 10/23/2021

Revisions : 10/23/2021 I used aggregation to use objects type CD on the class List and create an array of CD objects, included the methods to add, remove and update in the List class, and in main I am using the "songs" List object to store every song, I used a switch to create a menu so the user can display their collection with option 4 and check the collection after they add, remove or update a CD. I created an extra method check to validate certain things like updating empty elements or adding on an already full slot. Additionally added totalLenght in List and did a for to get the total library time and show it.
******************************************/
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