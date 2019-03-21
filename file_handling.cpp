#include<iostream>      //header file for i/o operations
#include<fstream>       //header file for file i/o operations      
#include<stdlib.h>        //header file for library functions
#include<string.h>
using namespace std;      //used to access standard c++ library

class user_details        
{
      private :
              char c_name[500],email_id[500],p_name[500],address[500],type_profession[500],ph_no[500];          //data members
      public :
             void insert_details();              //member functions
             void search_details();
             void update_details();
             void delete_details();
             void display_details();
};
void user_details :: insert_details()            //func used to insert user details
{
     ofstream fout;                              
     fout.open("/HOME/USER/STUDENTS/EXAM/EXAM17/DESKTOP//user_details.txt",ios::app);
     cout << "\n Enter Company Name:";
     cin >> c_name;
     cout << "\n Enter Proprieter's Name:";
     cin >> p_name;
     cout << "\n Enter Email-Id:";
     cin >> email_id;
     cout << "\n Enter Company's Address:";
     cin >> address;
     cout << "\n Enter Type of Profession:";
     cin >> type_profession;
     cout << "\n Enter Phone No.:";
     cin >> ph_no;
     fout << c_name<<"\n"<<p_name<<"\n"<<email_id<<"\n"<<address<<"\n"<<type_profession<<"\n"<<ph_no<<"\n";
     fout.close();
     
}
void user_details :: search_details()                              //func used to search details of the user
{
     char s[500];
     int ch;
     char c;
     char detail[200][500];
     ifstream fin;
     fin.open("user_details.txt");
     int index = 0;
     int i;
     char c_name1[500],email_id1[500],p_name1[500],address1[500],type_profession1[500],ph_no1[500];
     do
     {
         cout<<"*****************************************************"<<endl;
         cout<<"1.SEARCH BY TYPE OF PROFESSION.\n";
         cout<<"2.SEARCH BY COMPANY'S NAME.\n";
         cout<<"3.SEARCH BY PROPRIETER'S NAME.\n";
         cout<<"4.SEARCH BY ADDRESS OF THE COMPANY.\n";
         cout<<"5.SEARCH BY EMAIL-ID OF THE PROPRIETER.\n";
         cout<<"6.SEARCH BY PHONE-NUMBER OF THE PROPRIETER.\n";
         cout<<"*****************************************************"<<endl;
         cout<<"Enter our Choice For Searching:=";
         cin>>ch;
         switch(ch)
         {
                  case 1:
                       cout << "\nENTER TYPE OF PROFESSION TO BE SEARCHED := ";
                       cin >> type_profession1; 
                       while(fin.getline(s,50,'\n'))
                       {
                         for(i=0;i<strlen(s);i++)
                         {
                           detail[index][i] = s[i];
                         }
                         index++;    
                       }
                       for(i=0;i<index;i++)
                       {
                         if(strcmp(detail[i+4],type_profession1) == 0)
                         {
                             cout<<"*****************************************************"<<endl;
                             cout<<"\n\n USER DETAILS\n"<<endl;
                             cout<<"COMPANY'S NAME :=" << detail[i] << endl;
                             cout<<"PROPRIETER'S NAME :=" << detail[++i] << endl;
                             cout<<"TYPE OF PROFESSION :=" << detail[++i] << endl;
                             cout<<"ADDRESS OF COMPANY :=" << detail[++i] << endl;
                             cout<<"EMAIL-ID OF PROPRIETER :=" <<detail[++i] << endl;
                             cout<<"PHONE NUMBER OF PROPRIETER :=" <<detail[++i] << endl;
                             cout<<"*****************************************************"<<endl;
                         }
                       }
                       break;
                  case 2:
                       cout << "\nENTER COMAPNY NAME TO BE SEARCHED := ";
                       cin >> c_name1;
                       while(fin.getline(s,50,'\n'))
                       {
                         for(i=0;i<strlen(s);i++)
                         {
                           detail[index][i] = s[i];
                         }
                         index++;    
                       }
                       for(i=0;i<index;i++)
                       {
                         if(strcmp(detail[i+0],c_name1) == 0)
                         {
                             cout<<"*****************************************************"<<endl;
                             cout<<"\n\n USER DETAILS\n"<<endl;
                             cout<<"COMPANY'S NAME :=" << detail[i] << endl;
                             cout<<"PROPRIETER'S NAME :=" << detail[++i] << endl;
                             cout<<"TYPE OF PROFESSION :=" << detail[++i] << endl;
                             cout<<"ADDRESS OF COMPANY :=" << detail[++i] << endl;
                             cout<<"EMAIL-ID OF PROPRIETER :=" <<detail[++i] << endl;
                             cout<<"PHONE NUMBER OF PROPRIETER :=" <<detail[++i] << endl;
                             cout<<"*****************************************************"<<endl;
                         }
                       }
                       break; 
                      
                  case 3:
                       cout << "\nENTER PROPRIETER'S NAME TO BE SEARCHED := ";
                       cin >> p_name1; 
                       while(fin.getline(s,50,'\n'))
                       {
                         for(i=0;i<strlen(s);i++)
                         {
                           detail[index][i] = s[i];
                         }
                         index++;    
                       }
                       for(i=0;i<index;i++)
                       {
                         if(strcmp(detail[i+1],p_name1) == 0)
                         {
                             cout<<"*****************************************************"<<endl;
                             cout<<"\n\n USER DETAILS\n"<<endl;
                             cout<<"COMPANY'S NAME :=" << detail[i] << endl;
                             cout<<"PROPRIETER'S NAME :=" << detail[++i] << endl;
                             cout<<"TYPE OF PROFESSION :=" << detail[++i] << endl;
                             cout<<"ADDRESS OF COMPANY :=" << detail[++i] << endl;
                             cout<<"EMAIL-ID OF PROPRIETER :=" <<detail[++i] << endl;
                             cout<<"PHONE NUMBER OF PROPRIETER :=" <<detail[++i] << endl;
                             cout<<"*****************************************************"<<endl;
                         }
                       }
                       break;
                  case 4:
                       cout << "\nENTER ADDRESS1 TO BE SEARCHED := ";
                       cin >> address1; 
                       while(fin.getline(s,50,'\n'))
                       {
                         for(i=0;i<strlen(s);i++)
                         {
                           detail[index][i] = s[i];
                         }
                         index++;    
                       }
                       for(i=0;i<index;i++)
                       {
                         if(strcmp(detail[i+3],address1) == 0)
                         {
                             cout<<"*****************************************************"<<endl;
                             cout<<"\n\n USER DETAILS\n"<<endl;
                             cout<<"COMPANY'S NAME :=" << detail[i] << endl;
                             cout<<"PROPRIETER'S NAME :=" << detail[++i] << endl;
                             cout<<"TYPE OF PROFESSION :=" << detail[++i] << endl;
                             cout<<"ADDRESS OF COMPANY :=" << detail[++i] << endl;
                             cout<<"EMAIL-ID OF PROPRIETER :=" <<detail[++i] << endl;
                             cout<<"PHONE NUMBER OF PROPRIETER :=" <<detail[++i] << endl;
                             cout<<"*****************************************************"<<endl;
                         }
                       }
                       break;
                  case 5:
                       cout << "\nENTER EMAIL-ID TO BE SEARCHED := ";
                       cin >> email_id1; 
                       while(fin.getline(s,50,'\n'))
                       {
                         for(i=0;i<strlen(s);i++)
                         {
                           detail[index][i] = s[i];
                         }
                         index++;    
                       }
                       for(i=0;i<index;i++)
                       {
                         if(strcmp(detail[i+2],email_id1) == 0)
                         {
                             cout<<"*****************************************************"<<endl;
                             cout<<"\n\n USER DETAILS\n"<<endl;
                             cout<<"COMPANY'S NAME :=" << detail[i] << endl;
                             cout<<"PROPRIETER'S NAME :=" << detail[++i] << endl;
                             cout<<"TYPE OF PROFESSION :=" << detail[++i] << endl;
                             cout<<"ADDRESS OF COMPANY :=" << detail[++i] << endl;
                             cout<<"EMAIL-ID OF PROPRIETER :=" <<detail[++i] << endl;
                             cout<<"PHONE NUMBER OF PROPRIETER :=" <<detail[++i] << endl;
                             cout<<"*****************************************************"<<endl;
                         }
                       }
                       break;
                  case 6:
                       cout << "\nENTER PHONE-NUMBER TO BE SEARCHED := ";
                       cin >> ph_no1; 
                       while(fin.getline(s,50,'\n'))
                       {
                         for(i=0;i<strlen(s);i++)
                         {
                           detail[index][i] = s[i];
                         }
                         index++;    
                       }
                       for(i=0;i<index;i++)
                       {
                         if(strcmp(detail[i+5],ph_no1) == 0)
                         {
                             cout<<"*****************************************************"<<endl;
                             cout<<"\n\n USER DETAILS\n"<<endl;
                             cout<<"COMPANY'S NAME :=" << detail[i] << endl;
                             cout<<"PROPRIETER'S NAME :=" << detail[++i] << endl;
                             cout<<"TYPE OF PROFESSION :=" << detail[++i] << endl;
                             cout<<"ADDRESS OF COMPANY :=" << detail[++i] << endl;
                             cout<<"EMAIL-ID OF PROPRIETER :=" <<detail[++i] << endl;
                             cout<<"PHONE NUMBER OF PROPRIETER :=" <<detail[++i] << endl;
                             cout<<"*****************************************************"<<endl;
                         }
                       }
                       break;
         }
         cout << "\nDO YOU WANT TO CONTINUE SEARCHING -Y OR N := ";
         cin>>c;
     }while(c!='N');
     fin.close();   
}
void user_details :: update_details()                      //func used to update details of the user
{
     int n;
     char c;
     char old_c_name[500],old_email_id[500],old_p_name[500],old_address[500],old_type_profession[500],old_ph_no[500];
     char new_c_name[500],new_email_id[500],new_p_name[500],new_address[500],new_type_profession[500],new_ph_no[500];
     ofstream fout1;
     ifstream fin1;
     ofstream fout2;
     ifstream fin2;
     char s[500];
     do
     {
         cout<<"*****************************************************"<<endl;
         cout <<"List of Details to be Updated :\n";
         cout << "1. Company Name\n";
         cout << "2. Proprieter Name\n";
         cout << "3. Email-Id\n";
         cout << "4. Address of the comapany\n";
         cout << "5. Type of Profession of the proprieter\n";
         cout << "6. Phone Number of the proprieter\n";
         cout<<"*****************************************************"<<endl;
         cout << "Enter your Choice For Updating :=";
         cin >> n;
         switch(n)
         {
          case 1:      
               cout << "\n Enter old name of the company :";
               cin >> old_c_name;
               cout << "\n Enter new name of the company :";
               cin >> new_c_name;
               fout1.open("temp.txt");
               fin1.open("user_details.txt");
               while(fin1.getline(s,50,'\n'))
               {
                 if(strcmp(s,old_c_name) == 0)
                 {
                  fout1 << new_c_name << "\n";
                 }
                 else
                 {
                  fout1 << s << "\n";     
                 }
               }
               fout1.close();
               fin1.close();
               fout2.open("user_details.txt");
               fin2.open("temp.txt");
               while(fin2.getline(s,50,'\n'))
               {
                fout2 <<s<< "\n";     
               }
               fout2.close();
               fin2.close();
               break;
          case 2:   
               cout << "\n Enter old name of the proprieter :";
               cin >> old_p_name;
               cout << "\n Enter new name of the proprieter :";
               cin >> new_p_name;
               fout1.open("temp.txt");
               fin1.open("user_details.txt");
               char s[500];
               while(fin1.getline(s,50,'\n'))
               {
                if(strcmp(s,old_p_name) == 0)
                {
                 fout1 << new_p_name << "\n";
                }
                else
                {
                    fout1 << s << "\n";     
                }
               }
               fout1.close();
               fin1.close();
               fout2.open("user_details.txt");
               fin2.open("temp.txt");
               while(fin2.getline(s,50,'\n'))
               {
                 fout2 <<s<< "\n";     
               }
               fout2.close();
               fin2.close();
               break;
          case 3:
               cout << "\n Enter old email_id :";
               cin >> old_email_id;
               cout << "\n Enter new email_id :";
               cin >> new_email_id;
               fout1.open("temp.txt");
               fin1.open("user_details.txt");
               
               while(fin1.getline(s,50,'\n'))
               {
                 if(strcmp(s,old_email_id) == 0)
                 {
                      fout1 << new_email_id << "\n";
                 }
                 else
                 {
                      fout1 << s << "\n";     
                 }
               }
               fout1.close();
               fin1.close();
               fout2.open("user_details.txt");
               fin2.open("temp.txt");
               while(fin2.getline(s,50,'\n'))
               {
                fout2 <<s<< "\n";     
               }
               fout2.close();
               fin2.close();
               break;
          case 4:
               cout << "\n Enter old name of the address :";
               cin >> old_address;
               cout << "\n Enter new name of the address :";
               cin >> new_address;
               fout1.open("temp.txt");
               fin1.open("user_details.txt");
              
               while(fin1.getline(s,50,'\n'))
               {
                 if(strcmp(s,old_address) == 0)
                 {
                      fout1 << new_address << "\n";
                 }
                 else
                 {
                      fout1 << s << "\n";     
                 }
               }
               fout1.close();
               fin1.close();
               fout2.open("user_details.txt");
               fin2.open("temp.txt");
               while(fin2.getline(s,50,'\n'))
               {
                      fout2 <<s<< "\n";     
               }
               fout2.close();
               fin2.close();
               break;
          case 5:
               cout << "\n Enter old name of the type of profession :";
               cin >> old_type_profession;
               cout << "\n Enter new name of the type of profession :";
               cin >> new_type_profession;
               fout1.open("temp.txt");
               fin1.open("user_details.txt");
               
               while(fin1.getline(s,50,'\n'))
               {
                 
                 if(strcmp(s,old_type_profession) == 0)
                 {
                      fout1 << new_type_profession << "\n";
                 }
                 else
                 {
                      fout1 << s << "\n";     
                 }
               }
               fout1.close();
               fin1.close();
               fout2.open("user_details.txt");
               fin2.open("temp.txt");
               while(fin2.getline(s,50,'\n'))
               {
                      fout2 <<s<< "\n";     
               }
               fout2.close();
               fin2.close();
               break;
          case 6:
               cout << "\n Enter old phone-number :";
               cin >> old_ph_no;
               cout << "\n Enter new phone-number :";
               cin >> new_ph_no;
               fout1.open("temp.txt");
               fin1.open("user_details.txt");
               
               while(fin1.getline(s,50,'\n'))
               {
               
                 if(strcmp(s,old_ph_no) == 0)
                 {
                      fout1 << new_ph_no << "\n";
                 }
                 else
                 {
                      fout1 << s << "\n";     
                 }
               }
               fout1.close();
               fin1.close();
               fout2.open("user_details.txt");
               fin2.open("temp.txt");
               while(fin2.getline(s,50,'\n'))
               {
                      fout2 <<s<< "\n";     
               }
               fout2.close();
               fin2.close();
               break;
          default :
                  cout << "\nInvalid option";
                  break;
         }
         cout << "\nDO YOU WANT TO CONTINUE UPDATING -Y OR N := ";
         cin>>c;
     }while(c!='N');       
}
void user_details :: display_details()                  //func used to display details of the user
{
     char s[500];
     char detail[200][500];
     ifstream fin;
     fin.open("user_details.txt");
     int index = 0;
     int i;
     
     while(fin.getline(s,50,'\n'))
     {
     
        for(i=0;i<strlen(s);i++)
        {                          
           detail[index][i] = s[i];
        }
        index++;    
     }
     
     for(i=0;i<index;i++)
     {
         cout<<"*****************************************************"<<endl;
         cout<<"\n\n USER DETAILS\n"<<endl;
         cout<<"COMPANY'S NAME :=" << detail[i] << endl;
         cout<<"PROPRIETER'S NAME :=" << detail[++i] << endl;
         cout<<"TYPE OF PROFESSION :=" << detail[++i] << endl;
         cout<<"ADDRESS OF COMPANY :=" << detail[++i] << endl;
         cout<<"EMAIL-ID OF PROPRIETER :=" <<detail[++i] << endl;
         cout<<"PHONE NUMBER OF PROPRIETER :=" <<detail[++i] << endl;
         cout<<"*****************************************************"<<endl;
     }
     fin.close();
   
}
int main()
{
    user_details u;
    int ch;
    char c;
    do
    {
        cout<<"*****************************************************"<<endl;
        cout<<"\n\n VISITING CARD SOFTWARE\n"<<endl;
        cout<<"1.FOR INSERTING CARD DETAILS.\n";
        cout<<"2.FOR SEARCHING CARD DETAILS.\n";
        cout<<"3.FOR UPDATING CARD DETAILS.\n";
        cout<<"4.TO DISPLAY CARD DETAILS.\n";
        cout<<"5.EXIT.\n \n";
        cout<<"*****************************************************"<<endl;
        cout<<"Enter Your Choice := ";
        cin>>ch;
        switch(ch)
        {
                  case 1:
                       u.insert_details();
                       break;
                  case 2:
                       u.search_details();
                       break;
                  case 3:
                       u.update_details();
                       break;
                  case 4:
                       u.display_details();
                       break;
                  case 5:
                       exit(1);
        }
        cout << "\nDO YOU WANT TO CONTINUE FOR ANOTHER OPTIONS -Y OR N := ";
        cin >> c;
        }while(c!='N');
return 0;
}
