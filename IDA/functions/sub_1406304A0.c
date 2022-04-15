#include "../winhttp.h"

//----- (00000001406304A0) ----------------------------------------------------
__int64 __fastcall sub_1406304A0(__int64 a1, int a2)
{
	__int64 v2; // r8
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v6; // rcx
	__int64 v7; // [rsp+30h] [rbp+8h]

	v2 = *(_QWORD*)(qword_140C65C18 + 88);
	v3 = v2;
	v4 = *(_QWORD*)(v2 + 8);
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v3 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v3 == v2 || (v7 = v3, a2 < *(_DWORD*)(v3 + 32)))
		v7 = *(_QWORD*)(qword_140C65C18 + 88);
	if (v7 == v2)
		return 0i64;
	sub_1407A00F0((_DWORD*)(v7 + 40));
	return *(unsigned int*)(v6 + 16);
}
// 140630508: variable 'v6' is possibly undefined
// 140C65C18: using guessed type __int64 qword_140C65C18;

