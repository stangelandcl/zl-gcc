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
/* function decls */
int printf(char const *, ...);
int snprintf(char const * str, size_t size, char const * format, ...);
int strcmp(char const * s1, char const * s2);
struct Syntax * parse_class(struct Syntax * p, Environ * env);
int main();
/* definitions */
int main()
{
  int x$1;
  if (0)
    goto inner$$1;
  else
    goto outer$$1;
  {
    __label__ loop$1;
  loop$1:;
    {
      __label__ loop$2;
    inner$$1:;
      {
        (x$1 = 20);
        goto loop$2;
      }
    loop$2:;
      (x$1 = 15);
    }
    goto loop$1;
  }
outer$$1:;
  (x$1 = 30);
}
/* special */
/* done */
