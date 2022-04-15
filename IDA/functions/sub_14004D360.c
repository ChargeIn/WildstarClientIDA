#include "../winhttp.h"

//----- (000000014004D360) ----------------------------------------------------
__int64 __fastcall sub_14004D360(__int64 a1, __int64 a2, float a3, __int64 a4)
{
	__int64 v5; // rcx
	__int64 v7; // rcx
	unsigned int v8; // ebx
	__int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rcx
	int v12; // r15d
	_QWORD* v13; // rdi
	_QWORD* v14; // rbx
	__int64 v15; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	unsigned int v18; // r15d
	_QWORD* v19; // rax
	__m128* v20; // rbx
	__int64 v21; // xmm0_8
	float v22; // xmm9_4
	float v23; // xmm10_4
	double v24; // xmm6_8
	float v25; // xmm7_4
	float v26; // xmm7_4
	float v27; // xmm10_4
	double v28; // xmm6_8
	float v29; // xmm7_4
	float v30; // xmm0_4
	float v31; // xmm7_4
	float v32; // xmm1_4
	float v33; // xmm0_4
	float v34; // xmm1_4
	__int64 v35; // rcx
	int v36; // edx
	__int64 v37; // r8
	__int64 v38; // rcx
	__int64 v39; // rax
	__int64 v40; // rbx
	__int64 v41; // rdi
	int v42; // ecx
	__int64 v43; // r8
	__int64 v44; // rdx
	__int64 v45; // rax
	__int64 v46; // rbx
	__int64 v47; // rdi
	__int64 v49; // [rsp+48h] [rbp-C0h] BYREF
	__int64 v50[2]; // [rsp+50h] [rbp-B8h] BYREF
	__m128* v51[10]; // [rsp+68h] [rbp-A0h] BYREF

	v5 = *(_QWORD*)(a1 + 392);
	if (v5)
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 96i64))(v5, (unsigned int)dword_140C636A8);
	v7 = *(_QWORD*)(a1 + 24);
	if (!v7)
		goto LABEL_11;
	v8 = *(_DWORD*)(a1 + 32);
	v9 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v7 + 24) + 328i64))(*(_QWORD*)(v7 + 24));
	if (!v9 || !(*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v9 + 1056i64))(v9, v8))
		goto LABEL_11;
	v10 = *(_QWORD*)(a1 + 24);
	LODWORD(v50[0]) = 0;
	v11 = *(_QWORD*)(v10 + 16);
	if (v11)
	{
		if (!(*(unsigned int(__fastcall**)(__int64, __int64*))(*(_QWORD*)v11 + 240i64))(v11, v50))
			goto LABEL_11;
		sub_1400493B0(v10);
	}
	if ((*(unsigned int(__fastcall**)(_QWORD, __int64*))(**(_QWORD**)(v10 + 24) + 32i64))(*(_QWORD*)(v10 + 24), v50))
	{
		v12 = 1;
		sub_1400491B0(*(_QWORD*)(a1 + 24), a4);
		goto LABEL_12;
	}
LABEL_11:
	v12 = 0;
LABEL_12:
	v13 = *(_QWORD**)(a1 + 416);
	v14 = (_QWORD*)v13[2];
	while (v14 != v13)
	{
		sub_1400491B0(v14[5], a4);
		v15 = v14[3];
		if (v15)
		{
			v14 = (_QWORD*)v14[3];
			for (i = *(_QWORD**)(v15 + 16); i; i = (_QWORD*)i[2])
				v14 = i;
		}
		else
		{
			for (j = v14[1]; v14 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
				v14 = (_QWORD*)j;
			if (v14[3] != j)
				v14 = (_QWORD*)j;
		}
	}
	LODWORD(v49) = *(_DWORD*)(a1 + 36);
	if (v12
		&& (v18 = *(_DWORD*)(a1 + 32),
			(v19 = (_QWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 24) + 24i64) + 328i64))(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 24i64))) != 0i64)
		&& (v20 = (__m128*)(a1 + 176),
			(*(int(__fastcall**)(_QWORD*, _QWORD, _QWORD, __int64*, __int64, __int64, __int64, __int64))(*v19 + 1064i64))(
				v19,
				v18,
				*v19,
				&v49,
				a1 + 40,
				a1 + 48,
				a1 + 112,
				a1 + 176) >= 0)
		&& (int)sub_1400482B0((float*)(a1 + 112)) >= 0)
	{
		if (a3 >= 1.7777778)
			goto LABEL_30;
		v21 = (unsigned int)v49;
		*(float*)&v21 = sub_1408FD8A4(*(float*)&v49 * 0.5);
		*(float*)&v21 = sub_140934E10(*(float*)&v21 * (float)((float)(1.0 / a3) * 1.7777778));
		v22 = *(float*)(a1 + 40);
		v23 = *(float*)(a1 + 44);
		HIDWORD(v24) = HIDWORD(v21);
		*(float*)&v49 = *(float*)&v21 * 2.0;
		*(float*)&v24 = (float)(*(float*)&v21 * 2.0) * 0.5;
		v25 = sub_1408FC950(v24);
		*(float*)&v21 = sub_1408FE3D0(v24);
		*(_QWORD*)(a1 + 180) = 0i64;
		*(_QWORD*)(a1 + 188) = 0i64;
		*(_QWORD*)(a1 + 200) = 0i64;
		*(_QWORD*)(a1 + 208) = 0i64;
		*(_DWORD*)(a1 + 220) = -1082130432;
		v26 = v25 / *(float*)&v21;
		*(_QWORD*)(a1 + 224) = 0i64;
		v27 = v23 / (float)(v22 - v23);
		*(float*)(a1 + 196) = v26;
		*(float*)(a1 + 216) = v27;
		v20->m128_f32[0] = v26 * (float)(1.0 / a3);
		*(float*)(a1 + 232) = v27 * v22;
	}
	else
	{
		*(_QWORD*)&v28 = *(unsigned int*)(a1 + 36);
		v20 = (__m128*)(a1 + 176);
		*(float*)&v28 = *(float*)&v28 * 0.5;
		v29 = sub_1408FC950(v28);
		v30 = sub_1408FE3D0(v28);
		*(_QWORD*)(a1 + 180) = 0i64;
		*(_QWORD*)(a1 + 188) = 0i64;
		*(_QWORD*)(a1 + 200) = 0i64;
		*(_QWORD*)(a1 + 208) = 0i64;
		v31 = v29 / v30;
		*(float*)(a1 + 196) = v31;
		*(float*)(a1 + 176) = v31 / a3;
		v32 = *(float*)(a1 + 44);
		v33 = *(float*)(a1 + 40);
		*(_DWORD*)(a1 + 220) = -1082130432;
		*(_QWORD*)(a1 + 224) = 0i64;
		v34 = v32 / (float)(v33 - v32);
		*(float*)(a1 + 216) = v34;
		*(float*)(a1 + 232) = *(float*)(a1 + 40) * v34;
	}
	v20[3].m128_i32[3] = 0;
