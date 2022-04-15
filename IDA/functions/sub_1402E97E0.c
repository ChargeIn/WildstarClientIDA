//----- (00000001402E97E0) ----------------------------------------------------
__int64 __fastcall sub_1402E97E0(__m128* a1, __int64 a2, _QWORD* a3, __int32 a4, _DWORD* a5, __int32 a6, __int32 a7)
{
	_DWORD* v12; // rbx
	_DWORD* v13; // rax
	int v14; // r8d
	int v15; // edx
	int v16; // ecx
	int v17; // eax
	__int64 v18; // rax
	unsigned __int64 v19; // rax
	__m128 v20; // xmm4
	__m128 v21; // xmm0
	__m128 v22; // xmm3
	__int32 v23; // eax
	__m128** v24; // rdx
	unsigned __int64 v25; // rax
	int v26; // eax
	int v27; // r8d
	int v28; // ebx
	int v29; // ecx
	int v30; // edx
	__int64 v31; // rax
	int v32; // eax
	void (***v33)(void); // rcx
	int v34; // [rsp+20h] [rbp-51h]
	int v35; // [rsp+24h] [rbp-4Dh]
	int v36; // [rsp+28h] [rbp-49h]
	__int32 v37; // [rsp+2Ch] [rbp-45h]
	void (***v38)(void); // [rsp+30h] [rbp-41h] BYREF
	int v39; // [rsp+38h] [rbp-39h]
	int v40; // [rsp+3Ch] [rbp-35h]
	int v41[4]; // [rsp+40h] [rbp-31h] BYREF
	__int64(__fastcall * v42)(__int64, __int64); // [rsp+50h] [rbp-21h]
	void(__fastcall * v43)(__int64, unsigned int, __int64); // [rsp+58h] [rbp-19h]
	void(__fastcall * v44)(__int64, __int64); // [rsp+60h] [rbp-11h]
	void(__fastcall * v45)(__int64, __int64); // [rsp+68h] [rbp-9h]
	void(__fastcall * v46)(__int64, __int64); // [rsp+70h] [rbp-1h]
	void(__fastcall * v47)(__int64, __int64); // [rsp+80h] [rbp+Fh]
	__int64(__fastcall * v48)(__int64, __int64); // [rsp+88h] [rbp+17h]
	__int64(__fastcall * v49)(_QWORD); // [rsp+90h] [rbp+1Fh]
	int v50; // [rsp+D0h] [rbp+5Fh] BYREF
	int v51; // [rsp+D4h] [rbp+63h]

	if (!a3 || a2 == a3[1])
		return 2147942487i64;
	v12 = a5;
	v34 = *a5;
	v35 = a5[1];
	v13 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD*))(*a3 + 24i64))(a3);
	v39 = v13[3] - v13[1];
	v40 = v13[4] - v13[2];
	v14 = v39 + *v12;
	v36 = v14;
	v15 = v40 + v12[1];
	v16 = v34;
	v37 = v15;
	if (v34 < (int)qword_140C41D88)
		return 2147942487i64;
	if (v14 > dword_140C41D90)
		return 2147942487i64;
	v17 = v35;
	if (v35 < SHIDWORD(qword_140C41D88) || v15 > dword_140C41D94)
		return 2147942487i64;
	v51 = v35;
	if (v35 < v15)
	{
		while (1)
		{
			v50 = v16;
			if (v16 < v14)
				break;
		LABEL_14:
			v51 = ++v17;
			if (v17 >= v15)
				goto LABEL_15;
		}
		while (1)
		{
			v18 = sub_1402E16D0(a2, &v50);
			if (v18)
			{
				if (*(_QWORD*)(v18 + 32))
					return 2147500037i64;
			}
			v14 = v36;
			if (++v50 >= v36)
			{
				v15 = v37;
				v16 = v34;
				v17 = v51;
				goto LABEL_14;
			}
		}
	}
