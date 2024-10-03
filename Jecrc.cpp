#include<iostream>
#include<string.h>
using namespace std;
//1. Write a program to calculate the distance between two points.
#include<math.h>
/*int main()
{
    float x1,x2,y1,y2,dis;
    cout<<"Enter the value of x1,x2,y1,y2 "<<endl;
    cin>>x1>>x2>>y1>>y2;
    dis=sqrt((x2-x1)(x2-x1)+(y2-y1)(y2-y1));
    cout<<"Distance = "<<dis<<endl;
}*/

//2.Write a program to preform addtion,subtraction,multiplication and division on 2 interger numbers.
/*class Cal
{
private:
    int a,b;
public:
    void setdata();
    void add();
    void sub();
    void multi();
    void div();
};
void Cal::setdata()
{
    cout<<"Enter two numbers "<<endl;
    cin>>a>>b;
}
void Cal::add()
{
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}
void Cal::sub()
{
    cout<<"Sub of "<<a<<" and "<<b<<" is "<<a-b<<endl;
}
void Cal::multi()
{
    cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
}
void Cal::div()
{
    cout<<"Division of "<<a<<" and "<<b<<" is "<<(float)a/b<<endl;
}
int main()
{
    Cal s;
    s.setdata();
    s.add();
    s.sub();
    s.multi();
    s.div();
    return 0;
}*/

//3.Write a program to swap 2 number;
/*int main()
{
  int a,b;
  cout<<"Enter two numbers "<<endl;
  cin>>a>>b;
  int c;
  c=a;
  a=b;
  b=c;
  cout<<"a="<<a<<" b="<<b<<endl;
  return 0;
}
*/


//4. Write a program to swap 2 number without using third variable.
/*int main()
{
  int a,b;
  cout<<"Enter two numbers "<<endl;
  cin>>a>>b;
  a=a+b;
  b=a-b;
  a=a-b;
  cout<<"a="<<a<<" b="<<b<<endl;
  return 0;
}*/

//5. Write a program that displays the size of every data type,
/*int main()
{
    cout<<"Size of int data type is "<<sizeof(int)<<endl;
    cout<<"Size of char data type is "<<sizeof(char)<<endl;
    cout<<"Size of float data type is "<<sizeof(float)<<endl;
    cout<<"Size of double data type is "<<sizeof(double)<<endl;
    return 0;
}*/

//6.Write a program to convert an integer into the corrsponding floating point number.
/*int main()
{
    int x=56;
    float y=(float)x+1.4;
    cout<<y<<endl;
    return 0;
}*/

//7. Write a program to enter any character.if the entered character is in lower case convert into upper case if it uppercase convert into lowercase.
/*void Char()
{
    char ch;
    cout<<"Enter an character "<<endl;
    cin>>ch;
    if(ch>='a'&&ch<='z')
    {
        ch=ch-32;
        cout<<ch<<endl;
    }
    else
    {
        ch=ch+32;
        cout<<ch<<endl;
    }
}
int main()
{
    Char();
    return 0;
}*/

//8. Write a program to find whether a given year is leap year or not.
/*int main()
{
    int year;
    cout<<"Enter a year "<<endl;
    cin>>year;
    if(year%100)
    {
        if(year%4==0)
         cout<<year<<" is a leap year "<<endl;
        else
         cout<<year<<" is not a leap year "<<endl; 
    }
    else
    {
      if(year%400)
       cout<<year<<" is not a leap year "<<endl;
      else
       cout<<year<<" is a leap year "<<endl; 
    }
    return 0;
}*/

//9. Write a program to print 20 horizontal asterisks.
/*int main()
{
    for(int i=0;i<20;i++)
      cout<<"*";
}*/


//10.Write a program to classify a given number as prime or composite,
/*int main()
{
    int n,i;
    cout<<"Enter an number "<<endl;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
         break;
    }
    if(i==n)
     cout<<"Prime number "<<endl;
    else
     cout<<"Composite number"<<endl;
    return 0; 
}*/

//11.Write a program to sum the series; 1/1+2*2/2+3*3/3...
/*int sum()
{
    int n,i,sum=0,fact=0;
    cout<<"Enter n numbers "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=i*i;
        sum=sum+(fact/i);
    }
    return sum;
}
int main()
{
    cout<<"sum of series : "<<sum()<<endl;
    return 0;
} */

