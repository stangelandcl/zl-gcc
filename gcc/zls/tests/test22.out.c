/* type decls */
typedef struct _IO_FILE FILE;
typedef unsigned int size_t;
typedef int bool;
typedef struct EnvironSnapshot EnvironSnapshot;
typedef struct Mark Mark;
struct UnmarkedSyntax;
struct Syntax;
struct SyntaxList;
struct SyntaxEnum;
struct Match;
typedef struct Context Context;
typedef struct Environ Environ;
enum _s_0_;
typedef enum _s_0_ Position;
struct UserTypeInfo;
struct ModuleInfo;
enum X;
/* type definitions */
enum _s_0_{
  NoPos = 0,
  OtherPos = 1,
  TopLevel = 2,
  FieldPos = 4,
  StmtDeclPos = 8,
  StmtPos = 16,
  ExpPos = 32,
};
enum X{
  A = 1,
  B = 2,
  C = 4,
};
/* function decls */
int printf(char const *, ...);
int snprintf(char const * str, size_t size, char const * format, ...);
int strcmp(char const * s1, char const * s2);
struct Syntax * parse_class(struct Syntax * p, Environ * env);
int main();
/* definitions */
int main()
{
  int x$1[3];
  int y$1[0];
  int z$1[2];
}
/* special */
/* done */