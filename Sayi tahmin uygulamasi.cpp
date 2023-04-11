#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>


using namespace std;

int main()

{

    srand(time(0));
 
     int tutulanSayi;
     int tahmin;
     int hak=5;

     string devammi;

     while( true )

     {    

        tutulanSayi = rand() % 11;


        while( true )

        {

          if( hak <= 0 )

          {

             cout <<"Bilemediz :( " << tutulanSayi << endl;
             break;

          }
         
         cout<<"Tahmininizi giriniz: ";
         cin>>tahmin;

        

        if ( tahmin == tutulanSayi)

        {
            cout<<"Tebrikler bildiniz :)"<<endl;
            break;
            
        }

        else if ( tahmin < tutulanSayi)

        {
            cout<<"lutfen tahmininizi buyultunuz"<<endl;

            
        }

        else
        
        {   
            cout<<"lutfen tahmininizi kucultunuz"<<endl;

        }

        hak--;


     }

     cout<<"Devam etmek istiyor musunuz? (e/h)";
     cin>>devammi;
     
    if ( devammi == "e" || devammi == "E" )

       {
           
           hak = 5;

           system("cls");

       }

       else

       {

           cout<<"Tebrikler oyunu bitirdiniz :)"<<endl;
           break;
           
            
            
       }

    }

      

    return 0;

}

