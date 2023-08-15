# CourseProjectP2
CourseProject Programming 2
---------------------------------------------------------------------------------------

Course Project

You are to design a system to keep track of either a CD or DVD/Blu-ray collection. The program will only work exclusively with either CDs or DVDs/Blu-rays since some of the data is different. Which item your program will work with will be up to you. Each CD/DVD/Blu-ray in the collection will be represented as a class, so there will be one class which is the CD/DVD/Blu-ray. The CD class will be limited to five (5) songs, and the class will need to keep an array of five (5) strings for the song titles. It should also maintain the length of each song and the total length of the CD, as well as the artist's name. The DVD/Blu-ray class will have a data member for the title of the movie, the length of the movie, the year of the movie, and the names of two of the main actors in the movie. There will be a class that maintains the list of CD/DVDs/Blu-rays. This list can be limited to just 5 CD/DVD/Blu-rays and provide a method to add a CD/DVD/Blu-ray, remove a CD/DVD/Blu-ray, and update a CD/DVD/Blu-ray.

The program should provide a menu for the user to be able to add, delete, update, and display the information on a CD/DVD/Blu-ray. The Course Project must follow standard code formatting, as shown in the textbook code and examples. It must have a comment block at the top of the code file with a detailed description of what the program does. Functions must have a comment block with a detailed description of what it does.

The Course Project must follow standard code formatting, as shown in the textbook code and examples. It must include a comment block at the top of the code file with a detailed description of what the program does. Functions must also have a comment block with a detailed description of what it does.

<br>
Author: Cesar Roncancio <br>
Created: 10/23/2021
<br>
Revisions: 10/23/2021 I used aggregation to use objects type CD on the class List and create an array of CD objects, included the methods to add, remove and update in the List class, and in main I am using the "songs" List object to store every song, I used a switch to create a menu so the user can display their collection with option 4 and check the collection after they add, remove or update a CD. I created an extra method check to validate certain things like updating empty elements or adding on an already full slot. Additionally added totalLenght in List and did a for to get the total library time and show it.
