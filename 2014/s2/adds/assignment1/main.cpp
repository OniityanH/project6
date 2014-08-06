int main(){
   letter A1("Abc;dE");//error:C:\Users\hp123\Desktop\myclass.cpp|46|error: no matching function for call to 'letter::letter(const char [7])'|
   cout<<A1.isPalindrome()<<endl;//error: C:\Users\hp123\Desktop\myclass.cpp|47|error: no match for 'operator<<' in 'std::cout << A1.letter::isPalindrome()'|
   cout<<A1.lowerCase()<<endl;//error:C:\Users\hp123\Desktop\myclass.cpp|48|error: no match for 'operator<<' in 'std::cout << A1.letter::lowerCase()'|
   cout<<A1.removeNoLetters()<<endl;//error:C:\Users\hp123\Desktop\myclass.cpp|49|note:   cannot convert 'A1.letter::removeNoLetters()' (type 'void') to type 'const unsigned char*'|
}
