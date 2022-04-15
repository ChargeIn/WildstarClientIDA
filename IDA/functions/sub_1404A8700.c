#include "../winhttp.h"

//----- (00000001404A8700) ----------------------------------------------------
__int64 __fastcall sub_1404A8700(__int64 a1, unsigned int a2)
{
	__int64 v2; // rdi
	__int64 v4; // rcx
	int v5; // eax
	__int64 v6; // rdx
	__int64 v7; // r8
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v11; // [rsp+30h] [rbp+8h]

	v2 = qword_140C659B0;
	v4 = *(_QWORD*)(qword_140C65898 + 7152);
	if (!v4)
		return 0i64;
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4);
	if (v5 == 166)
	{
		v6 = v2 + 240;
	}
	else
	{
		if (v5 != 167)
			return 0i64;
		v6 = v2 + 496;
	}
	if (v6)
	{
		v7 = *(_QWORD*)(v6 + 168);
		v8 = v7;
		v9 = *(_QWORD*)(v7 + 8);
		while (v9)
		{
			if (*(_DWORD*)(v9 + 32) < a2)
			{
				v9 = *(_QWORD*)(v9 + 24);
			}
			else
			{
				v8 = v9;
				v9 = *(_QWORD*)(v9 + 16);
			}
		}
		if (v8 == v7 || (v11 = v8, a2 < *(_DWORD*)(v8 + 32)))
			v11 = *(_QWORD*)(v6 + 168);
		if (v11 != v7)
			return v11 + 40;
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659B0: using guessed type __int64 qword_140C659B0;

