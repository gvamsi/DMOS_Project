#include "threads.h"

int global = 0;

void function_1()
{
	int local = 0;
	while(1)
	{
		global++;
		local++;
		printf("Func 1, Thread ID is: %d Global value is: %d and Local value is: %d\n", getThreadID(), global, local);
		sleep(1);
		yield();
	}
}

void function_2()
{
        int local = 0;
        while(1)
        {
                global++;
                local++;
                printf("Func 2, Thread ID is: %d Global value is: %d and Local value is: %d\n", getThreadID(), global, local);
		sleep(1);
                yield();
        }
}

void function_3()
{
        int local = 0;
        while(1)
        {
                global++;
                local++;
                printf("Func 3, Thread ID is: %d Global value is: %d and Local value is: %d\n", getThreadID(), global, local);
		sleep(1);
                yield();
        }
}

void function_4()
{
        int local = 0;
        while(1)
        {
                global++;
                local++;
                printf("Func 4, Thread ID is: %d Global value is: %d and Local value is: %d\n", getThreadID(), global, local);
                sleep(1);
                yield();
        }
}

int main()
{
	setReadyQueue();
	start_thread(function_1);
	start_thread(function_2);
	start_thread(function_3);
	start_thread(function_4);
	start_thread(function_4);
	run();	
	return 0;
}
