#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

class report{
    private:
        string name;
        int department;
        int rollno;
        string sarr[100];
        int darr[100];
        int rarr[100];
        string subsarr[100];
        int subm[100];

    public:
    void stugenerator(int students){
        for(int i=1;i<=students;i++){
            cout<<"Enter"<<"#"<<i<<"student's name:";
            cin>>name;
            cout<<"Enter"<<"#"<<i<<"student's class:";
            cin>>department;
            cout<<"Enter"<<"#"<<i<<"student's rollno:";
            cin>>rollno;
            cout<<endl;            
            sarr[i-1]=name;
            darr[i-1]=department; 
            rarr[i-1]=rollno;
        }
    }        
    void subsgenerator(int subjects){
        for(int i=1;i<=subjects;i++){
           string subjs;
           cout<<"Enter the name of the"<<i<< "subject:";               
           cin>>subjs;
           subsarr[i-1]=subjs;
        }  
        cout<<endl;
    }

    void subvaluegener(int subjects,int students){
        cout<<"Note:Enter the marks of 1st subject of n number students then so on"<<endl;
        for(int i=1;i<=subjects*students;i++){
            int subjm;
            cout<<"Enter the marks of the subjects of students:";
            cin>>subjm;
            subm[i-1]=subjm;
        }
    }
    void displayinfo( int students,int subjects){
        for(int k=0; k<students;k++){
            cout<<sarr[k]<<endl;
        }
        for(int k=0; k<students;k++){
            cout<<darr[k]<<endl;
        }
        for(int k=0; k<students;k++){
            cout<<rarr[k]<<endl;
        }
        for(int l=0; l<subjects;l++){
            cout<<subsarr[l]<<endl;
        }
        for(int l=0; l<students*subjects;l++){
            cout<<subm[l]<<endl;
        }
    }
    void txtfile(int students, int subjects) {
    ofstream fout("spm.txt");

    if (fout.is_open()){
        fout<<left<<setw(15)<<"Name"<<setw(10)<<"Class"<<setw(10)<<"RollNo";

        for(int i=0;i<subjects;i++){
            fout<<setw(10)<<subsarr[i];
        }
        fout<<endl;

        fout<<string(15+10+10+subjects*10,'-')<<endl;

        for(int i=0;i<students;i++){
            fout<<left<<setw(15)<<sarr[i]<<setw(10)<<darr[i]<<setw(10)<<rarr[i];

            for(int j=0;j<subjects;j++){
                int index= j*students+i; 
                fout<<setw(10)<<subm[index];
            }
            fout<<endl;
        }

        fout.close();
        cout<<"Spm.txt created sucessfully"<<endl;
    } 
        else{
            cout<<"Failed to open txt file"<<endl;
        }
    }
};    
int main(){
    int students;
    cout<<"Enter the total amount of students:";
    cin>>students;
    report obj;
    obj.stugenerator(students);
    int subjects;
    cout<<"Enter the total amount of subjects:";
    cin>>subjects;
    obj.subsgenerator(subjects);
    obj.subvaluegener(students,subjects);
    obj.txtfile(students,subjects);
}
