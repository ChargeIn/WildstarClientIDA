//----- (00000001405D2CC0) ----------------------------------------------------
__int64 __fastcall sub_1405D2CC0(__int64 a1, __int64 a2, float a3)
{
	double v3; // xmm9_8
	float v6; // xmm6_4
	float v7; // xmm0_4
	__int64 v8; // rax
	float v9; // xmm7_4
	float v10; // xmm8_4
	float v11; // xmm6_4
	float v12; // xmm0_4
	float v13; // xmm6_4
	float v14; // xmm8_4
	__m128* v15; // r8
	_DWORD* v16; // rax
	__int64 v18; // [rsp+20h] [rbp-C8h]
	__m128* v19; // [rsp+30h] [rbp-B8h] BYREF
	__int64 v20; // [rsp+38h] [rbp-B0h]

	*(_QWORD*)&v3 = *(unsigned int*)(a1 + 20);
	if (*(_DWORD*)(qword_140C65898 + 29768))
	{
		v6 = *(float*)(qword_140C65898 + 29772);
		if (v6 != 1.0)
		{
			v7 = sub_1408FD8A4(*(float*)&v3 * 0.5);
			*(float*)&v3 = sub_140934E10(v7 * v6) * 2.0;
		}
	}
	v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 72i64))(a2);
	*(float*)&v3 = *(float*)&v3 * 0.5;
	LODWORD(v18) = *(_DWORD*)(a1 + 24);
	*((float*)&v18 + 1) = *(float*)(v8 + 12) * 1.5;
	*(_QWORD*)(a1 + 504) = v18;
	v9 = *(float*)(a1 + 504);
	v10 = *(float*)(a1 + 508);
	v11 = sub_1408FC950(v3);
	v12 = sub_1408FE3D0(v3);
	*(_DWORD*)(a1 + 268) = -1082130432;
	v13 = v11 / v12;
	*(_QWORD*)(a1 + 228) = 0i64;
	*(_QWORD*)(a1 + 236) = 0i64;
	*(_QWORD*)(a1 + 248) = 0i64;
	v14 = v10 / (float)(v9 - v10);
	*(float*)(a1 + 244) = v13;
	*(_QWORD*)(a1 + 256) = 0i64;
	*(_QWORD*)(a1 + 272) = 0i64;
	*(_DWORD*)(a1 + 284) = 0;
	v19 = (__m128*)(a1 + 224);
	*(float*)(a1 + 264) = v14;
	*(float*)(a1 + 224) = v13 / a3;
	*(float*)(a1 + 280) = v14 * v9;
	sub_1401AFC20((__int64*)&v19, (double*)(a1 + 288));
	v19 = (__m128*)(a1 + 96);
	v20 = a1 + 224;
	sub_1401AFB10(&v19, (__m128*)(a1 + 352));
	v19 = v15;
	v20 = a1 + 160;
	sub_1401AFB10(&v19, (__m128*)(a1 + 416));
	v16 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	*(_DWORD*)(a1 + 480) = *v16;
	*(_DWORD*)(a1 + 484) = v16[1];
	*(_DWORD*)(a1 + 488) = v16[2];
	*(_DWORD*)(a1 + 492) = v16[3];
	*(_DWORD*)(a1 + 496) = v16[4];
	*(_DWORD*)(a1 + 500) = v16[5];
	return 0i64;
}
// 1405D2E6F: variable 'v15' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65898: using guessed type __int64 qword_140C65898;

