#include<iostream> 

using namespace std; 


/*
  Nested Classes in C++
  Last Updated : 04 Jan, 2019
  A nested class is a class which is declared in another enclosing class. 
  A nested class is a member and as such has the same access rights as any other member. 
  The members of an enclosing class have no special access to members of a nested class; 
  the usual access rules shall be obeyed.

  For example, program 1 compiles without any error 
  and program 2 fails in compilation.
*/


/* start of Enclosing class declaration */
class Enclosing {	 
  private: 
    int x; 
    
  /* start of Nested class declaration */
  class Nested { 
    int y; 
    void NestedFun(Enclosing *e) { 
      cout<<e->x; // works fine: nested class can access 
            // private members of Enclosing class 
    }	 
  }; // declaration Nested class ends here 
  
}; // declaration Enclosing class ends here 

int main() {} 



/* start of Enclosing class declaration */
class Enclosing {	 
		
  int x; 
    
  /* start of Nested class declaration */
  class Nested { 
    int y; 
  }; // declaration Nested class ends here 

  void EnclosingFun(Nested *n) { 
      // Compiler Error: y is private in Nested 
      cout<<n->y; 
  }	 
}; // declaration Enclosing class ends here 

int main() {} 
