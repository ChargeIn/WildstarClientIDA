#include "../winhttp.h"

//----- (00000001408809F0) ----------------------------------------------------
__int64 __fastcall sub_1408809F0(__int64 a1)
{
	int v2; // eax
	__int64 result; // rax
	unsigned int v4; // ebp
	char v5; // cl
	int v6; // ebx
	unsigned int v7; // eax
	unsigned int v8; // ecx
	__int64 v9; // [rsp+30h] [rbp+8h] BYREF

	*(_BYTE*)(a1 + 32) ^= (*(_BYTE*)(a1 + 32) ^ (*(_BYTE*)(*(_QWORD*)(a1 + 24) + 382i64) >> 4)) & 2;
	v2 = (*(__int64(__fastcall**)(_QWORD, __int64*, __int64, _QWORD))(**(_QWORD**)(a1 + 88) + 120i64))(
		*(_QWORD*)(a1 + 88),
		&v9,
		a1 + 104,
		0i64);
	if (v2 == 46)
		return 63i64;
	if (v2 != 45 && v2 != 17)
		return 2i64;
	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 168i64))(a1, v9);
	if ((_DWORD)result == 1)
	{
		if ((*(_BYTE*)(*(_QWORD*)(a1 + 24) + 383i64) & 2) != 0)
		{
			v4 = sub_140880DA0(a1);
			if (*(_DWORD*)(a1 + 104))
			{
				v5 = *(_BYTE*)(a1 + 126);
				if ((v5 & 2) != 0)
				{
					*(_DWORD*)(a1 + 104) = 0;
					*(_BYTE*)(a1 + 126) = v5 & 0xFD;
				}
				else
				{
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 88) + 128i64))(*(_QWORD*)(a1 + 88));
					*(_DWORD*)(a1 + 104) = 0;
				}
			}
		}
		else
		{
			v6 = *(_DWORD*)(a1 + 112)
				+ (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 88) + 104i64))(*(_QWORD*)(a1 + 88), 0i64);
			v7 = sub_140880B20(a1, v9, 0);
			v8 = *(_DWORD*)(a1 + 52) - v6;
			v4 = v7;
			*(_QWORD*)(a1 + 96) += v8;
			*(_DWORD*)(a1 + 104) -= v8;
		}
		*(_BYTE*)(a1 + 126) |= 4u;
		return v4;
	}
	return result;
}

