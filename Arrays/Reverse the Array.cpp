//My soln

string reverseWord(string str){
    
  string rev="";
  int length=str.size();
  for(int i=length;i>=0;i--){
      rev+=str[i];
  }
  return rev;
}


//optimal soln

string reverseWord(string str){
    
    for(int i=0;i<str.size()/2;i++){
            swap(str[i],str[str.size()-1-i]);
        }
        return str;
}
