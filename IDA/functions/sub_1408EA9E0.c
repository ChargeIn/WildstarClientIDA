#include "../winhttp.h"

//----- (00000001408EA9E0) ----------------------------------------------------
__int64 __fastcall sub_1408EA9E0(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v5; // rdx
	unsigned __int64 v6; // rcx
	int* v7; // rcx
	__int16 v8; // ax
	unsigned __int64 v9; // r8
	int* v10; // rdx
	char v11; // al
	__int64 v12; // rdx
	__int64 v13; // rcx
	unsigned __int64 v14; // rdi
	char v15; // dl
	bool v16; // al
	__int64 v17; // r9
	int v18; // ecx
	int v19; // eax
	unsigned __int16 v20; // dx
	__int16 v21; // cx
	unsigned __int16 v22; // cx
	unsigned __int16 v23; // ax
	unsigned int v24; // ecx
	__int64 v25; // r9
	__int64 v26; // r8
	unsigned __int16 v27; // dx
	__int64 v28; // rcx

	if ((*(_BYTE*)(a1 + 32) & 2) != 0)
	{
		result = sub_1408790B0(*(_QWORD*)(a1 + 88), *(_DWORD*)(a1 + 104));
		if ((_DWORD)result != 45)
		{
			*(_DWORD*)(a2 + 56) = result;
			return result;
		}
		*(_BYTE*)(a1 + 32) &= ~2u;
	}
	v5 = *(unsigned __int16*)(a1 + 348);
	v6 = *(unsigned int*)(a1 + 104);
	*(_DWORD*)(a1 + 316) = *(unsigned __int16*)(a2 + 16);
	if (v6 < v5 + 2 && (*(_BYTE*)(a1 + 126) & 1) == 0)
	{
		if ((_DWORD)v6 && !*(_QWORD*)(a1 + 392) && !*(_WORD*)(a1 + 124))
		{
			result = sub_1408819F0(dword_140C10F28, v6 + v5 + 2);
			v7 = (int*)result;
			*(_QWORD*)(a1 + 392) = result;
			if (!result)
			{
			LABEL_10:
				*(_DWORD*)(a2 + 56) = 2;
				return result;
			}
			v8 = *(_WORD*)(a1 + 104);
			v9 = *(unsigned int*)(a1 + 104);
			v10 = *(int**)(a1 + 96);
			*(_WORD*)(a1 + 400) = v8;
			*(_WORD*)(a1 + 404) = v8;
			*(_WORD*)(a1 + 402) = v8;
			sub_1407DB590(v7, v10, v9);
			*(_QWORD*)(a1 + 96) = 0i64;
			*(_DWORD*)(a1 + 104) = 0;
		}
		if (!*(_DWORD*)(a1 + 104))
		{
			v11 = *(_BYTE*)(a1 + 126);
			if ((v11 & 2) != 0)
				*(_BYTE*)(a1 + 126) = v11 & 0xFD;
			else
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 88) + 128i64))(*(_QWORD*)(a1 + 88));
			result = sub_140880860(a1);
			*(_DWORD*)(a2 + 56) = result;
			if ((_DWORD)result == 2)
				return result;
			if ((_DWORD)result == 45)
			{
				v12 = *(_QWORD*)(a1 + 392);
				if (v12)
				{
					v13 = *(unsigned __int16*)(a1 + 348);
					v14 = *(unsigned int*)(a1 + 104);
					if (v13 + 2 < v14)
						LODWORD(v14) = v13 + 2;
					sub_1407DB590((int*)(v12 + *(unsigned __int16*)(a1 + 400)), *(int**)(a1 + 96), (unsigned int)v14);
					*(_WORD*)(a1 + 404) += v14;
					*(_WORD*)(a1 + 402) += v14;
				}
			}
		}
	}
	if (!*(_QWORD*)(a1 + 304))
	{
		result = sub_140832B30(*(_DWORD*)(a1 + 168) << 11);
		*(_DWORD*)(a1 + 128) = 0;
		*(_QWORD*)(a1 + 304) = result;
		if (!result)
			goto LABEL_10;
	}
	v15 = 1;
	v16 = *(_WORD*)(a1 + 124) || (*(_BYTE*)(a1 + 126) & 1) != 0;
	v17 = *(_QWORD*)(a1 + 392);
	*(_BYTE*)(a1 + 324) = v16;
	if (v17)
	{
		if (!v16 || *(_DWORD*)(a1 + 104) + *(unsigned __int16*)(a1 + 400) - *(unsigned __int16*)(a1 + 402))
			v15 = 0;
		v18 = *(unsigned __int16*)(a1 + 404);
		v19 = *(unsigned __int16*)(a1 + 402);
		*(_BYTE*)(a1 + 324) = v15;
		v20 = *(_WORD*)(a1 + 348);
		*(_DWORD*)(a1 + 320) = v18;
		sub_1408EBC90(a1 + 128, v20, v17 + v19 - v18, *(_QWORD*)(a1 + 304));
		v21 = *(_WORD*)(a1 + 402);
		*(_WORD*)(a1 + 404) -= *(_WORD*)(a1 + 140);
		v22 = v21 - *(_WORD*)(a1 + 404);
		v23 = *(_WORD*)(a1 + 400);
		if (v22 >= v23)
		{
			v24 = v22 - v23;
			*(_DWORD*)(a1 + 104) -= v24;
			*(_QWORD*)(a1 + 96) += v24;
			sub_1408EA9A0(a1);
		}
	}
	else
	{
		v25 = *(_QWORD*)(a1 + 304);
		v26 = *(_QWORD*)(a1 + 96);
		v27 = *(_WORD*)(a1 + 348);
		*(_DWORD*)(a1 + 320) = *(_DWORD*)(a1 + 104);
		sub_1408EBC90(a1 + 128, v27, v26, v25);
		v28 = *(unsigned int*)(a1 + 140);
		*(_QWORD*)(a1 + 96) += v28;
		*(_DWORD*)(a1 + 104) -= v28;
	}
	return sub_1408EB580(a1, a2);
}
// 140C10F28: using guessed type int dword_140C10F28;

