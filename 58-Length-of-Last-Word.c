int lengthOfLastWord(char* s) {
    int count = 0;
    int lenght = 0;
    int i;
    lenght = strlen(s);
    while(s[lenght-1] == ' '){
        lenght--;
        if(lenght == 0){
            return 0;
        }
    }
    lenght--;
    for(i=lenght ;(i>=0) && s[i] != ' ' ; i--)
    {
     count ++;
    }
    return count;
}