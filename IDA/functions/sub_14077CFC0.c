#include "../winhttp.h"

//----- (000000014077CFC0) ----------------------------------------------------
__int64 __fastcall sub_14077CFC0(__int64 a1, unsigned int a2)
{
	__int64 v2; // rsi
	__int64 v4; // rax
	_QWORD** v5; // rbx
	__int64 result; // rax
	__int64 v7; // rcx
	__int64 v8; // r14
	_DWORD* v9; // r10
	__int64 v10; // rcx
	__int64 v11; // rbx
	__int64 v12; // rcx
	__int32 v13[4]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14[3]; // [rsp+30h] [rbp-18h] BYREF

	v2 = qword_140C65970;
	if (!qword_140C65970 || *(_DWORD*)(qword_140C65970 + 8) != 3)
		return 2147500037i64;
	v4 = sub_1403D7BC0(qword_140C65970, a2);
	v5 = (_QWORD**)v4;
	if (!v4)
		return 2147500037i64;
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 56i64))(v4))
		v8 = 0i64;
	else
		v8 = sub_14077CCE0(v5, 0i64);
	if (!sub_14077D110(v7, v8))
		return 2147500037i64;
	v9 = (_DWORD*)qword_140C65920;
	v13[0] = 0;
	v13[1] = a2;
	v10 = *(_QWORD*)(qword_140C65920 + 8);
	v13[2] = 0;
	if (v10)
	{
		do
		{
			v11 = *(_QWORD*)(v10 + 32);
			if (*(_DWORD*)(v10 + 60) == a2 && !*(_DWORD*)(v10 + 56) && !*(_DWORD*)(v10 + 64))
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
			v10 = v11;
		} while (v11);
		v9 = (_DWORD*)qword_140C65920;
	}
	v14[0] = v2;
	v14[1] = (__int64)nullsub_1;
	if (!*v9)
		return 2147500037i64;
	v12 = sub_140487030((__int64)v9, *(_DWORD*)(*(_QWORD*)v8 + 12i64), v13, v14);
	result = 2147500037i64;
	if (v12)
		return 0i64;
	return result;
}
// 14077D03E: variable 'v7' is possibly undefined
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C65920: using guessed type __int64 qword_140C65920;
// 140C65970: using guessed type __int64 qword_140C65970;

