#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


struct obstacle
{
    int x;
    int y;
    int speed;
};
struct dragon{
    int isJumping;
};

int main()
{
    int x, y;

    struct dragon dragon;

    initscr();

    getyx(stdscr, y, x);

    move(0, COLS / 2 - 9);
    printw("DENO GAME\n");
    refresh();

    x = 0;
    y = 10;

    for (int i = 0; i < COLS; i++)
    {
        move(y, x);
        printw("-");
        x++;
        refresh();
        usleep(10000);
    }

    dragon = (struct dragon){0};

    while(1)
    {

 
    }

    getch();

    refresh();

    endwin();
}
void dragon_frame1()
{
    mvprintw(20, 20, "    MMMM");
    mvprintw(21, 20, "    M  M");
    mvprintw(22, 20, "    MMMM");
    mvprintw(23, 20, "     M");
    mvprintw(24, 20, "    M M");
    mvprintw(25, 20, "    M M");

    refresh();
}

// Frame 2 - right leg up
void dragon_frame2()
{
    mvprintw(20, 20, "    MMMM");
    mvprintw(21, 20, "    M  M");
    mvprintw(22, 20, "    MMMM");
    mvprintw(23, 20, "     M");
    mvprintw(24, 20, "    M M");
    mvprintw(25, 20, "    M  ");

    refresh();
}

// Frame 3 - left leg up
void dragon_frame3()
{
    mvprintw(20, 20, "    MMMM");
    mvprintw(21, 20, "    M  M");
    mvprintw(22, 20, "    MMMM");
    mvprintw(23, 20, "     M");
    mvprintw(24, 20, "    M M");
    mvprintw(25, 20, "     M");

    refresh();
}

void dragon_jump()
{
    mvprintw(20, 20, "    MMMM");
    mvprintw(21, 20, "    M  M");
    mvprintw(22, 20, "    MMMM");
    mvprintw(23, 20, "     M");
    mvprintw(24, 20, "    MMM");
    mvprintw(25, 20, "     ");

    refresh();
}
