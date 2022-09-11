/* 
 * library.h
 * 
 * This file contains the class outlines for the various media types of the library.
 * The base class is media, with the three derived classes beign Book, Movie, and Music.
 * Each has a set of info special to the class, and a set of functions.
 * These are the classes that will be stored in the library list.
 *
 */

#include <iostream>
#include <string>
#include <ctime>

using namespace std;



//Media base class
 
class media 						// Base class of all media
{
	private:
		
		string title;				// Title of media (Book, movie)
		int quantity;				// Current quantity in Library
		
	public:
		
		media(){}					// Constructor
		media(string inTitle, int inQuantity)
		{
			setTitle(inTitle); setQuantity(inQuantity);
		}
		~media(){}					// Deconstructor

		virtual void setTitle(string inTitle){ title = inTitle; }		// Set functions
		virtual void setQuantity(int inQuantity){ quantity = inQuantity; }

		virtual string getTitle(){ return title; }						// Get functions
		virtual int getQuantity(){ return quantity; }

		virtual void print()
		{
			cout << "\tTitle: " << this->title << endl;
			cout << "\tQuantity: " << this->quantity << endl;
		}	
};



// Book derived class

class book : public media			
{
	private:
		string book_no;					// ISBN of book (International Standard Book Number)
		string author;				// Author's name
	public:
		book(){}					// Constructor
		book(string inTitle, int inQuantity, string inBN, string inAuthor)
		{
			setTitle(inTitle); setQuantity(inQuantity);
			setISBN(inBN); setAuthor(inAuthor);
		}
		~book(){}					// Deconstructor

		void setISBN(string inBN){ book_no = inBN; }			// Set functions 
		void setAuthor(string inAuthor){ author = inAuthor; }

		string getISBN(){ return book_no; }						// Get functions
		string getAuthor(){ return author; }

		void print()										// Print data
		{
			cout << "\n\tTitle: " << this->getTitle() << endl;
			cout << "\tQuantity: " << this->getQuantity() << endl;
			cout << "\tAuthor: " << this->author << endl;
			cout << "\tISBN: " << this->book_no << endl;
		}	
};



// Movie derived class

class movie : public media			// Derived movie from media as sub-class
{
	private:
		string director;			// Director of movie
		int releaseYear;			// Year of release
	public:
		movie(){}					// Constructor
		movie(string inTitle, int inQuantity, string inDirector, int inReleaseYear)
		{
			setTitle(inTitle); setQuantity(inQuantity);
			setDirector(inDirector); setReleaseYear(inReleaseYear);
		}
		~movie(){}					// Deconstructor
		
		void setDirector(string inDirector){ director = inDirector; }				// Set functions 
		void setReleaseYear(int inReleaseYear){ releaseYear = inReleaseYear; }
		string getDirector(){ return director; }										// Get functions
		int getReleaseYear(){ return releaseYear; }
		
		void print()			// Print data
		{
			cout << "\n\tTitle: " << this->getTitle() << endl;
			cout << "\tQuantity: " << this->getQuantity() << endl;
			cout << "\tDirector: " << this->director << endl;
			cout << "\tRelease Year: " << this->releaseYear << endl;
		}					
		
};