//12.WAP to print this pattern.
/*
A
AB
ABC
ABCD
ABCDE
*/
/*int main()
{
    int line,i,j;
    cout<<"Enter the lines "<<endl;
    cin>>line;
    for(i=0;i<line;i++)
    {
      char ch='A';
        for(j=0;j<line;j++)
        {
            if(j<=i)
            {
             cout<<ch;
              ch++;
            }
            else
             cout<<" "; 
        }
        cout<<endl;
    }
    return 0;
}*/

//13. WAP to print this pattern
/*
    1
   121
  12321
 1234321 
*/
/*int main()
{
    int i,j,k,line;
    cout<<"Enter the lines "<<endl;
    cin>>line;
    for(i=1;i<=line;i++)
    {
        k=1;
        for(j=1;j<=2*line-1;j++)
        {
            if(j>=line+1-i&&j<=line-1+i)
            {
             cout<<k;
             j<line?k++:k--;
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
}*/

//14.WAP to calculate avg of first n natural number.
/*int main()
{
    int i,n,sum=0;
    float avg;
    cout<<"Enter n numbers "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
     sum=sum+i;
    avg=(float)sum/n;
    cout<<"Avg of "<<n<<" is "<<avg<<endl;
    return 0; 
}*/

//15.WAP to enter a decimal number.calculate and display the binary equivalent of this number
/*void bin(int n)
{
    if(n)
    {
      cout<<n%2<<" ";
       bin(n/2);
    }
}
int main()
{
    bin(25);
}*/

//16.WAP to display the largest of 10 numbers using ternary operator.
int find()
{
    int max,arr[10];
    cout<<"Enter 10 numbers "<<endl;
    for(int i=0;i<10;i++)
     cin>>arr[i];
     max=arr[0];
    for(int i=1;i<10;i++)
     max=max>arr[i]?max:arr[i];
    return max; 
}
int main()
{
    cout<<"The max number is "<<find();
    return 0;
}

//17.WAP to generate calendar of a month given the start day and the number of day in that month.
/*int main()
{
    int x;
    cout<<"Enter month name "<<endl;
    cin>>x;
    switch(x)
    {
        case 1: cout<<"Starting by Monday and 31 days in this month ";break;
        case 2: cout<<"Starting by Thursday and 29 days in this month ";break;
        case 3: cout<<"Starting by Friday and 31 days in this month ";break;
        case 4: cout<<"Starting by Monday and 30 days in this month ";break;
        case 5: cout<<"Starting by Wednesday and 31 days in this month ";break;
        case 6: cout<<"Starting by Saturday and 30 days in this month ";break;
        case 7: cout<<"Starting by Monday and 31 days in this month ";break;
        case 8: cout<<"Starting by Thursday and 31 days in this month ";break;
        case 9: cout<<"Starting by Sunday and 30 days in this month ";break;
        case 10: cout<<"Starting by Tuesday and 31 days in this month ";break;
        case 11: cout<<"Starting by Friday and 30 days in this month ";break;
        case 12: cout<<"Starting by Sunday and 31 days in this month ";break;
        default : cout<<"Invalid month Entered";
    }
    return 0;
}*/

//18.WAP to calculate the area of a circle using function;
/*float Area()
{
    int r;
    cout<<"Enter radius of a circle "<<endl;
    cin>>r;
    return 3.14*r*r;
}
int main()
{
    cout<<"Area of a circle is "<<Area();
    return 0;
}*/

//19.WAP to calculate the volume of a cuboid using default arguments.
/*int Cuboid(int =1,int =1,int =1);
int main()
{
    int l,b,h;
    cout<<"Enter Length,Breath and height "<<endl;
    cin>>l>>b;
    cout<<"Volume of a cuboid is "<<Cuboid(l,b);
    cout<<endl;
    cout<<"Enter Length,Breath and height "<<endl;
    cin>>l>>b>>h;
    cout<<"Volume of a cuboid is "<<Cuboid(l,b,h);
    
}
int Cuboid(int l,int b,int h)
{
    return l*b*h;
}*/

