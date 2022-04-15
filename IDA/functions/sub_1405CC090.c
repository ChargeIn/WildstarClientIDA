//----- (00000001405CC090) ----------------------------------------------------
void __fastcall sub_1405CC090(__int64 a1, __int64 a2, __int64 a3, double a4)
{
	double v4; // xmm2_8
	__int64 i; // rbx
	__int64 v7; // rax
	int v8; // ecx
	__int64 v9; // rcx
	unsigned __int64 j; // rbx
	__int64 v11; // rax
	int v12; // ecx
	__int64 v13; // rcx
	unsigned __int64 k; // r14
	__int64 v15; // rbp
	unsigned __int64 v16; // rsi
	_QWORD* v17; // rbx
	__int64 v18; // rsi
	_QWORD* v19; // rcx
	__int64 v20; // rcx
	unsigned __int64 m; // r14
	__int64 v22; // rbp
	unsigned __int64 v23; // rsi
	_QWORD* v24; // rbx
	__int64* v25; // rbx
	__int64 v26; // rbx
	unsigned __int64 n; // r14
	__int64 v28; // rbp
	unsigned __int64 v29; // rsi
	_QWORD* v30; // rbx
	__int64* v31; // rbx
	__int64 v32; // rbx
	int v33; // edx
	int v34; // esi
	int v35; // eax
	__int128 v36; // xmm6
	__int64 v37; // rbx
	__m128i v38; // xmm0
	__int64 v39; // rbx
	float v40; // xmm1_4
	float v41; // xmm0_4
	float* v42; // rdx
	__int64 v43; // rbx
	__m128i v44; // xmm0
	float v45; // xmm1_4
	float v46; // xmm0_4
	_QWORD* v47; // rbx
	__int64 v48; // rcx
	__int64 v49; // rax
	_QWORD* v50; // rax
	__int64 v51; // rcx
	_QWORD* v52; // rdx
	_QWORD* v53; // rbx
	__int64 v54; // rbx
	__int64 v55; // rax
	__int64 v56; // rcx
	_QWORD* v57; // rbx
	_QWORD* v58; // rcx
	__int64 v59; // rcx
	int v60; // [rsp+20h] [rbp-58h] BYREF
	__int64 v61; // [rsp+28h] [rbp-50h]
	void(__fastcall * v62)(__int64, __int64, __int64, double); // [rsp+30h] [rbp-48h]
	__int64 v63; // [rsp+38h] [rbp-40h]
	float v64; // [rsp+80h] [rbp+8h] BYREF
	float v65; // [rsp+88h] [rbp+10h] BYREF
	__int64 v66; // [rsp+90h] [rbp+18h] BYREF

	if (*(_DWORD*)(a1 + 124))
	{
		for (i = *(_QWORD*)(a1 + 560); i; i = *(_QWORD*)(i + 24))
		{
			v7 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(i + 12));
			a3 = v7;
			if (v7)
			{
				v8 = *(_DWORD*)(v7 + 4920);
				if (v8)
					*(_DWORD*)(v7 + 4920) = v8 - 1;
				v9 = *(_QWORD*)(v7 + 5864);
				if (v9)
					(*(void(__fastcall**)(__int64, bool))(*(_QWORD*)v9 + 392i64))(v9, *(_DWORD*)(v7 + 4920) != 0);
			}
		}
		for (j = 0i64; j < *(_QWORD*)(a1 + 624); ++j)
		{
			v11 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(*(_QWORD*)(a1 + 616) + 4 * j));
			a3 = v11;
			if (v11)
			{
				v12 = *(_DWORD*)(v11 + 4920);
				if (v12)
					*(_DWORD*)(v11 + 4920) = v12 - 1;
				v13 = *(_QWORD*)(v11 + 5864);
				if (v13)
					(*(void(__fastcall**)(__int64, bool))(*(_QWORD*)v13 + 392i64))(v13, *(_DWORD*)(v11 + 4920) != 0);
			}
		}
		*(_QWORD*)(a1 + 624) = 0i64;
		*(_DWORD*)(a1 + 124) = 0;
	}
	for (k = 0i64; k < *(_QWORD*)(a1 + 752); ++k)
	{
		v15 = *(_QWORD*)(a1 + 744) + 4 * k;
		v16 = (*(__int64(__fastcall**)(__int64))(a1 + 664))(v15);
		a2 = v16 % *(_QWORD*)(a1 + 648);
		v17 = *(_QWORD**)(*(_QWORD*)(a1 + 656) + 8 * a2);
		if (v17)
		{
			while (v16 != *v17 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 672))(v15, v17 + 2))
			{
				v17 = (_QWORD*)v17[1];
				if (!v17)
					goto LABEL_30;
			}
			if (v17 != (_QWORD*)-24i64)
			{
				v18 = v17[3];
				if (v18)
				{
					sub_1400B6120(*(_QWORD*)v18 + 640i64, v18 + 8);
					sub_140578050((__int64*)qword_140C65B78, *(_DWORD*)(v18 + 8), 0);
					v19 = *(_QWORD**)(v18 + 16);
					if (v19)
						*v19 = *(_QWORD*)(v18 + 24);
					v20 = *(_QWORD*)(v18 + 24);
					if (v20)
						*(_QWORD*)(v20 + 16) = *(_QWORD*)(v18 + 16);
					*(_QWORD*)(v18 + 16) = 0i64;
					*(_QWORD*)(v18 + 24) = 0i64;
					sub_14018B900(v18, 0);
				}
			}
		}
	LABEL_30:
		;
	}
	*(_QWORD*)(a1 + 752) = 0i64;
	for (m = 0i64; m < *(_QWORD*)(a1 + 768); ++m)
	{
		v22 = *(_QWORD*)(a1 + 760) + 4 * m;
		v23 = (*(__int64(__fastcall**)(__int64))(a1 + 712))(v22);
		a2 = v23 % *(_QWORD*)(a1 + 696);
		v24 = *(_QWORD**)(*(_QWORD*)(a1 + 704) + 8 * a2);
		if (v24)
		{
			while (v23 != *v24 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 720))(v22, v24 + 2))
			{
				v24 = (_QWORD*)v24[1];
				if (!v24)
					goto LABEL_40;
			}
			v25 = v24 + 3;
			if (v25)
			{
				v26 = *v25;
				if (v26)
				{
					sub_1405CB900(v26);
					sub_14018B900(v26, 0);
				}
			}
		}
	LABEL_40:
		;
	}
	*(_QWORD*)(a1 + 768) = 0i64;
	for (n = 0i64; n < *(_QWORD*)(a1 + 736); ++n)
	{
		v28 = *(_QWORD*)(a1 + 728) + 4 * n;
		v29 = (*(__int64(__fastcall**)(__int64))(a1 + 592))(v28);
		a2 = v29 % *(_QWORD*)(a1 + 576);
		v30 = *(_QWORD**)(*(_QWORD*)(a1 + 584) + 8 * a2);
		if (v30)
		{
			while (v29 != *v30 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 600))(v28, v30 + 2))
			{
				v30 = (_QWORD*)v30[1];
				if (!v30)
					goto LABEL_50;
			}
			v31 = v30 + 3;
			if (v31)
			{
				v32 = *v31;
				if (v32)
				{
					sub_1405CAE70(v32, a2, v4, a4);
					sub_14018B900(v32, 0);
				}
			}
		}
	LABEL_50:
		;
	}
	*(_QWORD*)(a1 + 736) = 0i64;
	if (*(_DWORD*)(a1 + 32))
	{
		if (((*(_DWORD*)(qword_140C65898 + 31560) - 63) & 0xFFFFFFBF) == 0 && !*(_QWORD*)(qword_140C65898 + 29096))
		{
			v33 = *(_DWORD*)(a1 + 60) + *(_DWORD*)(a1 + 64);
			*(_DWORD*)(a1 + 32) = 0;
			v60 = 0;
			v61 = a1;
			v62 = sub_1405CD160;
			v63 = 0i64;
			sub_140195960(a1 + 336, v33, (__int64)&v60, 4);
			v34 = *(_DWORD*)(a1 + 60);
			if (v34)
			{
				if (*(_DWORD*)(qword_140C65898 + 31560) != 63)
				{
					v35 = *(_DWORD*)(a1 + 68);
					if (v35 == 2)
					{
						v36 = xmmword_140C777D0;
						sub_140195D70(a1 + 480);
						v37 = qword_140C65898;
						if (v34 >= 0)
							*(_DWORD*)(qword_140C65898 + 29812) = v34;
						else
							*(_DWORD*)(qword_140C65898 + 29812) = *(_DWORD*)(qword_140C65898 + 29816);
						*(_QWORD*)&a4 = 1065353216i64;
						*(_DWORD*)(v37 + 29808) = 0x7FFFFFFF;
						*(_OWORD*)(v37 + 29792) = v36;
						v38 = _mm_cvtsi32_si128(*(_DWORD*)(v37 + 29812));
						*(_DWORD*)(v37 + 29696) = 1;
						v39 = v37 + 29704;
						v40 = 1000.0 / _mm_cvtepi32_ps(v38).m128_f32[0];
						if (*(float*)(v39 + 24) == 1.0 && fabs(v40) == *(float*)(v39 + 28))
							goto LABEL_66;
						*(_DWORD*)(v39 + 24) = 1065353216;
						if (v40 == 0.0)
						{
							*(_DWORD*)(v39 + 16) = 1065353216;
						}
						else if (*(float*)(v39 + 16) != 1.0)
						{
							*(float*)(v39 + 28) = fabs(v40);
							goto LABEL_65;
						}
						*(_DWORD*)(v39 + 28) = 0;
					LABEL_65:
						*(_DWORD*)(v39 + 8) = dword_140C636A8;
					LABEL_66:
						v41 = (**(float(__fastcall***)(__int64))v39)(v39);
						v42 = &v64;
						v64 = v41;
					LABEL_80:
						(*(void(__fastcall**)(__int64, float*))(*(_QWORD*)v39 + 8i64))(v39, v42);
						goto LABEL_81;
					}
					if (v35 == 3)
					{
						sub_140195D70(a1 + 480);
						v43 = qword_140C65898;
						if (v34 >= 0)
							*(_DWORD*)(qword_140C65898 + 29812) = v34;
						else
							*(_DWORD*)(qword_140C65898 + 29812) = *(_DWORD*)(qword_140C65898 + 29816);
						*(_QWORD*)&a4 = 1065353216i64;
						*(_DWORD*)(v43 + 29808) = 0x7FFFFFFF;
						*(_OWORD*)(v43 + 29792) = xmmword_140B7B240;
						v44 = _mm_cvtsi32_si128(*(_DWORD*)(v43 + 29812));
						*(_DWORD*)(v43 + 29696) = 1;
						v39 = v43 + 29704;
						v45 = 1000.0 / _mm_cvtepi32_ps(v44).m128_f32[0];
						if (*(float*)(v39 + 24) == 1.0 && fabs(v45) == *(float*)(v39 + 28))
							goto LABEL_79;
						*(_DWORD*)(v39 + 24) = 1065353216;
						if (v45 == 0.0)
						{
							*(_DWORD*)(v39 + 16) = 1065353216;
						}
						else if (*(float*)(v39 + 16) != 1.0)
						{
							*(float*)(v39 + 28) = fabs(v45);
							goto LABEL_78;
						}
						*(_DWORD*)(v39 + 28) = 0;
					LABEL_78:
						*(_DWORD*)(v39 + 8) = dword_140C636A8;
					LABEL_79:
						v46 = (**(float(__fastcall***)(__int64))v39)(v39);
						v42 = &v65;
						v65 = v46;
						goto LABEL_80;
					}
				}
			}
		}
	}
