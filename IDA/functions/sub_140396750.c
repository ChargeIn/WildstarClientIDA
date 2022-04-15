#include "../winhttp.h"

//----- (0000000140396750) ----------------------------------------------------
_BOOL8 __fastcall sub_140396750(__int64 a1, unsigned int a2)
{
	__int64 v2; // rax
	__int64 v3; // r8
	__int64 v4; // r9
	__int64 v5; // rax
	__int64 v6; // r8
	__int64 v7; // rcx
	__int64 v9; // [rsp+8h] [rbp+8h]
	__int64 v10; // [rsp+8h] [rbp+8h]

	v2 = *(_QWORD*)(a1 + 72);
	v3 = *(_QWORD*)(v2 + 8);
	v4 = v2;
	while (v3)
	{
		if (*(_DWORD*)(v3 + 32) < a2)
		{
			v3 = *(_QWORD*)(v3 + 24);
		}
		else
		{
			v4 = v3;
			v3 = *(_QWORD*)(v3 + 16);
		}
	}
	if (v4 == v2 || (v9 = v4, a2 < *(_DWORD*)(v4 + 32)))
		v9 = *(_QWORD*)(a1 + 72);
	if (v9 != v2)
		return 1i64;
	v5 = *(_QWORD*)(a1 + 104);
	v6 = v5;
	v7 = *(_QWORD*)(v5 + 8);
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < a2)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v6 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v6 == v5 || (v10 = v6, a2 < *(_DWORD*)(v6 + 32)))
		v10 = v5;
	return v10 != v5;
}

