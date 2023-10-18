#include <iostream>
#include "transformationTOjavascript.cpp"
using namespace std;
// -------------------------------------------------------------------------------------------------------------
void scop();
int main();
void Work_strig();
void Work_array();
void wonder();



// -------------------------------------------------------------------------------------------------------------

int main(){
cout<<"welcom the progrem"<<endl;
scop();

}
// -------------------------------------------------------------------------------------------------------------
   string first_s;
   string first_s_array[] = {"osama", "ahmed", "ail","mona"};
   string first_s_array1[] = {"osama", "ahmed", "ail","mona"};
   string second_s;
    int first_n;
    int first_n_array[]={1,2,3,4,5,6,67};
    int second_n;
    char one;
    int arrayWork[3][4]={{1,3,4,5},{4,5,6,7},{4,7,7,3}};
    int choise;
    int iF;




void Work_strig(){
    cout<<"----------------------------------------------------------------------------"<<endl;
      cout<<"******************************welcom string********************************"<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
cout<<" 1- charAt()	Returns the character at a specified index (position)\n"
"\n 2- charCodeAt()	Returns the Unicode of the character at a specified index\n"
      "\n 3- concat()	Returns two or more joined strings  \n " 
      "\n 4-constructor	Returns the string's constructor function \n"
      "\n 5-endsWith()	Returns if a string ends with a specified value \n"
      "\n 6- fromCharCode()	Returns Unicode values as characters \n"
      "\n 7- includes()	Returns if a string contains a specified value\n"
      "\n 8- indexOf()	Returns the index (position) of the first occurrence of a value in a string\n"
      "\n 9- lastIndexOf()	Returns the index (position) of the last occurrence of a value in a string\n"
      "\n 10- length	Returns the length of a string\n"
      "\n 11-localeCompare()	Compares two strings in the current locale \n"
      "\n 12-match()	Searches a string for a value, or a regular expression, and returns the matches \n"
      "\n 13- prototype	Allows you to add properties and methods to an object\n"
      "\n 14-repeat()	Returns a new string with a number of copies of a string \n"
      "\n 15- replace()	Searches a string for a pattern, and returns a string where the first match is replaced \n"
      "\n 16- replaceAll()	Searches a string for a pattern and returns a new string where all matches are replaced\n"
      "\n 17-search()	Searches a string for a value, or regular expression, and returns the index (position) of the match \n"
      "\n 18- slice()	Extracts a part of a string and returns a new string\n"
      "\n 19-startsWith()	Checks whether a string begins with specified characters \n"
      "\n 20-substr()	Extracts a number of characters from a string, from a start index (position) \n"
      "\n 21- substring()	Extracts characters from a string, between two specified indices (positions)\n"
      "\n 22-toLocaleLowerCase()	Returns a string converted to lowercase letters, using the host's locale \n"
      "\n 23-toLocaleUpperCase()	Returns a string converted to uppercase letters, using the host's locale \n"
      "\n 24- toString()	Returns a string or a string object as a string\n"
      "\n 25-trim()	Returns a string with removed whitespaces \n"
      "\n 26-valueOf_string()	Returns the primitive value of a string or a string object \n"
      "\n 27- valueOf_number()	Returns the primitive value of a string or a string object\n";
        cout<<" 28 -Exit"<<endl;
      
      cout<<"-------------------------------------------------------------------------------------"<<endl;
      cout<<"enter a value"<<endl;
      cin>>choise;
      cout<<"-------------------------------------------------------------------------------------"<<endl;
    
      }
      
    //   ----------------------------------------------------work a array--------------------------------------------------------------------------
      void Work_array(){
      cout<<"-------------------------------------------------------------------------------------"<<endl;
      cout<<"-----------------------------finsh the string-------------------------------"<<endl;
      cout<<"******************************welcom a array********************************"<<endl;
      cout<<"-------------------------------------------------------------------------------------"<<endl;
    cout<<"\n-1 at()	Returns an indexed element of an array\n"
    "\n-2 concat()	Joins arrays and returns an array with the joined arrays\n"
    "\n-3 constructor	Returns the function that created the Array object's prototype\n"
    "\n-4 copyWithin()	Copies array elements within the array, to and from specified positions\n"
    "\n-5 entries()	Returns a key/value pair Array Iteration Object\n"
    "\n-6 every()	Checks if every element in an array pass a test\n"
    "\n-7 fill()	Fill the elements in an array with a static value\n"
    "\n-8 filter()	Creates a new array with every element in an array that pass a test \n"
    "\n-9 find()	Returns the value of the first element in an array that pass a test\n"
    "\n-10 findIndex()	Returns the index of the first element in an array that pass a test \n"
    "\n-11 flat()	Concatenates sub-array elements\n"
    "\n-12 flatMap()	Maps all array elements and creates a new flat array \n"
    "\n-13 forEach()	Calls a function for each array element\n"
    "\n-14 from()	Creates an array from an object\n"
    "\n-15 includes()	Check if an array contains the specified element\n"
    "\n-16 indexOf()	Search the array for an element and returns its position\n"
    "\n-17 join()	Joins all elements of an array into a string\n"
    "\n-18 lastIndexOf()	Search the array for an element, starting at the end, and returns its position\n"
    "\n-19 length	Sets or returns the number of elements in an array\n"
    "\n-20 map()	Creates a new array with the result of calling a function for each array element\n"
    "\n-21 pop()	Removes the last element of an array, and returns that element \n"
    "\n-22 push()	Adds new elements to the end of an array, and returns the new length \n"
    "\n-23 reduce()	Reduce the values of an array to a single value (going left-to-right)\n"
    "\n-24 reverse()	Reverses the order of the elements in an array \n"
    "\n-25 shift()	Removes the first element of an array, and returns that element \n"
    "\n-26 slice()	Selects a part of an array, and returns the new array \n"
    "\n-27 some()	Checks if any of the elements in an array pass a test \n"
    "\n-28 splice()	Adds/Removes elements from an array\n"
    "\n-29 unshift()	Adds new elements to the beginning of an array, and returns the new length\n"
    "\n-30 valueOf()	Returns the primitive value of an array  \n";
    cout<<"31 Exit"<<endl;
    
    cout<<"enter a value"<<endl;
      cin>>choise;

}
void switch_case_string(){
     transformationTOjavascript string_str;
switch(choise){
    case 1:
    cout<<"enter first_string   the second_numder"<<endl;
    cin>>first_s;
    cin>>second_n;
    string_str.S_charAt(first_s, second_n);
    break;

    case 2:
    cout<<"enter first_numder"<<endl;
    cin>>second_n;
   string_str.S_form_char_code(second_n);
    break;

    case 3:
    cout<<"enter first_string   the second_string"<<endl;
        cin>>first_s;cin>>second_s;
    string_str.S_concat(first_s,second_s);
    break;

    case 4:
    cout<<"sorry,  i am can not make   "<<endl;
    break;

    case 5:
    cout<<"enter first_string  "<<endl;
        cin>>first_s;
    string_str.S_endsWith(first_s);
    break;

    case 6:
    cout<<"enter first_numder"<<endl;
    cin>>second_n;
   string_str.S_form_char_code(second_n);
    break;

    case 7:
    cout<<"enter first_string   the second_char"<<endl;
        cin>>first_s;cin>>one;
    string_str.S_includes(first_s,one);
    break;

    case 8:
     cout<<"enter first_string   the second_char"<<endl;
        cin>>first_s;cin>>one;
    string_str.S_includeS_choise_last(first_s,one);
    break;
    case 9:
     cout<<"enter first_string   the second_char"<<endl;
        cin>>first_s;cin>>one;
    string_str.S_includeS_choise_of(first_s,one);
    break;
    
    case 10:
     cout<<"enter first_string  "<<endl;
        cin>>first_s;
    string_str.S_length(first_s);
    break;
    
    case 11:
    cout<<"enter first_string   the second_string"<<endl;
        cin>>first_s;cin>>second_s;
    string_str.S_locale_compare(first_s,second_s);
    break;

    case 12:
    cout<<"enter first_string   the second_string"<<endl;
        cin>>first_s;cin>>second_s;
    string_str.S_match(first_s,second_s);
    break;

    case 13:
    cout<<"sorry,  i am can not make   "<<endl;
    break;
    case 14:
     cout<<"enter first_string  "<<endl;
        cin>>first_s;
    string_str.S_repeat(first_s);
    break;
    

    case 15:
    cout<<"sorry,  i am can not make   "<<endl;
    break;
    case 16:
    cout<<"sorry,  i am can not make   "<<endl;
    break;
    case 17:
     cout<<"enter first_string  , first char "<<endl;
    cin>>first_s;
    cin>>one;
    string_str.S_sreach(first_s,one);
    break;

    case 18:
    cout<<"please enter first int(number) second int(number) first_string"<<endl;
    cin>>first_n;
    cin>>second_n;
    cin>>first_s;
    string_str.S_slice(first_n,second_n,first_s);
    break;

    case 19:
     cout<<"enter first_string  , second_string "<<endl;
        cin>>first_s;
        cin>>second_s;
    string_str.S_startWith(first_s,second_s);
    break;

    case 20:
    // string_str
    cout<<"please enter first int(number) second int(number) "<<endl;
    cin>>first_n;
    cin>>second_n;
    string_str.S_substr(first_n,second_n);
    break;
    
     case 21:
    cout<<"please enter first int(number) "<<endl;
    cin>>first_n;
    string_str.S_substring(first_n);
    break;

    case 22:
    cout<<"please enter first_string "<<endl;
    cin>>first_s;
    string_str.S_lowerCase(first_s);
    break;

    case 23:
    cout<<"please enter first_string "<<endl;
    cin>>first_s;
    string_str.S_upperCase(first_s);
    break;

    case 24:
      cout<<"please enter first_string "<<endl;
    cin>>first_n;
    string_str.S_toString(first_n_array);
    break;
    

    case 25:
    cout<<"please enter first_string "<<endl;
    cin>>first_n;
    string_str.S_trim(first_s);
    break;

    case 26:
    cout<<"please enter first_string  , second_s"<<endl;
    cin>>first_s;
    cin>>second_s;
    string_str.S_valueof_string(first_s,second_s);
    break;
    
    case 27:
    cout<<"please enter first_number  , second_number"<<endl;
    cin>>first_n;
    cin>>second_n;    
    string_str.S_valueof_number(first_n,second_n);
    break;
    case 28:
    return;
    break;

        default:
            cout<<"please enter a value true"<<endl;
                break;
    
}
}
void switch_case_array(){
    transformationTOjavascript array_;
switch(choise){
    case 1:
    cout<<"pleace enter a  first_n (int) and array "<<endl;
    cin>>first_n;
    array_.A_char_at(first_n,first_n_array);
    break;

    case 2:
    cout<<"please enter first_string  , second_s"<<endl;
    cin>>first_s;
    cin>>second_s;
    array_.A_concat(first_s,second_s);
    break;

    case 3:
    cout<<"sorry,  i am can not make   "<<endl;
    break;
    
    case 4:
    cout<<"please enter first int(number) second int(number) first_string"<<endl;
    cin>>first_n;
    cin>>second_n;
    cin>>first_s;
    array_.A_cope_wihtni(first_n,second_n,first_s);
    break;

    case 5:
    cout<<"sorry,  i am can not make   "<<endl;
    break;

    case 6:
    cout<<"sorry,  i am can not make   "<<endl;
    break;

    case 7:
    cout<<"please enter first string && first_string array"<<endl;
    cin>>first_s;
    array_.A_fill(first_s,first_s_array);
    break;

    case 10:
    cout<<"please enter first number && first_int array"<<endl;
    cin>>first_n;
    array_.A_find_above(first_n,first_n_array);
    break;
    
    case 9:
     cout<<"please enter first number && first_int array"<<endl;
    cin>>first_n;
    array_.A_find_above(first_n,first_n_array);
    break;

    case 8:
    cout<<"sorry,  i am can not make   "<<endl;
    break;
    
    case 11:
    array_.A_flat(arrayWork);
    break;
    
    case 12:
    cout<<"sorry,  i am can not make   "<<endl;
    break;
    
    case 13:
    array_.A_Each(first_s_array,first_n_array);
    break;

    case 14:
    cout<<"please enter first string "<<endl;
    cin>>first_s;
    array_.A_from(first_s);
    break;

    case 15:
    cout<<"please enter first string && first_string array"<<endl;
    cin>>first_s;
    array_.A_includes(first_s,first_s_array );
    break;

    case 16:
    cout<<"please enter first string && first_string array"<<endl;
    cin>>first_s;
    array_.A_lastIndexOf(first_s_array,first_s);
    
    break;
    case 17:
    array_.A_join(first_s_array,first_s_array1);
    break;

    case 18:
    cout<<"please enter first string && first_string array"<<endl;
    cin>>first_s;
    array_.A_lastIndexOf(first_s_array1,first_s);
    break;

    case 19:
    array_.A_length(first_s_array1);
    break;

    case 20:
    cout<<"please enter first array int && first_number"<<endl;
    array_.A_map(first_n_array,first_n);
    break;
    
     case 21:
     cout<<"what are you string enter 1 int enter 2"<<endl;
     cin>>iF;
     if(iF == 1){
        cout<<"pleace enter a first a string\n";
        array_.A_pop_string(first_s_array1);
        }

     if(iF == 2){

    array_.A_pop_number(first_n_array);
     }
    break;

    case 22:
     cout<<"what are you string enter 1 int enter 2"<<endl;
    cin>>iF;
        if(iF == 1){
        cout<<"pleace enter a first a string\n";
        cin>>first_s;
        array_.A_push_string(first_s_array1,first_s);
        }

     if(iF == 2){
        cout<<"pleace enter a first a number\n";
    array_.A_push_number(first_n_array,first_n);
     }
    break;

    case 23:
    array_.A_reduce(first_n_array);
    break;
    
    case 24:
    array_.A_reverse_number(first_n_array);
    break;

    case 25:
         cout<<"what are you string enter 1 int enter 2"<<endl;
    cin>>iF;
        if(iF == 1){
        cout<<"pleace enter a first a string\n";
        array_.A_shift_string(first_s_array1);
        }

     if(iF == 2){
        cout<<"pleace enter a first a number\n";
        array_.A_shift_number(first_n_array);
     }
    break;
    
    case 26:
        cout<<"pleace enter a first a number , second number\n";
        array_.A_slice(first_n,second_n);
    break;

    case 27:
         cout<<"what are you above enter 1 &&  under int enter 2"<<endl;
    cin>>iF;
    if(iF == 1){
        cout<<"pleace enter a first a number ,\n";
    cin>>first_n;
    array_.A_some_above(first_n_array,first_n);
        
    } if(iF == 2){
    cout<<"pleace enter a first a number ,\n";
    cin>>first_n;
    array_.A_some_under(first_n_array,first_n);
    }
    
    break;

    case 28:
    cout<<"sorry,  i am can not make   "<<endl;
    break;

    case 29:
      cout<<"what are you string enter 1 int enter 2"<<endl;
        cin>>iF;
        if(iF == 1){
        cout<<"pleace enter a first a string\n";
        cin>>first_s;
        array_.A_unshift_string(first_s_array1,first_s);
        }
           if(iF == 2){
        cout<<"pleace enter a first a int number\n";
            cin>>first_n;
        array_.A_unshift_number(first_n_array,first_n);
        }
        break;
        case 30:
        cout<<"sorry,  i am can not make   "<<endl;
        break;

        default:
        cout<<"please enter a value true"<<endl;
    
        }
    }



void scop(){
cout<<"what are you need  || enter 1 string || enter 2 number"<<endl;
cin>>iF;
if(iF == 1){
Work_strig();
cout<<"--------------------------------"<<endl;
switch_case_string();

cout<<"\n--------------------------------"<<endl;
}
if(iF == 2){
Work_array();
cout<<"--------------------------------"<<endl;
switch_case_array();
cout<<"\n--------------------------------"<<endl;

}

wonder();
}
void wonder(){
    cout<<"what are your going to"<<endl;
    cout<<" going to -1 page"<<endl;
    cout<<" going to -2 start program "<<endl;
    cout<<" going to -3 Eixt "<<endl;
    cin>>iF;
    if(iF == 1){
        scop();
    }
    if(iF == 2){
        main();
    }
    if(iF == 3){
        return;
    }
    else{
        cout<<"please a enter a value True "<<endl;
        wonder();
    }
    
}
    