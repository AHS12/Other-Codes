#include <bits/stdc++.h>
#include <functional>
using namespace std;

using namespace std;
int main()
{
    priority_queue<int> pq;
    int choice, item,c,n,k;
    while (1)
    {

        cout<<"Priority Queue Implementation in Stl"<<endl;

        cout<<"1.Insert Element into the Priority Queue"<<endl;
        cout<<"2.Delete Element from the Priority Queue"<<endl;
        cout<<"3.Size of the Priority Queue"<<endl;
        cout<<"4.Top Element of the Priority Queue"<<endl;
        cout<<"5.show the heap"<<endl;                        ///if u show the heap the other operation will be gone;
        cout<<"6.exit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"1 for single value?\n"<<"2 or any for multiple\n"<<endl;
            cin>>c;
            if(c==1)
            {
                cout<<"Enter value to be inserted: ";
                cin>>item;
                pq.push(item);
            }
            else
            {
                cout<<"how many values?\n"<<endl;
                cin>>n;
                cout<<"Enter the values"<<endl;
                for(int i=1; i<=n; i++)
                {
                    cin>>item;
                    pq.push(item);
                }
            }
            break;
        case 2:
            item = pq.top();
            if (!pq.empty())
            {
                pq.pop();
                cout<<"item "<<item<<" Deleted"<<endl;
            }
            else
            {
                cout<<"Priority Queue is Empty"<<endl;
            }
            break;
        case 3:
            cout<<"Size of the Queue: ";
            cout<<pq.size()<<endl;
            break;
        case 4:
            if(!pq.empty())
            {
                cout<<"Top Element of the Queue: ";
                cout<<pq.top()<<endl;
            }
            else
            {
                cout<<"queue is empty\n";
            }

            break;
        case 5:
            while(!pq.empty())           ///if u show the heap the other operation will be gone;
            {

                k=pq.top();
                cout<<k<<" ";
                pq.pop();
            }
            cout<<"\n";
            break;
        case 6:
            exit(1);
            break;
        default:
            cout<<"Wrong Choice"<<endl;
        }
    }
    return 0;
}

