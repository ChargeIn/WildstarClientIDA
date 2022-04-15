#include "../winhttp.h"

//----- (000000014043F0B0) ----------------------------------------------------
__int64 __fastcall sub_14043F0B0(__int64 a1, unsigned int a2, int a3)
{
	__int64 v3; // r9
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 result; // rax
	_DWORD* v7; // rcx
	__int64 v8; // [rsp+30h] [rbp+8h]

	v3 = *(_QWORD*)(qword_140C65898 + 29456);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v8 = v4, a2 < *(_DWORD*)(v4 + 32)))
		v8 = *(_QWORD*)(qword_140C65898 + 29456);
	result = v8;
	if (v8 != v3)
	{
		v7 = *(_DWORD**)(v8 + 40);
		v7[2] = a3;
		return sub_14043F130(v7);
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

