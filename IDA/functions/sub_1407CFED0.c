#include "../winhttp.h"

//----- (00000001407CFED0) ----------------------------------------------------
const void**** __fastcall sub_1407CFED0(__int64 a1, __int64 a2, __int128* a3)
{
	float v3; // xmm1_4
	float v4; // xmm2_4
	float v7; // xmm6_4
	float v8; // xmm0_4
	float v9; // xmm2_4
	__int128 v10; // xmm1
	__int128 v11; // xmm0
	int* v12; // rax
	int v13; // xmm7_4
	int v14; // xmm8_4
	__int64 v15; // rax
	__int64 v16; // rcx
	const void*** v17; // rdx
	__int64 v19; // [rsp+48h] [rbp-C0h] BYREF
	_OWORD v20[3]; // [rsp+58h] [rbp-B0h] BYREF
	int v21; // [rsp+88h] [rbp-80h]
	__int64 v22; // [rsp+8Ch] [rbp-7Ch]
	int v23; // [rsp+94h] [rbp-74h]
	double v24[8]; // [rsp+98h] [rbp-70h] BYREF
	int v25[4]; // [rsp+D8h] [rbp-30h] BYREF
	unsigned __int64 v26; // [rsp+E8h] [rbp-20h]
	_QWORD v27[18]; // [rsp+F8h] [rbp-10h] BYREF
	__int64 v28[10]; // [rsp+188h] [rbp+80h] BYREF

	v3 = *(float*)(a2 + 40);
	v4 = *(float*)(a2 + 56);
	v7 = 0.0;
	v28[0] = (__int64)v20;
	v8 = v4 / v3;
	v9 = v4 / (float)(v3 + 1.0);
	v20[1] = a3[1];
	v10 = a3[3];
	*(float*)&v19 = v8 - 0.0000099999997;
	v11 = *a3;
	v23 = HIDWORD(v10);
	v22 = 0i64;
	v21 = 0;
	*((float*)&v19 + 1) = v9;
	v20[0] = v11;
	v20[2] = a3[2];
	sub_1401AFC20(v28, v24);
	v12 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v25[0] = *v12;
	v25[1] = v12[1];
	v25[2] = v12[2];
	v25[3] = v12[3];
	v13 = v12[4];
	LODWORD(v26) = v13;
	v14 = v12[5];
	v26 = 0i64;
	(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, v25);
	v15 = *(_QWORD*)(a1 + 1328);
	v16 = 0i64;
	if (v15)
	{
		do
		{
			if (*(float*)(v15 + 268) > v7)
			{
				v7 = *(float*)(v15 + 268);
				v16 = v15;
			}
			v15 = *(_QWORD*)(v15 + 136);
		} while (v15);
		if (v16)
			(*(void(__fastcall**)(__int64, __int64, _OWORD*))(*(_QWORD*)v16 + 168i64))(v16, a2, v20);
	}
	(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 2984) + 48i64))(
		*(_QWORD*)(a1 + 2984),
		*(unsigned int*)(a1 + 1320),
		0i64);
	(*(void(__fastcall**)(_QWORD, _OWORD*, double*, __int64*, _DWORD))(**(_QWORD**)(a1 + 2984) + 80i64))(
		*(_QWORD*)(a1 + 2984),
		v20,
		v24,
		&v19,
		0);
	sub_1407C1FE0(v27);
	(*(void(__fastcall**)(_QWORD, _QWORD*, __int64, __int64, _DWORD, int, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 2984) + 120i64))(
		*(_QWORD*)(a1 + 2984),
		v27,
		a2,
		a1 + 1344,
		0,
		3,
		0i64,
		0i64,
		v19);
	if (v27[13])
		sub_1407C2170(v27, 5, 0xFFFFFFFF);
	v26 = __PAIR64__(v14, v13);
	(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, v25);
	return sub_1407C20B0((__int64)v27, v17);
}
// 1407D00EF: variable 'v17' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C65670: using guessed type __int64 qword_140C65670;
// 1407CFED0: using guessed type double var_190[8];
// 1407CFED0: using guessed type __int64 var_A0[10];

