//----- (000000014025AB90) ----------------------------------------------------
__int64 __fastcall sub_14025AB90(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v6; // r8
	int v8; // [rsp+30h] [rbp-68h] BYREF
	__int64 v9; // [rsp+38h] [rbp-60h]
	int v10; // [rsp+44h] [rbp-54h]
	int v11; // [rsp+48h] [rbp-50h] BYREF
	__int64 v12; // [rsp+50h] [rbp-48h]
	int v13; // [rsp+5Ch] [rbp-3Ch]
	int v14; // [rsp+60h] [rbp-38h] BYREF
	__int64 v15; // [rsp+68h] [rbp-30h]
	int v16; // [rsp+74h] [rbp-24h]
	int v17; // [rsp+78h] [rbp-20h] BYREF
	__int64 v18; // [rsp+80h] [rbp-18h]
	int v19; // [rsp+8Ch] [rbp-Ch]

	v1 = *(_QWORD*)(a1 + 2376);
	v17 = 1;
	v8 = 1;
	v9 = v1;
	v2 = *(_QWORD*)(a1 + 2368);
	v11 = 1;
	v12 = v2;
	v3 = *(_QWORD*)(a1 + 2360);
	v14 = 1;
	v15 = v3;
	v4 = *(_QWORD*)(a1 + 2352);
	v10 = 0;
	v13 = 0;
	v16 = 0;
	v18 = v4;
	v19 = 0;
	(*(void(__fastcall**)(__int64, int*, int*, int*, int*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v17,
		&v14,
		&v11,
		&v8);
	v6 = *(unsigned int*)(a1 + 2396);
	v18 = *(_QWORD*)(a1 + 2384);
	v17 = 1;
	v19 = 0;
	(*(void(__fastcall**)(__int64, int*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(qword_140C65670, &v17, v6);
	return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, a1 + 2328);
}
// 140C65670: using guessed type __int64 qword_140C65670;

