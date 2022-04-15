#include "../winhttp.h"

//----- (00000001404ADB70) ----------------------------------------------------
__int64 __fastcall sub_1404ADB70(__int64 a1, unsigned int a2)
{
	__int64 v3; // r8
	__int64 v4; // rax
	__int64 v5; // rcx
	unsigned int v6; // edi
	__int64 v7; // rcx
	int v8; // edx
	int v9; // eax
	__int64 v10; // [rsp+40h] [rbp+18h]

	if (!a2)
		return 0i64;
	v3 = *(_QWORD*)(a1 + 16);
	v4 = *(_QWORD*)(v3 + 8);
	v5 = v3;
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v5 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v5 == v3 || (v10 = v5, a2 < *(_DWORD*)(v5 + 32)))
		v10 = v3;
	if (v10 == v3)
		return 0i64;
	v6 = 0;
	v7 = *(_QWORD*)(qword_140C65898 + 7152);
	if (v7)
		v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 24i64))(v7);
	else
		v8 = 0;
	v9 = *(_DWORD*)(**(_QWORD**)(v10 + 40) + 20i64);
	if (!v9 || v9 == 1 && v8 == 167 || v9 == 2 && v8 == 166)
		return 1;
	return v6;
}
// 140C65898: using guessed type __int64 qword_140C65898;

