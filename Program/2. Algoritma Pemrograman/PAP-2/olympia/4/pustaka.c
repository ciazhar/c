int textPalindrome(char text[]){
    int i,p,hasil;
    char temp[300]={};

    strcpy(temp,text);
    strrev(temp);

    if(strcmp(text,temp)==0){
        hasil=1;
    }
    else {
        hasil=0;
    }

    return hasil;
}