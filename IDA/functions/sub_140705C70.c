#include "../winhttp.h"

//----- (0000000140705C70) ----------------------------------------------------
__int64 __fastcall sub_140705C70(_QWORD* a1)
{
	_DWORD* v1; // rax
	int v3; // eax
	void(__fastcall * **v4)(_QWORD); // rax
	__int64 result; // rax
	int v6; // [rsp+38h] [rbp+10h] BYREF
	int v7; // [rsp+3Ch] [rbp+14h]

	v1 = (_DWORD*)a1[3];
	v6 = 300;
	v7 = -1;
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || (int)v1[2] <= 0)
		v3 = 0;
	else
		v3 = sub_140056D60(a1, 1u);
	if ((unsigned int)(v3 - 1) >= *(_DWORD*)(qword_140C65898 + 196))
	{
		result = 1i64;
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	else
	{
		v7 = v3 - 1;
		v6 = 1;
		v4 = (void(__fastcall***)(_QWORD))sub_1403AC780(qword_140C65898 + 160, &v6);
		return sub_140415D60(a1, v4);
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

