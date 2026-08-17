/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct phonedata {
    string name;
    string phonenumber;
    string email;
    string catagory;
};

void addcontact(vector<phonedata>& phonelist) {
    string name;
    string phonenumber;
    string email;
    string catagory;

    cout << "===========\n";
    cout << "ADD CONTACT\n";
    cout << "===========\n";
     cout << "ENTER NAME TO STORE IN PHONEBOOK:";
    cin >> name;


    cout << "ENTER PHONE NUMBER TO STORE IN PHONEBOOK:";
    cin >> phonenumber;
     


    for (size_t i = 0; i < phonelist.size(); i++) {
        if (phonelist[i].phonenumber == phonenumber) {
            cout << "A CONTACT WITH THIS PHONE NUMBER ALREADY EXIST\n";
            return;
        }
    }

   
    cout << "ENTER EMAIL ID TO STORE IN PHONEBOOK:";
    cin >> email;

    cout << "ENTER CATAGORY TO STORE IN PHONEBOOK:";
    cin >> catagory;

    phonelist.push_back({name, phonenumber, email, catagory});
    cout<<"YOU HAVE ADDED YOUR CONTACT IN YOUR LIST!!\n";
}

void viewallcontact(vector<phonedata>& phonelist) {
    string name;
    string phonenumber;
    string email;
    string catagory;
    if (phonelist.empty()) {
        cout << "YOU HAVE NOT SAVED ANY CONTACT!!\n";
        return;
    }

    cout << string(70, '=') << "\n";
    cout << string(27, ' ') << "VIEW ALL CONTACT" << "\n";
    cout << string(70, '=') << "\n";

    cout << left
         << setw(16) << "name" << "|"
         << setw(14) << "phonenumber" << "|"
         << setw(25) << "email" << "|"
         << setw(10) << "catagory" << "|\n";
    cout << string(70, '-') << "\n";

    for (size_t i = 0; i < phonelist.size(); i++) {
        cout << left
             << setw(16) << phonelist[i].name << "|"
             << setw(14) << phonelist[i].phonenumber << "|"
             << setw(25) << phonelist[i].email << "|"
             << setw(10) << phonelist[i].catagory << "|\n";
        cout << string(70, '-') << "\n";
    }
}

