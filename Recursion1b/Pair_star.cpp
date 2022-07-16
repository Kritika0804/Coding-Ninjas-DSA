/*

Given a string S, 
compute recursively a new string where identical chars that are adjacent in the original string 
are separated from each other by a "*".

Input format :
String S

Output format :
Modified string

Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.

Sample Input 1 :
hello
Sample Output 1:
hel*lo

Sample Input 2 :
aaaa
Sample Output 2 :
a*a*a*a

*/

#include<cstring>

void pairStarHelper(char arr[],int start){
	
    //Base Case: Reached End Of String
	if(arr[start]=='\0'){
		return;
	} 

	//Recursive Call 
	pairStarHelper(arr,start+1);
    
	if(arr[start] == arr[start+1]){
		int l = strlen(arr);
		//Extending the string
		arr[l+1] = '\0';
		int i;
		//To shift the letters by 1
		for(i = l-1;i>=start +1;i--){
			arr[i+1] = arr [i];
		}
		//Entering * in between
		arr[start+1] = '*';
	}
}
void pairStar(char input[]) {
    
	pairStarHelper(input ,0);
}
