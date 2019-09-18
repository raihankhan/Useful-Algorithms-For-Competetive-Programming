#include<stdio.h>

int p[6][2] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int chopstickState[5] = {0,0,0,0,0};
int State[5] = {0,0,0,0,0};

void wait(int chopstick, int philosopher)
{
    chopstickState[chopstick] = 1;
    if(chopstick == philosopher) p[philosopher][1] = chopstick;
    else p[philosopher][0] = chopstick;
}

void signal(int philosopher)
{
    chopstickState[p[philosopher][1]] = 0;
    chopstickState[p[philosopher][0]] = 0;
    p[philosopher][1] = -1;
    p[philosopher][0] = -1;
}

void reset(int x)
{
    chopstickState[x] = 0;
    p[x][1] = -1;
    p[x][0] = -1;
    State[x] = 0;
}

int main()
{
    int eatcomplete = 0;
    int philosopher = 0;
    int chopstick;
    int count = 0;
    do
    {
        if(philosopher % 2 != 0 && State[philosopher] < 2)
        {
            if(State[philosopher] == 0)
            {
                chopstick = philosopher;
                if(chopstickState[chopstick] == 0)
                {
                    wait(chopstick, philosopher);
                    State[philosopher] = 1;
                    printf("Philosopher %d is taking %dth Chopstick\n", philosopher+1, chopstick+1);
                }
            }
            else if(State[philosopher] == 1)
            {
                chopstick = philosopher - 1;
                if(chopstick < 0) chopstick = 4;
                if(chopstickState[chopstick] == 0)
                {
                    wait(chopstick, philosopher);
                    State[philosopher] = 2;
                    printf("Philosopher %d is taking %dth Chopstick\n", philosopher+1, chopstick+1);
                    printf("-------------------------------------Philosopher %d is eating\n",philosopher+1);
                    eatcomplete++;
                    signal(philosopher);
                }
            }
        }
        else if(philosopher % 2 == 0 && State[philosopher] < 2)
        {
            if(State[philosopher] == 0)
            {
                chopstick = philosopher - 1;
                if(chopstick < 0) chopstick = 4;
                if(chopstickState[chopstick] == 0)
                {
                    wait(chopstick, philosopher);
                    State[philosopher] = 1;
                    printf("Philosopher %d is taking %dth Chopstick\n", philosopher+1, chopstick+1);
                }
            }
            else if(State[philosopher] == 1)
            {
                chopstick = philosopher;
                if(chopstickState[chopstick] == 0)
                {
                    wait(chopstick, philosopher);
                    State[philosopher] = 2;
                    printf("Philosopher %d is taking %dth Chopstick\n", philosopher+1, chopstick+1);
                    printf("-------------------------------------Philosopher %d is eating\n",philosopher+1);
                    eatcomplete++;
                    signal(philosopher);
                }
            }
        }
        philosopher = (philosopher + 1) % 5;
        count++;
    }
    while(eatcomplete < 5);
    int i;
    for(i = 0; i < 5; i++) reset(i);
    eatcomplete = 0;
    return 0;
}


