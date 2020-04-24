
#ifdef MATHDLL_EXPORTS
#define MATH_API __declspec(dllexport)
#else
#define MATH_API __declspec(dllimport)
#endif

MATH_API void Add(int a, int b);
MATH_API void Sub(int a, int b);
MATH_API void Mul(int a, int b);
MATH_API void Div(int a, int b);
