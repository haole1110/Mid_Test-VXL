#include <iostream>
#include <string>

using namespace std;

string suffixWithUnit(double number) {
    string str = to_string(number);
    size_t count = str.find(".");
    int temp = 0;
    if (count != std::string::npos){
        while (str[str.length()-1] == '0') str.erase(str.length()-1);
        str.erase (str.begin()+count); 
    } else {
        count = str.length();
    }
    while (count > 3){
        count -=3;
        temp++;
    }
    if (temp > 0) str.insert(count, ".");
    string result = "";
    switch (temp)
    {
    case 0:
        result += str + " ";
        break;
    case 1:
        result += str + " " + "Kilo";
        break;
    case 2:
        result += str + " " + "Mega";
        break;
    case 3:
        result += str + " " + "Giga";
        break;
    case 4:
        result += str + " " + "Peta";
        break;
    default:
        break;
    }
    return result;
}
int main(){
    cout<<suffixWithUnit(12345678.91011);
    return 0;
}