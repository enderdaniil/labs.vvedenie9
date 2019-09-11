#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian" );
    int k;
    char n;
    cout<<"Vvedite napravlenie"<<endl;
    cin>>n;
    cout<<"Vvedite komandu"<<endl;
    cin>>k;
    switch(k)
    {
        case -1: switch(n)
        {
            case 'С': cout<<"B"<<endl; break;
            case 'В': cout<<"Ю"<<endl; break;
            case 'Ю': cout<<"З"<<endl; break;
            case 'З': cout<<"С"<<endl; break;
        }
        break;
        case 1: switch(n)
        {
            case 'С': cout<<"З"<<endl; break;
            case 'З': cout<<"Ю"<<endl; break;
            case 'Ю': cout<<"В"<<endl; break;
            case 'В': cout<<"С"<<endl; break;
        }
        break;
        case 0: switch(n)
        {
            case 'С': cout<<"С"<<endl; break;
            case 'З': cout<<"З"<<endl; break;
            case 'Ю': cout<<"Ю"<<endl; break;
            case 'В': cout<<"В"<<endl; break;
        }
        break;
    }
    return 0;
}
