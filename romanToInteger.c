// convert Roman to Integer
// For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

// Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

// I can be placed before V (5) and X (10) to make 4 and 9. 
// X can be placed before L (50) and C (100) to make 40 and 90. 
// C can be placed before D (500) and M (1000) to make 400 and 900.

int romanToInt(char* s) {
    int size = strlen(s);
    int val=0;
    for(int i=0; i<size; i++)
    {
        if(s[i]=='I' && s[i+1]=='V')
        {
            val=val+4;
            i++;
        }
        else if(s[i]=='I' && s[i+1]=='X')
        {
            val=val+9;
            i++;
        }
        else if(s[i]=='X' && s[i+1]=='L')
        {
            val=val+40;
            i++;
        }
        else if(s[i]=='X' && s[i+1]=='C')
        {
            val=val+90;
            i++;
        }
        else if(s[i]=='C' && s[i+1]=='D')
        {
            val=val+400;
            i++;
        }
        else if(s[i]=='C' && s[i+1]=='M')
        {
            val=val+900;
            i++;
        }
        else if(s[i]=='I')
        val=val+1;
        else if(s[i]=='V')
        val=val+5;
        else if(s[i]=='X')
        val=val+10;
        else if(s[i]=='L')
        val=val+50;
        else if(s[i]=='C')
        val=val+100;
        else if(s[i]=='D')
        val=val+500;
        else if(s[i]=='M')
        val=val+1000;
        
        
    }
return val;
}

