//----- (000000014004A040) ----------------------------------------------------
__int64 __fastcall sub_14004A040(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rbx
	_DWORD* v5; // rax
	double v6; // xmm0_8
	float v7; // xmm12_4
	__int64 v8; // rsi
	float* v9; // rcx
	double v10; // xmm11_8
	double v11; // xmm6_8
	double v12; // xmm7_8
	float v13; // xmm0_4
	float v14; // xmm6_4
	float v15; // xmm0_4
	__int64 v16; // rax
	__int64 v17; // rcx
	_QWORD* v18; // rcx
	__int64 v19; // rcx
	__int128 v21; // [rsp+20h] [rbp-E0h] BYREF
	__int128 v22; // [rsp+30h] [rbp-D0h]
	__int128 v23; // [rsp+40h] [rbp-C0h] BYREF
	__int128 v24[4]; // [rsp+50h] [rbp-B0h] BYREF
	__int128 v25; // [rsp+90h] [rbp-70h] BYREF
	__int128 v26; // [rsp+A0h] [rbp-60h]
	float v27; // [rsp+B0h] [rbp-50h]
	float v28; // [rsp+B4h] [rbp-4Ch]
	float v29; // [rsp+B8h] [rbp-48h]
	int v30; // [rsp+BCh] [rbp-44h]
	__int128 v31; // [rsp+C0h] [rbp-40h]

	v1 = (_DWORD*)a1[3];
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2]) && (v3 = sub_140056AB0(a1, 1u)) != 0)
		v4 = *(_QWORD*)(*(_QWORD*)v3 + 16i64);
	else
		v4 = 0i64;
	v5 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v6 = 1.0;
	else
		v6 = sub_140056C40(a1, 2u);
	v7 = v6;
	v8 = sub_140056AB0(a1, 3u);
	v9 = (float*)sub_140056AB0(a1, 4u);
	if (v8)
	{
		if ((dword_140C8B688 & 1) != 0)
		{
			*(_QWORD*)&v10 = (unsigned int)dword_140C8B68C;
		}
		else
		{
			*(_QWORD*)&v10 = (unsigned int)dword_140C3B440;
			dword_140C8B688 |= 1u;
			*(float*)&v10 = *(float*)&dword_140C3B440 * 0.0055555557;
			*(float*)&dword_140C8B68C = *(float*)&dword_140C3B440 * 0.0055555557;
		}
		if (v9)
		{
			v11 = v10;
			v12 = v10;
			*(float*)&v10 = *(float*)&v10 * v9[2];
			*(float*)&v11 = *(float*)&v11 * *v9;
			*(float*)&v12 = *(float*)&v12 * v9[1];
			sub_1408FE3D0(v11);
			sub_1408FC950(v11);
			sub_1408FE3D0(v12);
			sub_1408FC950(v12);
			sub_1408FE3D0(v10);
			v13 = sub_1408FC950(v10);
			HIDWORD(v25) = 0;
			HIDWORD(v26) = 0;
			v30 = 0;
			*((float*)&v25 + 1) = *(float*)&v10 * *(float*)&v12;
			*(float*)&v25 = v13 * *(float*)&v12;
			*((float*)&v25 + 2) = -*(float*)&v12;
			*(float*)&v26 = (float)((float)(v13 * *(float*)&v12) * *(float*)&v11)
				- (float)(*(float*)&v10 * *(float*)&v11);
			*((float*)&v26 + 1) = (float)((float)(*(float*)&v10 * *(float*)&v12) * *(float*)&v11)
				+ (float)(v13 * *(float*)&v11);
			*((float*)&v26 + 2) = *(float*)&v12 * *(float*)&v11;
			v31 = xmmword_140C78440;
			v27 = (float)(*(float*)&v10 * *(float*)&v11) + (float)((float)(v13 * *(float*)&v12) * *(float*)&v11);
			v28 = (float)((float)(*(float*)&v10 * *(float*)&v12) * *(float*)&v11) - (float)(v13 * *(float*)&v11);
			v29 = *(float*)&v12 * *(float*)&v11;
		}
		else
		{
			v14 = sub_1408FE3D0(0.0);
			v15 = sub_1408FC950(0.0);
			HIDWORD(v25) = 0;
			HIDWORD(v26) = 0;
			v30 = 0;
			*(float*)&v25 = v15 * v15;
			*((float*)&v25 + 1) = v14 * v15;
			*((float*)&v25 + 2) = -v14;
			*(float*)&v26 = (float)((float)(v15 * v14) * v14) - (float)(v14 * v15);
			*((float*)&v26 + 1) = (float)((float)(v14 * v14) * v14) + (float)(v15 * v15);
			*((float*)&v26 + 2) = v15 * v14;
			v27 = (float)(v14 * v14) + (float)((float)(v15 * v14) * v15);
			v29 = v15 * v15;
			v31 = xmmword_140C78440;
			v28 = (float)((float)(v14 * v14) * v15) - (float)(v15 * v14);
		}
		sub_1401B1D60((float*)&v21, (float*)&v25);
		*((_QWORD*)&v22 + 1) = v8;
		v23 = v21;
		*(_QWORD*)&v22 = &v23;
		*(float*)&v21 = v7;
		*((_QWORD*)&v21 + 1) = 0i64;
		v26 = v22;
		v25 = (unsigned __int64)v21;
		sub_1401B0590((int*)&v25, (__int64)v24);
		if (v4)
		{
			if ((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v4 + 24) + 328i64))(*(_QWORD*)(v4 + 24)))
			{
				v16 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v4 + 24) + 328i64))(*(_QWORD*)(v4 + 24));
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 936i64))(v16);
			}
			*(_QWORD*)(v4 + 5076) = 0i64;
			v17 = *(_QWORD*)(v4 + 5040);
			if (v17)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
				*(_QWORD*)(v4 + 5040) = 0i64;
			}
			v18 = *(_QWORD**)(v4 + 5056);
			if (v18)
				*v18 = *(_QWORD*)(v4 + 5064);
			v19 = *(_QWORD*)(v4 + 5064);
			if (v19)
				*(_QWORD*)(v19 + 5056) = *(_QWORD*)(v4 + 5056);
			*(_QWORD*)(v4 + 5056) = 0i64;
			*(_QWORD*)(v4 + 5064) = 0i64;
			*(_OWORD*)(v4 + 4944) = v24[0];
			*(_OWORD*)(v4 + 4960) = v24[1];
			*(_OWORD*)(v4 + 4976) = v24[2];
			*(_OWORD*)(v4 + 4992) = v24[3];
			*(_DWORD*)(v4 + 5084) = 0;
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B440: using guessed type int dword_140C3B440;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 140C8B688: using guessed type int dword_140C8B688;
// 140C8B68C: using guessed type int dword_140C8B68C;

