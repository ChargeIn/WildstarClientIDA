#include "../winhttp.h"

//----- (00000001404A8430) ----------------------------------------------------
__int64 __fastcall sub_1404A8430(__int64 a1, unsigned int a2)
{
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rcx
	int v7; // eax
	__int64 v8; // rdx
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v13; // [rsp+40h] [rbp+18h]

	if (!a2)
		return 0i64;
	v4 = qword_140C65898;
	v5 = *(_QWORD*)(qword_140C65898 + 7152);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 24i64))(v5);
		v4 = qword_140C65898;
	}
	v6 = *(_QWORD*)(v4 + 7152);
	if (!v6)
		return 0i64;
	v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 24i64))(v6);
	if (v7 == 166)
	{
		v8 = a1 + 104;
	}
	else
	{
		if (v7 != 167)
			return 0i64;
		v8 = a1 + 136;
	}
	if (v8)
	{
		v9 = *(_QWORD*)(v8 + 8);
		v10 = v9;
		v11 = *(_QWORD*)(v9 + 8);
		while (v11)
		{
			if (*(_DWORD*)(v11 + 32) < a2)
			{
				v11 = *(_QWORD*)(v11 + 24);
			}
			else
			{
				v10 = v11;
				v11 = *(_QWORD*)(v11 + 16);
			}
		}
		if (v10 == v9 || (v13 = v10, a2 < *(_DWORD*)(v10 + 32)))
			v13 = v9;
		if (v13 != v9)
			return (__int64)(*(_QWORD*)(*(_QWORD*)(v13 + 40) + 24i64) - *(_QWORD*)(*(_QWORD*)(v13 + 40) + 16i64)) >> 3;
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

