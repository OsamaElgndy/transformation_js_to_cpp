#ifndef TRANSFORMATIONTOJAVASCRIPT_H
#define TRANSFORMATIONTOJAVASCRIPT_H
using namespace std;
#include <iostream>
#pragma once

class transformationTOjavascript
{
public:
    transformationTOjavascript();
    ~transformationTOjavascript();
     public:

    // -----------------------000---------------functions Methods string-----------------------------------------------------//     
    

          void S_charAt(string input,int specified){
            for(int i = 0; i < input.length() ; i++){
                    if(i == specified){
                        cout<<input[i];
                    }
            }

          }
            void S_dataType( string text1 ){
                // cout<< typeof(text1);

          }
          void S_endsWith(string text){
            cout<<text[ text.length()-1];
          }
          void S_concat( string one , string tow){
            cout<<one+tow;

          }

          void S_form_char_code(int text){
                   cout<<char(text);
          }
          
          void S_includes( string input, char value){
                 for(int i = 0;  input.length() > i  ; i++ ){
                    if(input[i] == value){
                        cout<<" yes true  this is loacations: "<< i+1 <<endl;
                             break;
        } 
                    else if( i+1  ==  input.length() ){
                            cout<<"not value false"<<endl;
        }

    

                }
      
          }
             void S_includeS_choise_of( string input, char value){
    
                for(int i = 0;  input.length() > i  ; i++ ){
                    if(input[i] == value){
                        cout<<" yes true  this is loacations: "<< i+1 <<endl;
                             break;
        } 
                    else if( i+1  ==  input.length() ){
                            cout<<"not value false"<<endl;
        }

    

                }
          }
                       void S_includeS_choise_last( string input, char value){
                      for(int i = input.length();   -1 <  i    ; i-- ){
                    if(input[i] == value){
                        cout<<" yes true  this is loacations: " <<input.length() -  i<<endl;
                             break;
                             
        } 
               else if( input.length() + i ==  input.length() ){
                            cout<<"not value false"<<endl;
                             break;
                }

    

                }
          }
                 void S_length(string text){
                    cout<<text.length();
                 }          

                void S_locale_compare( string textOne,string texttwo){
                    cout<<textOne+"with"+texttwo;
                }



                void S_match(string input, string value ){
                    string result[4];
                    for(int  i= 0 ; i < input.length();i++){



                    if(input[i] == value[0] && input[i+1] == value[1] && input[i+2] == value[2]){

                    cout<<"True: a value sreach: location "<<i<<endl;    
                    cout<<"True: a value sreach: location "<<i+1<<endl;    
                    cout<<"True: a value sreach: location "<<i+2<<endl;    
                    result[0] =  input[i] ;
                    result[1] =  input[i+1];    
                    result[2] =  input[i+2] ;   
                    }
                    }
                    cout<<"this is a valie string"<<result[0]<<result[1]<<result[2];

                }
                void S_repeat(string text){
                    string result;


                for(int i = 0; i < text.length(); i++ )
                {
                    result[i] = text[i];

                }
                    for(int i = 0; i < text.length(); i++ ){
                        cout<<result[i];
                    }       
                }

                    void S_sreach(string input , char value){

                           for(int i = 0; i < input.length(); i++){
                                if(input[i] == value){
                                    cout<<"yes, TRUE :the locations__"<<i <<" " <<input[i]<<endl;
                                }
                                if(input.length() ==  i+1 ){
                                    cout<<"no, FALSE: "<<endl;
                                    

                                }
                            }

                    }
                    void S_slice(int To_set, int testis , string value){
                         string text[] = {"one  ","two   ","three   ","four  ","five "};

                        if(testis > 0 ){
                            text[To_set] = value;
                        } 
                         else if(testis == 0 ){
                            text[To_set] += "*"+value;
                        }
                        else{

                        cout<<text[To_set]<<endl;
                        }
                        for(int q= 0 ; q < text->length(); q++ ){
                            cout<<text[q];
                        }
                    }      
                       void S_startWith(string input,string input2){
                        if(input[0] == input2[0] && input[1] == input2[1] &&input[2] == input2[2] &&input[3] == input2[3] &&input[4] == input2[4] ){
                            cout<<"TRUE"<<endl;
                        }
                        else{
                            cout<<"FALSE"<<endl;

                            }    
                       }
 
                void S_substr(int start,int lenght){
                    string text="hello worldi";
                    for(int count = start ;  lenght > start ; start++){
                        cout<<text[start]<<endl;
                    }
                }
                  void S_substring(int start){
                    string text="hello worldi";
                    for(int count = start ;  text.length() > start ; start++){
                        cout<<text[start]<<endl;
                    }
                }