//20.WAP to add two values of different data types using static polymorphism.
/*void add(int a,float b)
{
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}
void add(int a,char b)
{
    cout<<"Sum of "<<a<<" and "<<a<<" is "<<a+b<<endl;
}
int main()
{
    int a;
    float b;
    char c;
    cout<<"Enter two numbers "<<endl;
    cin>>a>>b;
    add(a,b);
    cout<<endl;
    cout<<"Enter two numbers "<<endl;
    cin>>a>>c;
    add(a,c);
}*/
//21.WAP to calculate GCD using recursive function.
int Hcf(int a,int b)
{
if(a>b)
{
if(a%b==0)
 return b;
return Hcf(a%b,b); 
}
else
{
if(b%a==0)
 return a;
return Hcf(a,b%a); 
} 
}
void f1()
{
cout<<"HCF : "<<Hcf(24,36);
}
//22.WAP to calculate exp(x,y) using recursive function.
double power(double x,double y)
{
if(y==0)
 return 1;
if(y>0)
 return x*power(x,y-1);
else
return 1/x*power(x,y+1); 
}
void f2()
{
cout<<"X power Y is : "<<power(2,4);
}
//23. WAP to read and display n random numbers using an array.
void Nnum(int arr[],int n)
{
for(int i=0;i<n;i++)
 cout<<arr[i]<<" ";
}
//24. WAP to interchange the largest and the smallest number in the array.
void InterChange(int arr[],int n)
{
int largest=arr[0];
int smallest=arr[0];
int temp,largestIndex=0,smallestIndex=0; 
for(int i=1;i<n;i++)
{
if(arr[i]>largest)
{
 largest=arr[i];
 largestIndex=i; 
}
if(arr[i]<smallest)
{
smallest=arr[i];
smallestIndex=i;


}
}
temp=arr[smallestIndex];
arr[smallestIndex]=arr[largestIndex]; arr[largestIndex]=temp;
 for(int i=0;i<n;i++)
cout<<arr[i]<<" "; 
}
//25. WAP to find the second largest number using an array of n numbers.
int SecondLerge(int arr[],int n)
{
int max=0,secmax=-1;
for(int i=0;i<n;i++)
 if(arr[i]>arr[max])
 max=i;
for(int i=0;i<n;i++)
{
if(arr[i]!=arr[max])
 {
if(secmax==-1)
secmax=i;
else if(arr[i]>arr[secmax])
secmax=i; 
 }
} 
return arr[secmax];
}
//26. WAP to merge 2 unsorted arrays.
void merge(int arr1[],int n1,int arr2[],int n2)
{
int i=0,j=0,k=0;
int temp[n1+n2];
while(i<n1)
{
temp[k]=arr1[i];
i++;
k++;
}
while(j<n2)
{
temp[k]=arr2[j];
j++;
k++;
}
for(int s=0;s<k;s++)
 cout<<temp[s]<<" ";
}
//27. WAP to implement linear search in any given array.
int LSerach(int arr[],int n,int key)
{
 for(int i=0;i<n;i++)
 {
if(arr[i]==key)
return 1;
 }
 return -1;
}
//28.WAP to transpose 3*3 matrix.
void Transpose()
{
int arr[3][3];
int Trans[3][3];
// Input the matrix..........
cout<<"Enter the Matrix : "<<endl;
for(int i=0;i<3;i++)
 for(int j=0;j<3;j++)
cin>>arr[i][j];
// Print the transpose matrix......
for(int i=0;i<3;i++)
{
 for(int j=0;j<3;j++)
 {
Trans[i][j]=arr[j][i]; cout<<Trans[i][j]<<" ";
 }
 cout<<endl;
} 
}
//29. WAP to read and display a 2*2*2 array.
/*void Array()
{
int arr[2][2][2];
//Input the array
cout<<"Enter the Numbers : "<<endl; for(int i=0;i<2;i++)
 for(int j=0;j<2;j++)
for(int k=0;k<2;k++)
 cin>>arr[i][j][k];
// Display the output
cout<<"Output :"<<endl; for(int i=0;i<2;i++)
{
 for(int j=0;j<2;j++)
 {
for(int k=0;k<2;k++)
cout<<arr[i][j][k]<<" "; 
cout<<endl; 
 }
 cout<<endl;
}
}*/
//30.WAP to concatenate 2 strings.
void Concat(char str1[],char str2[]) {
int i,j;
for(i=0;str1[i];i++);
for(j=0;str2[j];j++,i++)
 str1[i]=str2[j];
for(int i=0;str1[i];i++)
 cout<<str1[i]; 
}
//31.WAP to compare 2 strings.
bool Comp(char str1[],char str2[])
{
if(strlen(str1)!=strlen(str2))
 return false;
for(int i=0;str1[i];i++)
 {
if(str1[i]==str2[i])
continue;
else
 return false; 
 }
 return true;
}
 


