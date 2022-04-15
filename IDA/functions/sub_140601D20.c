#include "../winhttp.h"

//----- (0000000140601D20) ----------------------------------------------------
__int64 __fastcall sub_140601D20(__int64 a1, unsigned __int64 a2, int a3, int a4)
{
	_QWORD* v4; // r10
	__int64 v5; // rcx
	int v6; // eax
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	__int64 v9; // [rsp+28h] [rbp-20h]
	__int64 v10; // [rsp+30h] [rbp-18h]
	__int64 v11; // [rsp+38h] [rbp-10h]

	v4 = *(_QWORD**)(a1 + 64);
	if (!v4 || a2 >= v4[12])
		return 0i64;
	if (a2)
	{
		if (a2 <= v4[13])
			--a2;
	}
	else
	{
		a2 = v4[13];
	}
	v5 = *(_QWORD*)(v4[11] + 8 * a2);
	if (!v5)
		return 0i64;
	v8 = 0i64;
	v9 = 0i64;
	v10 = 0i64;
	v11 = 0i64;
	v8 = v4[9];
	v9 = *(_QWORD*)(v5 + 16);
	v10 = *(_QWORD*)(v5 + 24);
	if (a3)
		v6 = *(_DWORD*)(v5 + 8) | a4;
	else
		v6 = *(_DWORD*)(v5 + 8) & ~a4;
	LODWORD(v11) = v6;
	if (a4 == 2048)
	{
		v6 |= 0x4000u;
		LODWORD(v11) = v6;
	}
	HIDWORD(v11) = *(_DWORD*)(v5 + 8) ^ v6;
	sub_1403F4740(qword_140C65898, 0x408u, (__int64)&v8);
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

