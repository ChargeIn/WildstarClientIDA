#include "../winhttp.h"

//----- (00000001403968B0) ----------------------------------------------------
void __fastcall sub_1403968B0(__int64 a1, _DWORD* a2)
{
	_QWORD* v2; // rax
	_DWORD* v4; // rcx
	int v5; // ecx
	__int64 v6; // rcx
	int v7; // edx

	v2 = (_QWORD*)qword_140C65898;
	v4 = *(_DWORD**)(qword_140C65898 + 25744);
	if (v4 != a2)
	{
		v5 = v4[323];
		if (v5)
			a2[323] = v5;
		v6 = v2[15];
		v2[3218] = a2;
		v2[3217] = 0i64;
		if (v6)
		{
			v7 = *(_DWORD*)(v6 + 264);
			if (v7 != a2[66])
			{
				a2[66] = v7;
				a2[67] = sub_14045A950((__int64)a2, v7);
			}
		}
	}
	if (qword_140C65B78)
		sub_140575DD0();
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B78: using guessed type __int64 qword_140C65B78;