//32.WAP to insert a string in the main text.
string InsertData(const string& mainText,const string& insertext,int position) {
string result=mainText;
result.insert(position,insertext);
return result;
}
int mai0n()
{
string mainText;
string insertext;
int position;
cout<<"Enter the main text : "<<endl;
getline(cin,mainText);
cout<<"Enter the Insert text : "<<endl;
cin>>insertext;
cout<<"Enter the position : "<<endl;
cin>>position;
string update=InsertData(mainText,insertext,position); cout<<"Update Data : "<<update<<endl;
}
//33.WAP to sort names of students.
void sort(char str[][20],int n)
{
char temp[20];
for(int r=1;r<n;r++)
{
for(int i=0;i<=n-1-r;i++)
{
if(strcmp(str[i],str[i+1])>0)
 {
strcpy(temp,str[i]);
strcpy(str[i],str[i+1]);
strcpy(str[i+1],temp);
 }
}
}
for(int i=0;i<n;i++)
 cout<<str[i]<<endl;
}
//34.WAP to enter a text that contains multiple lines.Display the n lines of text starting from m* line.
int MultiText()
{
cout<<"My Name is alok "<<endl<<"I have done my Bca form RU"<<endl<<"My Goal doing work in FAANG Company"<<endl;
}
//35.WAP to add 2 integers usign pointer.
int add(int *a,int *b)
{
return *a+*b;
}
//36.WAP to add 2 arrays.
void addArray()
{
 int A[5]={4,2,6,8,7};
 int B[5]={41,23,45,78,12};
 int Sum[5];
for(int i=0;i<5;i++)
 Sum[i]=A[i]+B[i];
for(int i=0;i<5;i++)
 cout<<Sum[i]<<" "; 
}


//37.WAP to copy a given string into a new string . Memory for the new string must be allocated dynamically.
void CopyString(char str[],int n)
{
 char* temp=new char[n];
 strcpy(temp,str);
 cout<<temp<<endl; 
}
//38. WAP to read,display,add and sub 2 complex number.
/*class Complex
{
private:
int a,b;
public:
void read(int a,int b)
 {
this->a=a;
this->b=b;
 }
 void Display()
 {
cout<<"a="<<a<<" b="<<b<<endl;
 }
 Complex add(Complex);
 Complex sub(Complex);
};
Complex Complex::add(Complex C)
{
Complex temp;
temp.a=a+C.a;
temp.b=b+C.b;
return temp;
}
Complex Complex::sub(Complex C)
{
Complex temp;
temp.a=a-C.a;
temp.b=b-C.b;
return temp;
}
*/
//39. WAP to read and display information of a student using structure within a structure.
/*struct Student
{
private:
int roll_no,age;
string name;
public:
void read(int r,string n,int a)
{
roll_no=r;
name=n;
age=a;
}
void display()
{
cout<<"Roll No. "<<roll_no<<endl<<"Name : "<<name<<endl<<"Age : 
"<<age<<endl;
}
};
*/
//40.WAP to read and display information of all the students in the class.
 


