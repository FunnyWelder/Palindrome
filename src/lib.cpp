#include "lib.h"

int length(char* ch)
{
    for (int i = n; i > 0; i--)
    {
        if (ch[i] == '\0')
        {
            return i;
        }
    }
}

void MoveLeft(char* ch, int index)
{
    for (int i = index; i <= length(ch); i++)
    {
        ch[i] = ch[i + 1];
    }
}

void correction(char* ch)
{
    for (int i = 0; i < n; i++)
    {
        if ((ch[i] >= 'A') && (ch[i] <= 'Z'))        // lowercase
        {
            ch[i] += 32;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if ((ch[j] == 32) && (ch[j + 1] == 32))
            {
                MoveLeft(ch, j);
            }

            if (ch[i] == 32)
            {
                MoveLeft(ch, i);
            }
        }
    }
}

bool palindrome (char *str)
{
    correction(str);
    int j = 0;
    while ((str[j] != ' ') && (str[j] != '\0')) {
        j++;
    }
    int y = 0;
    int x = j - 1;
    while ((str[y] == str[x]) and (y != (j / 2))) {
        y = y + 1;
        x = x - 1;
    }
    if (str[y] == str[x])
    {
        return true;
    }
    else {
        return false;
    }
}

