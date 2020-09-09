#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STOP '|'

int main(void)
{
    char c;
    char prev;
    long n_chars = 0L; //字符数
    int n_lines = 0;  //行数
    int n_words = 0;  //单词数
    int p_lines = 0;  //不完整的行数
    bool inword = false;  //如果c在单词中，inword等于true
    
    printf("Please input text to be ananlyzed(| to teminate):\n");
    prev = '\n';  //用于识别完整的行

    while((c = getchar()) != STOP)
    {
        n_chars++;
        if(c == '\n')
            n_lines++;
        if((!isspace(c) && !inword))
        {
            inword = true;
            n_words++;
        } 
        if(isspace(c) && inword)
            inword = false;
        prev = c;         
    }
    if(prev != '\n')
        p_lines = 1;
    printf("characters = %ld, words = %d, lines = %d, ", n_chars, n_words, n_lines);
    printf("partial lines = %d\n", p_lines);

    return 0;
}

/************************************************************************

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STOP '|'

int main(void)
{
    char ch; //用于输入的字符
    char prev; //表示前一个字符
    long n_char = 0L; //用于计数字符数
    int n_lines = 0;
    int n_words = 0;
    int partical_lines = 0;
    bool inWord = false;
    prev = '\n';

    printf("Please input strings to be analyzed(| to teminate):\n");
    while((ch = getchar()) != STOP)
    {
        n_char++;
        if(ch == '\n')
            n_lines++;
        if(!isspace(ch) && !inWord)
        {
            inWord = true;
            n_words++;
        }
        if(isspace(ch) && inWord)
            inWord == false;
        prev = ch;
    }
    if(prev != '\n')
        partical_lines = 1;
    printf("there are %ld chars, %d lines, %d words, \n", n_char, n_lines, n_words);
    printf("%d partical lines.\n", partical_lines);

    return 0;
}
*********************************************************/