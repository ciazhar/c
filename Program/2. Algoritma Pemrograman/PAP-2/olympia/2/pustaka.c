int sumOfDigits(int digit){
    int sum,sat,pul,rat,rib,pulrib,ratrib,jut;

    if(digit<10000000&&digit>=1000000){
        jut=digit/1000000;
    }
    else {
        jut=0;
    }
    digit=digit%1000000;
    if(digit<100000&&digit>=100000){
        ratrib=digit/100000;
    }
    else {
        ratrib=0;
    }
    digit=digit%100000;
    if(digit<100000&&digit>=10000){
        pulrib=digit/10000;
    }
    else {
        pulrib=0;
    }
    digit=digit%10000;
    if(digit<10000&&digit>=1000){
        rib=digit/1000;
    }
    else {
        rib=0;
    }
    digit=digit%1000;
    if(digit<1000&&digit>=100){
        rat=digit/100;
    }
    else {
        rat=0;
    }
    digit=digit%100;
    if(digit<100&&digit>=10){
        pul=digit/10;
    }
    else {
        pul=0;
    }
    digit=digit%10;
    if(digit<10&&digit>=1){
        sat=digit/1;
    }
    else {
        sat=0;
    }
    sum=sat+pul+rat+rib+pulrib+ratrib+jut;

    return sum;