/*class Student
{
private:
int roll_no,age;
string name;
public:
void read(int r,string n,int a)
{
roll_no=r;
name=n;
age=a;
}
void display()
{
cout<<"Roll No. "<<roll_no<<endl<<"Name : "<<name<<endl<<"Age : 
"<<age<<endl;
}
};
*/
//41.WAP using pointer to structure to initialize the members in the structure.
/*struct Student
{
int roll_no;
string name;
};
int main()
{
 Student *s;
s->roll_no=102;
s->name="Alok";
cout<<"Roll No ="<<s->roll_no<<" Name="<<s->name<<endl;
}*/
//42.WAP to illustrate the use of arrays within structure.
/*struct Data
{
int EmpData[20];
};
int main()
{
Data e1;
for(int i=0;i<20;i++)
 e1.EmpData[i]=i;
for(int i=0;i<20;i++)
 cout<<e1.EmpData[i]<<" "; 
}*/
//43.WAP to display the name of the colors using enumerated types.
/*enum Color
{
RED, ORANGE, YELLOW, GREEN, BLUE, INDIGO, VIOLET
};
string getColorName(Color color) {
switch(color) {
case RED: return "Red";
case GREEN: return "Green";
case BLUE: return "Blue";
case YELLOW: return "Yellow";
case ORANGE: return "Orange";
case INDIGO: return "Purple";
case VIOLET: return "Cyan";
default: return "Unknown Color";
}
}
 


int main() {
Color colors[] = {RED, GREEN, BLUE, YELLOW, ORANGE,INDIGO,VIOLET}; cout << "Color names:" <<endl;
for(Color color : colors) {
cout << getColorName(color) <<endl;
}
return 0;
}*/
//44.WAP to enter a rational number simplify and display.
/*int main() {
int numerator, denominator;
cout << "Enter the numerator: ";
cin >> numerator;
cout << "Enter the denominator: ";
cin >> denominator;
cout << "The simplified rational number is: " << numerator << "/" << denominator <<endl;
return 0;
}*/
//45.WAP to demonstrate the concept function overloading in the member function of a class.
class Overloading
{
private:
int a,b,c;
float e,f;
public:
int add(int a,int b)
{
 return a+b; 
}
int add(int a,int b,int c)
{
return a+b+c;
}
float add(float e,float f)
{
return e+f;
}
};
//46.WAP that adds 2 complex numbers the object must be passed through preference and the result must be passed by value.
class AddComplex
{
private:
int a,b;
public:
AddComplex();
AddComplex(int,int);
AddComplex add(AddComplex);
void Display()
{
cout<<"Sum of Complex number is a="<<a<<" b="<<b<<"i "<<endl;
}
};
AddComplex::AddComplex(){ a=0;b=0;}
AddComplex::AddComplex(int x,int y):a(x),b(y){}
AddComplex AddComplex::add(AddComplex C)
{
AddComplex temp;
temp.a=a+C.a;
 


temp.b=b+C.b;
return temp;
}

//47.WAP to display the list of students according to their marks.
struct Student
{
int Roll_no;
string name;
int marks;
};
void data(Student s1[],int size)
{
int marks,i;
for(int i=0;i<size;i++)
{
cout<<"Enter Roll No: "<<endl;
cin>>s1[i].Roll_no;
cout<<"Enter Name : "<<endl;
cin>>s1[i].name;
cout<<"Enter Marks: "<<endl;
cin>>s1[i].marks;
}
cout<<"Enter the marks for find student data "<<endl; cin>>marks;
cout<<"The student data by his Marks: "<<endl; for( i=0;i<size;i++)
 {
if(s1[i].marks == marks)
break;
 } 
 if(s1[i].marks==marks)
cout<<s1[i].Roll_no<<" "<<s1[i].name<<" "<<s1[i].marks<<endl;
 else
cout<<"Student marks is not found!!!"<<endl; 
}
int main()
{
int n;
 cout<<"Enter the size of data "<<endl;
 cin>>n;
 Student s[n];
 data(s,n);
}
//48.WAP to find mean of 2 numbers belonging to two different classes using friend function.
/*class B;
class A
{
private:
 int numA;
public:
 A(int n):numA(n){} 
friend double Mean(A,B); 
};
class B
{
private:
int numB;
public:
B(int n):numB(n){}
friend double Mean(A,B);
};


double Mean(A a,B b)
{
return (a.numA+b.numB)/2.0;
}
int main()
{
 int a,b;
 cout<<"Enter fist class : "<<endl;
 cin>>a;
 cout<<"Enter second class : "<<endl;
 cin>>b;
 A classA(a);
 B classB(b);
 cout<<"The mean is "<<Mean(classA,classB)<<endl;
}*/
//49. WAP to add 2 arrays using friend function and operator overloading .
class Array
{
private:
int *ptr;
int size;
public:
Array(int);
void input()
{
cout<<"Enter "<<size<<" Element : "<<endl; for(int i=0;i<size;i++)
 cin>>ptr[i];
}
void display()
{
for(int i=0;i<size;i++)
 cout<<ptr[i]<<" ";
}
Array(const Array& P):size(size)
{
if(ptr!=nullptr)
 delete ptr;
ptr=new int[size];
for(int i=0;i<size;i++)
 ptr[i]=P.ptr[i];
}
friend Array operator+(Array& a,Array& b);
~Array();
};
Array::Array(int size) : size(size)
{
ptr=new int[size];
}
Array::~Array()
{
delete []ptr;
}
Array operator+(Array& a,Array& b)
{
Array result(a.size);
for(int i=0;i<a.size;i++)
 result.ptr[i]=a.ptr[i]+b.ptr[i];
 return result;
}
int malin()
 


