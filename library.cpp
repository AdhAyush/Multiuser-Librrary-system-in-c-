#include <iostream>
#include <list>
#include <string>

using namespace std;

class Book{
string name;
string author;

//constructor
public:
Book(string nam, string write){
    name = nam;
    author = write;
}

};




class library{

public:
// nested class for multi user
class stu{
public:
int id;
int pass;
list<Book> issuedBooks;
// list<Book>::iterator itt = issuedBooks.begin();
public:
stu(int a, int b){
id = a;
pass = b;
}

//another constructor
stu(){
id = 0;
pass = 0;
}

};


stu obj;
/* syntax stu obj; when no parameters are given NOT STU OBJ(); 
but, here 
if we give 0,0 or any integers as parameter we get error why????
*/

//object and list of object of inner student

list<stu> students = {} ;
list<stu>::iterator itr = students.begin();

//declearing list variable to store object of book class
list<Book> books ;
list<Book>::iterator it = books.begin();

public:
library(list<Book> book){
books = book;
//stu obj(0,0);           ERROR: this object doesnot have scope over library

}

void addstu(int a, int b){
    stu s1(a,b);
    students.insert(itr,s1);
    cout<< "Student Added. Id no: " << s1.id;
}


//for log in
int login(int a, int b){

library::stu s1(a,b);

int flag = 0;   //to check id password is correct or not

for(stu x: students){
    if(x.id ==s1.id && x.pass == s1.pass){
          
        obj = x;
        cout << "logged in"<< x.id <<x.pass;
        flag = 1;
    }
}

return flag;
}


//functions to add, return, issue
void addBook(Book b){
    books.insert(it,b);
    cout<<"The book has been Added..";
}

void returnBook(Book b){
    books.insert(it,b);
    list<Book>::iterator itt;
    itt = obj.issuedBooks.begin();
    
}


};


int main(){


}
