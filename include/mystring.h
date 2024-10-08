#ifndef MY_STRING_H
#define MY_STRING_H

char *strcpy(char *s, const char *ct);
char *strncpy(char *s, const char *ct, size_t n);

char *strcat(char *s, const char *ct);
char *strncat(char *s, const char *ct, size_t n);

int strcmp(const char *firstStr, const char *secondStr);
int strcmpBackward(const char *firstStr, const char *secondStr);

int stralphacmp(const char *firstStr, const char *secondStr);
int stralphacmpBackward(const char *firstStr, const char *secondStr);

int strncmp(const char *s, const char *t, size_t n);

char *strchr(char *s, char c);
char *strrchr(char *s, char c);

const char *strstr(const char *s, const char *t );

size_t strlen(const char *s);

const char *findAlphabetChar(const char *str);
const char *findAlphabetCharBackward(const char *str, const char *end);

#endif
