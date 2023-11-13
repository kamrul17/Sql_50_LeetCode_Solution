
// class Solution {
// public:
//     bool isPalindrome(string s) {
//   int st=0;
//     int end=s.length()-1;
//     while(st<=end){
       // if(!isalnum(s[st])){st++; continue;} //isalnum to check whether its alphabet or number
//         if(!isalnum(s[end])){end--; continue;}
        // if(tolower(s[st])!=tolower(s[end])){ //tolower to cover it into lower case incase its case sensitive
//  return 0;
//     }else{
//         st++;
//         end--;
//     }   
      
// }
//        return 1;
// }      
// };
 class Solution {
     private:
    
  
 public:
   
     bool isPalindrome(string s) {
         int start = 0;
     int end = s.length() - 1;
    while (start <= end)
     {
      
         // checking s contain character other than alphanumeric(alphabets +any number)
        if (isalnum(s[start]) == 0)
         {

             start++;
 continue;
        }
  if (isalnum(s[end]) == 0)
         {

             end--;
 continue;
         }
           if (tolower(s[start]) != tolower(s[end]))
         {
             return 0;
         }
         else
         {
             start++;
            end--;
         }
     }
   return 1;
     }
};