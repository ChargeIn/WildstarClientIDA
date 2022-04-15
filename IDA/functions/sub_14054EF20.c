#include "../winhttp.h"

//----- (000000014054EF20) ----------------------------------------------------
void __fastcall sub_14054EF20(unsigned int* a1, __int64 a2)
{
	__int64 v2; // r8
	__int64 v3; // r9

	v2 = a1[3];
	v3 = 0i64;
	if ((_DWORD)v2)
	{
		if ((_DWORD)v2 == 1)
		{
			a2 = (__int64)(*(_QWORD*)(qword_140C659E0 + 16) - *(_QWORD*)(qword_140C659E0 + 8)) >> 3;
			if ((_DWORD)a2 && !a1[4])
				return;
		}
		else if ((_DWORD)v2 == 2)
		{
			if (!a1[4])
				return;
			v3 = 1i64;
		}
		if ((int)(dword_140C636A8 - a1[5]) >= 0 || (_DWORD)v3)
		{
			if ((_DWORD)v2 == 1)
				(*(void(__fastcall**)(unsigned int*, __int64, __int64, __int64))(*(_QWORD*)a1 + 48i64))(a1, a2, v2, v3);
			else
				PostQuitMessage(0);
		}
	}
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C659E0: using guessed type __int64 qword_140C659E0;

