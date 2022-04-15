#include "../winhttp.h"

//----- (0000000140786E10) ----------------------------------------------------
__int64 __fastcall sub_140786E10(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
	int* v6; // r8
	int v7; // ebp
	int v9; // esi
	int v10; // ebx
	bool v11; // sf
	int v12; // eax
	int v13; // ecx
	int v14; // eax
	int v15; // ecx
	__int64 v16; // rdx
	int v17; // ebx
	__int64 v18; // r11
	__int64 v19; // r9
	int v20; // r8d
	int v21; // edx
	__int64 v22; // r8
	unsigned int v23; // r11d
	__int64 v24; // r10
	unsigned int v25; // r9d
	int v26; // r8d
	unsigned int i; // edx
	__int64 v28; // r8
	unsigned int v29; // eax
	unsigned int v31; // ecx
	__int64 v32; // rcx
	unsigned int v33; // eax

	v6 = *(int**)(a1 + 8);
	v7 = *v6;
	v9 = v6[*(_DWORD*)a1 - 1] - *v6;
	v10 = a2 + *(_DWORD*)(a1 + 48) - *v6;
	if (v9 <= 0)
	{
		if (a6 && *(_QWORD*)(a6 + 24))
			sub_14079AB20(*(_QWORD*)(a6 + 16), a6);
	LABEL_37:
		v10 = 0;
	}
	else
	{
		switch (*(_DWORD*)(a1 + 44))
		{
		case 0:
		case 9:
			if (a6 && v10 >= v9 && *(_QWORD*)(a6 + 24))
				sub_14079AB20(*(_QWORD*)(a6 + 16), a6);
			if (v10 < 0)
				goto LABEL_37;
			if (v10 > v9)
				v10 = v9;
			break;
		case 1:
		case 6:
		case 8:
			v13 = 2 * v9;
			if (v10 < 0)
			{
				v10 = v13 - (-1 - v10) % v13 - 1;
				goto LABEL_23;
			}
			v14 = v10;
			goto LABEL_22;
		case 2:
			if (v10 >= 0)
				v10 %= v9;
			else
				v10 = v9 - (-1 - v10) % v9 - 1;
			break;
		case 3:
		case 0xA:
			if (a6 && v10 >= v9 && *(_QWORD*)(a6 + 24))
				sub_14079AB20(*(_QWORD*)(a6 + 16), a6);
			v11 = v9 - v10 < 0;
			v12 = v9 - v10;
			v10 = v9 - v10;
			if (v11)
				goto LABEL_37;
			if (v12 > v9)
				v10 = v9;
			break;
		case 4:
		case 7:
			v13 = 2 * v9;
			if (v9 - v10 >= 0)
			{
				v14 = v9 - v10;
			LABEL_22:
				v10 = v14 % v13;
			}
			else
			{
				v10 = v13 - (-1 - (v9 - v10)) % v13 - 1;
			}
		LABEL_23:
			if (v10 >= v9)
				v10 = v13 - v10;
			break;
		case 5:
			v15 = v9 - v10;
			if (v9 - v10 >= 0)
				v10 = v15 % v9;
			else
				v10 = v9 - (-1 - v15) % v9 - 1;
			break;
		default:
			break;
		}
	}
	v16 = *(unsigned int*)(a1 + 4);
	v17 = v7 + v10;
	if ((_DWORD)v16 && (v18 = *(_QWORD*)(a1 + 8), v19 = (unsigned int)(v16 - 1), v17 - *(_DWORD*)(v18 + 4 * v19) < 0))
	{
		v20 = 1;
		v21 = v16 - 1;
		if ((int)v19 > 0)
		{
			do
			{
				if (v17 - *(_DWORD*)(v18 + 4i64 * (unsigned int)(v21 - 1)) >= 0)
					break;
				v20 *= 2;
				LODWORD(v19) = v21 - 1;
				v21 -= v20;
			} while (v21 > 0);
		}
		if (v21 < 0)
			v21 = 0;
		while (v21 < (unsigned int)v19)
		{
			v22 = (unsigned int)(v21 + v19) >> 1;
			if (v17 - *(_DWORD*)(v18 + 4 * v22) < 0)
				LODWORD(v19) = (unsigned int)(v21 + v19) >> 1;
			else
				v21 = v22 + 1;
		}
		*(_DWORD*)(a1 + 4) = v21;
	}
	else
	{
		v23 = *(_DWORD*)a1;
		if ((unsigned int)v16 < *(_DWORD*)a1)
		{
			v24 = *(_QWORD*)(a1 + 8);
			if (v17 - *(_DWORD*)(v24 + 4 * v16) >= 0)
			{
				v25 = v16 + 1;
				v26 = 1;
				for (i = v25; i < v23; i += v26)
				{
					if (v17 - *(_DWORD*)(v24 + 4i64 * i) < 0)
						break;
					v26 *= 2;
					v25 = i + 1;
				}
				if (i > v23)
					i = *(_DWORD*)a1;
				while (v25 < i)
				{
					v28 = (i + v25) >> 1;
					if (v17 - *(_DWORD*)(v24 + 4 * v28) < 0)
						i = (i + v25) >> 1;
					else
						v25 = v28 + 1;
				}
				*(_DWORD*)(a1 + 4) = v25;
			}
		}
	}
	if (*(_DWORD*)(a1 + 40))
	{
		v33 = *(_DWORD*)(a1 + 4);
		if (!v33)
			return **(unsigned int**)(a1 + 24);
		v31 = *(_DWORD*)a1;
		if (v33 < *(_DWORD*)a1)
			return *(unsigned int*)(*(_QWORD*)(a1 + 24) + 4i64 * v33 - 4);
		goto LABEL_72;
	}
	v29 = *(_DWORD*)(a1 + 4);
	if (!v29)
		return **(unsigned int**)(a1 + 24);
	v31 = *(_DWORD*)a1;
	if (v29 >= *(_DWORD*)a1)
	{
	LABEL_72:
		v32 = v31 - 1;
		return *(unsigned int*)(*(_QWORD*)(a1 + 24) + 4 * v32);
	}
	v32 = v29 - 1;
	return *(unsigned int*)(*(_QWORD*)(a1 + 24) + 4 * v32);
}