LABEL_30:
	v51[0] = v20;
	sub_1401AFC20((__int64*)v51, (double*)(a1 + 240));
	v50[1] = (__int64)v20;
	v51[1] = v20;
	v50[0] = a1 + 48;
	v51[0] = (__m128*)(a1 + 48);
	sub_1401AFB10(v51, (__m128*)(a1 + 304));
	if (a1 != -384)
		*(_DWORD*)(a1 + 384) = *(_DWORD*)(a4 + 88);
	v35 = *(_QWORD*)(a1 + 392);
	if (v35)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v35 + 56i64))(v35, a1 + 160);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 392) + 480i64))(*(_QWORD*)(a1 + 392));
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65848 + 80i64))(qword_140C65848, a1 + 112);
	v36 = *(_DWORD*)(a1 + 460);
	if (*(_DWORD*)(a1 + 456) != v36 && v36)
	{
		v37 = *(_QWORD*)(a1 + 416);
		v38 = v37;
		v39 = *(_QWORD*)(v37 + 8);
		while (v39)
		{
			if (*(_DWORD*)(v39 + 32) < v36)
			{
				v39 = *(_QWORD*)(v39 + 24);
			}
			else
			{
				v38 = v39;
				v39 = *(_QWORD*)(v39 + 16);
			}
		}
		if (v38 == v37 || (v50[0] = v38, v36 < *(_DWORD*)(v38 + 32)))
			v50[0] = v37;
		v40 = v50[0];
		if (v50[0] != v37)
		{
			v41 = *(_QWORD*)(*(_QWORD*)(v50[0] + 40) + 24i64);
			if (v41)
			{
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v41 + 248i64))(v41, 0i64);
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v41 + 232i64))(v41, 0i64);
			}
			sub_1400EA3E0(a4, "ActorMouseExit", byte_1409D11E4, *(_QWORD*)(v40 + 40));
		}
	}
	v42 = *(_DWORD*)(a1 + 456);
	if (v42 != *(_DWORD*)(a1 + 460) && v42)
	{
		v43 = *(_QWORD*)(a1 + 416);
		v44 = v43;
		v45 = *(_QWORD*)(v43 + 8);
		while (v45)
		{
			if (*(_DWORD*)(v45 + 32) < v42)
			{
				v45 = *(_QWORD*)(v45 + 24);
			}
			else
			{
				v44 = v45;
				v45 = *(_QWORD*)(v45 + 16);
			}
		}
		if (v44 == v43 || (v50[0] = v44, v42 < *(_DWORD*)(v44 + 32)))
			v50[0] = v43;
		v46 = v50[0];
		if (v50[0] != v43)
		{
			v47 = *(_QWORD*)(*(_QWORD*)(v50[0] + 40) + 24i64);
			if (v47)
			{
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v47 + 248i64))(v47, 1i64);
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v47 + 232i64))(v47, 1i64);
			}
			sub_1400EA3E0(a4, "ActorMouseEnter", byte_1409D1274, *(_QWORD*)(v46 + 40));
		}
	}
	return 0i64;
}
// 1409D11E4: using guessed type _BYTE byte_1409D11E4[25];
// 1409D1274: using guessed type _BYTE byte_1409D1274[2];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65848: using guessed type __int64 qword_140C65848;

