//----- (000000014077CB20) ----------------------------------------------------
__int64 __fastcall sub_14077CB20(__int64 a1, int a2, int a3)
{
	unsigned __int64 v4; // rsi
	_QWORD* v5; // rbx
	__int64 v6; // rcx
	__int64* v8; // rbx
	__int64 v9; // rbx
	unsigned __int64 v10; // rax
	int v11; // eax
	unsigned int v12; // eax
	__int64 v13; // rdx
	int v14; // r8d
	__int64 v15; // rcx
	int v16; // [rsp+30h] [rbp+8h] BYREF
	int v17; // [rsp+34h] [rbp+Ch]

	v16 = a2;
	v17 = a3;
	v4 = (*(__int64(__fastcall**)(int*))(a1 + 24))(&v16);
	v5 = *(_QWORD**)(*(_QWORD*)(a1 + 16) + 8 * (v4 % *(_QWORD*)(a1 + 8)));
	if (!v5)
		return 0i64;
	while (v4 != *v5 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 32))(&v16, v5 + 2))
	{
		v5 = (_QWORD*)v5[1];
		if (!v5)
			return 0i64;
	}
	v8 = v5 + 3;
	if (!v8)
		return 0i64;
	v9 = *v8;
	v10 = *(_QWORD*)(v9 + 16);
	switch (v10)
	{
	case 0ui64:
		return 0i64;
	case 1ui64:
		return sub_14077CC50(v6, **(_DWORD**)(v9 + 8));
	case 2ui64:
		v11 = sub_1401AE6A0(0, 1);
		return sub_14077CC50(v11, *(_DWORD*)(*(_QWORD*)(v9 + 8) + 4i64 * v11));
	default:
		if (*(_QWORD*)v9 >= v10)
			*(_QWORD*)v9 = 0i64;
		v12 = sub_1401AE6F0(*(_DWORD*)v9, (int)v10 - 1);
		v13 = *(_QWORD*)(v9 + 8);
		v14 = *(_DWORD*)(v13 + 4i64 * *(_QWORD*)v9);
		*(_DWORD*)(v13 + 4i64 * *(_QWORD*)v9) = *(_DWORD*)(v13 + 4i64 * v12);
		*(_DWORD*)(*(_QWORD*)(v9 + 8) + 4i64 * v12) = v14;
		v15 = (*(_QWORD*)v9)++;
		return sub_14077CC50(v15, *(_DWORD*)(*(_QWORD*)(v9 + 8) + 4 * v15));
	}
}
// 14077CBAE: variable 'v6' is possibly undefined

