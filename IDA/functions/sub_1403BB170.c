#include "../winhttp.h"

//----- (00000001403BB170) ----------------------------------------------------
_BOOL8 __fastcall sub_1403BB170(__int64 a1, unsigned int a2)
{
	__int64 v4; // r8
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // r9
	unsigned __int8 v8; // dl
	__int64 v9; // [rsp+18h] [rbp+18h]

	if (!a2)
		return 0i64;
	v4 = *(_QWORD*)(a1 + 2728);
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
	if (v5 == v4 || (v9 = v5, a2 < *(_DWORD*)(v5 + 32)))
		v9 = v4;
	if (v9 == v4)
		return 0i64;
	v7 = *(_QWORD*)(v9 + 40);
	v8 = *(_BYTE*)(a1 + 28140);
	if (v8 > (unsigned __int8)(*(_BYTE*)(v7 + 8) - 1))
		v8 = *(_BYTE*)(v7 + 8) - 1;
	return *(_BYTE*)(*(_QWORD*)(*(_QWORD*)v7 + 8i64 * v8) + 8i64) != 0;
}

