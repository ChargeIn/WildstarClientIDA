//----- (000000014015FAD0) ----------------------------------------------------
_DWORD* __fastcall sub_14015FAD0(__int64 a1, _DWORD* a2, int* a3)
{
	int v3; // r9d
	int v4; // r10d
	int v5; // r11d
	__int64 v9; // rax
	int v10; // edx
	int v11; // ecx
	int v12; // r10d
	int v13; // r8d
	__int64 i; // r9
	int v15; // eax
	__int64 v16; // rcx
	int v17; // ecx
	int v18; // ecx
	__int64 v19; // rax
	int v20; // ecx
	__int64 v21; // rcx
	int v22; // r10d
	__int64 v23; // r9
	int v24; // eax
	int v25; // eax
	__int64 v26; // r8
	int v27; // eax
	__int64 v28; // r8
	_DWORD* result; // rax

	v3 = *(_DWORD*)(a1 + 720);
	v4 = *(_DWORD*)(a1 + 724);
	v5 = *(_DWORD*)(a1 + 728);
	*a2 = *(_DWORD*)(a1 + 716);
	a2[1] = v3;
	a2[2] = v4;
	a2[3] = v5;
	if ((*(_BYTE*)(a1 + 664) & 2) != 0)
		a2[1] += *(_DWORD*)(a1 + 1024);
	v9 = *(_QWORD*)(a1 + 472);
	v10 = 0;
	if (v9)
		v11 = *(_DWORD*)(v9 + 1300);
	else
		v11 = 0;
	a2[1] -= v11;
	v12 = a2[1];
	if ((*(_BYTE*)(a1 + 664) & 4) != 0)
	{
		v13 = 0;
		for (i = 0i64; v13 < a3[1]; a2[1] = v12)
		{
			if (i >= 0 && v13 < *(_DWORD*)(a1 + 1160) && (*(_BYTE*)(a1 + 664) & 4) != 0)
				v15 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1152) + 8 * i) + 12i64);
			else
				v15 = *(_DWORD*)(a1 + 1028);
			v12 += v15;
			++v13;
			++i;
		}
		v16 = a3[1];
		if ((int)v16 >= 0 && (int)v16 < *(_DWORD*)(a1 + 1160) && (*(_BYTE*)(a1 + 664) & 4) != 0)
			v17 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1152) + 8 * v16) + 12i64) + a2[1];
		else
			v17 = *(_DWORD*)(a1 + 1028) + a2[1];
	}
	else
	{
		v18 = v12 + *(_DWORD*)(a1 + 1028) * a3[1];
		a2[1] = v18;
		v17 = *(_DWORD*)(a1 + 1028) + v18;
	}
	a2[3] = v17;
	v19 = *(_QWORD*)(a1 + 464);
	if (v19)
		v20 = *(_DWORD*)(v19 + 1300);
	else
		v20 = 0;
	*a2 -= v20;
	v21 = *(_QWORD*)(a1 + 1120);
	v22 = 0;
	if (*(_DWORD*)(v21 + 4i64 * *a3))
	{
		v23 = 0i64;
		while (1)
		{
			v24 = *(_DWORD*)(v21 + v23);
			if (v24 < 0 || v24 >= *(_DWORD*)(a1 + 1144))
				break;
			if (v24 || (*(_BYTE*)(a1 + 664) & 1) != 0 && *(_QWORD*)(a1 + 1144) != 1i64)
			{
				v26 = *(_QWORD*)(*(_QWORD*)(a1 + 1136) + 8i64 * *(int*)(v21 + v23));
				if (!*(_BYTE*)v26)
					break;
				v25 = *(_DWORD*)(v26 + 4);
			}
			else
			{
				v25 = *(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 716);
			}
		LABEL_34:
			*a2 += v25;
			v21 = *(_QWORD*)(a1 + 1120);
			++v22;
			v23 += 4i64;
			if (v22 == *(_DWORD*)(v21 + 4i64 * *a3))
				goto LABEL_35;
		}
		v25 = 0;
		goto LABEL_34;
	}
LABEL_35:
	v27 = *a3;
	if (*a3 >= 0 && v27 < *(_DWORD*)(a1 + 1144))
	{
		if (v27 || (*(_BYTE*)(a1 + 664) & 1) != 0 && *(_QWORD*)(a1 + 1144) != 1i64)
		{
			v28 = *(_QWORD*)(*(_QWORD*)(a1 + 1136) + 8i64 * *a3);
			if (*(_BYTE*)v28)
				v10 = *(_DWORD*)(v28 + 4);
		}
		else
		{
			v10 = *(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 716);
		}
	}
	result = a2;
	a2[2] = v10 + *a2;
	return result;
}

