Week 5
This week's assignment includes two C++ programs.
Module 6( Strings and Classes) and Module 11(Constructors and Destructors)
Module 6: In this assignment, we were tasked with managing inventory items and utilizing file I/O to save and retrieve item data.
So, I created a class called "Item" that represents an item in inventory (like a tool).
Each item has:
- A name (string)
- A quantity (int)
- The function saveToFile()
- opens a file called 'items.txt'
- saves the item in this format
- 'name, quantity'
  Example: 'scredriver,10'
-The function 'loadfrom' the file.
- Prints the line to the screen, for example:  
    `File content: Screwdriver,10`
- In `main()`:
  - I create an `Item` object (for example: name = `"Screwdriver"`, quantity = `10`).
  - I call `saveToFile()` to write the data to the file.
  - Then I call `loadFromFile()` to read the data back and show it.
Module 11: What this program does
I created a class called Product with
.id (int)
.name (string)
.price (float)
for the constructor:
It takes values for id, name, and price.
sets them when the object is created.
prints "constructor called" so we can see when the object is made.
The destructor:
Prints "Destructor called" when the object is destroyed (for example, when main() ends).
The function printDetails():
Prints something like:
ID: 101, Name: Notebook, Price: $4.99
In main():
I create a Product object with some example values.
I call printDetails() to show its information.
When the program finishes, the destructor runs automatically and prints its message.

