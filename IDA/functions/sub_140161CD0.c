#include "../winhttp.h"

//----- (0000000140161CD0) ----------------------------------------------------
char __fastcall sub_140161CD0(__int64 a1, int* a2, int* a3, int* a4)
{
	int v4; // esi
	int v5; // r11d
	int v7; // ecx
	int v8; // eax
	int v11; // r11d
	int v12; // esi
	int v13; // eax
	__int64 v14; // rax
	int v15; // ecx
	int v16; // r11d
	__int64 v17; // rdx
	__int64 v18; // r9
	int v19; // r8d
	int v20; // eax
	int v21; // eax
	__int64 v22; // rax
	int v23; // ecx
	int v24; // esi
	int v25; // r8d
	__int64 v26; // r9
	__int64 v27; // rdx
	int v28; // eax
	int v29; // eax

	v4 = *a2;
	v5 = a2[1];
	v7 = *(_DWORD*)(a1 + 716);
	v8 = *(_DWORD*)(a1 + 720);
	if (*a2 < v7 || v4 >= *(_DWORD*)(a1 + 724) || v5 < v8 || v5 >= *(_DWORD*)(a1 + 728))
		return 0;
	v11 = v5 - v8;
	v12 = v4 - v7;
	if ((*(_BYTE*)(a1 + 664) & 2) == 0)
		goto LABEL_9;
	v13 = *(_DWORD*)(a1 + 1024);
	if (v11 >= v13)
	{
		v11 -= v13;
	LABEL_9:
		v14 = *(_QWORD*)(a1 + 472);
		if (v14)
			v15 = *(_DWORD*)(v14 + 1300);
		else
			v15 = 0;
		v16 = v15 + v11;
		v17 = 0i64;
		*a3 = *(_DWORD*)(a1 + 1160);
		v18 = *(int*)(a1 + 1160);
		v19 = 0;
		if ((int)v18 > 0)
		{
			while (1)
			{
				v20 = v17 >= 0 && v19 < (int)v18 && (*(_BYTE*)(a1 + 664) & 4) != 0
					? *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1152) + 8 * v17) + 12i64)
					: *(_DWORD*)(a1 + 1028);
				if (v16 < v20)
					break;
				if (v17 >= 0 && v19 < (int)v18 && (*(_BYTE*)(a1 + 664) & 4) != 0)
					v21 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1152) + 8 * v17) + 12i64);
				else
					v21 = *(_DWORD*)(a1 + 1028);
				++v17;
				v16 -= v21;
				++v19;
				if (v17 >= v18)
					goto LABEL_27;
			}
			*a3 = v19;
		}
		goto LABEL_27;
	}
	*a4 = -1;
	*a3 = -1;
LABEL_27:
	v22 = *(_QWORD*)(a1 + 464);
	if (v22)
		v23 = *(_DWORD*)(v22 + 1300);
	else
		v23 = 0;
	v24 = v23 + v12;
	v25 = 0;
	*a4 = *(_DWORD*)(a1 + 1144);
	v26 = *(int*)(a1 + 1144);
	v27 = 0i64;
	if ((int)v26 > 0)
	{
		while (1)
		{
			if (v27 < 0 || v25 >= (int)v26)
				v28 = 0;
			else
				v28 = v27 || (*(_BYTE*)(a1 + 664) & 1) != 0 && *(_QWORD*)(a1 + 1144) != 1i64
				? *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1136) + 8 * v27) + 4i64)
				: *(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 716);
			if (v24 < v28)
				break;
			if (v27 < 0 || v25 >= (int)v26)
			{
				v29 = 0;
			}
			else if (v27 || (*(_BYTE*)(a1 + 664) & 1) != 0 && *(_QWORD*)(a1 + 1144) != 1i64)
			{
				v29 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1136) + 8 * v27) + 4i64);
			}
			else
			{
				v29 = *(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 716);
			}
			++v27;
			v24 -= v29;
			++v25;
			if (v27 >= v26)
				return 1;
		}
		*a4 = v25;
	}
	return 1;
}

