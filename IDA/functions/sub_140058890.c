#include "../winhttp.h"

//----- (0000000140058890) ----------------------------------------------------
__int64 __fastcall sub_140058890(__int64 a1, int a2)
{
	void* v3; // rdi
	unsigned __int64* v4; // r10
	unsigned __int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // r9
	__int64 result; // rax
	__int64 v9; // [rsp+20h] [rbp-18h] BYREF
	int v10; // [rsp+28h] [rbp-10h]

	v3 = sub_1400580E0(a1, a2);
	v5 = -1i64;
	do
		++v5;
	while (*((_BYTE*)v4 + v5));
	v6 = sub_140062650(a1, v4, v5);
	v7 = *(_QWORD*)(a1 + 16);
	v9 = v6;
	v10 = 4;
	result = sub_14005E8E0(a1, (__int64)v3, (int*)&v9, v7);
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 1400588B3: variable 'v4' is possibly undefined

