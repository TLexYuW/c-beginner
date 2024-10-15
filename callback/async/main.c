#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <termios.h>   // For terminal settings


struct termios oldt;   // To store old terminal attributes

/**
 * Ctrl + c
 */
void foo(int sig)
{
    printf("Executing foo...\n");
    printf("Caught signal %d\n", sig);
}

void some_sync_operation_func()
{
    printf("Starting some sync operation...\n");
    // Simulate a long operation
    for (int i = 0; i < 10; i++)
    {
        printf("Operation in progress... %d/10\n", i + 1);
        sleep(1); // Simulate work being done
    }
    printf("Sync operation finished.\n");
}

void disable_ctrl_c_output()
{
    struct termios newt;
    // Get current terminal settings
    tcgetattr(STDIN_FILENO, &oldt);
    // Copy the settings to modify
    newt = oldt;
   // Disable canonical mode and ECHO
    newt.c_lflag &= ~(ICANON | ECHO);
    // Apply the new settings
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
}

void restore_terminal_settings()
{
    // Restore the old terminal settings when done
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
}

int main(int argc, char const *argv[])
{
    // Set up the signal handler for SIGINT (e.g., Ctrl+C)
    signal(SIGINT, foo);

    // Disable printing ^C when Ctrl+C is pressed
    disable_ctrl_c_output();

    // Start a long-running synchronous operation
    some_sync_operation_func();

    // Restore the terminal settings before exiting
    restore_terminal_settings();

    return 0;
}