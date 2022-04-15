#include "../winhttp.h"

//----- (00000001408EB160) ----------------------------------------------------
__int64 __fastcall sub_1408EB160(__int64 a1)
{
	int v2; // eax
	__int64 result; // rax
	__int64 v4; // rax
	__int64 v5; // rdx
	__int64 v6; // rcx
	unsigned int v7; // eax
	unsigned int v8; // edi
	char v9; // al
	int v10; // ecx
	char v11; // al
	__int64 v12; // rax
	__int64 v13; // [rsp+30h] [rbp+8h] BYREF

	*(_BYTE*)(a1 + 32) ^= (*(_BYTE*)(a1 + 32) ^ (*(_BYTE*)(*(_QWORD*)(a1 + 24) + 382i64) >> 4)) & 2;
	v2 = (*(__int64(__fastcall**)(_QWORD, __int64*, __int64, _QWORD))(**(_QWORD**)(a1 + 88) + 120i64))(
		*(_QWORD*)(a1 + 88),
		&v13,
		a1 + 104,
		0i64);
	if (v2 == 46)
		return 63i64;
	if (v2 != 45 && v2 != 17)
		return 2i64;
	if (*(_DWORD*)(a1 + 136))
	{
		result = sub_140880B20(a1, v13, 0);
		if ((_DWORD)result != 1)
			return result;
	}
	else
	{
		result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 168i64))(a1, v13);
		if ((_DWORD)result != 1)
			return result;
		v4 = *(_QWORD*)(a1 + 24);
		v5 = v13;
		*(_DWORD*)(a1 + 44) = 0;
		*(_WORD*)(a1 + 84) = *(_WORD*)(v4 + 376);
		result = sub_140880B20(a1, v5, 0);
		if ((_DWORD)result != 1)
			return result;
		v6 = *(unsigned int*)(a1 + 52);
		*(_QWORD*)(a1 + 96) += v6;
		*(_DWORD*)(a1 + 104) -= v6;
	}
	v7 = sub_1408EA800(a1);
	v8 = v7;
	if (v7 == 1)
	{
		LOWORD(v10) = 0;
		if ((*(_BYTE*)(*(_QWORD*)(a1 + 24) + 383i64) & 2) != 0)
		{
			v8 = sub_140880DA0(a1);
			if (*(_DWORD*)(a1 + 104))
			{
				v11 = *(_BYTE*)(a1 + 126);
				if ((v11 & 2) != 0)
					*(_BYTE*)(a1 + 126) = v11 & 0xFD;
				else
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 88) + 128i64))(*(_QWORD*)(a1 + 88));
				*(_QWORD*)(a1 + 96) = 0i64;
				*(_DWORD*)(a1 + 104) = 0;
			}
			v12 = *(_QWORD*)(a1 + 24);
			if ((*(_BYTE*)(v12 + 383) & 2) != 0)
				v10 = 0;
			else
				v10 = *(_DWORD*)(v12 + 372);
			*(_BYTE*)(v12 + 383) &= 0xF1u;
			*(_DWORD*)(v12 + 372) = 0;
			*(_DWORD*)(a1 + 44) += v10;
		}
		sub_1408EB6F0(a1, v10);
		*(_BYTE*)(a1 + 126) |= 4u;
	}
	else if (v7 == 63 && !*(_DWORD*)(a1 + 104))
	{
		v9 = *(_BYTE*)(a1 + 126);
		if ((v9 & 2) != 0)
		{
			*(_QWORD*)(a1 + 96) = 0i64;
			*(_BYTE*)(a1 + 126) = v9 & 0xFD;
		}
		else
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 88) + 128i64))(*(_QWORD*)(a1 + 88));
			*(_QWORD*)(a1 + 96) = 0i64;
		}
	}
	return v8;
}

