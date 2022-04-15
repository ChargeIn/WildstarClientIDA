//----- (00000001403F9D30) ----------------------------------------------------
void __fastcall sub_1403F9D30(__int64 a1, double a2)
{
	float v3; // xmm0_4
	int v4; // r8d
	float v5; // xmm7_4
	int v6; // eax
	unsigned __int64 v7; // rbx
	unsigned __int64 v8; // r14
	int v9; // ecx
	__int64 v10; // rdx
	unsigned __int64 v11; // rdi
	double v12; // xmm0_8
	unsigned __int64 v13; // rax
	float v14; // xmm0_4
	__int64 i; // rax
	__int64 v16; // rsi
	__int64 v17; // rbp
	__int64 v18; // rbx
	_QWORD* v19; // rcx
	__int64 v20; // rbx
	unsigned __int64 v21; // rdi
	float v22; // xmm1_4
	float v23; // ecx
	float v24; // xmm2_4
	int v25; // eax
	float v26; // xmm1_4
	float v27; // ecx
	__int64 v28; // rbx
	float v29; // xmm1_4
	float v30; // ecx
	__int64 j; // rbx
	float v32; // xmm1_4
	float v33; // ecx
	float v34; // [rsp+90h] [rbp+18h]
	float v35; // [rsp+90h] [rbp+18h]
	float v36; // [rsp+90h] [rbp+18h]
	float v37; // [rsp+90h] [rbp+18h]

	*(float*)&a2 = (float)(*(float*)&a2 * -0.69314718) * 2.0;
	v3 = sub_1408FC7F0(a2);
	v4 = dword_140C44DB0;
	v5 = v3;
	v6 = dword_140C44DB0;
	if (*(_DWORD*)qword_140C63750 < dword_140C44DB0)
		v6 = *(_DWORD*)qword_140C63750;
	v7 = 0i64;
	v8 = 0i64;
	v9 = *((_DWORD*)&xmmword_140C44DC0 + v6);
	if (v9 < 0)
		v9 = 0x80000000 - v9;
	v10 = (unsigned int)(v9 >> 31);
	if ((int)abs32(v9) > 84)
	{
		if (*(_DWORD*)qword_140C63750 < dword_140C44DB0)
			v4 = *(_DWORD*)qword_140C63750;
		v12 = sub_1408FE170(COERCE_DOUBLE((unsigned __int64)*((_DWORD*)&xmmword_140C44DC0 + v4)));
		v13 = 0i64;
		v14 = *(float*)&v12 * -37.5;
		if (v14 >= 9.223372e18)
		{
			v14 = v14 - 9.223372e18;
			if (v14 < 9.223372e18)
				v13 = 0x8000000000000000ui64;
		}
		v11 = v13 + (unsigned int)(int)v14;
	}
	else
	{
		v11 = -1i64;
	}
	*(_DWORD*)(a1 + 5616) = 2139095039;
	if (v11 != -1i64)
	{
		for (i = *(_QWORD*)(a1 + 5600); i; ++v7)
		{
			if (v7 >= v11)
				break;
			i = *(_QWORD*)(i + 48);
		}
		v8 = v7;
		if (*(_QWORD*)(a1 + 5608))
		{
			while (v7 < v11)
				++v7;
		}
	}
	if (v7 != v11)
	{
		v28 = *(_QWORD*)(a1 + 5608);
		if (!v28)
			goto LABEL_66;
		while (1)
		{
			v29 = *(float*)(v28 + 420);
			if (*(_DWORD*)(v28 + 428))
			{
				v36 = (float)((float)(v29 - 1.0) * v5) + 1.0;
				*(float*)(v28 + 420) = v36;
				v30 = v36;
				if (v36 < 0.0)
					LODWORD(v30) = 0x80000000 - LODWORD(v36);
				if ((int)abs32(LODWORD(v30) - 1065353216) > 84)
					goto LABEL_63;
			}
			else
			{
				*(_DWORD*)(v28 + 428) = 1;
			}
			*(_DWORD*)(v28 + 420) = 1065353216;
		LABEL_63:
			if (v29 != *(float*)(v28 + 420))
				sub_1405432C0(v28);
			v28 = *(_QWORD*)(v28 + 48);
			if (!v28)
				goto LABEL_66;
		}
	}
	v16 = *(_QWORD*)(a1 + 5608);
	if (v16)
	{
		do
		{
			v17 = *(_QWORD*)(v16 + 48);
			v18 = v16 + 48;
			if ((unsigned int)sub_140543030(v16))
			{
				v19 = *(_QWORD**)(v16 + 40);
				if (v19)
					*v19 = *(_QWORD*)v18;
				if (*(_QWORD*)v18)
					*(_QWORD*)(*(_QWORD*)v18 + 40i64) = *(_QWORD*)(v16 + 40);
				*(_QWORD*)v18 = 0i64;
				*(_QWORD*)(v16 + 40) = a1 + 5600;
				*(_QWORD*)v18 = *(_QWORD*)(a1 + 5600);
				*(_QWORD*)(a1 + 5600) = v16;
				if (*(_QWORD*)v18)
					*(_QWORD*)(*(_QWORD*)v18 + 40i64) = v18;
				++v8;
			}
			v16 = v17;
		} while (v17);
	}
	sub_140400CC0((__int64*)(a1 + 5608), v10, (__int64(__fastcall*)(__int64, __int64, _QWORD))sub_140542F50);
	v20 = *(_QWORD*)(a1 + 5608);
	v21 = v11 - v8;
	if (v20)
	{
		while (v21)
		{
			v22 = *(float*)(v20 + 420);
			if (*(_DWORD*)(v20 + 428))
			{
				v34 = (float)((float)(v22 - 1.0) * v5) + 1.0;
				*(float*)(v20 + 420) = v34;
				v23 = v34;
				if (v34 < 0.0)
					LODWORD(v23) = 0x80000000 - LODWORD(v34);
				if ((int)abs32(LODWORD(v23) - 1065353216) > 84)
					goto LABEL_39;
			}
			else
			{
				*(_DWORD*)(v20 + 428) = 1;
			}
			*(_DWORD*)(v20 + 420) = 1065353216;
		LABEL_39:
			if (v22 != *(float*)(v20 + 420))
				sub_1405432C0(v20);
			v20 = *(_QWORD*)(v20 + 48);
			--v21;
			if (!v20)
				goto LABEL_66;
		}
		*(_DWORD*)(a1 + 5616) = *(_DWORD*)(v20 + 424);
		do
		{
			v24 = *(float*)(v20 + 420);
			v25 = dword_140C44E40;
			if (*(_DWORD*)qword_140C63750 < dword_140C44E40)
				v25 = *(_DWORD*)qword_140C63750;
			v26 = *((float*)&xmmword_140C44E50 + v25);
			if (*(_DWORD*)(v20 + 428))
			{
				v35 = (float)((float)(v24 - v26) * v5) + v26;
				*(float*)(v20 + 420) = v35;
				v27 = v35;
				if ((LODWORD(v35) ^ LODWORD(v26)) < 0)
					LODWORD(v27) = 0x80000000 - LODWORD(v35);
				if ((int)abs32(LODWORD(v27) - LODWORD(v26)) > 84)
					goto LABEL_52;
			}
			else
			{
				*(_DWORD*)(v20 + 428) = 1;
			}
			*(float*)(v20 + 420) = v26;
		LABEL_52:
			if (v24 != *(float*)(v20 + 420))
				sub_1405432C0(v20);
			v20 = *(_QWORD*)(v20 + 48);
		} while (v20);
	}
LABEL_66:
	for (j = *(_QWORD*)(a1 + 5600); j; j = *(_QWORD*)(j + 48))
	{
		v32 = *(float*)(j + 420);
		if (*(_DWORD*)(j + 428))
		{
			v37 = (float)((float)(v32 - 1.0) * v5) + 1.0;
			*(float*)(j + 420) = v37;
			v33 = v37;
			if (v37 < 0.0)
				LODWORD(v33) = 0x80000000 - LODWORD(v37);
			if ((int)abs32(LODWORD(v33) - 1065353216) > 84)
				goto LABEL_73;
		}
		else
		{
			*(_DWORD*)(j + 428) = 1;
		}
		*(_DWORD*)(j + 420) = 1065353216;
	LABEL_73:
		if (v32 != *(float*)(j + 420))
			sub_1405432C0(j);
	}
}
// 1403FA00F: conditional instruction was optimized away because rbx.8!=0
// 1403F9F36: variable 'v10' is possibly undefined
// 140C44DB0: using guessed type int dword_140C44DB0;
// 140C44DC0: using guessed type __int128 xmmword_140C44DC0;
// 140C44E40: using guessed type int dword_140C44E40;
// 140C44E50: using guessed type __int128 xmmword_140C44E50;
// 140C63750: using guessed type __int64 qword_140C63750;

