//Dr_T Unit 2 COSC-1437 Starter 
/* Task -

Top level solution folder: C_STL_Library_YourLastName

create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <cassert>
#include <stack>
#include <set>
#include <utility>
#include <map>
using namespace std; 
typedef map<string,int> Mapt;
typedef Mapt::const_iterator MapIterT;

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1 
{ 
  private:  
    vector<int> vec; 
  public: 
    MyClassVector1 (vector<int> v)  //parameterized constructor
    { 
      vec = v; 
    } 
    void print() 
    { 
      /// print the value of vector 
      for (int i = 0; i < vec.size(); i++) 
      {
          cout << vec[i] << " "; 
      }    
    } 
};

class MyClassVector2 
{ 
  private:  
    vector<int> vec; 
  public: 
    MyClassVector2 (vector<int> v)  //parameterized constructor
    { 
      vec = v; 
    } 
    void print() 
    { 
      /// print the value of vector 
      for (int i = 0; i < vec.size(); i++) 
      {
          cout << vec[i] << " "; 
      }    
    } 
};

class MyClassVector3 
{ 
  private:  
    vector<int> vec; 
  public: 
    MyClassVector3 (vector<int> v)  //parameterized constructor
    { 
      vec = v; 
    } 
    void print() 
    { 
      /// print the value of vector 
      for (int i = 0; i < vec.size(); i++) 
      {
          cout << vec[i] << " "; 
      }    
    } 
};


//********MAIN FUNCTION********************************************************
int main() 
{
  
  /****Section_Name***Vectors*************************************************/
  cout << "\nVectors" << endl;
  //Write the base code for: 5. std::vector example
  vector<double> vd; //vd elments are floating point numbers
  vector<int> vi; //vi elements are integer numbers 
  vector<string> vs; //vs elements are string objects 

  //Expand this code to:

  //add 3 elements to the vd vector
  vd.push_back(1.6);
  vd.push_back(2.5);
  vd.push_back(3.3);

  //add 3 elements to the vi vector
  vi.push_back(1);
  vi.push_back(3);
  vi.push_back(3);
  
  // add 3 elements to the vs vector
  vs.push_back("cat");
  vs.push_back("dog");
  vs.push_back("fish");
  
  // display the 3 elements in the vd vector
  cout << "Values in vd: \n"; 
  for(int i = 0; i < vd.size(); i++)
  {
    cout << vd[i] << endl; 
  }

    //display the 3 elements in the vi vector
  cout << "Values in vi: \n"; 
  for(int i = 0; i < vi.size(); i++)
  {
    cout << vi[i] << endl; 
  }
  
   // display the 3 elements in the vs vector
  cout << "Values in vs: \n"; 
  for(int i = 0; i < vs.size(); i++)
  {
    cout << vs[i] << endl; 
  }

  
  /****Section_Name***Vector_as_Class_Member*************************************************/ 
  //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/
  
  cout << "\nVector_as_Class_Member" << endl; 
  vector<int> vec1; 
  for (int i = 1; i <= 2; i++) 
    vec1.push_back(i); 
  MyClassVector1 obj1(vec1); 
  obj1.print(); 
    
    //Continue with MyClassVector2 and MyClassVector3
  vector<int> vec2;  //creating vector
  for (int i = 1; i <= 7; i++) 
    vec2.push_back(i); // adding element to vector that have a value of i
  MyClassVector2 obj2(vec2); 
  obj2.print(); //printing
  
  vector<int> vec3; //creating vector
  for (int i = 1; i <= 6; i++) 
    vec3.push_back(i); // adding element to vector that have a value of i
  MyClassVector3 obj3(vec3); 
  obj3.print(); //printing

  
  /****Section_Name***STL_Iterators*************************************************/ 
  cout << "\n\nSTL_Iterators" << endl; 
  
  vector< int > vint(10); // creating a vector with 10 integers
  vint[0]=23;
  vint[1]=1;
  vint[2]=45;
  vint[3]=34;
  vint[4]=12;
  vint[5]=54;
  vint[6]=12;
  vint[7]=13;
  vint[8]=133;
  vint[9]=345;
  
  vector<int>::iterator it;
  for(it=vint.begin() ; it != vint.end(); ++it) //going through vint and printing values
  {
    cout << " " << *it;
  }

  
  /****Section_Name*** Stack*************************************************/
  cout << "\n\nStack" << endl; 
  
  stack<int> st;
  
  st.push(100); // push 100 on the stack
  assert(st.size()==1); // check if atleast one element is on the stack
  assert(st.top()==100); // checking element value
  
  st.top()=456; //assigning new value
  assert(st.top()==456);// checking element value
  
  st.pop(); // removing element
  assert(st.empty()== true); // checking if element is empty
  
  
  /****Section_Name**** Set*************************************************/
  cout << "\n\nSet" << endl; 
  
  set<int> iset; 

  iset.insert(11); // setting values in set
  iset.insert(-11);
  iset.insert(55);
  iset.insert(22);
  iset.insert(22);
  if(iset.find(55)!= iset.end()){ 
    iset.insert(55); //checking if number has already been stored
  }
  //cout << "493";
  assert(iset.size()==4); // checking if size is 4
  set<int>::iterator iter;
  for(iter=iset.begin(); iter!= iset.end() ; iter++)
  {
      cout << " " << *iter;
  }

  
  /****Section_Name****Pair_Structure************************************************/
  cout << "\n\nPair_Structure" << endl; 
  pair< string, string > strstr;
  strstr.first="Hello"; // first part of the container
  strstr.second="Maya!"; // second part of the container
  
  pair< int, string > intstr;
  intstr.first=1;  // first part of the container
  intstr.second="one"; // second part of the container

  pair< string,int > strint("two",2);
  assert(strint.first=="two");  //checking if the first part is equal to "two"
  assert(strint.second==2); //checking if the second part is equal to 2
  

  /****Section_Name**** Map_Insert************************************************/
  cout << "\n\nMap_Insert" << endl; 
  Mapt amap;
  pair< MapIterT, bool> result = amap.insert(make_pair("Fred",45)); // creating a pair
  assert(result.second == true);
  assert(result.first->second==45);
  result = amap.insert(make_pair("Fred",54));// result pointing to ("Fred",54)
  assert(result.second==false); // verifying if second is false
  assert(result.first->second==45); // verifying if first->second ==45

  
  /****Section_Name****Map_Summary************************************************/
  cout << "\n\nMap_Summary" << endl; 
  map< string, string> phone_book; //setting types for map to string
  phone_book["411"]= "Directory"; //initializing 
  phone_book["911"]= "Emergency";
  phone_book["508-678-2811"]= "BCC";
  if(phone_book.find("411")!= phone_book.end()){
    phone_book.insert(
      make_pair( // pairing key value and map value
        string("411"),
          string("Directory")
      )
    );
  }
  assert(phone_book.size()==3);
  map<string,string>::const_iterator iter2;
  for(iter2=phone_book.begin();iter2 != phone_book.end(); ++iter2){// going through phonebook and printing pairs
    cout
      << " " << iter2->first
      << " " << iter2->second
      << endl
      ;
  }


  /****Section_Name**** Sort_Algorithm************************************************/
  cout << "\n\nSort_Algorithm" << endl; 
  
  int arr[100]; // creating int array
  sort(arr,arr+100); //sorting array
  vector v1; //initializing vector
  sort(v1.begin(),v1.end()); //sorting vector



  /****Section_Name****Predicate_Algorithm************************************************/
  cout << "\n\nPredicate_Algorithm" << endl; 
  
  bool less_than_7(int value) //returns a bool 
  {
    return value<7; // returns values <7
  }
  
  vector<int> v1;
  int count_less=std::count_if(v1.begin(),v1.end(), less_than_7); // goes through v1 and counts values less than 7

      return 0; 
 }