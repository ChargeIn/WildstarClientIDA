#include "../winhttp.h"

//----- (0000000140889E50) ----------------------------------------------------
__int64 __fastcall sub_140889E50(_QWORD* a1, __int64* a2)
{
	__int64 v2; // rbp
	__int64 v3; // r14
	unsigned int v4; // esi
	__int64* v5; // r15
	signed int v6; // r8d
	signed int v8; // r11d
	signed int v9; // r9d
	signed int v10; // r10d
	__int64 v11; // rbx
	__int64 v12; // rdx
	unsigned int v13; // eax
	unsigned __int64 v14; // rax
	unsigned __int64 v15; // rcx
	unsigned __int64 v16; // r10
	unsigned __int64 v17; // r9
	__int64 v18; // rax
	__int64 v19; // rdx
	unsigned __int64 v20; // rcx
	__int64 result; // rax

	v2 = a1[6];
	v3 = a1[2];
	v4 = *((_DWORD*)a2 + 7);
	v5 = a1 + 6;
	v6 = 0;
	v8 = ((a1[7] - v2) >> 1) - 1;
	v9 = 0;
	v10 = v8;
	do
	{
		v11 = (unsigned int)(v9 + (v10 - v9) / 2);
		v12 = v3 + 40i64 * *(unsigned __int16*)(v2 + 2 * v11);
		v13 = *(_DWORD*)(v12 + 28);
		if (v4 >= v13)
		{
			if (v4 > v13)
				goto LABEL_8;
			if ((unsigned __int64)*a2 <= *(_QWORD*)v12)
			{
				if ((unsigned __int64)*a2 < *(_QWORD*)v12)
					goto LABEL_8;
				v14 = a2[1];
				v15 = *(_QWORD*)(v12 + 8);
				if (v14 >= v15)
				{
					if (v14 <= v15)
						break;
				LABEL_8:
					v9 = v11 + 1;
					continue;
				}
			}
		}
		v10 = v11 - 1;
	} while (v9 <= v10);
	v16 = *a2;
	v17 = a2[1];
	while (1)
	{
		v18 = (unsigned int)(v6 + (v8 - v6) / 2);
		v19 = v3 + 40i64 * *(unsigned __int16*)(v2 + 2 * v18);
		if (*(_DWORD*)(v19 + 28) == -1)
		{
			if (v16 > *(_QWORD*)v19)
				goto LABEL_18;
			if (v16 >= *(_QWORD*)v19)
			{
				v20 = *(_QWORD*)(v19 + 8);
				if (v17 < v20)
				{
				LABEL_18:
					v8 = v18 - 1;
					goto LABEL_19;
				}
				if (v17 <= v20)
					break;
			}
		}
		v6 = v18 + 1;
	LABEL_19:
		if (v6 > v8)
			goto LABEL_22;
	}
	v6 += (v8 - v6) / 2;
	v8 = v18;
LABEL_22:
	if (v8 > v6)
		v6 = v8;
	result = sub_140889A90(v5, v11, v6);
	*((_DWORD*)a2 + 7) = -1;
	return result;
}

