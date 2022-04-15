#include "../winhttp.h"

//----- (0000000140889C10) ----------------------------------------------------
__int64 __fastcall sub_140889C10(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	unsigned int a4,
	unsigned __int64 a5,
	unsigned int a6)
{
	__int64 result; // rax
	unsigned int v10; // esi
	__int64* v11; // r13
	__int64 v12; // r14
	signed int v13; // r8d
	__int64 v14; // r15
	signed int v15; // r9d
	signed int v16; // r11d
	signed int v17; // r10d
	__int64 v18; // rdi
	__int64 v19; // rdx
	unsigned int v20; // eax
	unsigned __int64 v21; // rax
	unsigned __int64 v22; // rcx
	unsigned __int64 v23; // r9
	__int64 v24; // rax
	__int64 v25; // rdx
	unsigned int v26; // ecx
	unsigned __int64 v27; // rcx

	if (!*(_BYTE*)(a1 + 80))
	{
		*(_QWORD*)(a2 + 16) = a3;
		*(_QWORD*)a2 = a5;
		result = a6;
		*(_DWORD*)(a2 + 24) = a6;
		return result;
	}
	v10 = *(_DWORD*)(a2 + 28);
	v11 = (__int64*)(a1 + 48);
	v12 = *(_QWORD*)(a1 + 48);
	v13 = 0;
	v14 = *(_QWORD*)(a1 + 16);
	v15 = 0;
	v16 = ((*(_QWORD*)(a1 + 56) - v12) >> 1) - 1;
	v17 = v16;
	do
	{
		v18 = (unsigned int)(v15 + (v17 - v15) / 2);
		v19 = v14 + 40i64 * *(unsigned __int16*)(v12 + 2 * v18);
		v20 = *(_DWORD*)(v19 + 28);
		if (v10 >= v20)
		{
			if (v10 > v20)
				goto LABEL_10;
			if (*(_QWORD*)a2 <= *(_QWORD*)v19)
			{
				if (*(_QWORD*)a2 < *(_QWORD*)v19)
					goto LABEL_10;
				v21 = *(_QWORD*)(a2 + 8);
				v22 = *(_QWORD*)(v19 + 8);
				if (v21 >= v22)
				{
					if (v21 <= v22)
						break;
				LABEL_10:
					v15 = v18 + 1;
					continue;
				}
			}
		}
		v17 = v18 - 1;
	} while (v15 <= v17);
	v23 = *(_QWORD*)(a2 + 8);
	while (1)
	{
		v24 = (unsigned int)(v13 + (v16 - v13) / 2);
		v25 = v14 + 40i64 * *(unsigned __int16*)(v12 + 2 * v24);
		v26 = *(_DWORD*)(v25 + 28);
		if (a4 < v26)
		{
		LABEL_21:
			v16 = v24 - 1;
			goto LABEL_22;
		}
		if (a4 <= v26)
		{
			if (a5 > *(_QWORD*)v25)
				goto LABEL_21;
			if (a5 >= *(_QWORD*)v25)
			{
				v27 = *(_QWORD*)(v25 + 8);
				if (v23 < v27)
					goto LABEL_21;
				if (v23 <= v27)
					break;
			}
		}
		v13 = v24 + 1;
	LABEL_22:
		if (v13 > v16)
			goto LABEL_25;
	}
	v13 += (v16 - v13) / 2;
	v16 = v24;
LABEL_25:
	if (v16 > v13)
		v13 = v16;
	sub_140889A90(v11, v18, v13);
	result = a6;
	*(_QWORD*)a2 = a5;
	*(_DWORD*)(a2 + 24) = a6;
	*(_DWORD*)(a2 + 28) = a4;
	*(_QWORD*)(a2 + 16) = a3;
	return result;
}

