Student Performance Marksheet (C++)
This is a console-based C++ project that allows users to input student details, subject names, and their respective marks, and then generates a neatly formatted report card in a .txt file (spm.txt).

Features
Input multiple students':
  Names
  Class (department)
  Roll numbers

Input multiple subject names
Input each student's marks for each subject
Output a formatted report card to spm.txt with proper alignment using iomanip

Technologies Used
C++
File Handling (<fstream>)
Formatting (<iomanip>)

How It Works
Program prompts you to enter the number of students.
You input student data.
Then it asks for the number of subjects and their names.
Enter marks for each subject and student.
A .txt file named spm.txt is generated with tabulated data.

Output File Format (spm.txt)
Name           Class     RollNo    Math      Eng       Sci      
--------------------------------------------------------------
John           10        1         85        90        78       
Alice          10        2         75        88        82       
Sample Run (Input Example)

Enter the total amount of students: 2
Enter #1 student's name: John
Enter #1 student's class: 10
Enter #1 student's rollno: 1

Enter #2 student's name: Alice
Enter #2 student's class: 10
Enter #2 student's rollno: 2

Enter the total amount of subjects: 3
Enter the name of the 1 subject: Math
Enter the name of the 2 subject: Eng
Enter the name of the 3 subject: Sci

Note: Enter the marks of 1st subject of n number students then so on
Enter the marks of the subjects of students: 85
Enter the marks of the subjects of students: 75
Enter the marks of the subjects of students: 90
Enter the marks of the subjects of students: 88
Enter the marks of the subjects of students: 78
Enter the marks of the subjects of students: 82
Output
The file spm.txt will be created in the same directory with aligned student results.

File Name Meaning
spm.txt stands for:
Student Performance Marksheet

Author
This project was created as part of learning C++ file handling, arrays, and loops.
Tejpal Singh Dogra B.Tech CSE, GNA University
