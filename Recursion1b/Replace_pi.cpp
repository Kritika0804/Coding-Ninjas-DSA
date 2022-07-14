
int length(char input[]){  
    int len=0;
    for(int i=0;input[i]!='\0';i++){
        len++;
    }
    return len;
}

void replacePiHelper(char input[],int st){
    //base case
    if(input[st]=='\0' || input[st+1]=='\0'){
        return;
    }
    
    //recursive call
    replacePiHelper(input,st+1);
    
    //small calculation
    if(input[st]=='p' && input[st+1]=='i'){
        
        int len=length(input);
        
        input[len+2]='\0';
        
        for(int i=(len-1);i>=(st+2);i--){
            input[i+2]=input[i];
        }
        
        input[st]='3';
        input[st+1]='.';
        input[st+2]='1';
        input[st+3]='4';
    }
    
}

void replacePi(char input[]) {
	// Write your code here
    replacePiHelper(input,0);

}
