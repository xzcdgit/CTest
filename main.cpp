#include <iostream>
using namespace std;
void strout(string* tmp)
{
    string b = "456";
    string c = "789";
    (*tmp).append(b);
    (*tmp).append(c);
}

int main(void)
{
    string a = "123";
    strout(&a);
    cout <<a;
    return 1;
}