{
int n;
cout<<"Enter the size of Array : "<<endl; cin>>n;
Array A1(n);
Array A2(n);
cout<<"Enter the first Array"<<endl;
A1.input();
cout<<"Enter the second Array"<<endl;
A2.input();
Array Sum=A1+A2;
cout<<"Sum is "<<endl;
Sum.display();
return 0;
}
//50. WAP that users an overloaded constructor to dynamically allocate memory to an array and thus find the largest of its elements.
class Largest
{
private:
int *ptr;
int size;
public:
Largest(int);
int LargestNumber();
~Largest();
};
Largest::Largest(int size):size(size)
{
 ptr=new int[size];
 cout<<"Enter the numbers"<<endl;
 for(int i=0;i<size;i++)
cin>>ptr[i];
}
int Largest::LargestNumber()
{
int max=ptr[0];
for(int i=0;i<size;i++)
 {
 if(max<ptr[i+1])
 max=ptr[i+1];
 }
 return max;
}
Largest::~Largest()
{
delete []ptr;
}
//51.WAP that uses dynamic constructor to allocate memory to an array.count the numbers of even and odd elemnt.
class Count
{
private:
int *ptr;
int size;
public:
Count(int);
void countNumber();
~Count();
};
Count::Count(int size):size(size)// define a constructor


{
ptr=new int[size];
cout<<"Enter the numbers : "<<endl;
for(int i=0;i<size;i++)
 cin>>ptr[i];
}
void Count::countNumber()
{
int EvenCount=0,OddCount=0;
for(int i=0;i<size;i++)
{
if(ptr[i]%2==0)
EvenCount++;
else
OddCount++; 
}
cout<<"The Even number is : "<<EvenCount<<endl;
cout<<"The Odd number is : "<<OddCount<<endl;
}
Count::~Count()
{
delete []ptr;
}
//52.WAP to overload the increament and decrements operators on the array class.
class ArrayUnary
{
private:
int x;
public:
ArrayUnary(int);
//Pre Increment 
ArrayUnary& operator++();
ArrayUnary& operator--();
//Post Increment
ArrayUnary operator++(int);
ArrayUnary operator--(int);
void display()
{
cout<<"The value of x : "<<x<<endl;
}
};
ArrayUnary::ArrayUnary(int x=0) // Constructor
{
this->x=x;
}
ArrayUnary& ArrayUnary::operator++()
{
++x;//pre Increment
return *this; 
}
ArrayUnary& ArrayUnary::operator--()
{
--x;//pre Decrement
return *this; 
}
ArrayUnary ArrayUnary::operator++(int)
{
ArrayUnary temp=*this;
++x;//post Increment
return temp; 
}


