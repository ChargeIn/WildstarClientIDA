//----- (00000001402C8500) ----------------------------------------------------
__int64 __fastcall sub_1402C8500(_QWORD* a1, _OWORD* a2, _OWORD* a3, __int64 a4, _DWORD* a5, int* a6)
{
	__int64 i; // rdx
	_QWORD* v9; // rcx
	__int64 v10; // rcx
	__int64 j; // rcx
	_QWORD* v12; // rdx
	__int64 v13; // rdx
	__int64 k; // rax
	_QWORD* v15; // rdx
	__int64 v16; // rdx
	__int64 v17; // rax
	char v19[1024]; // [rsp+30h] [rbp-428h] BYREF

	for (i = a1[155]; i; i = a1[155])
	{
		v9 = *(_QWORD**)(i + 520);
		if (v9)
			*v9 = *(_QWORD*)(i + 528);
		v10 = *(_QWORD*)(i + 528);
		if (v10)
			*(_QWORD*)(v10 + 520) = *(_QWORD*)(i + 520);
		*(_QWORD*)(i + 520) = 0i64;
		*(_QWORD*)(i + 528) = 0i64;
	}
	for (j = a1[156]; j; j = a1[156])
	{
		v12 = *(_QWORD**)(j + 392);
		if (v12)
			*v12 = *(_QWORD*)(j + 400);
		v13 = *(_QWORD*)(j + 400);
		if (v13)
			*(_QWORD*)(v13 + 392) = *(_QWORD*)(j + 392);
		*(_QWORD*)(j + 392) = 0i64;
		*(_QWORD*)(j + 400) = 0i64;
	}
	for (k = a1[157]; k; k = a1[157])
	{
		v15 = *(_QWORD**)(k + 368);
		if (v15)
			*v15 = *(_QWORD*)(k + 376);
		v16 = *(_QWORD*)(k + 376);
		if (v16)
			*(_QWORD*)(v16 + 368) = *(_QWORD*)(k + 368);
		*(_QWORD*)(k + 368) = 0i64;
		*(_QWORD*)(k + 376) = 0i64;
	}
	v17 = sub_1402C8E20((__int64)v19, a2, a3, a4, a5, a6);
	sub_1402C8690((__int64)(a1 + 22), v17);
	return 0i64;
}
// 1402C8500: using guessed type char var_428[1024];

