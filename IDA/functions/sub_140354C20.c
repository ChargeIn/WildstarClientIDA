#include "../winhttp.h"

//----- (0000000140354C20) ----------------------------------------------------
__int64 __fastcall sub_140354C20(__int64 a1, __int64 a2)
{
	char v2; // bl
	int* v4; // rsi
	int v5; // eax
	int v6; // eax
	__int64 result; // rax

	v2 = 0;
	if (*(float*)(a2 + 8) != *(float*)(a1 + 136))
		v2 = 64;
	if (*(float*)(a2 + 12) != *(float*)(a1 + 140))
		v2 |= 0x40u;
	if (*(_DWORD*)(a1 + 144) != *(_DWORD*)(a2 + 16))
		v2 |= 0x40u;
	if (*(float*)(a2 + 20) != *(float*)(a1 + 148))
		v2 |= 0x60u;
	if (*(_DWORD*)(a1 + 152) != *(_DWORD*)(a2 + 24))
		v2 |= 0x42u;
	if (*(_DWORD*)(a1 + 156) != *(_DWORD*)(a2 + 28))
		v2 |= 0xC0u;
	if (*(_DWORD*)(a1 + 160) != *(_DWORD*)(a2 + 32) || *(float*)(a2 + 36) != *(float*)(a1 + 164))
		v2 |= 5u;
	if (*(_DWORD*)(a1 + 168) != *(_DWORD*)(a2 + 40))
		v2 |= 8u;
	if (*(_DWORD*)(a1 + 172) != *(_DWORD*)(a2 + 44))
		v2 |= 4u;
	if (*(_DWORD*)(a1 + 176) != *(_DWORD*)(a2 + 48))
		v2 |= 0x10u;
	v4 = (int*)(a1 + 128);
	*(_DWORD*)(a1 + 128) = *(_DWORD*)a2;
	*(_DWORD*)(a1 + 132) = *(_DWORD*)(a2 + 4);
	*(_DWORD*)(a1 + 136) = *(_DWORD*)(a2 + 8);
	*(_DWORD*)(a1 + 140) = *(_DWORD*)(a2 + 12);
	*(_DWORD*)(a1 + 144) = *(_DWORD*)(a2 + 16);
	*(_DWORD*)(a1 + 148) = *(_DWORD*)(a2 + 20);
	*(_DWORD*)(a1 + 152) = *(_DWORD*)(a2 + 24);
	*(_DWORD*)(a1 + 156) = *(_DWORD*)(a2 + 28);
	*(_DWORD*)(a1 + 160) = *(_DWORD*)(a2 + 32);
	*(_DWORD*)(a1 + 164) = *(_DWORD*)(a2 + 36);
	*(_DWORD*)(a1 + 168) = *(_DWORD*)(a2 + 40);
	*(_DWORD*)(a1 + 172) = *(_DWORD*)(a2 + 44);
	*(_DWORD*)(a1 + 176) = *(_DWORD*)(a2 + 48);
	*(_DWORD*)(a1 + 1908) = *(_DWORD*)(a1 + 160);
	*(_DWORD*)(a1 + 1912) = *(_DWORD*)(a1 + 164);
	v5 = *(_DWORD*)(a1 + 128);
	if ((v5 & 2) != 0)
		v6 = *(_DWORD*)(a1 + 128) & 0x18E6;
	else
		v6 = v5 | 1;
	*v4 = v6;
	if ((v2 & 2) == 0 || (result = sub_140355D50(a1, (__int64)&qword_140C784C0), (int)result >= 0))
	{
		if ((v2 & 4) != 0)
			(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 2560) + 32i64))(*(_QWORD*)(a1 + 2560), v4);
		if ((v2 & 8) != 0)
			sub_140351260(a1 + 1920);
		if ((v2 & 0x10) == 0 || (result = sub_140357140(a1), (int)result >= 0))
		{
			if ((v2 & 0x20) == 0 || (result = sub_140357300(a1), (int)result >= 0))
			{
				if ((v2 & 4) == 0 || (result = sub_140357620(a1), (int)result >= 0))
				{
					if ((v2 & 0x40) == 0 || (result = sub_140354E10((_DWORD*)a1), (int)result >= 0))
					{
						if (v2 >= 0)
							return 0i64;
						result = sub_140355330(a1, (_DWORD*)(a1 + 2188));
						if ((int)result >= 0)
							return 0i64;
					}
				}
			}
		}
	}
	return result;
}
// 140C784C0: using guessed type __int64 qword_140C784C0;

