#include "../winhttp.h"

//----- (00000001404A1AA0) ----------------------------------------------------
__int64 __fastcall sub_1404A1AA0(__int64 a1, unsigned int a2, int a3)
{
	__int64 v4; // r9
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rdi
	__int64 v9; // rdi
	__int64 v10; // rbx
	unsigned int v11; // esi
	__int64 v12; // rax
	__int64 i; // rax
	__int64 j; // rcx
	__int64 v15; // [rsp+30h] [rbp+8h]

	if (a2)
	{
		v4 = *(_QWORD*)(qword_140C65970 + 64);
		v5 = v4;
		v6 = *(_QWORD*)(v4 + 8);
		while (v6)
		{
			if (*(_DWORD*)(v6 + 32) < a2)
			{
				v6 = *(_QWORD*)(v6 + 24);
			}
			else
			{
				v5 = v6;
				v6 = *(_QWORD*)(v6 + 16);
			}
		}
		if (v5 == v4 || (v15 = v5, a2 < *(_DWORD*)(v5 + 32)))
			v15 = *(_QWORD*)(qword_140C65970 + 64);
		if (v15 == v4)
			return 0i64;
		v7 = *(_QWORD*)(v15 + 40);
	}
	else
	{
		v7 = *(_QWORD*)(qword_140C65970 + 88);
	}
	if (!v7)
		return 0i64;
	v9 = *(_QWORD*)(v7 + 16);
	v10 = *(_QWORD*)(v9 + 16);
	v11 = 0;
	while (v10 != v9)
	{
		if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v10 + 40) + 56i64))(*(_QWORD*)(v10 + 40))
			&& (a3 || (*(_BYTE*)(**(_QWORD**)(*(_QWORD*)(v10 + 40) + 48i64) + 52i64) & 0x40) == 0))
		{
			++v11;
		}
		v12 = *(_QWORD*)(v10 + 24);
		if (v12)
		{
			v10 = *(_QWORD*)(v10 + 24);
			for (i = *(_QWORD*)(v12 + 16); i; i = *(_QWORD*)(i + 16))
				v10 = i;
		}
		else
		{
			for (j = *(_QWORD*)(v10 + 8); v10 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
				v10 = j;
			if (*(_QWORD*)(v10 + 24) != j)
				v10 = j;
		}
	}
	return v11;
}
// 140C65970: using guessed type __int64 qword_140C65970;

