char ** split(char * input);
int wildcardcmp(char *pattern,char *text);
char ** getAllItemsFromCurrDir();
void printcontents(char ** ls);
char ** getAllMatches(char ** ls,char * regex);
int isWildCard(char * text);
char ** executeWildCard(char ** tokens);
int isCommandHavingWildcard(char ** command);
int getOccurenceCount(char * path,char * word);
void sgown(const char *name, char * searchstring);
