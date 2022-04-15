#include "../winhttp.h"

//----- (00000001403DAB40) ----------------------------------------------------
void __fastcall sub_1403DAB40(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, unsigned int a6, int a7)
{
	unsigned __int8 v9; // r15d^2
	int v10; // ebx
	float v11; // xmm7_4
	unsigned int v12; // ebp
	int v13; // r14d
	__int64 v14; // rsi
	int v15; // eax
	unsigned int v16; // r12d
	__int64 v17; // rcx
	unsigned int v18; // edx
	__int64 v19; // rax
	int v20; // eax
	__int64 v21; // rax
	int* v22; // rax
	int* v23; // rbx
	float v24; // xmm6_4
	float v25; // xmm0_4
	bool v26; // zf
	__int64* v27; // rcx
	__int64 v28; // rax
	__int64 v29; // rax
	__int128 v30; // xmm1
	__int128 v31; // xmm0
	__int128 v32; // xmm1
	__int64 v33; // rbx
	__int64 v34; // rax
	int* v35; // rax
	__int64 v36; // rax
	unsigned __int64 v37; // rcx
	__int64 v38; // r10
	int* v39; // rbx
	__int64 v40; // rax
	__int64 v41; // rcx
	int* v42; // rbx
	int v43[4]; // [rsp+80h] [rbp-A8h] BYREF
	__m256 v44; // [rsp+90h] [rbp-98h] BYREF
	__int128 v45; // [rsp+B0h] [rbp-78h]
	__int128 v46; // [rsp+C0h] [rbp-68h]
	int* v48; // [rsp+138h] [rbp+10h] BYREF

	if (!a2 || !a3)
		return;
	v9 = BYTE2(a7);
	v10 = 8;
	if (a7)
		v10 = BYTE2(a7);
	v11 = 1.0;
	v12 = a6;
	v13 = a5;
	v14 = 0i64;
	v48 = 0i64;
	v15 = *(_DWORD*)(a2 + 128);
	v44 = ymmword_140C78390;
	v16 = 3898;
	v45 = xmmword_140C783B0;
	v46 = xmmword_140C783C0;
	if (v15 != 18 || (v17 = *(_QWORD*)(a2 + 13976)) == 0)
	{
		if (*(_QWORD*)(a2 + 5864) && v15 == 8)
		{
			v24 = *(float*)(a2 + 3724);
			v25 = sub_14047A940((_QWORD*)a2);
			v26 = (*(_DWORD*)(a2 + 40) & 0x8000) == 0;
			v27 = *(__int64**)(a2 + 5864);
			*(_BYTE*)(a2 + 433) = 1;
			v28 = *v27;
			v11 = v25 * v24;
			if (v26)
			{
				v16 = 3956;
				v23 = (int*)(*(__int64 (**)(void))(v28 + 48))();
			}
			else
			{
				v29 = (*(__int64 (**)(void))(v28 + 48))();
				v30 = *(_OWORD*)(a2 + 4544);
				v23 = v48;
				v14 = v29;
				*(_OWORD*)v44.m256_f32 = *(_OWORD*)(a2 + 4528);
				v31 = *(_OWORD*)(a2 + 4560);
				*(_OWORD*)&v44.m256_f32[4] = v30;
				v32 = *(_OWORD*)(a2 + 4576);
				v45 = v31;
				v46 = v32;
			}
		}
		else
		{
			v33 = qword_140C65918;
			v34 = sub_1404835C0(qword_140C65918, a4);
			if (v34
				&& *(_DWORD*)(v34 + 348)
				&& (v35 = sub_140484600(v33 + 80, (int*)(v34 + 348)), (v36 = sub_1404846C0((__int64)v35)) != 0))
			{
				v37 = *(_QWORD*)(v36 + 8);
				if (v37)
				{
					v23 = v48;
					if (v37 <= qword_140C3FE70)
						v14 = v37 + qword_140C3FE68;
				}
				else
				{
					v23 = v48;
				}
			}
			else
			{
				v23 = 0i64;
			}
		}
		goto LABEL_42;
	}
	v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 48i64))(v17);
	if (v10 != 8)
		goto LABEL_25;
	switch (v13)
	{
	case 0:
		v18 = v12;
	LABEL_17:
		v22 = sub_1400B5DF0(qword_140C658F0, v18, 0i64);
		if (!v22)
			goto LABEL_26;
		v10 = v22[86];
		break;
	case 6:
		v19 = sub_140248AC0(v12);
		if (!v19 || (v20 = *(_DWORD*)(v19 + 28)) == 0)
		{
		LABEL_26:
			if (v10 < *(_DWORD*)(qword_140C658F0 + 360))
				v11 = *(float*)(*(_QWORD*)(qword_140C658F0 + 352) + 4i64 * v10);
			goto LABEL_28;
		}
		v10 = v20;
		break;
	case 8:
		v21 = sub_1401E8C20(v12);
		if (!v21)
			goto LABEL_26;
		v18 = *(_DWORD*)(v21 + 8);
		goto LABEL_17;
	case 9:
		if (v12 == 6)
		{
			v10 = 7;
		}
		else
		{
			v10 = 4;
			if (v12 != 9)
				v10 = 0;
		}
		break;
	default:
		goto LABEL_26;
	}
LABEL_25:
	if (v10)
		goto LABEL_26;
LABEL_28:
	v23 = v48;
LABEL_42:
	v38 = sub_140237680(v16);
	if (v38)
	{
		v48 = 0i64;
		sub_1406008C0(
			a1 + 26464,
			v38,
			0,
			0,
			0,
			*(_DWORD*)(a2 + 8),
			(unsigned int*)(a2 + 4576),
			(__int64)&v44,
			*(_DWORD*)(a3 + 8),
			(__int128*)(a3 + 4576),
			v11,
			v14,
			(__int64)v23,
			(_QWORD*)(a1 + 26464),
			&v48,
			0);
		v39 = v48;
		if (v48)
		{
			v40 = sub_14001C280(a1);
			v39[358] = 0;
			*((_QWORD*)v39 + 180) = v40;
			*((_QWORD*)v39 + 181) = sub_1403DA640;
			*((_QWORD*)v39 + 182) = 0i64;
			sub_1403DA9C0((__int64)sub_1403DA640, v13, v12, v43, v9);
			v48 = 0i64;
			sub_1402D9B70(1ui64, v43, &v48);
			v41 = *((_QWORD*)v39 + 6);
			v42 = v48;
			if (v41)
				(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v41 + 384i64))(v41, v48);
			if (v42)
				(*(void(__fastcall**)(int*))(*(_QWORD*)v42 + 8i64))(v42);
		}
	}
}
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 1403DAB40: using guessed type int var_A8[4];

