#include "../winhttp.h"

//----- (00000001404CEDC0) ----------------------------------------------------
__int64 __fastcall sub_1404CEDC0(__int64 a1, int a2)
{
	_QWORD* v3; // rbx
	unsigned __int64 v4; // rdi
	__int64 v5; // rsi
	int* v6; // rax
	__int64 v7; // rcx
	_QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
	char v9[16]; // [rsp+30h] [rbp-18h] BYREF

	if (*(_QWORD*)(qword_140C65A20 + 64))
		return 1i64;
	if (a2 == 166)
	{
		v3 = *(_QWORD**)(qword_140C65A20 + 24);
	}
	else
	{
		if (a2 != 167)
			return 2147500037i64;
		v3 = *(_QWORD**)(qword_140C65A20 + 16);
	}
	if (!v3)
		return 2147500037i64;
	v4 = 0i64;
	if (v3[1])
	{
		v5 = qword_140C65A20 + 48;
		do
		{
			v6 = sub_14018B280(40i64, 0);
			if (v6)
			{
				*(_QWORD*)v6 = *(_QWORD*)(*v3 + 8 * v4);
				*((_QWORD*)v6 + 1) = 0i64;
				*((_QWORD*)v6 + 2) = 0i64;
				*((_QWORD*)v6 + 3) = 0i64;
				v6[8] = 0;
			}
			v7 = *(_QWORD*)v6;
			v8[1] = v6;
			LODWORD(v8[0]) = *(_DWORD*)(v7 + 4);
			sub_140055F80(v5, (__int64)v9, v8);
			++v4;
		} while (v4 < v3[1]);
	}
	return 0i64;
}
// 140C65A20: using guessed type __int64 qword_140C65A20;
// 1404CEDC0: using guessed type char var_18[16];

