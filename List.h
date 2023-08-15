#pragma once
#include <string>
#include <iostream>
#include "CD.h"
using namespace std;

class List
{
public:
	List() {
		songList = new CD[5];
	}
	CD* songList;
	void addSong(int number, string title, string artist, double lenght);
	void removeSong(int n);
	void updateSong(int number, string title, string artist, double lenght);
	int check(int number);
	double totalLenght();
};