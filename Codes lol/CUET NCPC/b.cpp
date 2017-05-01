#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[10000],s;
    int n,t;
    cin>>t;
    a[0]="Pohela Falgun";
    a[1]="Valentine's Day";
    a[2]="International Mother Language Day";
    a[3]="International Women's Day";
    a[4]="International Color Day";
    a[5]="Bangladesh Independence Day";
    a[6]="April Fools Day";
    a[7]="Pohela Boishakh";
    a[8]="May Day";
    a[9]="Father's Day";
    a[10]="Mandela Day";
    a[11]="World Mosquito Day";
    a[12]="Halloween";
    a[13]="World Toilet Day";
    a[14]="Human Rights Day";
    a[15]="Victory Day of Bangladesh";
    a[16]="Christmas Day";
    for(int i=1; i<=t; i++)
    {
        cin>>s>>n;
        printf("Case %d: ",i);
        if(s=="January")
        {
            if(n<=31)
            {
                cout<<a[0];
            }
        }
        else if(s=="February")
        {
            if(n<13)
            {
                cout<<a[0];
            }
            else if(n==13)
            {
                cout<<a[1];
            }
            else if(n<=20)
            {
                cout<<a[2];
            }
            else if(n<=28)
            {
                cout<<a[3];
            }
        }
        else if(s=="March")
        {
            if(n<8)
            {
                cout<<a[3];
            }
            else if (n<=20)
            {
                cout<<a[4];
            }
            else if(n<=25)
            {
                cout<<a[5];
            }
            else if(n<=31)
            {
                cout<<a[6];
            }
        }
        else if(s=="April")
        {
            if(n<=13)
            {
                cout<<a[7];
            }
            else if(n<=30)
            {
                cout<<a[8];
            }

        }
        else if(s=="May")
        {
            if(n<=31)
            {
                cout<<a[9];
            }
        }
        else if(s=="June")
        {
            if(n<=18)
            {
                cout<<a[9];
            }
            else if(n<=30)
            {
                cout<<a[10];
            }
        }
        else if(s=="July")
        {
            if(n<=17)
            {
                cout<<a[10];
            }
            else if(n<=31)
            {
                cout<<a[11];
            }
        }
        else if(s=="August")
        {
            if(n<=19)
            {
                cout<<a[11];
            }
            else if(n<=31)
            {
                cout<<a[12];
            }

        }
        else if(s=="September")
        {
            if(n<=30)
            {
                cout<<a[12];
            }
        }
        else if(s=="October")
        {
            if(n<31)
            {
                cout<<a[12];
            }
            else if(n==31)
            {
                cout<<a[13];
            }
        }
        else if(s=="November")
        {
            if(n<=18)
            {
                cout<<a[13];
            }
            else if(n<=30)
            {
                cout<<a[14];
            }

        }
        else if(s=="December")
        {
            if(n<=9)
            {
                cout<<a[14];
            }
            else if(n<=15)
            {
                cout<<a[15];
            }
            else if(n<=24)
            {
                cout<<a[16];
            }
            else if(n<=31)
            {
                cout<<a[0];
            }
        }
        cout<<endl;
    }
    return 0;
}
