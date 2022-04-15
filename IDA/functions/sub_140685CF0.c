#include "../winhttp.h"

//----- (0000000140685CF0) ----------------------------------------------------
__int64 __fastcall sub_140685CF0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int16* v5; // rax
	unsigned __int64* v6; // rdx
	unsigned __int64 v7; // r8
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		v5 = sub_14034BDD0(v4, *(_DWORD*)(v4 + 68));
		v6 = (unsigned __int64*)sub_14018F0E0(&v9, (unsigned __int16*)v5)[1];
		if (v6)
		{
			v7 = -1i64;
			do
				++v7;
			while (*((_BYTE*)v6 + v7));
			sub_140058710((__int64)a1, v6, v7);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v10)
		{
			sub_14018B900(v10, 0);
			return 1i64;
		}
	}
	else
	{
		sub_140058710((__int64)a1, (unsigned __int64*)&unk_1409D14C1, 0i64);
	}
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

