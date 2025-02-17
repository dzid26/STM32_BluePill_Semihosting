/*
    ARM Cortex M3 STM32 Bluepill Semihosting-Enabled Project by Mohammed Alsada
    GitHub: https://github.com/mohalsa

    Please first read all instructions, then follow them carefully!
    
    0- Connect Your STlink debugger to USB and to the bluepill board (Drivers must be installed before, if needed.).
    1- Open Command Palette by holding "CMD + SHIFT + P" in Mac OS machines and "CTRL + SHIFT + P" or just click on "View" then "Command Palette...".
    2- Type "Tasks: Run Task" without the double qoutation marks and select it by pressing Enter.
    3- Select "OpenOCD (Allow semihosting output)".
    4- This Task Should run once when loading the project. If you try to run it again you'll get "The task 'OpenOCD (Allow semihosting output) (0-SemiHosting_Configurations)' is already active." message
    5- A terminal view will indicate a successfull connection with a final message of "Info : Listening on port 3333 for gdb connections".
    6- Put a breakpoint on "int main(void" in the "main.c" file. 
    7- Click on the "Run and Debug" Icon (Left Side) or SHIFT+CMD+D (Mac OS) or SHIFT+CTRL+D (Windows OS)
    8- Click "Start Debugging" the green arrow (Top left), next to PIO Debug.
    9- Debugging session will start and will halt on the reset handler file, click on "continue" or press "F5" to move to the breakpoint in the main.c file 
    10- Failing to placing a breakpoint in the main.c file will lead the debugging session to hang!
    11- In Terminal window, press any key to show the debugging info + the printf messages.

    Enjoy a Painless debugging session!

*/

#include <stm32f1xx.h>
#include <stdio.h>

/* semihosting Initializing */
extern void initialise_monitor_handles(void);

int main(void)
{
    initialise_monitor_handles();   /* This Function MUST come before the first printf() */
    printf("Hello, world\n");      /* IMPORTANT: Always use the "\n" newline character at the end of each string to be printed using printf() function when using semihosting */
    
    int c;
    do{	//wait for the user
        c = getchar();
        (void) printf("%c", c);
        if(c == '@')
            break;
    }while(1);
}
