//----- (00000001407CFCB0) ----------------------------------------------------
const void**** __fastcall sub_1407CFCB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	float v4; // xmm1_4
	int v9; // xmm2_4
	int* v10; // rax
	float v11; // xmm6_4
	int v12; // xmm7_4
	int v13; // xmm8_4
	__int64 v14; // rax
	__int64 v15; // rcx
	const void*** v16; // rdx
	int v18[2]; // [rsp+40h] [rbp-118h] BYREF
	int v19[4]; // [rsp+48h] [rbp-110h] BYREF
	unsigned __int64 v20; // [rsp+58h] [rbp-100h]
	_QWORD v21[18]; // [rsp+60h] [rbp-F8h] BYREF

	v4 = *(float*)(a2 + 40);
	*(float*)&v9 = *(float*)(a2 + 56) / (float)(v4 + 1.0);
	*(float*)v18 = (float)(*(float*)(a2 + 56) / v4) - 0.0000099999997;
	v18[1] = v9;
	v10 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v11 = 0.0;
	v19[0] = *v10;
	v19[1] = v10[1];
	v19[2] = v10[2];
	v19[3] = v10[3];
	v12 = v10[4];
	LODWORD(v20) = v12;
	v13 = v10[5];
	v20 = 0i64;
	(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, v19);
	v14 = *(_QWORD*)(a1 + 1328);
	v15 = 0i64;
	if (v14)
	{
		do
		{
			if ((float)(*(float*)(v14 + 468) * *(float*)(v14 + 264)) > v11)
			{
				v11 = *(float*)(v14 + 468) * *(float*)(v14 + 264);
				v15 = v14;
			}
			v14 = *(_QWORD*)(v14 + 136);
		} while (v14);
		if (v15)
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v15 + 160i64))(v15, a2, a3);
	}
	(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 2984) + 48i64))(
		*(_QWORD*)(a1 + 2984),
		*(unsigned int*)(a1 + 1320),
		0i64);
	(*(void(__fastcall**)(_QWORD, __int64, __int64, int*, _DWORD))(**(_QWORD**)(a1 + 2984) + 80i64))(
		*(_QWORD*)(a1 + 2984),
		a3,
		a4,
		v18,
		0);
	sub_1407C1FE0(v21);
	(*(void(__fastcall**)(_QWORD, _QWORD*, __int64, __int64, _DWORD, int, _QWORD, _QWORD))(**(_QWORD**)(a1 + 2984)
		+ 120i64))(
			*(_QWORD*)(a1 + 2984),
			v21,
			a2,
			a1 + 1344,
			0,
			3,
			0i64,
			0i64);
	if (v21[13])
		sub_1407C2170(v21, 5, 0xFFFFFFFF);
	v20 = __PAIR64__(v13, v12);
	(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, v19);
	return sub_1407C20B0((__int64)v21, v16);
}
// 1407CFE8F: variable 'v16' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C65670: using guessed type __int64 qword_140C65670;

