#include "../winhttp.h"

//----- (0000000140834800) ----------------------------------------------------
char __fastcall sub_140834800(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned __int64 v5; // rsi
	unsigned __int64 v6; // rax
	_QWORD* v7; // rcx

	v5 = (unsigned int)((__int64)(*(_QWORD*)(a3 + 8) - *(_QWORD*)a3) >> 3);
	if (v5 < *(unsigned int*)(a3 + 16) || (LOBYTE(v6) = sub_140892EF0(a3, 4), (_BYTE)v6))
	{
		v6 = *(unsigned int*)(a3 + 16);
		if (v5 < v6)
		{
			v7 = *(_QWORD**)(a3 + 8);
			LOBYTE(v6) = (_BYTE)v7 + 8;
			*(_QWORD*)(a3 + 8) = v7 + 1;
			if (v7)
			{
				*v7 = a2;
				LOWORD(v6) = *(_WORD*)(a2 + 8);
				if ((_WORD)v6 == 100)
				{
					++* (_DWORD*)(a3 + 24);
				}
				else if (!(_WORD)v6)
				{
					++* (_DWORD*)(a3 + 28);
				}
				*(_DWORD*)(a3 + 32) += (unsigned __int16)v6;
			}
		}
	}
	return v6;
}

