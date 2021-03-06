/*
  	Copyright™ Hieu Hoang Minh. The Library Manager Project.
  	See source code on https://github.com/hyperion0201/LibraryManager
    Free for personal and commercial use under the MIT license .
	2017. Ho Chi Minh University of Science.
*/
#ifndef BOOKCOMPONENTS_
#define BOOKCOMPONENTS_
#define Max 1000
// Initialising arrays stored book informations
extern char ISBN[Max][30], BookName[Max][30], Author[Max][25], Producer[Max][30], YearProducing[Max][25],
Genre[Max][25];
extern char borrowName[Max][25];
extern int Amount[Max];
extern int TotalBook;
extern int readybook;
extern int Cost[Max];
// Init book in library counter
extern int bookcounter;
#endif // !BOOKCOMPONENTS_
