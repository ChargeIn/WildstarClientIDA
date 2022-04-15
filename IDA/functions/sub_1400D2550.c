#include "../winhttp.h"

//----- (00000001400D2550) ----------------------------------------------------
__int64 __fastcall sub_1400D2550(__int64 a1, int a2, int* a3)
{
	__int64 v6; // rcx
	__int64 v8; // rcx
	char v9; // al
	int v10; // ecx
	int v11; // [rsp+20h] [rbp-28h]
	int v12; // [rsp+28h] [rbp-20h]
	int v13; // [rsp+30h] [rbp-18h]

	if ((*(_BYTE*)(a1 + 656) & 2) != 0 && (v6 = *(_QWORD*)(a1 + 472)) != 0 && sub_1400C4DF0(v6, a2))
	{
		sub_1400CAC90((_QWORD*)a1);
		return 0i64;
	}
	else if ((*(_BYTE*)(a1 + 656) & 4) != 0 && (v8 = *(_QWORD*)(a1 + 464)) != 0 && sub_1400C4DF0(v8, a2))
	{
		sub_1400CAE90((_QWORD*)a1);
		return 0i64;
	}
	else
	{
		v9 = *(_BYTE*)(a1 + 29);
		if ((v9 & 8) != 0 || (v9 & 0x10) != 0 || (v9 & 0x20) != 0 || (v9 & 0x40) != 0)
		{
			sub_1400CA410(a1);
			return 0i64;
		}
		else
		{
			if (*(char*)(a1 + 28) < 0)
			{
				v10 = *a3;
				*(_DWORD*)(a1 + 848) = *a3;
				v13 = a3[1];
				v12 = v10;
				*(_DWORD*)(a1 + 852) = v13;
				v11 = a2;
				sub_1400D4070(a1, 0x35u, (char*)a1, byte_1409D302C, v11, v12, v13);
			}
			return 1i64;
		}
	}
}
// 1409D302C: using guessed type _BYTE byte_1409D302C[24];