ArrayUnary ArrayUnary::operator--(int)
{
ArrayUnary temp=*this;
--x;//post Decrement
return temp; 
}
//53.WAP to find the next date usign unary increment operator.
class Date
{
private:
int date,month,year;
public:
void setdata(int d,int m,int y)
{
date=d;
month=m;
year=y;
}
Date& operator++();
Date operator++(int);
void display()
{
cout<<date<<"/"<<month<<"/"<<year<<endl;
}
};
Date& Date::operator++()
{
++(date); // pre increment
return *this;
}
Date Date::operator++(int)
{
Date temp=*this;
 ++(*this);  // post Increment
return temp;
}
//54.WAP to demonstreate the use of type conversions with distance class.
class Distance
{
private:
int x1,x2,y1,y2;;
public:
void setDistance(int x1,int x2,int y1,int y2)
{
this->x1=x1;
this->x2=x2;
this->y1=y1;
this->y2=y2;
}
void getdistance()
{
float Dis;
Dis=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)); cout<<"Distance : "<<Dis<<endl;
}
};
//55.WAP that uses multi level inheritance to implement classes note server and device.
class Server
{
private:
 


int data;
public:
void setData(int data)
{
this->data=data;
}
int getdata()
{
return data;
}
};
class Device:public Server
{
public:
void Display()
{
cout<<"Tha data is : "<<getdata()<<endl;
}
};

//56.WAP with class bill.the users have the option to pay the bill either by chque or by cash use the inheritance to model this situation.
class Bill
{
private:
float Amount;
public:
void input_Amount()
{
cout<<"Enter the Amount of bill... "<<endl; cin>>Amount;
}
float getAmount()
{
return Amount;
}
};
class Pay:public Bill
{
private:
int x;
public:
void PayBy()
{
cout<<"\n1.By Cash \n2.By Check"<<endl; cin>>x;
switch(x)
{
case 1:
cout<<getAmount()<<" Paid By Cash"<<endl; break;
case 2:
 cout<<getAmount()<<" Paid By Check"<<endl; 
}
}
};
int ma2in()
{
 /*Array arr1[10],arr2[5];
arr1[10]={10,5,45,36,95,54,69,12,35,85}; arr2[10]={12,45,36,78,45};*/
//Nnum(arr,10);
 


 // InterChange(arr,10);
 //merge(arr1,10,arr2,5);
// cout<<LSerach(arr1,10,72)<<endl;
//Transpose();
char str[6][20]={"alok","sagar","dev","Mohan","ajay","mohit"}; char str1[50]="I am alok prajapati";
//Concat(str,str1);
// cout<<Comp(str,str1)<<endl;
//sort(str,6);
/*int a,b;
cout<<"Enter the two numbers : "<<endl; cin>>a>>b;
cout<<add(&a,&b);*/
//addArray();
//CopyString(str1,50);
/*Complex c1,c2,c3,c4;
c1.read(4,5);
c1.Display();
c2.read(12,16);
c2.Display();
c3=c1.add(c2);
c3.Display();
c4=c2.sub(c1);
c4.Display();*/
/* Student s;
s.read(102,"Prince Kumar",22);
s.display();*/
/*Overloading a1,a2,a3;
cout<<a1.add(12,45)<<endl;
cout<<a2.add(12,36,41)<<endl;
cout<<a3.add(12.5f,3.1f)<<endl;*/
/*AddComplex C1(12,14),C2(4,5);
AddComplex C3;
C3=C1.add(C2);
C3.Display();*/
/*Largest l(10);
cout<<"The Largest number : "<<l.LargestNumber();*/ /*Count c(10);
c.countNumber();*/
/*ArrayUnary arr(4);
arr.operator++();
arr.display();
arr.operator++();
arr.display();
arr.operator++();
arr.display();
arr.operator--();
arr.display();*/
/*Date d1;
d1.setdata(22,8,2024);
d1.display(); 
d1.operator++();
d1.display();*/
/*Distance d1;
d1.setDistance(12,4,3,7);
d1.getdistance();*/
/*Device d1;
d1.setData(12);
d1.Display();*/
Pay A;
A.input_Amount();
 


A.PayBy();
return 0;
}
int ma5in()
{
/*Array arr1[10],arr2[5]; arr1[10]={10,5,45,36,95,54,69,12,35,85}; arr2[10]={12,45,36,78,45};
Array arr3[10]=arr1[10]+arr2[10]; for(int i=0;i<10;i++)
 cout<<arr[i]<<" ";*/
}

