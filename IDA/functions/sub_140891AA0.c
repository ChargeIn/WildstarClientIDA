#include "../winhttp.h"

//----- (0000000140891AA0) ----------------------------------------------------
__int16 __fastcall sub_140891AA0(__int64 a1, __int64 a2, unsigned int a3, int a4, _DWORD* a5, int* a6)
{
	char v8; // r9
	unsigned int v9; // ecx
	__int16 v10; // cx
	_DWORD* v11; // rax

	v8 = 0;
	v9 = *(_DWORD*)(*(_QWORD*)(a1 + 232) - 12i64) - *(_DWORD*)(*(_QWORD*)(a1 + 224) + 4i64);
	if (v9)
		*a6 = a3 % v9;
	else
		*a6 = 0;
	*a5 = 0;
	v10 = *(_WORD*)(a2 + 20);
	LOWORD(v11) = v10 & 7;
	if ((v10 & 7) != 0)
	{
		if ((_WORD)v11 == 2)
		{
			if ((v10 & 0x10) == 0)
				a4 = *(_DWORD*)(a2 + 12);
		}
		else
		{
			if ((_WORD)v11 != 3)
				return (__int16)v11;
			if ((v10 & 0x10) == 0)
				a4 = *(_DWORD*)(a2 + 12);
			v8 = 1;
		}
		LODWORD(v11) = sub_140892000(a1, *a6, a4, v8, a5);
		*a6 = (int)v11;
		return (__int16)v11;
	}
	if (!a3)
	{
		v11 = *(_DWORD**)(a1 + 224);
		*a5 = *v11;
	}
	return (__int16)v11;
}

