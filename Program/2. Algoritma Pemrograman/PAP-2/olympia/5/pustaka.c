int numPalindrome(int num){
    int i,p,hasil;
    char numstr[300]={};
    char temp[300]={};
    sprintf(numstr,"%d",num);

    strcpy(temp,numstr);
    strrev(temp);

    if(strcmp(numstr,temp)==0){
        hasil=1;
    }
    else {
        hasil=0;
    }

    return hasil;
}