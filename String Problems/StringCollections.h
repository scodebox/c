#include<stdlib.h>
#include<string.h>

// Q30 - print individual characters of string in reverse order.
void print_reverse_order(char* s){

    int len = strlen(s);
    int i;
    printf("\nREVERSE OF STRING : ");
    for(i=len-1;i>=0;i--)
        putchar(s[i]);
}


// Q31 - the total number of words in a string.
void word_count(char* s){
    int len = strlen(s);
    int i=0,counter=0;
    for(i=0;i<len;i++)
        if(s[i] == ' ')
            counter++;
    counter++;
    printf("\nTOTAL NUMBER OF WORDS : %d",counter);
}

// Q32 - to compare two string without using string library functions.
int compare_string(char* s1, char* s2){
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if(len1==len2){
        int i;
        for(i=0;i<len1;i++){
            if(s1[i] != s2[i]){
                printf("\nSTRING CONTENT NOT MATCHING!");
                return 0;
            }
        }
    }else{
        printf("\nLENGTH IS NOT MATCHING!");
        return 0;
    }

    printf("\nMATCHED.");
    return 1;
}

// Q33 - to count total number of alphabets, digits and special characters in a string.
void count_content(char* s){
    int len = strlen(s),i;
    int alphabet = 0;
    int digit = 0;
    int special_char = 0;

    for(i=0;i<len;i++){
        if(('A' <= s[i] && s[i] <= 'Z') || ('a' <= s[i] && s[i] <= 'z'))
            alphabet++;
        else if('0' <= s[i] && '9' >= s[i])
            digit++;
        else special_char++;
    }

    printf("\nTOTAL ALPHABET : %d",alphabet);
    printf("\nTOTAL DIGIT : %d",digit);
    printf("\nTOTAL SPECIAL CHARACTER : %d",special_char);
}

// Q34 - copy one string to another string without using string library functions.
void copy_string(char* s, char* d){
    int i=0;
    while(d[i]=s[i++]);
}

// Q35 - to count total number of vowel or consonant in a string.
void count_vowel_consonant(char* s){
    int i;
    int vowel=0,consonant=0;

    for(i=0;i<strlen(s);i++){
        if(
           ('A' == s[i] || 'a' == s[i]) ||
           ('E' == s[i] || 'e' == s[i]) ||
           ('I' == s[i] || 'i' == s[i]) ||
           ('O' == s[i] || 'o' == s[i]) ||
           ('U' == s[i] || 'u' == s[i])
           )
           vowel++;
        else
            if(('A' <= s[i] && s[i] <= 'Z') || ('a' <= s[i] && s[i] <= 'z'))
                consonant++;
    }

    printf("\nTOTAL VOWEL : %d",vowel);
    printf("\nTOTAL CONSONANT : %d",consonant);

}