                  void S_lowerCase(string value ){
                    
                    for(int i = 0; i < value.length(); i++){

                       if( int(value[i]) < 98){
                        cout<<char( int(value[i]+32)) ;

                        }
                        else{
                            cout<<value[i];
                        }
                  }
                  }
                  void S_upperCase(string value ){


                    for(int i = 0; i < value.length(); i++){

                       if( int(value[i]) < 98){
                        cout<<char( int(value[i]+32)) ;

                        }
                        else{
                            cout<<value[i];
                        }
                  }
                  }
                  void S_toString(int value[])
                  {
                     int count = sizeof(value) / sizeof(value[0]);

                    for(int i =0; i < count ; i++){
                        cout<<char(value[i]);
                    }
                  }
                  void S_trim(string str){
                      for(int i = 0; i < str.length(); i++){
                    if(str[i] == ' '){
                        continue;
                    }
                    else{
                        cout<<str[i];
                    }
                }

                  }
                    void S_valueof_string( string text1, string text2 ){
                            cout<<text1 + text2;
                            }
                        void S_valueof_number( int text1, int text2 ){
                            cout<<text1 + text2; 
                        } 

          
    // --------------------------------------functions Methods array-----------------------------------------------------//     


                 void A_char_at( int positison, int specified[] ){
                        for(int i = 0; i < 22 ; i++ ){
                            if(i ==  positison ){
                                cout<<"this is result: "<<specified[i]-1<<endl;

                            }
                        }

                     }
                       

                     
                          void A_concat( string text1, string text2 ){
                            cout<<text1 + text2;

                          }
                void A_cope_wihtni(int To_set, int testis , string value){
                        string text[] = {"one  ","two   ","three   ","four  ","five "};

                        if(testis > 0 ){
                            text[To_set] = value;
                        } 
                         else if(testis == 0 ){
                            text[To_set] += "*"+value;
                        }
                        else{

                        cout<<text[To_set]<<endl;
                        }
                        for(int q= 0 ; q < text->length(); q++ ){
                            cout<<text[q];
                        }
                     }
                        void A_fill(string value , string text[]  ){
                            
                            for (int  i = 0; i < text->length(); i++)
                            {
                                text[i] = value;
                            }for (int  i = 0; i < text->length(); i++)
                            {
                                cout<<text[i]<<endl;
                            }
                        }
                        void A_find_under(int value , int Array[] ){
                        int count = sizeof(Array) / sizeof(Array[0]);
                            for (int i = 0; i < count ; i++)
                        {
                            if(Array[i] < value)
                            {
                                cout<<Array[i] <<endl;
                            }

                        }
                        }
                         void A_find_above(int value , int Array[] ){
                        int count = sizeof(Array) / sizeof(Array[0]);
                            for (int i = 0; i < count ; i++)
                        {
                            if(Array[i] > value)
                            {
                                cout<<Array[i] <<endl;
                            }

                        }
                        }
                        void A_flat(int input[3][4]){
                                                    
                        for(int i = 0 ; i < 3 ; i++){
                            for(int q = 0 ; q < 4; q++){
                                cout<<"["<<input[i][q]<<"]"<<endl;
                            }

                        }

                        }
                        void A_Each(string input[] , int number[]){
                            for(int i = 0; i < input->length(); i++  ){
                                cout<<number[i]<< " : "<<input[i] <<endl; 
                            }

                        }
                        void A_includes(string value, string input[]){
                        
                             for (int i = 0; i < input->length(); i++)
                            {
                                if(input[i] == value){
                                    cout<< "this a locations: "<<1+i<<endl<<"yes: is include"<< input[i]<<endl;
                                break;
                                } 
                                 else if (i+1 == input->length())
                                {
                                cout<<"he isnot excsting || this is locations ==="<<i<<endl;
                                }
                              
                                   
                                

                        }
                        }
                        void A_from(string value){
                            
                            for(int i = 0; i < value.length() ; i++){
                                cout<<value[i]<<",";
                            }
                        }
        
