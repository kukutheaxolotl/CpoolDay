int my_absolute(int number);

int my_absolute(int number){
    if(number>0){
        return number;
    }
    else if(number<0){
        return number * -1;
    }
    else {
        return 0;
    }
}
