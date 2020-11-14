#include <string.h>
#include <stdio.h>

int main()
{
    
    char text[] = { " Слава что  ті сделал Слава что ті сделал   Слава что ті сделал      Слава что ті сделал     Слава что ті сделал" };
    int chet = 0;
    size_t size = sizeof(text);
    for (int i = 0; i < size ; i++) {
        if (text[i] == ' ') {
            for (int j = i; ; j++) {
                if (text[j] == ' ') {
                }
                else {
                    chet++;
                    i = j;
                    break;
                }
            }
        }

    }
    if (text[size - 1] != ' ') {
        chet++;
    }
    if (text[0] == ' ') {
        chet--;
    }
    printf("%d\n", chet);
    return 0;
}