                              void A_includeS_ofAnd(string value, string input[]){
                        
                             for (int i = 0; i < input->length(); i++)
                            {
                                if(input[i] == value){
                                    cout<< "true"<<i<<true<<endl;
                                break;
                                } 
                                 else if (i+1 == input->length())
                                {
                                cout<<"false "<<i<<false<<endl;
                                }
                        }
                        }
                                void A_lastIndexOf(string input[], string value ){
                                for(int i = input->length();   -1 <  i    ; i-- ){
                                    
                                        if(input[i] == value){

                                cout<<" yes true  this is loacations: " <<input->length() -  i<<endl;
                                    break;
                                    
                                    } 
                                else if( input->length() + i ==  input->length() ){
                                    cout<<"not value false"<<endl;
                                    break;
                                    }

                                }
                        }
                          void A_join(string text1[],string text2[] ){
                            string total[7];
                            

                                for(int i = 0; i < text1->length(); i++)
                                        {        
                                            total[i] += text1[i];

                                                        
                                                    }
                                    
                                for(int i = text1->length(); i < text2->length()+text1->length()-6; i++)

                            {
                                    total[i] += text2[ 5 - i ];

                                                        
                            }
                                                    
                                for(int i = 0; i<6;i++){

                                    cout<<total[i]<<endl;
                            }
                        }
                        void A_map(int number[],int value){
                            int count = sizeof(number) / sizeof(number[0]);
                            int output[100];
                            for(int i =0 ; i <count ; i++){
                                  output[i] = number[i] * value;
                            }
                            
                            for(int i =0 ; i <count ; i++){
                                  cout<<"["<< output[i]<<"]" ;
                            }
                        }
                        void A_pop_string(string input[]){

                                for( int i =0; i <input->length()-2; i++)
                                
                                {
                            
                                cout<<input[i];
                                
                                }     

                        }
                            void A_pop_number(int input[]){

                            
                            int count = sizeof(input) / sizeof(input[0]) ;

                            for(int i =0; i < count -1 ; i++)
                            {
                            cout<<input[i];
                            }     

                            }
                        void A_push_number( int input[] ,int value){
                            int count = sizeof(input) / sizeof(input[0]) ;

                                for(int i =0; i < count + 1 ; i++)
                                {
                                if(count + 1 == i +1){
                                    input[i] = value;
                                }
                                cout<<" ,"<<input[i]<<",";
                                }     
                        }
                        void A_push_string( string input[] , string value){

                                for(int i =0; i < input->length()+ 1 ; i++)
                                {
                                if(input->length() + 1 == i +1){
                                    input[i] = value;
                                }
                                cout<<" ,"<<input[i]<<",";
                                }     

                        }
          
                        void A_reduce(int number[] ){
                             int count = sizeof(number) / sizeof(number[0]);

                                int total;
                                for(int i = 0; i < count ; i++){
                                if(i == 0){
                                    total = number[0];
                                }else{
                                    total -= number[i]; 
                                }

                                    
                                }
                                cout<<total;
                        }
                        void A_reverse_number(int number[]){
                            int count = sizeof(number) / sizeof(number[0]);
                               for(int o  = count;  -1 < o ; o-- ){
                                cout<<number[o];
 
                                }
 
                        }
                        void A_recerse_string(string input[]){
                                 for(int o  = input->length();  -1 < o ; o-- ){
                                        
                                        cout<<input[o]<<"_";
                            
                                        }
                            
                        }
                        void A_shift_number(int input[]){
                            
                        int count = sizeof(input) / sizeof(input[0]) ;

                            for(int i =1; i < count; i++)
                            {
                            cout<<input[i];
                            }     


                        }
                        void A_shift_string(string input[]){
                            

                            for(int i =1; i < input->length(); i++)
                            {
                            cout<<input[i];
                            }     


                        }
                        void A_slice(int selects, int end)
                        {
                            string fruits[] = {"Banana", "Orange", "Lemon", "Apple", "Mango"};

                            for(int i  = selects; i < end; i++ ){
                                cout<<fruits[i];
                            }

                        }
                        void A_length(string input[]){
                            cout<<"this is a count input" <<input->length()<<endl;
                        }
                        void A_some_under(int array[],int cheack ){
                            int count = sizeof(array) / sizeof(array[0]);
                            for (int i = 0; i < count; i++)
                            {
                            if(cheack < array[i])
                            {
                                cout<<array[i]<<" < TRUE"<<endl;
                            }
                            
                            else if (i == count -1)
                            {
                            cout<<"not a value FALSE"<<endl; 
                            break;
                            }



                            }
                        }

                        void A_some_above(int array[],int cheack ){
                            int count = sizeof(array) / sizeof(array[0]);
                            for (int i = 0; i < count; i++)
                            {
                            if(cheack > array[i])
                            {
                                cout<<array[i]<<" > TRUE"<<endl;
                            }
                            
                            else if (i == count -1)
                            {
                            cout<<"not a value FALSE"<<endl; 
                            break;
                            }



                            }

                        }
                        void A_unshift_string(string input[], string NewValue){
                            
                            for(int i =0; i < input->length(); i++)
                            {
                                if(i == 0){
                                    cout<<NewValue<<endl;
                                }
                                cout<<input[i]<<endl;
                            }     

                        } void A_unshift_number(int input[], int NewValue){
                            int count = sizeof(input) / sizeof(input[0]); 
                            for(int i =0; i < count; i++)
                            {
                                if(i == 0){
                                    cout<<NewValue<<endl;
                                }
                                cout<<input[i]<<endl;
                            }     

                        }
                         void S_valueof_string( string text1[], string text2[] ){
                            for(int i = 0 ; i < text1->length(); i++ ){
                                cout<<text1[i];
                            }
                            for(int i = 0 ; i < text2->length(); i++ ){
                                cout<<text2[i];
                            }
                        }
                         void S_valueof_number( int text1[], int text2[] ){
                            int count = sizeof(text1)/sizeof(text1[0]);
                            int count2 = sizeof(text2)/sizeof(text2[0]);
                        for (int i = 0; i < count; i++)
                        {
                                cout<<text1[i];
                       
                        }

                        for (int i = 0; i < count2; i++)
                        {   
                                cout<<text2[i];

                        }
                        }



 
                            




};

#endif