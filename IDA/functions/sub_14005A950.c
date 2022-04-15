#include "../winhttp.h"

//----- (000000014005A950) ----------------------------------------------------
void __fastcall __noreturn sub_14005A950(__int64 a1, __int64 a2, const char* a3)
{
	__int64 v3; // rax
	const char* v4; // r10
	unsigned __int64* v6; // rcx
	const char* v7; // rsi
	unsigned __int64 v8; // rax
	unsigned __int64 v9; // r9
	char* v11; // rax
	__int64 v12; // rdx
	const char* v13; // [rsp+40h] [rbp+8h] BYREF

	v3 = *(int*)(a2 + 8);
	v4 = 0i64;
	v6 = *(unsigned __int64**)(a1 + 40);
	v13 = 0i64;
	v7 = off_140A123B0[v3];
	v8 = *v6;
	v9 = v6[2];
	if (*v6 >= v9)
		goto LABEL_4;
	while (a2 != v8)
	{
		v8 += 16i64;
		if (v8 >= v9)
			goto LABEL_4;
	}
	v12 = (a2 - *(_QWORD*)(a1 + 24)) >> 4;
	if (*(_DWORD*)(v6[1] + 8) == 6)
	{
		v11 = sub_14005A5E0(a1, (__int64)v6, v12, (__int64*)&v13);
		v4 = v13;
	}
	else
	{
	LABEL_4:
		v11 = 0i64;
	}
	if (v11)
		sub_14005ABE0(a1, "attempt to %s %s '%s' (a %s value)", a3, v11, v4, v7);
	sub_14005ABE0(a1, "attempt to %s a %s value", a3, v7);
}
// 14005ABE0: using guessed type void __noreturn sub_14005ABE0(_QWORD, const char *, ...);
// 140A123B0: using guessed type char *off_140A123B0[11];

