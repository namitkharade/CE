#include<iostream>
#include<stdio.h>
using namespace std;

class publication
{

protected:
    char title[50];
    float price;
public:
    void get_title()
     {   
    cout<<"Enter the title of book :"<<endl;
    cin>>title;
    cout<<"Enter the price of book:"<<endl;
    cin>>price;
     }
    
     void put_title()
     {
         cout<<"The title of book is:"<<title<<endl;
         cout<<"The price of book is :"<<price<<endl;
     }
    
};

class book:public publication
{
 
  protected:
    int page_count;
  public:
      void get_count()
      {
          try
          {
          cout<<"\n Enter  book title & price=";
          cin>>title>>price;
                 
            cout<<"Enter the pages:"<<endl;
            cin>>page_count;
          if(page_count<=0)
          throw 1;
          }
          catch(int i)
          {
          if(i=1)
          {
          cout<<" you Entered Invalid Page Count ";
          }
          page_count=0;
         
          cout<<"page_count="<<page_count;
          cout<<"page_count again"<<endl;
          cin>>page_count;
         
          }
      }
              
      void put_count()
      {
       cout<<"The page count is :"<<page_count<<endl;
      }

};

class tape:public publication
{
protected:
             float play_time;
public:
         void get_tape()
       {
    cout<<"Enter the play time:"<<endl;
    cin>>play_time;   
       }
      
       void put_tape()
       {
       cout<<"The play time is :"<<play_time<<endl;
       }
};

int main()
{
    book b;
    tape t;
    b.get_title();
    b.put_title();
       
    b.get_count();
    b.put_count();
   
    t.get_tape();
    t.put_tape();
   
    return 0;   
}