LABEL_81:
	if (!*(_DWORD*)(a1 + 32) && *(_DWORD*)(a1 + 28))
	{
		v47 = *(_QWORD**)(a1 + 776);
		if (v47)
		{
			while (!*v47 || !(*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)*v47 + 32i64))(*v47))
			{
				v47 = (_QWORD*)v47[3];
				if (!v47)
					goto LABEL_87;
			}
		}
		else
		{
		LABEL_87:
			if (*(_QWORD*)(a1 + 608)
				|| **(_QWORD**)(a1 + 152) != *(_QWORD*)(a1 + 152)
				|| !*(_DWORD*)(a1 + 36)
				|| *(_QWORD*)(a1 + 352)
				|| (v60 = 0, (v48 = *(_QWORD*)(qword_140C63650 + 1848)) != 0) && !sub_140100DA0(v48, (__int64)&v60))
			{
				v49 = *(_QWORD*)(a1 + 608);
				if (!v49)
					goto LABEL_107;
				v50 = (_QWORD*)sub_1403D90D0(qword_140C65898, *(_DWORD*)(v49 + 12));
				if (v50)
				{
					if (v50[408])
						goto LABEL_107;
					(*(void(__fastcall**)(_QWORD*))(*v50 + 8i64))(v50);
				}
				v51 = *(_QWORD*)(a1 + 608);
				v52 = *(_QWORD**)(v51 + 32);
				if (v52)
					*v52 = *(_QWORD*)(v51 + 40);
				a2 = *(_QWORD*)(v51 + 40);
				if (a2)
					*(_QWORD*)(a2 + 32) = *(_QWORD*)(v51 + 32);
				*(_QWORD*)(v51 + 32) = 0i64;
				*(_QWORD*)(v51 + 40) = 0i64;
			}
			else if (*(_DWORD*)(qword_140C65898 + 31560) == 63)
			{
				v66 = 0x141E1CC60i64;
				sub_1401A3130(5, 2, &v66);
				*(_DWORD*)(qword_140C65898 + 31560) |= 0x40u;
			}
			else
			{
				*(_DWORD*)(a1 + 28) = 0;
			}
		}
	}
