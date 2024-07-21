#include<string.h>
int romanToInt(char* s) {
    int sum =0;
    int i;
    int size=0;
    for(i=0 ; s[i] != '\0' ;i++ ){
        size++;
    }
    for(i=0 ; i< size ; i++){

        switch (s[i]){
            case 'I' : 
            {
          if(s[i+1]=='X' || s[i+1]=='V'){
            sum-=1;
           }  
           else    
            sum +=1;
            break;
            }
            case 'V' :
            { sum +=5;
            break;
            }
            case 'X' :
            { 
                if(s[i+1]=='C' || s[i+1]=='L'){
            sum-=10;
           }   
             else
                sum +=10;
            break;
            }
            case 'L' :
            { sum +=50;
            break;
            }         
               case 'C' :
            { 
                if(s[i+1]=='M' || s[i+1]=='D'){
            sum-=100;
           }
           else   
                sum +=100;
            break;
            }          
              case 'D' :
            { sum +=500;
            break;
            }          
              case 'M' :
            { sum +=1000;
            break;
            }

        }
    }
    return sum;
    
}