void searchcontact(vector<phonedata>& phonelist) {
    string name;
    string phonenumber;
    string email;
    string catagory;
    cout<<"SEE BELOW AND SEATCH CONTACT\n";
    viewallcontact(phonelist);
    if (phonelist.empty()) {
        cout << "YOU HAVE NOT SAVED ANY CONTACT!!\n";
        return;
    }

    
    cout << "ENTER THE NAME TO SEARCH: ";
    cin >> name;

    

    for (size_t i = 0; i < phonelist.size(); i++) {
        if (phonelist[i].name == name) {
             
                cout << string(70, '=') << "\n";
                cout << string(25, ' ') << "YOUR SEARCH CONTACT" << "\n";
                cout << string(70, '=') << "\n";

                cout << left
                     << setw(16) << "name" << "|"
                     << setw(14) << "phonenumber" << "|"
                     << setw(25) << "email" << "|"
                     << setw(10) << "catagory" << "|\n";
                cout << string(70, '-') << "\n";
                
            

            cout << left
                 << setw(16) << phonelist[i].name << "|"
                 << setw(14) << phonelist[i].phonenumber << "|"
                 << setw(25) << phonelist[i].email << "|"
                 << setw(10) << phonelist[i].catagory << "|\n";
            cout << string(70, '-') << "\n";
            return;
        }
    }
    cout<<"your enter name does not match!!\n";

    
}
void updatecontact(vector<phonedata>& phonelist){
    string name;
    string phonenumber;
    string newphonenumber;
    string email;
    string catagory;
    if(phonelist.empty()){
        cout<<"YOUR LIST IS EMPTY!!\n";
        return;
    }
    cout<<"SEE BELOW FOR UPDATING CONTACT\n";
    viewallcontact(phonelist);
    cout << string(70, '=') << "\n";
                cout << string(26.5, ' ') << "UPDATAING CONTACT" << "\n";
                cout << string(70, '=') << "\n";
                cout<<"ENTER PHONE NUMBER TO MAKE CHANGES:";
                        cin>>phonenumber;
                        for(auto i=0;i<phonelist.size();i++){
                        if(phonelist[i].phonenumber==phonenumber){
                            cout<<"ENTER THE NEW PHONENUMBER:";
                            cin>>newphonenumber;
                        for(auto j=0;j<phonelist.size();j++){
                        if(j!=i&& phonelist[i].phonenumber==newphonenumber){
                            cout<<"YOU ENTERED DUPLICATE EMAIL PLS ENTER CORRECT EMAIL!!"<<"\n";
                            return;
                        }
                        else{
                            phonelist[i].phonenumber=newphonenumber;
                            cout<<"YOUR PHONE NUMBER IS UPDATED NOW YOUR UPDATED PHONE NUMBER IS:"<<newphonenumber<<"\n";
                        }
                        
                        
                    }
                    }
                    }
                
                
                 
                        
                    
                    
                        string newemail;
                        cout<<"ENTER EMAIL TO MAKE CHANGES:";
                        cin>>email;
                        for(auto i=0;i<phonelist.size();i++){
                        if(phonelist[i].email==email){
                            cout<<"ENTER THE NEW EMAIL ID :";
                            cin>>newemail;
                        for(auto j=0;j<phonelist.size();j++){
                        if(j!=i&& phonelist[i].email==newemail){
                            cout<<"YOU ENTERED DUPLICATE EMAIL PLS ENTER CORRECT EMAIL!!";
                            return;
                        }
                        else{
                            phonelist[i].email=newemail;
                            cout<<"YOUR EMAIL IS UPDATED NOW YOUR UPDATED EMAIL IS:"<<newemail<<"\n";
                        }
                        
                        
                    }
                    }
                    }
                    }
                
                


void deletecontact(vector<phonedata>& phonelist){
    string name;
    string phonenumber;
    
    string email;
    string catagory;
    cout<<"enter the phonenumber to delete the contact:";
    cin>>phonenumber;
    for(auto i=0;i<phonelist.size();i++){
        if(phonelist[i].phonenumber==phonenumber){
            phonelist.erase(phonelist.begin()+i);
            cout<<"YOU HAVE SUCCESSFULLY DELETED THE CONTACT IN THIS PHONE NUMBER:"<<phonenumber<<"\n";
        }
    }
    
}
            




int main(){
    vector<phonedata> phonelist;
    int choice;
    do{
        cout<<"====================================\n";
        cout<<"WELCOME TO KUNDU'S BOOK CONTACT LIST\n";
        cout<<"====================================\n";
        cout<<"1.ADD CONTACT\n";
        cout<<"2.VIEW CONTACT\n";
        cout<<"3.SEARCH CONTACT\n";
        cout<<"4.UPDATE CONTACT\n";
        cout<<"5.DELETE CONTACT\n";
        cout<<"6.EXIT\n";
        
        cout<<"ENTER ANY ONE CHOOSE OUT OF 6  : ";
        cin>>choice;
        switch(choice){
            case 1:{
                addcontact(phonelist);
                break;
                
            }
            case 2:{
                viewallcontact(phonelist);
                break;
            }
            case 3:{
                searchcontact(phonelist);
                break;
            }
            case 4:{
                updatecontact(phonelist);
                break;
        }
        case 5:{
            deletecontact(phonelist);
            break;
        }
        case 6:{
            cout<<"---------------------------------------------\n";
            cout<<"THANK YOU FOR VISITING KUNDU'S CONTACT BOOK!!"<<"\n";
            cout<<"---------------------------------------------\n";
            break;
            
        }
        default:{
            cout<<"INVAILD OPTION\n";
            cout<<"YOU HAVE NOT SELECTED ANY ANY OF THE OPTIONS\n";
            break;
        }
    }
    
}while(choice!=6);
return 0;
}