#include <string>
#include <iostream>

int main() {
  int x = 9;
  std::cout << "This is a integer:\n";
  std::cout << x << std::endl;


  std::cout << "You can do math with integers:\n";
  int y = 8;
  int v = 10;

  std::cout << "The sum of v and y\n";
  int sum = v + y;
  std::cout << sum << std::endl;

  double db = 10.88; // With the keyword double you can specify precision points

  std::cout << "With doubles you can also do math, except there is more precision\n";

  // Let's say I have to integers, and i want to divide one by another.
  // the problem is they aren't necessarily going to divide whole. Which means:
  int div = v/y; // Will lose a lot of floating points precision.
  // The output will be: 1
  std::cout << div << std::endl;

  // Even though we divide 10/8. This is called whole integer division.
  // Now what do we do to get this precision back?
  double y1 = 12.97; // Define the double variables with some floating points from the get go.
  double v1 = 32.12;
  double div1 = v1/y1;
  std::cout << div1 << std::endl; // Output: 2.47648

  // You can also use the key word float, but double is preferred in most situations.


  // Strings.  We will have to import the standard string library with:
  // #include <string>

  std::cout << "This is a string:\n";

  std::string str = "This is a string"; // Now, string is an object, which comes with certain perks.
  // Methods to be exact. A method is just a function, but defined in a class/struct.
  // Class or struct is a tool for creating objects. Here is an example of a class:

  class SomeObject {
  private: // Makes the contents only accessible by methods, not outside processes. Is the default in classes
    std::string name = "My awesome object";
    // Some generator logic, usually wrapped inside a constructor. Like accepting user unput and creating a data structure with it
  public: // for visibility from the outside of the class
    // Now a method:
    const std::string& whatIsTheName() { // const and & are to avoid copying the name variable each time we use it outside of this method
      return name;
    }
  };

  SomeObject object;

#if 0
  object.name = "New string"; // This would be a bug as name is a private member of the object object of type SomeObject (Hi JS)
  // Neither can i print it:
  std::cout << object.name << std::endl;
#endif

  std::cout << object.whatIsTheName() << std::endl;
  // That is exactly how .length() method works for std::strings
  std::cout << "now .length():" << std::endl;
  int lg = object.whatIsTheName().length();
  std::cout << lg << std::endl;

  std::cout << std::endl;
  std::cout << std::endl;

  // A bit of a complicated example.
  // Lets try something easier:
  int lg1 = str.length();
  std::cout << lg1 << std::endl;
  // We have an object str of type std::string. And the class defining the type has a method length() which counts the characters in the string

  // I will not be going over char* right now. Peace out.
  return 0;
}
