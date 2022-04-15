//----- (00000001407CEC10) ----------------------------------------------------
const void**** __fastcall sub_1407CEC10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
	float v6; // xmm1_4
	_QWORD* v7; // rbx
	float v12; // xmm2_4
	const void*** v13; // rdx
	__int64 v15; // [rsp+40h] [rbp-E8h] BYREF
	_QWORD v16[18]; // [rsp+50h] [rbp-D8h] BYREF

	v6 = *(float*)(a2 + 40);
	v7 = *(_QWORD**)(a1 + 1328);
	v12 = *(float*)(a2 + 56) / (float)(v6 + 1.0);
	*(float*)&v15 = (float)(*(float*)(a2 + 56) / v6) - 0.0000099999997;
	for (*((float*)&v15 + 1) = v12; v7; v7 = (_QWORD*)v7[17])
		(*(void(__fastcall**)(_QWORD*, __int64))(*v7 + 152i64))(v7, a5);
	(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 3000) + 48i64))(
		*(_QWORD*)(a1 + 3000),
		*(unsigned int*)(a1 + 1320),
		0i64);
	(*(void(__fastcall**)(_QWORD, __int64, __int64, __int64*, _DWORD))(**(_QWORD**)(a1 + 3000) + 80i64))(
		*(_QWORD*)(a1 + 3000),
		a3,
		a4,
		&v15,
		0);
	sub_1407C1FE0(v16);
	(*(void(__fastcall**)(_QWORD, _QWORD*, __int64, __int64, _DWORD, int, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 3000) + 120i64))(
		*(_QWORD*)(a1 + 3000),
		v16,
		a2,
		a6,
		0,
		3,
		0i64,
		0i64,
		v15);
	if (v16[13])
		sub_1407C2170(v16, 5, 1u);
	return sub_1407C20B0((__int64)v16, v13);
}
// 1407CED37: variable 'v13' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;