// Q36 - to find maximum occurring character in a string.
void find_max_occurrence(char* s){
    int i,j, counter=0,old_counter=0;
    char ch = '\0';
    for(i=0;i<strlen(s);i++){
        if(s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
            continue;
        counter=1;
        for(j=i+1;j<strlen(s);j++){
            if(s[i] == s[j])
                counter++;
        }
        if(counter > old_counter){
            old_counter = counter;
            ch = s[i];
        }
        //printf("%c -> %d\n",s[i],counter);
    }

    printf("\nMAX OCCURRENCE : %c ",ch);
}

// Q37 - sort a string array in ascending order.
void string_sort(char* s){
    int i,j;
    char temp;

    for(i=0;i<strlen(s)-1;i++){
        for(j=i+1;j<strlen(s);j++){
            if(s[i] > s[j]){
                temp=s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
    }

    puts(s);
}

// Q38 - extract a substring from a given string.
void extract_substring(char* s, int start, int end){
    if(start >= 0 && start <strlen(s) && end >= 0 && end <strlen(s)){
        int i,index=0;
        for(i=start;i<=end;i++){
            s[index++] = s[i];
        }
        s[index] = '\0';
    }else{
        printf("\nINVALID INDEX!");
    }
}

// Q39 -to check whether a given substring is present in the given string.
void is_substring(char* s, char* sub){
    int i,j,k;

    for(i=0;i<strlen(s);i++){
        if(s[i] == sub[0]){
            for(j=i+1,k=1;j<strlen(s),k<strlen(sub);j++,k++){
                if(s[j] != sub[k]){
                    printf("\nINVALID SUBSTRING");
                    return;
                }
            }
            printf("\nVALID SUBSTRING");
            return;
        }
    }
    printf("\nINVALID SUBSTRING");
}

// Q40 - to read a sentence and replace lowercase characters by uppercase and vice-versa.
void case_change(char* s){
    int i;
    for(i=0;i<strlen(s);i++){
        if(s[i] >= 'A' && s[i] <='Z')
            s[i]+=32;
        else if(s[i] >= 'a' && s[i] <='z')
                s[i]-=32;
    }
}

// Q41 -find the number of times a given word 'the' appears in the given string.
void find_appareance(char* s){
    char key[100];
    printf("\nENTER THE KEY : ");
    gets(key);
    strlwr(key);
    strlwr(s);

    int i,j,k,counter=0,flag=0;

    for(i=0;i<strlen(s);i++){
        if((s[i] == key[0]) && s[i-1] == ' '){
            flag = 0;
            for(j=i+1,k=1;j<strlen(s),k<strlen(key);j++,k++){
                if(s[j] != key[k]){
                   flag=1;
                }
            }
            if('a' <= s[j] && s[j] <= 'z')
                flag = 1;
            if(flag == 0)
                counter++;
        }
    }

    printf("\nNUMBER OF OCCURRENCE : %d",counter);
}

// Q42 -remove characters in String Except Alphabets.
void remove_special(char* s){
    int i,index=0;
    for(i=0;i<strlen(s);i++){
        if(('A' <= s[i] && s[i] <= 'Z') || ('a' <= s[i] && s[i] <= 'z') || s[i] == ' ')
            s[index++] = s[i];
    }
    s[index] = '\0';
    printf("\nPROCESSED : ");
    puts(s);
}

// Q43 - Find the Frequency of Characters.
void find_frequency(char* s){
    int i,j,counter;
    int discard[strlen(s)];
    for(i=0;i<strlen(s);i++)
        discard[i] = 1;

    for(i=0;i<strlen(s);i++){
        if(discard[i]){
            counter=1;
            for(j=i+1;j<strlen(s);j++){
                if (s[i] == s[j]){
                    counter++;
                    discard[j] = 0;
                }
            }
            printf("\nFREQUENCY OF   %c   -> %d",s[i],counter);
        }
    }
}

// Q44 - Concatenate Two Strings Manually.
void concat_string(char* s1, char* s2){
    int i,j;
    for(i=strlen(s1), j=0; i<strlen(s1)+strlen(s2); i++, j++){
        s1[i] = s2[j];
    }
    puts(s1);
}

// Q45 - find the largest and smallest word in a string.
void find_largest_smallest_word(char* s){
    remove_special(s);
    int start,end;

    int max_len=0,min_len=27;
    int max_start_index=0,min_start_index=0,max_end_index=0,min_end_index=0;

    start = 0;
    end = 0;

    while(end<=strlen(s)){
        if(s[end] == ' '){
//            printf("%d ",end-start);
//            int t;
//            for(t=start;t<=end;t++)
//                putchar(s[t]);
//            printf("\n");

            if(max_len < end-start){
                max_len = end-start;
                max_start_index = start;
                max_end_index = end;
            }
            if(min_len > end-start){
                min_len = end-start;
                min_start_index = start;
                min_end_index = end;
            }
            start=end+1;
            end++;
        }else{
            end++;
        }
    }

    int i;
    printf("\nLARGEST WORD LENGTH %d :: ",max_len);
    for(i=max_start_index;i<=max_end_index;i++)
        putchar(s[i]);
    printf("\nSMALLEST WORD LENGTH %d :: ",min_len);
    for(i=min_start_index;i<=min_end_index;i++)
        putchar(s[i]);
}

// Q46 - convert a string to uppercase.
void convert_to_uppercase(char* s){
    int i;
    for(i=0;i<strlen(s);i++){
        if('a' <= s[i] && s[i] <= 'z')
            s[i]-=32;
    }
    puts(s);
}

// Q47 - convert a string to lowercase.
void convert_to_lowercase(char* s){
    int i;
    for(i=0;i<strlen(s);i++){
        if('A' <= s[i] && s[i] <= 'Z')
            s[i]+=32;
    }
    puts(s);
}

// Q48 - character is Hexidecimal Digit or not
int check_hex(char ch){
    if((ch>='0' && ch<= '9') || (ch >= 'A'&& ch <= 'F') || (ch >= 'a' && ch <= 'f')){
        printf("\nHEX DIGIT.");
        return 1;
    }else{
        printf("\nNOT HEX DIGIT.");
        return 0;
    }
}

// Q49 - letter is uppercase or not.
int is_upper(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        printf("\nUPPER CASE.");
        return 1;
    }else{
        printf("\nLOWER CASE.");
        return 0;
    }
}

// Q50 -replace the spaces of a string with a specific character.
void replace_space(char* s){
    int ch;
    printf("\nGIVE THE SPECIAL CHARACTER : ");
    ch = getchar();

    int i;

    for(i=0;i<strlen(s);i++){
        if(s[i] == ' ')
            s[i] = ch;
    }
    puts(s);
}

// Q51 - the number of punctuation characters exists in a string.
int count_punctuation(char* s){
    int i,counter=0;
    for(i=0;i<strlen(s);i++){
        if(
           s[i] == '.' ||
           s[i] == '!' ||
           s[i] == '?' ||
           s[i] == ',' ||
           s[i] == ';' ||
           s[i] == ':' ||
           s[i] == '"' ||
           s[i] == '(' ||
           s[i] == ')' ||
           s[i] == '[' ||
           s[i] == ']' ||
           s[i] == '-' ||
           s[i] == '/' ||
           s[i] == '\''
           )
            counter++;
    }
    printf("\nTOTAL NUMBER OF PUNCTUATION USED : %d",counter);
    return counter;
}

// Q52 - print only the string before new line character.
void print_until_newline(char* s){
    int i;
    for(i=0;i<strlen(s);i++)
        if(s[i] != '\n')
            putchar(s[i]);
        else
            return;
}
