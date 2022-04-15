#include "../winhttp.h"

//----- (0000000140785AD0) ----------------------------------------------------
__int64 __fastcall sub_140785AD0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6, __int64 a7)
{
	int* v7; // r9
	int v8; // ebp
	int v10; // edi
	int v11; // ebx
	bool v13; // sf
	int v14; // eax
	int v15; // ecx
	int v16; // eax
	int v17; // ecx
	__int64 v18; // rdx
	int v19; // ebx
	__int64 v20; // r11
	__int64 v21; // r9
	int v22; // r8d
	int v23; // edx
	__int64 v24; // r8
	unsigned int v25; // r11d
	__int64 v26; // r10
	unsigned int v27; // r9d
	int v28; // r8d
	unsigned int i; // edx
	__int64 v30; // r8
	__int64 v31; // rcx
	_DWORD* v32; // rax
	int v33; // edx
	int v34; // r8d
	unsigned int v35; // eax
	__int64 v36; // r9
	__int64 v37; // rax
	int v38; // r10d
	__int64 v39; // r8
	int v40; // r11d
	__int64 v41; // r8
	__int64 v42; // rdx
	int v43; // r9d
	__int64 v44; // rax
	int v45; // r8d
	float* v46; // rdx
	__int64 v47; // rdx
	__int64 v48; // rax
	int v49; // r8d
	int v50; // r9d
	int v52[3]; // [rsp+20h] [rbp-38h] BYREF
	int v53; // [rsp+2Ch] [rbp-2Ch] BYREF
	int v54; // [rsp+30h] [rbp-28h]
	int v55; // [rsp+34h] [rbp-24h]

	v7 = *(int**)(a1 + 8);
	v8 = *v7;
	v10 = v7[*(_DWORD*)a1 - 1] - *v7;
	v11 = a3 + *(_DWORD*)(a1 + 48) - *v7;
	if (v10 <= 0)
	{
		if (a7 && *(_QWORD*)(a7 + 24))
			sub_14079AB20(*(_QWORD*)(a7 + 16), a7);
	LABEL_37:
		v11 = 0;
	}
	else
	{
		switch (*(_DWORD*)(a1 + 44))
		{
		case 0:
		case 9:
			if (a7 && v11 >= v10 && *(_QWORD*)(a7 + 24))
				sub_14079AB20(*(_QWORD*)(a7 + 16), a7);
			if (v11 < 0)
				goto LABEL_37;
			if (v11 > v10)
				v11 = v10;
			break;
		case 1:
		case 6:
		case 8:
			v15 = 2 * v10;
			if (v11 < 0)
			{
				v11 = v15 - (-1 - v11) % v15 - 1;
				goto LABEL_23;
			}
			v16 = v11;
			goto LABEL_22;
		case 2:
			if (v11 >= 0)
				v11 %= v10;
			else
				v11 = v10 - (-1 - v11) % v10 - 1;
			break;
		case 3:
		case 0xA:
			if (a7 && v11 >= v10 && *(_QWORD*)(a7 + 24))
				sub_14079AB20(*(_QWORD*)(a7 + 16), a7);
			v13 = v10 - v11 < 0;
			v14 = v10 - v11;
			v11 = v10 - v11;
			if (v13)
				goto LABEL_37;
			if (v14 > v10)
				v11 = v10;
			break;
		case 4:
		case 7:
			v15 = 2 * v10;
			if (v10 - v11 >= 0)
			{
				v16 = v10 - v11;
			LABEL_22:
				v11 = v16 % v15;
			}
			else
			{
				v11 = v15 - (-1 - (v10 - v11)) % v15 - 1;
			}
		LABEL_23:
			if (v11 >= v10)
				v11 = v15 - v11;
			break;
		case 5:
			v17 = v10 - v11;
			if (v10 - v11 >= 0)
				v11 = v17 % v10;
			else
				v11 = v10 - (-1 - v17) % v10 - 1;
			break;
		default:
			break;
		}
	}
	v18 = *(unsigned int*)(a1 + 4);
	v19 = v8 + v11;
	if ((_DWORD)v18 && (v20 = *(_QWORD*)(a1 + 8), v21 = (unsigned int)(v18 - 1), v19 - *(_DWORD*)(v20 + 4 * v21) < 0))
	{
		v22 = 1;
		v23 = v18 - 1;
		if ((int)v21 > 0)
		{
			do
			{
				if (v19 - *(_DWORD*)(v20 + 4i64 * (unsigned int)(v23 - 1)) >= 0)
					break;
				v22 *= 2;
				LODWORD(v21) = v23 - 1;
				v23 -= v22;
			} while (v23 > 0);
		}
		if (v23 < 0)
			v23 = 0;
		while (v23 < (unsigned int)v21)
		{
			v24 = (unsigned int)(v23 + v21) >> 1;
			if (v19 - *(_DWORD*)(v20 + 4 * v24) < 0)
				LODWORD(v21) = (unsigned int)(v23 + v21) >> 1;
			else
				v23 = v24 + 1;
		}
		*(_DWORD*)(a1 + 4) = v23;
	}
	else
	{
		v25 = *(_DWORD*)a1;
		if ((unsigned int)v18 < *(_DWORD*)a1)
		{
			v26 = *(_QWORD*)(a1 + 8);
			if (v19 - *(_DWORD*)(v26 + 4 * v18) >= 0)
			{
				v27 = v18 + 1;
				v28 = 1;
				for (i = v27; i < v25; i += v28)
				{
					if (v19 - *(_DWORD*)(v26 + 4i64 * i) < 0)
						break;
					v28 *= 2;
					v27 = i + 1;
				}
				if (i > v25)
					i = *(_DWORD*)a1;
				while (v27 < i)
				{
					v30 = (i + v27) >> 1;
					if (v19 - *(_DWORD*)(v26 + 4 * v30) < 0)
						i = (i + v27) >> 1;
					else
						v27 = v30 + 1;
				}
				*(_DWORD*)(a1 + 4) = v27;
			}
		}
	}
	if (*(_DWORD*)(a1 + 40))
	{
		v41 = *(unsigned int*)(a1 + 4);
		if (!(_DWORD)v41)
			goto LABEL_66;
		v35 = *(_DWORD*)a1;
		if ((unsigned int)v41 < *(_DWORD*)a1)
		{
			v42 = *(_QWORD*)(a1 + 8);
			v43 = *(_DWORD*)(v42 + 4i64 * (unsigned int)(v41 - 1));
			v44 = (unsigned int)v41;
			v45 = *(_DWORD*)(v42 + 4 * v41) - v43;
			v46 = (float*)(*(_QWORD*)(a1 + 24) + 4 * (3 * v44 - 3));
			sub_1401B3250((float*)&v53, v46, v46 + 3, (float)(v19 - v43) / (float)v45);
			*(_DWORD*)a2 = v53;
			*(_DWORD*)(a2 + 4) = v54;
			*(_DWORD*)(a2 + 8) = v55;
			return a2;
		}
	LABEL_72:
		v47 = 3i64 * (v35 - 1);
		v48 = *(_QWORD*)(a1 + 24);
		v49 = *(_DWORD*)(v48 + 4 * v47 + 4);
		v50 = *(_DWORD*)(v48 + 4 * v47 + 8);
		*(_DWORD*)a2 = *(_DWORD*)(v48 + 4 * v47);
		*(_DWORD*)(a2 + 4) = v49;
		*(_DWORD*)(a2 + 8) = v50;
		return a2;
	}
	v31 = *(unsigned int*)(a1 + 4);
	if ((_DWORD)v31)
	{
		v35 = *(_DWORD*)a1;
		if ((unsigned int)v31 < *(_DWORD*)a1)
		{
			v36 = *(_QWORD*)(a1 + 24);
			v37 = *(_QWORD*)(a1 + 8);
			v38 = *(_DWORD*)(v37 + 4 * v31);
			v39 = (unsigned int)(v31 - 1);
			v40 = *(_DWORD*)(v37 + 4 * v39);
			v52[0] = *(_DWORD*)(v36 + 12 * v31);
			v52[1] = *(_DWORD*)(v36 + 12 * v31 + 4);
			v52[2] = *(_DWORD*)(v36 + 12 * v31 + 8);
			v53 = *(_DWORD*)(v36 + 12 * v39);
			v54 = *(_DWORD*)(v36 + 12 * v39 + 4);
			v55 = *(_DWORD*)(v36 + 12 * v39 + 8);
			sub_1401B3250((float*)a2, (float*)&v53, (float*)v52, (float)(v19 - v40) / (float)(v38 - v40));
			return a2;
		}
		goto LABEL_72;
	}
LABEL_66:
	v32 = *(_DWORD**)(a1 + 24);
	v33 = v32[1];
	v34 = v32[2];
	*(_DWORD*)a2 = *v32;
	*(_DWORD*)(a2 + 4) = v33;
	*(_DWORD*)(a2 + 8) = v34;
	return a2;
}

