//----- (00000001402CD410) ----------------------------------------------------
__int64 __fastcall sub_1402CD410(__int64* a1, __int64 a2, unsigned __int64 a3)
{
	__int64 v3; // rax
	__int64 v7; // r14
	bool v8; // zf
	__int64 v9; // rdx
	unsigned __int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rcx
	unsigned __int64 v13; // r14
	unsigned __int64 v14; // rcx
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rax
	unsigned __int64 v18; // rdi
	unsigned __int64 v19; // rdi
	__m128 v20; // xmm0
	__int64 v22[2]; // [rsp+20h] [rbp-E0h] BYREF
	__m128 v23; // [rsp+30h] [rbp-D0h] BYREF
	__m128* v24; // [rsp+40h] [rbp-C0h] BYREF
	_QWORD* v25; // [rsp+48h] [rbp-B8h]
	__m128* v26; // [rsp+50h] [rbp-B0h]
	__int64 v27; // [rsp+58h] [rbp-A8h]
	unsigned __int64 v28; // [rsp+60h] [rbp-A0h]
	__int64 v29; // [rsp+68h] [rbp-98h]
	__int64 v30[6]; // [rsp+90h] [rbp-70h] BYREF
	char v31[64]; // [rsp+C0h] [rbp-40h] BYREF

	v3 = *a1;
	LODWORD(v22[0]) = -1;
	(*(void(__fastcall**)(__int64*, __int64*, __int64))(v3 + 64))(a1, v22, 3i64);
	v7 = a1[3];
	v8 = *(_DWORD*)(v7 + 24) == 3;
	LODWORD(v22[0]) = -1;
	if (!v8)
		sub_1402C9AE0(v7, (__int64)v22, 3);
	v9 = *(_QWORD*)(v7 + 64);
	v10 = a1[8];
	if (v10 >= *(unsigned int*)(v9 + 112))
		goto LABEL_10;
	v11 = 5 * v10;
	v12 = *(_QWORD*)(v9 + 120);
	v13 = *(unsigned int*)(v12 + 8 * v11 + 24);
	if (a3 >= v13)
	{
		v16 = a1[4];
		if (v16)
		{
			v17 = sub_1402D5890(v16);
			v18 = a3 - v13;
			if (v18 < *(unsigned int*)(v17 + 8))
			{
				v19 = *(_QWORD*)(v17 + 16) + (v18 << 7);
				v26 = &v23;
				v20 = (__m128) * (unsigned int*)(v19 + 48);
				v28 = v19 + 80;
				v15 = v19 + 64;
				v23 = _mm_shuffle_ps(v20, v20, 0);
				goto LABEL_6;
			}
		}
	LABEL_10:
		*(__m256*)a2 = ymmword_140C78390;
		*(_OWORD*)(a2 + 32) = xmmword_140C783B0;
		*(_OWORD*)(a2 + 48) = xmmword_140C783C0;
		return a2;
	}
	v14 = *(_QWORD*)(v9 + 104) + ((unsigned __int64)*(unsigned __int16*)(*(_QWORD*)(v12 + 8 * v11 + 32) + 2 * a3) << 6);
	v26 = (__m128*)(v14 + 32);
	v28 = v14 + 48;
	v15 = v14 + 16;
LABEL_6:
	v29 = v15;
	v25 = 0i64;
	v24 = 0i64;
	v27 = 0i64;
	v30[0] = 0i64;
	v30[1] = 0i64;
	v30[2] = (__int64)v26;
	v30[3] = 0i64;
	v30[4] = v28;
	v30[5] = v15;
	sub_1401AFF00((__int64)v30, (__int64)v31);
	v22[0] = (__int64)v31;
	v22[1] = (__int64)(a1 + 10);
	v24 = (__m128*)v31;
	v25 = a1 + 10;
	sub_1401AFB10(&v24, (__m128*)a2);
	return a2;
}
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;

