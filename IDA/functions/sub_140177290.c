#include "../winhttp.h"

//----- (0000000140177290) ----------------------------------------------------
__int64 __fastcall sub_140177290(__int64 a1, signed int a2, int* a3, unsigned __int8 a4)
{
	int v8; // eax
	__int64 v9; // r9
	char v10; // al
	__int64 v11; // rcx

	if ((*(_BYTE*)(a1 + 664) & 1) == 0 && *a3 >= *(_DWORD*)(a1 + 716) && *a3 < *(_DWORD*)(a1 + 724))
	{
		v8 = a3[1];
		if (v8 >= *(_DWORD*)(a1 + 720) && v8 < *(_DWORD*)(a1 + 728))
		{
			v9 = *(_QWORD*)(a1 + 1040);
			if (*(float*)(v9 + 648) > 0.0)
			{
				v11 = *(_QWORD*)(v9 + 16);
				if (v11)
					v10 = sub_1400D1A60(v11);
				else
					v10 = 1;
			}
			else
			{
				v10 = 0;
			}
			sub_1400D42F0(v9, v10 == 0, 0, 4.0);
		}
	}
	return sub_1400D2120(a1, a2, a3, a4);
}
// 14017731D: variable 'v9' is possibly undefined

