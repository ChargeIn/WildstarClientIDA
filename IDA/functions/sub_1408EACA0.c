#include "../winhttp.h"

//----- (00000001408EACA0) ----------------------------------------------------
__int64 __fastcall sub_1408EACA0(__int64 a1, __int64 a2)
{
	char v4; // al
	__int64 result; // rax
	__int64 v6; // rdx
	unsigned __int64 v7; // rsi
	__int64 v8; // rdx
	__int64 v9; // rax
	unsigned int v10; // esi
	unsigned int v11; // eax
	unsigned int v12; // ecx
	unsigned int v13; // esi
	__int64 v14; // rax
	int v15; // ecx

	while (1)
	{
		if (!*(_DWORD*)(a1 + 104))
		{
			v4 = *(_BYTE*)(a1 + 126);
			if ((v4 & 1) != 0)
				return 17i64;
			if ((v4 & 2) != 0)
				*(_BYTE*)(a1 + 126) = v4 & 0xFD;
			else
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 88) + 128i64))(*(_QWORD*)(a1 + 88));
			result = sub_140880860(a1);
			if ((_DWORD)result != 45)
				return result;
		}
		v6 = *(unsigned int*)(a1 + 420);
		if ((unsigned int)v6 >= 2)
			break;
		v7 = *(unsigned int*)(a1 + 104);
		if ((_DWORD)v7)
		{
			if (v7 >= 2 - v6)
				LODWORD(v7) = 2 - v6;
			sub_1407DB590((int*)(*(unsigned int*)(a1 + 420) + a1 + 406), *(int**)(a1 + 96), (unsigned int)v7);
			*(_DWORD*)(a1 + 420) += v7;
			*(_QWORD*)(a1 + 96) += (unsigned int)v7;
			*(_DWORD*)(a1 + 104) -= v7;
			if (*(_DWORD*)(a1 + 420) == 2)
				break;
		}
		else
		{
		LABEL_21:
			if (*(_DWORD*)(a1 + 420) == 2 && *(_DWORD*)(a1 + 416) == *(unsigned __int16*)(a1 + 406))
			{
				v14 = *(_QWORD*)(a1 + 408);
				v15 = *(unsigned __int16*)(a1 + 406);
				*(_BYTE*)(a2 + 16) = 0;
				*(_QWORD*)a2 = v14;
				*(_DWORD*)(a2 + 8) = v15;
				*(_QWORD*)(a1 + 416) = 0i64;
				return 45i64;
			}
		}
	}
	if (*(_DWORD*)(a1 + 416))
		goto LABEL_16;
	v8 = *(_QWORD*)(a1 + 408);
	if (v8)
	{
		sub_140881720(dword_140C10F28, v8);
		*(_QWORD*)(a1 + 408) = 0i64;
	}
	v9 = sub_1408819F0(dword_140C10F28, *(unsigned __int16*)(a1 + 406));
	*(_QWORD*)(a1 + 408) = v9;
	if (v9)
	{
	LABEL_16:
		v10 = *(unsigned __int16*)(a1 + 406);
		v11 = *(_DWORD*)(a1 + 416);
		if (v11 < v10)
		{
			v12 = *(_DWORD*)(a1 + 104);
			if (v12)
			{
				v13 = v10 - v11;
				if (v12 < v13)
					v13 = *(_DWORD*)(a1 + 104);
				sub_1407DB590((int*)(*(_QWORD*)(a1 + 408) + v11), *(int**)(a1 + 96), v13);
				*(_DWORD*)(a1 + 416) += v13;
				*(_QWORD*)(a1 + 96) += v13;
				*(_DWORD*)(a1 + 104) -= v13;
			}
		}
		goto LABEL_21;
	}
	return 52i64;
}
// 140C10F28: using guessed type int dword_140C10F28;

