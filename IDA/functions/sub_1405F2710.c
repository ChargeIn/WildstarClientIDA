#include "../winhttp.h"

//----- (00000001405F2710) ----------------------------------------------------
__int64 __fastcall sub_1405F2710(__int64 a1, __int64 a2, int a3)
{
	int v3; // eax
	__int64 v5; // rax
	int v6; // ecx
	int v7; // eax
	int v8; // eax
	__int64 result; // rax

	v3 = dword_140DC3574;
	*(_QWORD*)(a1 + 48) = a2;
	*(_DWORD*)(a1 + 40) = a3;
	*(_DWORD*)(a1 + 464) = 2;
	if ((v3 & 1) != 0)
	{
		if (dword_140DC357C)
		{
			v6 = dword_140DC3578;
			goto LABEL_8;
		}
	}
	else
	{
		dword_140DC3574 = v3 | 1;
	}
	dword_140DC357C = 1;
	v5 = sub_140200220(0x536u);
	if (v5)
	{
		v6 = *(_DWORD*)(v5 + 4);
		dword_140DC3578 = v6;
	}
	else
	{
		v6 = 0;
		dword_140DC3578 = 0;
	}
LABEL_8:
	v7 = dword_140C636A8;
	*(_DWORD*)(a1 + 484) = v6;
	*(_DWORD*)(a1 + 480) = 0;
	v8 = v7 - v6;
	*(_DWORD*)(a1 + 488) = 1;
	if (!v6)
		v6 = 1;
	*(_DWORD*)(a1 + 476) = v8;
	result = 0i64;
	*(_DWORD*)(a1 + 492) = v6;
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140DC3574: using guessed type int dword_140DC3574;
// 140DC3578: using guessed type int dword_140DC3578;
// 140DC357C: using guessed type int dword_140DC357C;