LABEL_107:
	if (*(_DWORD*)(a1 + 36))
		goto LABEL_144;
	if (!*(_DWORD*)(a1 + 28) && !*(_QWORD*)(a1 + 496) && *(_DWORD*)(qword_140C65898 + 31560) == 63)
	{
		v66 = 0x141E1CC70i64;
		sub_1401A3130(5, 2, &v66);
		*(_DWORD*)(qword_140C65898 + 31560) |= 0x40u;
	}
	if (*(_DWORD*)(a1 + 36))
	{
	LABEL_144:
		if (!*(_DWORD*)(a1 + 28) && !*(_QWORD*)(a1 + 608))
		{
			v53 = *(_QWORD**)(a1 + 776);
			if (v53)
			{
				while (!*v53 || !(*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)*v53 + 32i64))(*v53))
				{
					v53 = (_QWORD*)v53[3];
					if (!v53)
						goto LABEL_119;
				}
			}
			else
			{
			LABEL_119:
				v54 = *(_QWORD*)(a1 + 560);
				if (v54)
				{
					while (1)
					{
						v55 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v54 + 12));
						if (v55)
						{
							v56 = *(_QWORD*)(v55 + 5872);
							if (v56)
							{
								if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v56 + 360i64))(v56))
									break;
							}
						}
						v54 = *(_QWORD*)(v54 + 24);
						if (!v54)
							goto LABEL_124;
					}
				}
				else
				{
				LABEL_124:
					*(_DWORD*)(a1 + 36) = 0;
					*(_DWORD*)(a1 + 40) = 1;
				}
			}
		}
	}
	if (*(_DWORD*)(a1 + 40) && !*(_DWORD*)(qword_140C65898 + 40))
	{
		*(_DWORD*)(a1 + 40) = 0;
		sub_1405CCA00(a1, a2, a3, a4);
	}
	if (*(_DWORD*)(a1 + 24))
	{
		if (!*(_QWORD*)(a1 + 776))
			goto LABEL_141;
		do
		{
			v57 = *(_QWORD**)(a1 + 776);
			if (*(_DWORD*)(a1 + 24) + *((_DWORD*)v57 + 2) - dword_140C636A8 > 0)
				break;
			if (v57)
			{
				v58 = (_QWORD*)v57[2];
				if (v58)
					*v58 = v57[3];
				v59 = v57[3];
				if (v59)
					*(_QWORD*)(v59 + 16) = v57[2];
				v57[2] = 0i64;
				v57[3] = 0i64;
				if (*v57)
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v57 + 8i64))(*v57);
				sub_14018B900((__int64)v57, 0);
			}
		} while (*(_QWORD*)(a1 + 776));
		if (!*(_QWORD*)(a1 + 776))
			LABEL_141:
		*(_QWORD*)(a1 + 784) = 0i64;
	}
}
// 1405CC383: variable 'a2' is possibly undefined
// 1405CC383: variable 'v4' is possibly undefined
// 1405CC87B: variable 'a3' is possibly undefined
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B78: using guessed type __int64 qword_140C65B78;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;

