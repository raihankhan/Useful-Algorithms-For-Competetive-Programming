#include<bits/stdc++.h>
using namespace std;
#define hungry 100
#define eating 200
#define thinking 300
#define wait 400
#define signal 500
enum {philosopher1,philosopher2,philosopher3,philosopher4,philosopher5};
class monitor
{
    int state[5];
    int self[5];
public:
    Pickup(int i)
    {

        state[i] = hungry;
        cout<<"philosopher "<<i<<" is hungry "<<endl;
        test(i);
        if (state[i] != eating)
            self[i]=wait;
    }
    Putdown(int i)
    {
        state[i] = thinking;
        test((i + 1) % 5);
        test((i + 4) % 5);
    }

    test(int i)
    {

        if (state[(i + 1) % 5] != eating
                && state[(i + 4) % 5] != eating
                && state[i] == hungry)
        {

            cout<<" philosopher "<<(i+1)%5<<" and philosopher "<<(i+4)%5<<" is not eating"<<endl;
            state[i] = eating;
            cout<<"philosopher "<<i<<" is eating"<<endl;
            self[i]=signal;
        }
    }
    init()
    {
        for(int i=0; i<=4; i++)
        {
            cout<<"philosopher "<<i<<" is thinking "<<endl;
            state[i] = thinking;
        }
    }
};
int main()
{
    monitor m;
    m.init();
    m.Pickup(philosopher1);
    return 0;
}

