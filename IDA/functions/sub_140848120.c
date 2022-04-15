//----- (0000000140848120) ----------------------------------------------------
void __fastcall sub_140848120(__int64 a1, char a2, __int64 a3, int a4, bool* a5, _BYTE* a6)
{
	float* v6; // rax
	float v7; // xmm5_4
	double v8; // xmm3_8
	float v12; // xmm1_4
	float v13; // xmm4_4
	float v14; // xmm2_4
	float v15; // xmm0_4
	float v16; // xmm0_4
	float v17; // xmm0_4
	float v18; // xmm2_4
	float v19; // xmm2_4
	float v20; // xmm2_4
	bool v21; // r8
	float v22; // xmm0_4
	float* v23; // rcx
	float v24; // xmm0_4
	float v25; // xmm5_4
	bool v26; // zf
	__int64 v27; // rcx
	int v28; // ecx
	unsigned int v29; // edi
	__int64 v30; // rax
	__int64* i; // r15
	unsigned int v32; // edx
	__int64 v33; // rcx
	unsigned int v34; // r13d
	unsigned int v35; // r14d
	_DWORD* v36; // rbx
	__int64 v37; // rcx
	unsigned int v38; // ecx
	__int64 v39; // rax
	unsigned int v40; // ecx
	__int64 v41; // rax
	__int64 j; // rax
	unsigned int v43; // edx
	__int64 v44; // rcx
	bool v45; // [rsp+80h] [rbp+8h]

	v6 = *(float**)(a1 + 32);
	v7 = *(float*)(a1 + 64);
	*(_QWORD*)&v8 = *(unsigned int*)(a1 + 68);
	v12 = 0.0;
	v13 = 27866352.0;
	if (v6)
	{
		v14 = v6[289] + v6[288];
		v15 = *(float*)(a1 + 72) - v14;
		if (v15 > 0.0)
			v14 = (float)(v15 * v6[290]) + v14;
		v16 = v6[286];
		if (v14 > v16)
			v16 = v14;
		v17 = v16 * -0.050000001;
		if (v17 >= -37.0)
		{
			if ((dword_140C61BFC & 1) != 0)
			{
				v19 = *(float*)&dword_140C61BF8;
			}
			else
			{
				v19 = 27866352.0;
				dword_140C61BFC |= 1u;
				dword_140C61BF8 = 1272224376;
			}
			v18 = (float)((float)((float)((float)(COERCE_FLOAT(((int)(float)((float)(v17 * v19) + 1065353200.0) & 0x7FFFFF) + 1065353216)
				* 0.32518977)
				+ 0.020805772)
				* COERCE_FLOAT(((int)(float)((float)(v17 * v19) + 1065353200.0) & 0x7FFFFF) + 1065353216))
				+ 0.65304345)
				* COERCE_FLOAT((int)(float)((float)(v17 * v19) + 1065353200.0) & 0xFF800000);
		}
		else
		{
			v18 = 0.0;
		}
		v20 = v18 * *(float*)(*(_QWORD*)(a1 + 32) + 1120i64);
		v7 = v7 * v20;
		*(float*)&v8 = *(float*)&v8 * v20;
		*(float*)(a1 + 64) = v7;
		*(_DWORD*)(a1 + 68) = LODWORD(v8);
	}
	v21 = *(float*)&v8 <= *(float*)&dword_140C10F58
		|| !(unsigned int)((*(_QWORD*)(a1 + 48) - *(_QWORD*)(a1 + 40)) / 36i64);
	v45 = v21;
	v22 = *(float*)(a3 + 220) * 0.050000001;
	if (v22 >= -37.0)
	{
		if ((dword_140C61BFC & 1) != 0)
		{
			v13 = *(float*)&dword_140C61BF8;
		}
		else
		{
			dword_140C61BF8 = 1272224376;
			dword_140C61BFC |= 1u;
		}
		v12 = (float)((float)((float)((float)(COERCE_FLOAT(((int)(float)((float)(v22 * v13) + 1065353200.0) & 0x7FFFFF) + 1065353216)
			* 0.32518977)
			+ 0.020805772)
			* COERCE_FLOAT(((int)(float)((float)(v22 * v13) + 1065353200.0) & 0x7FFFFF) + 1065353216))
			+ 0.65304345)
			* COERCE_FLOAT((int)(float)((float)(v22 * v13) + 1065353200.0) & 0xFF800000);
	}
	if ((*(_BYTE*)(a3 + 224) & 1) != 0)
	{
		v23 = *(float**)(*(_QWORD*)(a1 + 16) + 16i64);
		if (v23)
			v24 = *v23;
		else
			v24 = 1.0;
		v12 = v24 * v12;
	}
	v25 = v7 * v12;
	if (v21 && (*(_BYTE*)(a1 + 89) || !*(_BYTE*)(a1 + 90)))
	{
		v26 = (*(_BYTE*)(a3 + 382) & 0x40) == 0;
		*(_BYTE*)(a1 + 89) = 1;
		*a6 = 0;
		*a5 = v21;
		if (v26)
			sub_1408605D0(a3);
		v27 = *(_QWORD*)(a3 + 496);
		if (v27)
			sub_1408708C0(v27);
	}
	else
	{
		v28 = a4;
		v29 = 0;
		for (*a6 = 1; v28; v28 &= v28 - 1)
			++v29;
		v30 = *(_QWORD*)(a1 + 96);
		for (i = (__int64*)(a1 + 96); v30; v30 = *(_QWORD*)(v30 + 440))
		{
			v32 = 0;
			do
			{
				v33 = v32++;
				v33 <<= 6;
				*(_OWORD*)(v33 + v30 + 32) = *(_OWORD*)(v33 + v30);
				*(_OWORD*)(v33 + v30 + 48) = *(_OWORD*)(v33 + v30 + 16);
			} while (v32 < v29);
			*(_DWORD*)(v30 + 388) = *(_DWORD*)(v30 + 384);
			*(_DWORD*)(v30 + 404) = *(_DWORD*)(v30 + 400);
			*(_DWORD*)(v30 + 420) = *(_DWORD*)(v30 + 416);
		}
		if (v21)
		{
			for (j = *i; j; j = *(_QWORD*)(j + 440))
			{
				v43 = 0;
				do
				{
					v44 = v43++;
					v44 <<= 6;
					*(_OWORD*)(v44 + j) = 0i64;
					*(_OWORD*)(v44 + j + 16) = 0i64;
				} while (v43 < v29);
				*(_DWORD*)(j + 384) = 0;
				*(_DWORD*)(j + 400) = 0;
				*(_DWORD*)(j + 416) = 0;
			}
		}
		else
		{
			if ((*(_BYTE*)(a3 + 379) & 3) != 0)
				sub_140849810(a2, a3, (__int64*)(a1 + 40), a4, v25, (__int64*)(a1 + 96));
			else
				sub_1408476A0(a1, a2, a3, (__int64*)(a1 + 40), a4, v25);
			v34 = *(_DWORD*)(a1 + 104);
			*(_BYTE*)(a3 + 379) &= ~0x10u;
			if (v34)
			{
				v35 = 0;
				v36 = (_DWORD*)*i;
				if ((*(_BYTE*)(a3 + 382) & 0x40) == 0)
					sub_1408605D0(a3);
				v37 = *(_QWORD*)(a3 + 496);
				if (v37)
				{
					sub_140870330(v37, a3, *i, v8);
					v45 = 0;
				}
				do
				{
					if ((*(_BYTE*)(a3 + 8) & 0x10) != 0)
						sub_14084AA80(*(_DWORD*)(a3 + 120), v29, a4, (__int64)v36);
					if (*(_BYTE*)(a1 + 89))
					{
						v38 = 0;
						do
						{
							v39 = v38++;
							v39 <<= 6;
							*(_OWORD*)((char*)v36 + v39 + 32) = 0i64;
							*(_OWORD*)((char*)v36 + v39 + 48) = 0i64;
						} while (v38 < v29);
						v36[97] = 0;
						v36[105] = 0;
						v36[101] = 0;
					}
					else if (!*(_BYTE*)(a1 + 90))
					{
						v40 = 0;
						do
						{
							v41 = v40++;
							v41 <<= 6;
							*(_OWORD*)((char*)v36 + v41 + 32) = *(_OWORD*)((char*)v36 + v41);
							*(_OWORD*)((char*)v36 + v41 + 48) = *(_OWORD*)((char*)v36 + v41 + 16);
						} while (v40 < v29);
						v36[97] = v36[96];
						v36[101] = v36[100];
						v36[105] = v36[104];
					}
					++v35;
				} while (v35 < v34);
				v21 = v45;
			}
			else
			{
				*a6 = 0;
				v21 = 1;
			}
		}
		*a5 = v21;
	}
}
// 140C10F58: using guessed type int dword_140C10F58;
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;

