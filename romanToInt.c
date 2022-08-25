

int romanToInt(char * s){

    int i = 0, val = 0, s_len;
    int is_i = 0, is_x = 0, is_c = 0;
    
    s_len = strlen(s);
    if( s_len < 1 || s_len > 15)
        return -1;
    
    while(i < s_len){
        if(*(s + i) == 'I'){
            is_i = 1;
            val += 1;
        }
        
        else if(*(s + i) == 'X'){
            is_x = 1;
            val += 10;
        }
            
            
        else if(*(s + i) == 'C'){
            is_c = 1;
            val += 100;
        }
    
        else if(*(s + i) == 'V')
            val += 5;
            
        
        else if(*(s + i) == 'L')
            val += 50;
          
           
        else if(*(s + i) == 'D')
            val += 500;
           
        
        else if(*(s + i) == 'M')
            val += 1000;
            
        else
            return -1;
        
        if(is_i && (*(s + i) == 'V' || *(s + i) == 'X'))
        {
            val -= 2*1; 
            is_i = 0;
        }
        else if(is_x && (*(s + i) == 'L' || *(s + i) == 'C'))
        {
            val -= 2*10;
            is_x = 0;
        }
        else if(is_c && (*(s + i) == 'D' || *(s + i) == 'M'))
        {
            val -= 2*100;
            is_c = 0;
        }   
        
        ++i;
    }
    return val;
}

