#include "../winhttp.h"

//----- (0000000140681170) ----------------------------------------------------
__int64 __fastcall sub_140681170(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rax
	__int16* v6; // rax
	unsigned __int64* v7; // rdx
	unsigned __int64 v8; // r8
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]

	if (qword_140C65970
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v4 = *(_QWORD*)(v2 + 8)) != 0
		&& (v5 = *(_QWORD*)(v4 + 8)) != 0)
	{
		v6 = sub_14034BDD0(v3, *(_DWORD*)(*(_QWORD*)(v5 + 24) + 16i64));
		v7 = (unsigned __int64*)sub_14018F0E0(&v10, (unsigned __int16*)v6)[1];
		if (v7)
		{
			v8 = -1i64;
			do
				++v8;
			while (*((_BYTE*)v7 + v8));
			sub_140058710((__int64)a1, v7, v8);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v11)
		{
			sub_14018B900(v11, 0);
			return 1i64;
		}
	}
	else
	{
		sub_140058710((__int64)a1, qword_1409D1487, 0i64);
	}
	return 1i64;
}
// 1406811C8: variable 'v3' is possibly undefined
// 1409D1487: using guessed type unsigned __int64 qword_1409D1487[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

