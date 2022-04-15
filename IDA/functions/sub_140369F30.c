#include "../winhttp.h"

//----- (0000000140369F30) ----------------------------------------------------
__int64 __fastcall sub_140369F30(_QWORD* a1, __m128* a2, char a3, unsigned int a4, int** a5)
{
	__m128* v6; // r12
	int* v9; // rbx
	int v10; // r13d
	_QWORD* v11; // rcx
	_QWORD* v12; // r8
	__int64 v13; // rax
	_QWORD* v14; // rdi
	int v15; // r12d
	int v16; // r14d
	__int64 i; // r8
	__int64 v18; // rdx
	__int64 v19; // rax
	bool v20; // zf
	__int64 j; // r8
	__int64 v22; // rdx
	__int64 v23; // rax
	unsigned __int64 k; // rdx
	__int64 v25; // rcx
	_QWORD* v26; // r9
	__int64 v27; // rax
	__int64 v28; // rax
	int* v29; // rax
	_QWORD* v30; // rdi
	int* m; // r14
	__m128* v32; // rax
	__m128 v33; // xmm1
	_QWORD* v34; // rcx
	__int64 v35; // rcx
	_QWORD* n; // rdi
	__m128* v37; // rax
	__m128 v38; // xmm1
	_QWORD* v39; // rcx
	__int64 v40; // rcx
	_QWORD* ii; // rdi
	__m128* v42; // rax
	__m128 v43; // xmm1
	_QWORD* v44; // rcx
	__int64 v45; // rcx
	int v46[4]; // [rsp+20h] [rbp-61h] BYREF
	int v47[4]; // [rsp+30h] [rbp-51h] BYREF
	__m128 v48; // [rsp+40h] [rbp-41h]
	__m128 v49; // [rsp+50h] [rbp-31h]
	__m128 v50; // [rsp+60h] [rbp-21h]
	__m128 v51; // [rsp+70h] [rbp-11h]
	__m128 v52; // [rsp+80h] [rbp-1h]
	__m128 v53; // [rsp+90h] [rbp+Fh]

	v6 = a2;
	if (!a5)
		return 2147942487i64;
	v9 = sub_14018B280(32i64, 0);
	if (v9)
	{
		*(_QWORD*)v9 = off_140B787C0;
		v9[6] = 1;
		*((_QWORD*)v9 + 1) = 0i64;
		*((_QWORD*)v9 + 2) = 0i64;
	}
	else
	{
		v9 = 0i64;
	}
	v10 = a3 & 1;
	if ((a3 & 1) != 0)
	{
		v11 = (_QWORD*)a1[657];
		if (v11)
		{
			v12 = a1 + 662;
			do
			{
				if (!v11[138])
				{
					v11[138] = v12;
					v11[139] = *v12;
					*v12 = v11;
					v13 = v11[139];
					if (v13)
						*(_QWORD*)(v13 + 1104) = v11 + 139;
				}
				++* ((_QWORD*)v9 + 1);
				v11 = (_QWORD*)v11[129];
			} while (v11);
		}
	}
	sub_1403577D0((__int64)a1, v6->m128_f32);
	v14 = (_QWORD*)a1[291];
	if (v14)
	{
		v15 = a3 & 2;
		v16 = a3 & 4;
		do
		{
			if (v10)
			{
				for (i = *(_QWORD*)(v14[3] + 64i64); i; i = *(_QWORD*)(i + 24))
				{
					v18 = *(_QWORD*)(i + 8);
					if (!*(_QWORD*)(v18 + 1104))
					{
						*(_QWORD*)(v18 + 1104) = a1 + 662;
						*(_QWORD*)(v18 + 1112) = a1[662];
						a1[662] = v18;
						v19 = *(_QWORD*)(v18 + 1112);
						if (v19)
							*(_QWORD*)(v19 + 1104) = v18 + 1112;
						++* ((_QWORD*)v9 + 1);
					}
				}
			}
			if (v15)
			{
				v20 = v14[181] == 0i64;
				v46[0] = -1;
				if (!v20)
					sub_14037CC30((__int64)v14, (__int64)v46);
				for (j = *(_QWORD*)(v14[3] + 48i64); j; j = *(_QWORD*)(j + 24))
				{
					v22 = *(_QWORD*)(*(_QWORD*)(j + 8) + 32i64);
					if (!*(_QWORD*)(v22 + 1232))
					{
						*(_QWORD*)(v22 + 1232) = a1 + 632;
						*(_QWORD*)(v22 + 1240) = a1[632];
						a1[632] = v22;
						v23 = *(_QWORD*)(v22 + 1240);
						if (v23)
							*(_QWORD*)(v23 + 1232) = v22 + 1240;
						++* ((_QWORD*)v9 + 1);
					}
				}
			}
			if (v16)
			{
				v20 = v14[181] == 0i64;
				v47[0] = -1;
				if (!v20)
					sub_14037CC30((__int64)v14, (__int64)v47);
				for (k = 0i64; k < v14[129]; ++k)
				{
					v25 = *(_QWORD*)(v14[130] + 8 * k);
					if (v25)
					{
						v26 = a1 + 541;
						if (!*(_QWORD*)(v25 + 224))
						{
							*(_QWORD*)(v25 + 224) = v26;
							*(_QWORD*)(v25 + 232) = *v26;
							*v26 = v25;
							v27 = *(_QWORD*)(v25 + 232);
							if (v27)
								*(_QWORD*)(v27 + 224) = v25 + 232;
						}
						++* ((_QWORD*)v9 + 1);
					}
				}
			}
			v14 = (_QWORD*)v14[176];
		} while (v14);
		v6 = a2;
	}
	v28 = 8i64 * *((_QWORD*)v9 + 1);
	if (!is_mul_ok(*((_QWORD*)v9 + 1), 8ui64))
		v28 = -1i64;
	v29 = sub_14018B280(v28, 0);
	*((_QWORD*)v9 + 2) = v29;
	v30 = (_QWORD*)a1[662];
	for (m = v29; v30; v30 = (_QWORD*)a1[662])
	{
		v32 = (__m128*)(*(__int64(__fastcall**)(_QWORD*, _QWORD))(*v30 + 80i64))(v30, a4);
		v33 = _mm_min_ps(v6[1], v32[1]);
		v48 = _mm_max_ps(*v6, *v32);
		v49 = v33;
		if (v48.m128_f32[0] <= v33.m128_f32[0] && v48.m128_f32[1] <= v49.m128_f32[1] && v48.m128_f32[2] <= v49.m128_f32[2])
		{
			*(_QWORD*)m = v30;
			m += 2;
			(*(void(__fastcall**)(_QWORD*)) * v30)(v30);
		}
		v34 = (_QWORD*)v30[138];
		if (v34)
			*v34 = v30[139];
		v35 = v30[139];
		if (v35)
			*(_QWORD*)(v35 + 1104) = v30[138];
		v30[138] = 0i64;
		v30[139] = 0i64;
	}
	for (n = (_QWORD*)a1[632]; n; n = (_QWORD*)a1[632])
	{
		v37 = (__m128*)(*(__int64(__fastcall**)(_QWORD*, _QWORD))(*n + 80i64))(n, a4);
		v38 = _mm_min_ps(v6[1], v37[1]);
		v50 = _mm_max_ps(*v6, *v37);
		v51 = v38;
		if (v50.m128_f32[0] <= v38.m128_f32[0] && v50.m128_f32[1] <= v51.m128_f32[1] && v50.m128_f32[2] <= v51.m128_f32[2])
		{
			*(_QWORD*)m = n;
			m += 2;
			(*(void(__fastcall**)(_QWORD*)) * n)(n);
		}
		v39 = (_QWORD*)n[154];
		if (v39)
			*v39 = n[155];
		v40 = n[155];
		if (v40)
			*(_QWORD*)(v40 + 1232) = n[154];
		n[154] = 0i64;
		n[155] = 0i64;
	}
	for (ii = (_QWORD*)a1[541]; ii; ii = (_QWORD*)a1[541])
	{
		v42 = (__m128*)(*(__int64(__fastcall**)(_QWORD*, _QWORD))(*ii + 80i64))(ii, a4);
		v43 = _mm_min_ps(v6[1], v42[1]);
		v52 = _mm_max_ps(*v6, *v42);
		v53 = v43;
		if (v52.m128_f32[0] <= v43.m128_f32[0] && v52.m128_f32[1] <= v53.m128_f32[1] && v52.m128_f32[2] <= v53.m128_f32[2])
		{
			*(_QWORD*)m = ii;
			m += 2;
			(*(void(__fastcall**)(_QWORD*)) * ii)(ii);
		}
		v44 = (_QWORD*)ii[28];
		if (v44)
			*v44 = ii[29];
		v45 = ii[29];
		if (v45)
			*(_QWORD*)(v45 + 224) = ii[28];
		ii[28] = 0i64;
		ii[29] = 0i64;
	}
	*((_QWORD*)v9 + 1) = ((__int64)m - *((_QWORD*)v9 + 2)) >> 3;
	*a5 = v9;
	return 0i64;
}
// 140B787C0: using guessed type __int64 (__fastcall *off_140B787C0[5])();
// 140369F30: using guessed type int var_B0[4];
// 140369F30: using guessed type int var_A0[4];