LABEL_15:
	a1[1].m128_u64[0] = a2;
	_InterlockedIncrement((volatile signed __int32*)(a2 + 12));
	a1[1].m128_u64[1] = (unsigned __int64)a3;
	(*(void(__fastcall**)(_QWORD*)) * a3)(a3);
	a1[2].m128_i32[0] = a4;
	a1[2].m128_i32[1] = v34;
	a1[2].m128_i32[2] = v35;
	a1[2].m128_i32[3] = v36;
	a1[3].m128_i32[0] = v37;
	a1[3].m128_i32[1] = a6;
	a1[3].m128_i32[2] = a7;
	v19 = a1[1].m128_u64[1];
	a1[4].m128_i32[0] = v34 - *(_DWORD*)(v19 + 24);
	a1[4].m128_i32[1] = v35 - *(_DWORD*)(v19 + 28);
	v20 = (__m128)COERCE_UNSIGNED_INT((float)a1[4].m128_i32[0]);
	v21 = (__m128)COERCE_UNSIGNED_INT((float)a1[4].m128_i32[1]);
	v20.m128_f32[0] = v20.m128_f32[0] * *(float*)&dword_140C41D84;
	v21.m128_f32[0] = v21.m128_f32[0] * *(float*)&dword_140C41D84;
	v22 = (__m128)COERCE_UNSIGNED_INT((float)(a1[3].m128_i32[1] - *(_DWORD*)(a1[1].m128_u64[1] + 40)));
	v22.m128_f32[0] = v22.m128_f32[0] * *(float*)&dword_140C41D98;
	a1[5] = _mm_unpacklo_ps(_mm_unpacklo_ps(v20, v21), _mm_unpacklo_ps(v22, (__m128)0i64));
	v23 = sub_14018CDF0();
	v24 = (__m128**)(a1[1].m128_u64[0] + 24);
	a1[3].m128_i32[3] = v23;
	a1[6].m128_i32[0] = 0;
	if (!a1[6].m128_u64[1])
	{
		a1[6].m128_u64[1] = (unsigned __int64)v24;
		a1[7].m128_u64[0] = (unsigned __int64)*v24;
		*v24 = a1;
		v25 = a1[7].m128_u64[0];
		if (v25)
			*(_QWORD*)(v25 + 104) = a1 + 7;
	}
	v26 = v35;
	v27 = v37;
	v28 = 0;
	v51 = v35;
	if (v35 < v37)
	{
		v29 = v36;
		v30 = v34;
		do
		{
			v50 = v30;
			if (v30 < v29)
			{
				do
				{
					v31 = *(_QWORD*)a2;
					v38 = 0i64;
					v32 = (*(__int64(__fastcall**)(__int64, int*, void (****)(void)))(v31 + 144))(a2, &v50, &v38);
					v33 = v38;
					if (v32 >= 0)
					{
						if ((int)sub_1402E72D0((__int64)v38, (__int64)a1) < 0)
							v28 = 1;
						(**v38)();
						v33 = v38;
					}
					if (v33)
						((void(__fastcall*)(void (***)(void)))(*v33)[1])(v33);
					v29 = v36;
					++v50;
				} while (v50 < v36);
				v27 = v37;
				v30 = v34;
				v26 = v51;
			}
			v51 = ++v26;
		} while (v26 < v27);
		if (v28)
			return 2147500037i64;
	}
	sub_1407E4830(v41, 0i64, 0x60ui64);
	v42 = sub_1402E1B10;
	v43 = sub_1402E1C30;
	v44 = sub_1402E1E20;
	v45 = sub_1402E1F30;
	v46 = sub_1402E2090;
	v47 = sub_1402E2150;
	v48 = sub_1402E2230;
	v49 = nullsub_1;
	(*(void(__fastcall**)(_QWORD, int*, __int64))(**(_QWORD**)(a1[1].m128_u64[1] + 8) + 240i64))(
		*(_QWORD*)(a1[1].m128_u64[1] + 8),
		v41,
		a2);
	return 0i64;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C41D84: using guessed type int dword_140C41D84;
// 140C41D88: using guessed type __int64 qword_140C41D88;
// 140C41D90: using guessed type int dword_140C41D90;
// 140C41D94: using guessed type int dword_140C41D94;
// 140C41D98: using guessed type int dword_140C41D98;
// 1402E97E0: using guessed type int var_70[4];

