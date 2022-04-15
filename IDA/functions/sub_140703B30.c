#include "../winhttp.h"

//----- (0000000140703B30) ----------------------------------------------------
__int64 __fastcall sub_140703B30(_QWORD* a1)
{
	unsigned int v1; // eax
	__int64 v2; // r9
	unsigned int v3; // ebx
	__int64 v4; // rax
	unsigned int v5; // ecx
	__int64 v6; // rcx

	v1 = sub_140056D60(a1, 1u);
	v2 = qword_140C65898;
	v3 = v1;
	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (v4)
		v5 = *(_DWORD*)(v4 + 56);
	else
		v5 = 0;
	if (v3 > v5)
		return 0i64;
	if ((dword_140DC4C20 & 1) == 0)
	{
		dword_140DC4C2C = 0;
		dword_140DC4C20 |= 1u;
		dword_140DC4C30 = 1000;
		dword_140DC4C34 = 1;
		dword_140DC4C38 = 1000;
		dword_140DC4C28 = dword_140C636A8 - 1000;
		sub_1407DD89C(nullsub_10);
		v2 = qword_140C65898;
	}
	v6 = (unsigned int)(dword_140C636A8 - dword_140DC4C28);
	if ((unsigned int)v6 >= dword_140DC4C38)
	{
		if ((unsigned int)v6 >= dword_140DC4C30)
		{
			dword_140DC4C28 = dword_140C636A8;
			dword_140DC4C2C = 1;
			sub_1403C9E60(v6, v3);
			return 0i64;
		}
		dword_140DC4C28 += dword_140DC4C38;
		sub_1403C9E60(v6, v3);
		return 0i64;
	}
	if (dword_140DC4C2C == dword_140DC4C34)
	{
		sub_1403CC530(v2, 2u);
	}
	else
	{
		++dword_140DC4C2C;
		sub_1403C9E60(v6, v3);
	}
	return 0i64;
}
// 1409567F0: using guessed type __int64 __fastcall nullsub_10();
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC4C20: using guessed type int dword_140DC4C20;
// 140DC4C28: using guessed type int dword_140DC4C28;
// 140DC4C2C: using guessed type int dword_140DC4C2C;
// 140DC4C30: using guessed type int dword_140DC4C30;
// 140DC4C34: using guessed type int dword_140DC4C34;
// 140DC4C38: using guessed type int dword_140DC4C38;

