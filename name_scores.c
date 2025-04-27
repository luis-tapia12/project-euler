#include "name_scores.h"

int string_score(char* string)
{
    int score = 0;

    for (int index = 0; index < 100; index ++)
    {
        char _char = string[index];

        if (_char == '\0')
        {
            break;
        }
        else
        {
            score += (int) _char - 64;
        }
    }

    return score;
}

void sort_names(char** names, int length)
{
    for (int i = 0; i < length; i ++)
    {
        for (int j = i + 1; j < length; j ++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                char* aux = names[i];
                names[i] = names[j];
                names[j] = aux;
            }
        }
    }
}

long long name_scores(char** names, int length)
{
    long long scores = 0;
    sort_names(names, length);

    for (int index = 0; index < length; index ++)
    {
        scores += (string_score(names[index]) * (index + 1));
    }

    return scores;
}
