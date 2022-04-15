#include "../winhttp.h"

//----- (000000014005AA20) ----------------------------------------------------
void __fastcall __noreturn sub_14005AA20(__int64 a1, __int64 a2, __int64 a3)
{
	char* v3; // r9
	char* v4; // r8

	v3 = off_140A123B0[*(int*)(a3 + 8)];
	v4 = off_140A123B0[*(int*)(a2 + 8)];
	if (v4[2] == v3[2])
		sub_14005ABE0(a1, "attempt to compare two %s values", v4);
	sub_14005ABE0(a1, "attempt to compare %s with %s", v4, v3);
}
// 14005ABE0: using guessed type void __noreturn sub_14005ABE0(_QWORD, const char *, ...);
// 140A123B0: using guessed type char *off_140A123B0[11];

