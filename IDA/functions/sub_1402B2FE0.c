#include "../winhttp.h"

//----- (00000001402B2FE0) ----------------------------------------------------
__int64 __fastcall sub_1402B2FE0(__int64 a1, int a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
	__int64 v11; // rax
	__int64 v12; // rdi
	unsigned __int64 v13; // rsi
	__int64 v14; // rax
	int* v15; // rax
	int* v16; // rcx
	__int64 v17; // rax
	__int64 v18; // [rsp+30h] [rbp-28h] BYREF
	unsigned __int64 v19[4]; // [rsp+38h] [rbp-20h] BYREF

	if ((unsigned __int64)(a2 - 1i64) > 0x72
		|| sub_1402B27D0(a2)
		|| !a3
		|| !a4
		|| !a5
		|| !sub_1402C10B0(a3, a4, (unsigned __int64*)&a6))
	{
		return 2147942487i64;
	}
	sub_1402B34D0((_QWORD*)a1);
	v11 = a6;
	*(_QWORD*)(a1 + 24) = a4;
	v12 = 0i64;
	*(_QWORD*)(a1 + 48) = v11;
	*(_QWORD*)(a1 + 16) = a3;
	*(_QWORD*)(a1 + 32) = 1i64;
	*(_QWORD*)(a1 + 40) = a5;
	*(_DWORD*)(a1 + 64) = a2;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_DWORD*)(a1 + 68) = 3;
	if (*(int*)(a1 + 68) < 2)
	{
		v13 = 0i64;
	}
	else
	{
		sub_1402B2830(a1 + 16, 0, v19, &v18, *(_DWORD*)(a1 + 68));
		v12 = v18;
		v13 = v19[0];
	}
	v14 = 48 * v13;
	if (!is_mul_ok(v13, 0x30ui64))
		v14 = -1i64;
	v15 = sub_14018B280(v14, 1u);
	*(_QWORD*)(a1 + 72) = v15;
	if (!v15)
		return 2147942414i64;
	*(_QWORD*)a1 = v13;
	sub_1407E4830(v15, 0i64, 48 * v13);
	v16 = sub_14018B280(v12, 1u);
	*(_QWORD*)(a1 + 80) = v16;
	if (!v16)
	{
		sub_1402B34D0((_QWORD*)a1);
		return 2147942414i64;
	}
	v17 = *(_QWORD*)(a1 + 72);
	*(_QWORD*)(a1 + 8) = v12;
	if (sub_1402B29B0((unsigned __int64)v16, v12, a1 + 16, 0, v17, v13))
		return 0i64;
	sub_1402B34D0((_QWORD*)a1);
	return 2147500037i64;
}
// 1402B2FE0: using guessed type unsigned __int64 var_20[4];

