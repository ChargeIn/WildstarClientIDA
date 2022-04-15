//----- (0000000140786620) ----------------------------------------------------
float __fastcall sub_140786620(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
	int* v6; // r8
	int v7; // r14d
	unsigned int v8; // ebp
	int v10; // ebx
	int v11; // edi
	bool v12; // sf
	int v13; // eax
	int v14; // ecx
	int v15; // eax
	int v16; // ecx
	__int64 v17; // rdx
	int v18; // edi
	__int64 v19; // r11
	__int64 v20; // r9
	int v21; // r8d
	int v22; // edx
	__int64 v23; // r8
	unsigned int v24; // r11d
	__int64 v25; // r10
	unsigned int v26; // r9d
	int v27; // r8d
	unsigned int i; // edx
	__int64 v29; // r8
	unsigned int v30; // edx
	unsigned __int16* v31; // rcx
	unsigned int v32; // eax
	__int64 v33; // rcx
	int v34; // ebx
	__int64 v35; // r9
	__int64 v36; // r10
	float v37; // xmm3_4
	float v38; // xmm0_4
	int v39; // r11d
	float result; // xmm0_4
	__int64 v41; // r8
	unsigned __int16* v42; // r9
	__int64 v43; // r9
	float v44; // xmm3_4
	float v45; // xmm0_4
	float v46; // xmm4_4
	int v47; // r11d
	int v48; // r10d
	int v49; // r8d
	float v50; // xmm3_4
	unsigned int v51; // edx
	unsigned int v52; // edx
	int v53; // edx
	int v54; // ecx
	unsigned int v55; // edx
	unsigned int v56; // eax
	int j; // ecx
	unsigned int v58; // edx
	int v59; // ecx
	int v60; // eax
	int v61; // edx
	unsigned int k; // ecx
	float v63; // [rsp+48h] [rbp+10h]

	v6 = *(int**)(a1 + 8);
	v7 = *v6;
	LOWORD(v8) = 0;
	v10 = v6[*(_DWORD*)a1 - 1] - *v6;
	v11 = a2 + *(_DWORD*)(a1 + 48) - *v6;
	if (v10 <= 0)
	{
		if (a6 && *(_QWORD*)(a6 + 24))
			sub_14079AB20(*(_QWORD*)(a6 + 16), a6);
	LABEL_37:
		v11 = 0;
	}
	else
	{
		switch (*(_DWORD*)(a1 + 44))
		{
		case 0:
		case 9:
			if (a6 && v11 >= v10 && *(_QWORD*)(a6 + 24))
				sub_14079AB20(*(_QWORD*)(a6 + 16), a6);
			if (v11 < 0)
				goto LABEL_37;
			if (v11 > v10)
				v11 = v10;
			break;
		case 1:
		case 6:
		case 8:
			v14 = 2 * v10;
			if (v11 < 0)
			{
				v11 = v14 - (-1 - v11) % v14 - 1;
				goto LABEL_23;
			}
			v15 = v11;
			goto LABEL_22;
		case 2:
			if (v11 >= 0)
				v11 %= v10;
			else
				v11 = v10 - (-1 - v11) % v10 - 1;
			break;
		case 3:
		case 0xA:
			if (a6 && v11 >= v10 && *(_QWORD*)(a6 + 24))
				sub_14079AB20(*(_QWORD*)(a6 + 16), a6);
			v12 = v10 - v11 < 0;
			v13 = v10 - v11;
			v11 = v10 - v11;
			if (v12)
				goto LABEL_37;
			if (v13 > v10)
				v11 = v10;
			break;
		case 4:
		case 7:
			v14 = 2 * v10;
			if (v10 - v11 >= 0)
			{
				v15 = v10 - v11;
			LABEL_22:
				v11 = v15 % v14;
			}
			else
			{
				v11 = v14 - (-1 - (v10 - v11)) % v14 - 1;
			}
		LABEL_23:
			if (v11 >= v10)
				v11 = v14 - v11;
			break;
		case 5:
			v16 = v10 - v11;
			if (v10 - v11 >= 0)
				v11 = v16 % v10;
			else
				v11 = v10 - (-1 - v16) % v10 - 1;
			break;
		default:
			break;
		}
	}
	v17 = *(unsigned int*)(a1 + 4);
	v18 = v7 + v11;
	if ((_DWORD)v17 && (v19 = *(_QWORD*)(a1 + 8), v20 = (unsigned int)(v17 - 1), v18 - *(_DWORD*)(v19 + 4 * v20) < 0))
	{
		v21 = 1;
		v22 = v17 - 1;
		if ((int)v20 > 0)
		{
			do
			{
				if (v18 - *(_DWORD*)(v19 + 4i64 * (unsigned int)(v22 - 1)) >= 0)
					break;
				v21 *= 2;
				LODWORD(v20) = v22 - 1;
				v22 -= v21;
			} while (v22 > 0);
		}
		if (v22 < 0)
			v22 = 0;
		while (v22 < (unsigned int)v20)
		{
			v23 = (unsigned int)(v22 + v20) >> 1;
			if (v18 - *(_DWORD*)(v19 + 4 * v23) < 0)
				LODWORD(v20) = (unsigned int)(v22 + v20) >> 1;
			else
				v22 = v23 + 1;
		}
		*(_DWORD*)(a1 + 4) = v22;
	}
	else
	{
		v24 = *(_DWORD*)a1;
		if ((unsigned int)v17 < *(_DWORD*)a1)
		{
			v25 = *(_QWORD*)(a1 + 8);
			if (v18 - *(_DWORD*)(v25 + 4 * v17) >= 0)
			{
				v26 = v17 + 1;
				v27 = 1;
				for (i = v26; i < v24; i += v27)
				{
					if (v18 - *(_DWORD*)(v25 + 4i64 * i) < 0)
						break;
					v27 *= 2;
					v26 = i + 1;
				}
				if (i > v24)
					i = *(_DWORD*)a1;
				while (v26 < i)
				{
					v29 = (i + v26) >> 1;
					if (v18 - *(_DWORD*)(v25 + 4 * v29) < 0)
						i = (i + v26) >> 1;
					else
						v26 = v29 + 1;
				}
				*(_DWORD*)(a1 + 4) = v26;
			}
		}
	}
	if (!*(_DWORD*)(a1 + 40))
	{
		v30 = *(_DWORD*)(a1 + 4);
		if (!v30)
		{
		LABEL_66:
			v31 = *(unsigned __int16**)(a1 + 24);
			return sub_1401C9770(v31);
		}
		v32 = *(_DWORD*)a1;
		if (v30 < *(_DWORD*)a1)
		{
			v33 = v30 - 1;
			v34 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v33);
			v37 = sub_1401C9770((unsigned __int16*)(*(_QWORD*)(a1 + 24) + 2 * v33));
			v38 = sub_1401C9770((unsigned __int16*)(v35 + 2 * v36));
			return (float)((float)(v38 - v37) * (float)((float)(v18 - v34) / (float)(v39 - v34))) + v37;
		}
	LABEL_97:
		v31 = (unsigned __int16*)(*(_QWORD*)(a1 + 24) + 2i64 * (v32 - 1));
		return sub_1401C9770(v31);
	}
	v41 = *(unsigned int*)(a1 + 4);
	if (!(_DWORD)v41)
		goto LABEL_66;
	v32 = *(_DWORD*)a1;
	if ((unsigned int)v41 >= *(_DWORD*)a1)
		goto LABEL_97;
	sub_1401C9770((unsigned __int16*)(*(_QWORD*)(a1 + 24) + 2 * v41 - 2));
	v44 = sub_1401C9770(v42);
	v45 = sub_1401C9770((unsigned __int16*)(v43 - 2));
	v49 = 113;
	v50 = (float)(v44 - v45) * (float)((float)(v18 - v47) / (float)(v48 - v47));
	v51 = LODWORD(v50) & 0x7FFFFFFF;
	if ((LODWORD(v50) & 0x7FFFFFFFu) >= 0x33800000)
	{
		if (v51 > 0x387FEFFF)
		{
			if (v51 > 0x47FFEFFF)
				LOWORD(v52) = 17407;
			else
				v52 = (v51 - 939520000) >> 13;
		}
		else
		{
			v52 = (((LODWORD(v50) & 0x7FFFFF | 0x800000u) >> (113 - (v51 >> 23))) + 4096) >> 13;
		}
	}
	else
	{
		LOWORD(v52) = 0;
	}
	v53 = HIWORD(v50) & 0x8000 | (unsigned __int16)v52;
	v54 = v53 & 0xFFFF7FFF;
	v55 = (v53 & 0xFFFF8000) << 16;
	if ((v54 & 0x7C00) != 0)
	{
		v54 = (v54 + 114688) << 13;
	}
	else if ((v54 & 0x3FF) != 0)
	{
		v56 = (v54 & 0x3FF) << 13;
		for (j = 113; v56 <= 0x7FFFFF; --j)
			v56 *= 2;
		v54 = v56 & 0x7FFFFF | (j << 23);
	}
	v63 = COERCE_FLOAT(v55 | v54) + v46;
	v58 = fabs(v63);
	if (v58 >= 0x33800000)
	{
		if (v58 > 0x387FEFFF)
		{
			if (v58 > 0x47FFEFFF)
				LOWORD(v8) = 17407;
			else
				v8 = (v58 - 939520000) >> 13;
		}
		else
		{
			v8 = (((v58 & 0x7FFFFF | 0x800000) >> (113 - (v58 >> 23))) + 4096) >> 13;
		}
	}
	v59 = v8 & 0x7FFF;
	v60 = (HIWORD(v63) & 0x8000 | v8 & 0x8000) << 16;
	if ((v8 & 0x7C00) != 0)
	{
		LODWORD(result) = v60 | ((v59 + 114688) << 13);
	}
	else
	{
		v61 = v8 & 0x3FF;
		if ((v8 & 0x3FF) != 0)
		{
			for (k = v61 << 13; k <= 0x7FFFFF; --v49)
				k *= 2;
			v59 = (v49 << 23) | k & 0x7FFFFF;
		}
		LODWORD(result) = v60 | v59;
	}
	return result;
}
// 14078689C: variable 'v35' is possibly undefined
// 14078689C: variable 'v36' is possibly undefined
// 1407868AC: variable 'v39' is possibly undefined
// 140786912: variable 'v42' is possibly undefined
// 140786917: variable 'v43' is possibly undefined
// 140786923: variable 'v47' is possibly undefined
// 140786928: variable 'v48' is possibly undefined
// 140786A25: variable 'v46' is possibly undefined

