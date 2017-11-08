#ifndef STUDENTMANAGEMENT_
#define STUDENTMANAGEMENT_
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define Max 1000
void StudentListing();  // See students
void StudentCreating();  // Create a new student
void DayCreating(); // Day creating aka valid from
void DayExpired();  // Expired day
void StudentDeclaration(); // Declares the default information for student
void StudentEditing(int number);  // Edit student with their position
void ESSubMenu(int number); // EditStudent SubMenu
void SeeLocalChanges(int number); // See student infomation which has been changed
void SearchByID(char id[25]);   // Search a student by their ID
void SearchByName(char name[25]);   // Search a student by their name
void StudentDeleting(int number); // Delete a student with their position
#endif // !STUDENTMANAGEMENT_
	
