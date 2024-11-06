#include<iostream>
#include<string>
using namespace std;

struct student{
    string name,no_matric;
    string sub_code[10],sub_name[10],sub_grade[10];
    float sub_hrs[10];

}student1;

int main()
{
    string name,no_matric;
    int n, i,j,sem,sum_hr[10];
    float gpa[10],darab[10],sum_darab[10];
    float value[10];
    cin.ignore();
    cout<<"Enter student's name : ";
    getline(cin,student1.name);
    cout<<"Enter student's matric number: ";
    getline(cin,student1.no_matric);

    cout<<"Enter semester taken:";
    cin>>sem;
    sum_darab[0]=0;
    sum_hr[0]=0;

    for (j=0; j<sem; j++)
    {
        cout<<"Enter total subject taken for semester "<<j+1<<" :";
        cin>>n;

        for(i=0; i<n; i++)

        {
            cin.ignore();
            cout<<"Enter subject code: ";
            getline(cin,student1.sub_code[i]);
            cout<<"Enter subject name: ";
            getline(cin,student1.sub_name[i]);
            cout<<"Enter subject's credit hours: ";
            cin>>student1.sub_hrs[i];
            cin.ignore();
            cout<<"Enter subject gred: ";
            getline(cin,student1.sub_grade[i]);


            if(student1.sub_grade[i]=="A")
            value[i]=4;
            else if(student1.sub_grade[i]=="A-")
            value[i]=3.75;
            else if(student1.sub_grade[i]=="B+")
            value[i]=3.5;
            else if(student1.sub_grade[i]=="B")
            value[i]=3;
            else if(student1.sub_grade[i]=="B-")
            value[i]=2.75;
            else if(student1.sub_grade[i]=="C+")
            value[i]=2.5;
            else if(student1.sub_grade[i]=="C")
            value[i]=2;
            else if(student1.sub_grade[i]=="C-")
            value[i]=1.75;
            else if(student1.sub_grade[i]=="D+")
            value[i]=1.5;
            else if(student1.sub_grade[i]=="D")
            value[i]=1;
            else 
            value[i]=0;

            darab[i]=value[i]*student1.sub_hrs[i];
            sum_darab[j]+=darab[i];
            sum_hr[j]+=student1.sub_hrs[i];
        }
            gpa[j]=sum_darab[j]/sum_hr[j];
    }
        cout<<"Name: "<<student1.name<<endl;
        cout<<"No Matric: "<<student1.no_matric<<endl;
        for(j=0; j<sem; j++)
        {
            for(i=0; i<n; i++)
            {
                        cout<<student1.sub_code[i]<<" : "<<student1.sub_name[i]<<" : "<<student1.sub_grade[i]<<endl;
            }   

                    cout<<"GPA for sem "<<j+1<<":"<<gpa[j]<<endl;
                    cout<<"Sum Darab for sem "<<j+1<<":"<<sum_darab[j]<<endl;
                    cout<<"Sum hour for sem "<<j+1<<":"<<sum_hr[j]<<endl;
        }
        return 0;
}
