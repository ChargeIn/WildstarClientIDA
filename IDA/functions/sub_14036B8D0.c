#include "../winhttp.h"

//----- (000000014036B8D0) ----------------------------------------------------
__int64 __fastcall sub_14036B8D0(__int64 a1, __m128* a2, __int16 a3, int** a4, __int64 a5)
{
	__m128* v6; // rsi
	int* v9; // r12
	_QWORD* v10; // rcx
	_QWORD* v11; // r8
	__int64 v12; // rax
	__m128* i; // rdi
	bool v14; // zf
	__int64 j; // r8
	__int64 v16; // rdx
	__int64 v17; // rax
	__int64 k; // r8
	__int64 v19; // rdx
	__int64 v20; // rax
	unsigned __int64 m; // rdx
	__int64 v22; // rcx
	_QWORD* v23; // r9
	__int64 v24; // rax
	__int64 n; // rcx
	__m128* v26; // rax
	__m128 v27; // xmm1
	__int64* v28; // rsi
	unsigned int v29; // edi
	__int64 v30; // rax
	__int64 v31; // rcx
	__int64 v32; // rcx
	__int64 v33; // rcx
	_QWORD* v34; // rdx
	__int64 v35; // rdx
	__int64 ii; // rcx
	__m128* v37; // rax
	__m128 v38; // xmm1
	__int64 v39; // rcx
	_QWORD* v40; // rdx
	__int64 v41; // rdx
	__int64 jj; // rcx
	__m128* v43; // rax
	__m128 v44; // xmm1
	__int64 v45; // rcx
	_QWORD* v46; // rdx
	__int64 v47; // rdx
	int v48[4]; // [rsp+30h] [rbp-48h] BYREF
	__m128 v49; // [rsp+40h] [rbp-38h]
	__m128 v50; // [rsp+50h] [rbp-28h]

	v6 = a2;
	if (!a4)
		return 2147942487i64;
	v9 = sub_14018B280(56i64, 0);
	if (v9)
	{
		*((_QWORD*)v9 + 1) = 1i64;
		v9[4] = 0;
		*((_QWORD*)v9 + 3) = 0i64;
		*((_QWORD*)v9 + 4) = 0i64;
		*((_QWORD*)v9 + 5) = 0i64;
		*(_QWORD*)v9 = off_140B5FE88;
		*((_QWORD*)v9 + 6) = 0i64;
	}
	else
	{
		v9 = 0i64;
	}
	if ((a3 & 0xF800) != 0)
	{
		v10 = *(_QWORD**)(a1 + 5256);
		if (v10)
		{
			v11 = (_QWORD*)(a1 + 5296);
			do
			{
				if (!v10[138])
				{
					v10[138] = v11;
					v10[139] = *v11;
					*v11 = v10;
					v12 = v10[139];
					if (v12)
						*(_QWORD*)(v12 + 1104) = v10 + 139;
				}
				v10 = (_QWORD*)v10[129];
			} while (v10);
		}
	}
	sub_1403577D0(a1, v6->m128_f32);
	for (i = *(__m128**)(a1 + 2328); i; i = (__m128*)i[88].m128_u64[0])
	{
		v14 = i[90].m128_u64[1] == 0;
		v48[0] = -1;
		if (!v14)
			sub_14037CC30((__int64)i, (__int64)v48);
		if ((a3 & 3) != 0)
			sub_140388E70((__int64)i, v6, a3, (__int64)v9);
		if ((a3 & 0xF800) != 0)
		{
			for (j = *(_QWORD*)(i[1].m128_u64[1] + 64); j; j = *(_QWORD*)(j + 24))
			{
				v16 = *(_QWORD*)(j + 8);
				if (!*(_QWORD*)(v16 + 1104))
				{
					*(_QWORD*)(v16 + 1104) = a1 + 5296;
					*(_QWORD*)(v16 + 1112) = *(_QWORD*)(a1 + 5296);
					*(_QWORD*)(a1 + 5296) = v16;
					v17 = *(_QWORD*)(v16 + 1112);
					if (v17)
						*(_QWORD*)(v17 + 1104) = v16 + 1112;
				}
			}
		}
		if ((a3 & 0x7F8) != 0)
		{
			for (k = *(_QWORD*)(i[1].m128_u64[1] + 48); k; k = *(_QWORD*)(k + 24))
			{
				v19 = *(_QWORD*)(k + 8);
				if (!*(_QWORD*)(v19 + 1232))
				{
					*(_QWORD*)(v19 + 1232) = a1 + 5056;
					*(_QWORD*)(v19 + 1240) = *(_QWORD*)(a1 + 5056);
					*(_QWORD*)(a1 + 5056) = v19;
					v20 = *(_QWORD*)(v19 + 1240);
					if (v20)
						*(_QWORD*)(v20 + 1232) = v19 + 1240;
				}
			}
		}
		if ((a3 & 4) != 0)
		{
			for (m = 0i64; m < i[64].m128_u64[1]; ++m)
			{
				v22 = *(_QWORD*)(i[65].m128_u64[0] + 8 * m);
				if (v22)
				{
					v23 = (_QWORD*)(a1 + 4328);
					if (!*(_QWORD*)(v22 + 224))
					{
						*(_QWORD*)(v22 + 224) = v23;
						*(_QWORD*)(v22 + 232) = *v23;
						*v23 = v22;
						v24 = *(_QWORD*)(v22 + 232);
						if (v24)
							*(_QWORD*)(v24 + 224) = v22 + 232;
					}
				}
			}
			sub_140389A30(i, v6, a3, (__int64)v9);
		}
	}
	for (n = *(_QWORD*)(a1 + 5296); n; n = *(_QWORD*)(a1 + 5296))
	{
		if (n != a5)
		{
			v26 = (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)n + 80i64))(n);
			v27 = _mm_min_ps(v6[1], v26[1]);
			v49 = _mm_max_ps(*v6, *v26);
			v50 = v27;
			if (v49.m128_f32[0] <= v27.m128_f32[0]
				&& v49.m128_f32[1] <= v50.m128_f32[1]
				&& v49.m128_f32[2] <= v50.m128_f32[2])
			{
				v28 = *(__int64**)(a1 + 5296);
				if (!v28[4])
					goto LABEL_59;
				v29 = 0;
				if ((a3 & 0x800) != 0)
				{
					v29 = 1;
				}
				else if ((a3 & 0x8000) != 0 && *((_DWORD*)v28 + 57))
				{
					v29 = 1;
				}
				if ((a3 & 0x1000) != 0 && *((_DWORD*)v28 + 56) || (a3 & 0x2000) != 0)
					v29 |= 2u;
				if ((a3 & 0x4000) != 0 && *((_DWORD*)v28 + 57))
					v29 |= 4u;
				if (v29)
				{
					v30 = *v28;
					v31 = *(_QWORD*)(a1 + 5296);
					v48[0] = -1;
					(*(void(__fastcall**)(__int64, int*))(v30 + 32))(v31, v48);
					v32 = v28[4];
					v6 = a2;
					(*(void(__fastcall**)(__int64, __m128*, _QWORD, int*))(*(_QWORD*)v32 + 1320i64))(v32, a2, v29, v9);
				}
				else
				{
				LABEL_59:
					v6 = a2;
				}
			}
		}
		v33 = *(_QWORD*)(a1 + 5296);
		v34 = *(_QWORD**)(v33 + 1104);
		if (v34)
			*v34 = *(_QWORD*)(v33 + 1112);
		v35 = *(_QWORD*)(v33 + 1112);
		if (v35)
			*(_QWORD*)(v35 + 1104) = *(_QWORD*)(v33 + 1104);
		*(_QWORD*)(v33 + 1104) = 0i64;
		*(_QWORD*)(v33 + 1112) = 0i64;
	}
	for (ii = *(_QWORD*)(a1 + 5056); ii; ii = *(_QWORD*)(a1 + 5056))
	{
		if (ii != a5)
		{
			v37 = (__m128*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)ii + 80i64))(
				ii,
				2 - (unsigned int)((a3 & 0x38) != 0));
			v38 = _mm_min_ps(v6[1], v37[1]);
			v49 = _mm_max_ps(*v6, *v37);
			v50 = v38;
			if (v49.m128_f32[0] <= v38.m128_f32[0]
				&& v49.m128_f32[1] <= v50.m128_f32[1]
				&& v49.m128_f32[2] <= v50.m128_f32[2])
			{
				sub_140378FF0(*(_QWORD*)(a1 + 5056), (__int64)v6, a3, (__int64)v9);
			}
		}
		v39 = *(_QWORD*)(a1 + 5056);
		v40 = *(_QWORD**)(v39 + 1232);
		if (v40)
			*v40 = *(_QWORD*)(v39 + 1240);
		v41 = *(_QWORD*)(v39 + 1240);
		if (v41)
			*(_QWORD*)(v41 + 1232) = *(_QWORD*)(v39 + 1232);
		*(_QWORD*)(v39 + 1232) = 0i64;
		*(_QWORD*)(v39 + 1240) = 0i64;
	}
	for (jj = *(_QWORD*)(a1 + 4328); jj; jj = *(_QWORD*)(a1 + 4328))
	{
		if (jj != a5)
		{
			v43 = (__m128*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)jj + 80i64))(jj, 0i64);
			v44 = _mm_min_ps(v6[1], v43[1]);
			v49 = _mm_max_ps(*v6, *v43);
			v50 = v44;
			if (v49.m128_f32[0] <= v44.m128_f32[0]
				&& v49.m128_f32[1] <= v50.m128_f32[1]
				&& v49.m128_f32[2] <= v50.m128_f32[2])
			{
				sub_140393740(*(__m128**)(a1 + 4328), v6, a3, (__int64)v9);
			}
		}
		v45 = *(_QWORD*)(a1 + 4328);
		v46 = *(_QWORD**)(v45 + 224);
		if (v46)
			*v46 = *(_QWORD*)(v45 + 232);
		v47 = *(_QWORD*)(v45 + 232);
		if (v47)
			*(_QWORD*)(v47 + 224) = *(_QWORD*)(v45 + 224);
		*(_QWORD*)(v45 + 224) = 0i64;
		*(_QWORD*)(v45 + 232) = 0i64;
	}
	*a4 = v9;
	return 0i64;
}
// 140B5FE88: using guessed type __int64 (__fastcall *off_140B5FE88[18])();

