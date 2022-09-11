# lib_sim
## Library management system- OOP Final

## Description 
Digitize the library management system 

## Installation
Download the ``cppproject```` file, then using ```g++```, compile ```main.cpp``` and ```functions.cpp``` together and open the ```*.out``` file.

## Features:
  - [x] Registering a member 
  - [x] Look up member info
  - [x] Add books/media to the library
  - [x] Issue a book to member
  - [x] Delete from library	
  - [x] Search for books/media
  - [x] Check book info (quantity, facts, etc)
  - [x] Handling book returns

## Outline

### PSEUDOCODE
```
Start
Print welcome screen
Create media list
Create user list
Loop for function choice
  Registering a user
    Create new user and add to user list
  Look up customer info
    Search through user list
    Print info and held media
  Issue a book to user
    Add book to user's collection
    Change quantity of book in library
  Search for books/media
    Search through library lists 
    Print results and info
  Return books / Add new books to system
    Remove from user collection
    Change library quantity
  
Exit
```

###  OBJECTS

- User
- Media
	- Books
	- Movies
	

### FUNCTIONS

- Registering a customer
- Look up customer info
- Issue a book to member
- Search for books/media
- Check media quantity
- Return books / Add new books to system

----------------------------------------------------------------------------

### Timeline
- [x] Outline
- [x] Pseudocode 
- [x] Objects
- [x] Functions
- [x] Main program