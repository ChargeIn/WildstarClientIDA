#include "../winhttp.h"

//----- (00000001402B5780) ----------------------------------------------------
__int64 __fastcall sub_1402B5780(__int64 a1, unsigned __int64 a2, __int64 a3, _DWORD* a4)
{
	_DWORD* v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rax
	unsigned int v12; // edx
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v17; // rax
	__int64 v18; // rax
	int v19; // eax
	int v20; // ecx

	*(_QWORD*)a3 = 0i64;
	*(_QWORD*)(a3 + 8) = 0i64;
	*(_QWORD*)(a3 + 16) = 0i64;
	*(_QWORD*)(a3 + 24) = 0i64;
	*(_QWORD*)(a3 + 32) = 0i64;
	*(_QWORD*)(a3 + 40) = 0i64;
	*(_QWORD*)(a3 + 48) = 0i64;
	if (a2 < 0x80)
		return 2147942413i64;
	if (*(_DWORD*)a1 != 542327876)
		return 2147500037i64;
	if (*(_DWORD*)(a1 + 4) != 124)
		return 2147500037i64;
	v8 = (_DWORD*)(a1 + 76);
	if (*v8 != 32)
		return 2147500037i64;
	v9 = *(unsigned int*)(a1 + 28);
	if (!*(_DWORD*)(a1 + 28))
		v9 = 1i64;
	*(_QWORD*)(a3 + 32) = v9;
	if ((*(_BYTE*)(a1 + 80) & 4) == 0 || *(_DWORD*)(a1 + 84) != 808540228)
	{
		*(_QWORD*)(a3 + 24) = 1i64;
		if ((*(_DWORD*)(a1 + 8) & 0x800000) != 0)
		{
			*(_QWORD*)a3 = *(unsigned int*)(a1 + 16);
			*(_QWORD*)(a3 + 8) = *(unsigned int*)(a1 + 12);
			v17 = *(unsigned int*)(a1 + 24);
			*(_DWORD*)(a3 + 52) = 4;
			*(_QWORD*)(a3 + 16) = v17;
		}
		else
		{
			if ((*(_DWORD*)(a1 + 112) & 0x200) != 0)
			{
				if ((*(_DWORD*)(a1 + 112) & 0xFE00) != 65024)
					return 2147942450i64;
				*(_DWORD*)(a3 + 40) |= 4u;
				*(_QWORD*)(a3 + 24) = 6i64;
			}
			*(_QWORD*)a3 = *(unsigned int*)(a1 + 16);
			v18 = *(unsigned int*)(a1 + 12);
			*(_QWORD*)(a3 + 16) = 1i64;
			*(_QWORD*)(a3 + 8) = v18;
			*(_DWORD*)(a3 + 52) = 3;
		}
		v19 = sub_1402B56E0(v8, a2, a4);
		*(_DWORD*)(a3 + 48) = v19;
		if (!v19)
			return 2147942450i64;
		if ((*a4 & 0x20000) != 0)
			*(_DWORD*)(a3 + 44) |= 2u;
		goto LABEL_35;
	}
	if (a2 < 0x94)
		return 2147500037i64;
	v10 = *(unsigned int*)(a1 + 140);
	*a4 |= 0x10000u;
	*(_QWORD*)(a3 + 24) = v10;
	if (!v10)
		return 2147942413i64;
	v11 = *(int*)(a1 + 128);
	*(_DWORD*)(a3 + 48) = v11;
	if ((unsigned __int64)(v11 - 1) > 0x72)
		return 2147942413i64;
	v12 = *(_DWORD*)(a1 + 136) & 0xFFFFFFFB;
	*(_DWORD*)(a3 + 40) = v12;
	if (*(_DWORD*)(a1 + 132) == 2)
	{
		if ((*(_BYTE*)(a1 + 8) & 2) != 0 && *(_DWORD*)(a1 + 12) != 1)
			return 2147942413i64;
		v16 = *(unsigned int*)(a1 + 16);
		*(_QWORD*)(a3 + 8) = 1i64;
		*(_DWORD*)(a3 + 52) = 2;
		*(_QWORD*)a3 = v16;
		*(_QWORD*)(a3 + 16) = 1i64;
		*(_DWORD*)(a3 + 44) = *(_DWORD*)(a1 + 144);
	}
	else
	{
		if (*(_DWORD*)(a1 + 132) != 3)
		{
			if (*(_DWORD*)(a1 + 132) == 4 && (*(_DWORD*)(a1 + 8) & 0x800000) != 0)
			{
				if (*(_QWORD*)(a3 + 24) > 1ui64)
					return 2147942450i64;
				*(_QWORD*)a3 = *(unsigned int*)(a1 + 16);
				*(_QWORD*)(a3 + 8) = *(unsigned int*)(a1 + 12);
				v13 = *(unsigned int*)(a1 + 24);
				*(_DWORD*)(a3 + 52) = 4;
				*(_QWORD*)(a3 + 16) = v13;
				*(_DWORD*)(a3 + 44) = *(_DWORD*)(a1 + 144);
				goto LABEL_35;
			}
			return 2147942413i64;
		}
		if ((*(_BYTE*)(a1 + 136) & 4) != 0)
		{
			v14 = *(_QWORD*)(a3 + 24);
			*(_DWORD*)(a3 + 40) = v12 | 4;
			*(_QWORD*)(a3 + 24) = 6 * v14;
		}
		*(_QWORD*)a3 = *(unsigned int*)(a1 + 16);
		v15 = *(unsigned int*)(a1 + 12);
		*(_DWORD*)(a3 + 52) = 3;
		*(_QWORD*)(a3 + 8) = v15;
		*(_QWORD*)(a3 + 16) = 1i64;
		*(_DWORD*)(a3 + 44) = *(_DWORD*)(a1 + 144);
	}
LABEL_35:
	v20 = *(_DWORD*)(a3 + 48);
	if ((unsigned int)(v20 - 85) <= 1 || v20 == 115)
	{
		*a4 |= 1u;
		*(_DWORD*)(a3 + 48) = 28;
	}
	return 0i64;
}

