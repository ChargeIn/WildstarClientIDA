#include "../winhttp.h"

//----- (000000014011B590) ----------------------------------------------------
__int64 __fastcall sub_14011B590(_QWORD* a1)
{
	__int64 v1; // rdx
	unsigned __int64 v2; // r8
	__int64 v3; // rdi
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rax
	void(__fastcall * **v7)(_QWORD); // rbx
	__int64 v8; // rcx

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	if (v2)
	{
		v3 = *(_QWORD*)(qword_140C63650 + 760);
		v4 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v3 + 8 * v4) + 400i64) != a1)
		{
			v1 = (unsigned int)(v1 + 1);
			v4 = (unsigned int)v1;
			if ((unsigned int)v1 >= v2)
				goto LABEL_5;
		}
		v5 = *(_QWORD*)(v3 + 8 * v1);
	}
	else
	{
	LABEL_5:
		v5 = 0i64;
	}
	v6 = sub_140154F60(a1);
	v7 = (void(__fastcall***)(_QWORD))v6;
	if (v6)
	{
		v8 = *(_QWORD*)(v5 + 2848);
		if (v6 != v8)
		{
			if (v8)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
				*(_QWORD*)(v5 + 2848) = 0i64;
			}
			*(_QWORD*)(v5 + 2848) = v7;
			(**v7)(v7);
		}
	}
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

