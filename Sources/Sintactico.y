%{
int yylex(void);
void yyerror(const char *);
%}
%token regla
%%
algo: regla

%%

void yyerror(const char *)
{}