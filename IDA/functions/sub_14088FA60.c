#include "../winhttp.h"

//----- (000000014088FA60) ----------------------------------------------------
void __fastcall sub_14088FA60(__int64 a1, __int64 a2)
{
	char v2; // al
	_QWORD* v4; // rbx
	__int64 i; // rsi

	v2 = *(_BYTE*)(a1 + 98);
	++* (_DWORD*)(a1 + 80);
	if ((v2 & 0xF) != 0)
	{
		if ((v2 & 1) != 0)
		{
			v4 = *(_QWORD**)(a1 + 128);
			for (i = a2 + *(unsigned int*)(a1 + 144) - *(_QWORD*)(a1 + 112); v4; v4 = (_QWORD*)*v4)
				sub_14088CAC0((__int64)v4, i);
		}
		sub_14088B630(a1);
	}
	else
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 64i64))(a1);
		sub_14088B630(a1);
	}
}

