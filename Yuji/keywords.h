

enum {BEGIN = 0x4097 ,IF, THEN, ELSE, WHILE, DO, REPEAT, UNTIL,VAR, PROCEDURE, FUNCTION, INTEGER, REAL, BOOLEAN, DIV, MOD, AND, OR, NOT, END};


extern char *keywords[];
extern int iskeyword();


extern int is_keyword(char const *identifier);
