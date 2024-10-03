//                                     CGPA Calculater
#include<iostream>
#include<stdlib.h>
#include<vector>
#include<algorithm>
#include<string.h>
#include<fstream>
using namespace std;
struct Course{
    int code;
    string name;
    int cradit;
    float gradePoint;

    bool operator<(Course& obj) // Sorting  by Course Name....
    {
        return name< obj.name;
    }
};
float calculateSGPA(vector<Course> &courses){
    float totalCreaditPoint=0.0;
    float totalCredits =0;
    for(auto x:courses){
        totalCreaditPoint +=x.gradePoint * x.cradit;
        totalCredits +=x.cradit;
    }
    return (totalCredits==0)?0: totalCreaditPoint/totalCredits; // Avoid divisible by 0
}
float calculateCGPA(vector<Course> &courses){
    // Semester SGPA 
    float totalSGPA=0;
    float totalCradits=0;
    for(auto x: courses){
        totalSGPA +=x.gradePoint * x.cradit;
        totalCradits +=x.cradit;
    }
    return (totalCradits==0)?0: totalSGPA/totalCradits; // Avoid divisible by 0
}

void displayCourses(vector<Course> & courses){
    cout<<"\n Course and Grades: "<<endl;
    for(auto x: courses){
        cout<<"Course Code : "<<x.code<<" ,Course : "<<x.name<<" ,Cradit : "<<x.cradit<<" ,Grade : "<<x.gradePoint<<endl;
    }
}
void saveToFile(vector<Course>& courses, string fileName){
    ofstream outfile(fileName);
    if(outfile){
       for(auto x: courses){
         outfile<<x.code<<" "<<x.name<<" "<<x.cradit<<" "<<x.gradePoint<<endl;
       } 
       outfile.close();
       cout<<"Courses saved to "<<fileName<<endl;
    }
    else
    {
        cout<<"File Error for Writing!!!"<<endl;
    }
}
void loadToFile(vector<Course>& courses,string fileName){
    ifstream infile(fileName);
    if(infile){
      courses.clear(); // Clear Existing courses
      Course co;
      while(infile>>ws && getline(infile,co.name,' ')){
        infile>>co.cradit>>co.gradePoint;
        courses.push_back(co);
      }
    }
    else
    {
        cout<<"File Error for Reading!!!"<<endl;
    }
}
int main(){
    vector<Course> courses;
    int choice;
    cout<<"-----------------------------------------------------------------------"<<endl;
    cout<<"------------------------Calculate GPA & CGPA---------------------------"<<endl;
    cout<<"-----------------------------------------------------------------------"<<endl;
    do{
    cout<<"----------------------------Menu---------------------------------------"<<endl;
    cout<<"1.Add Courses \n2. Display Courses \n3.Calculate SGPA  \n4.Calculate CGPA \n5. Save to File  \n6.Access Data from File \n7.Sort Courses by Name  \n8.Exit"<<endl;
    cout<<"Enter Your Choice"<<endl;
    cin>>choice;
    switch(choice)
    {
       case 1:
       {
        Course E_course;
        cout<<"Enter Course Code : "<<endl;
        cin>>E_course.code;
        cout<<"Enter Course Name : "<<endl;
        cin.ignore();
        cin>>E_course.name;
        cout<<"Enter Credit : "<<endl;
        cin>>E_course.cradit;
        cout<<"Enter Grade Point : "<<endl;
        cin>>E_course.gradePoint;
        courses.push_back(E_course);
        break;
       }
       case 2:
        displayCourses(courses);
        break;
       case 3:{
         float sgpa=calculateSGPA(courses);
         cout<<"\n Semester Grade Point Average(SGPA): "<<sgpa<<endl;
          break;
        }
       case 4:{
         float cgpa=calculateCGPA(courses);
         cout<<"\n Cumulative Grade Point Average(CGPA):"<<cgpa<<endl;
         break;
       }
       case 5:{
         string fileName;
         cout<<"Enter fileName to save"<<endl;
         cin>>fileName;
         saveToFile(courses,fileName);
         break;
        }
       case 6:{
         string fileName;
         cout<<"Enter fileName to load"<<endl;
         cin>>fileName;
         loadToFile(courses,fileName);
         break;
        }
       case 7:{
         cout<<"Sorted by Name"<<endl;
         sort(courses.begin(),courses.end());
         break; 
        } 
       case 8:
         exit(0);
       default :
        cout<<"Invalid Choice. Please try again."<<endl;            
        
    }
  }while(1);
  cout<<endl;
  return 0;
}
