//----- (0000000140485D20) ----------------------------------------------------
__int64 __fastcall sub_140485D20(__int64 a1, __int64 a2, __int128* a3)
{
	__int64 v5; // rcx
	__int64 v6; // r9
	__int128 v7; // xmm1
	__int64 v8; // rcx
	__int128 v9; // xmm0
	__int128 v10; // xmm1
	__int64 v11; // rcx
	__int64 v13; // [rsp+40h] [rbp-78h] BYREF
	_BYTE v14[12]; // [rsp+48h] [rbp-70h]
	__int64 v15; // [rsp+54h] [rbp-64h]
	int v16; // [rsp+5Ch] [rbp-5Ch]
	__int128 v17[4]; // [rsp+60h] [rbp-58h] BYREF
	__int64 v18; // [rsp+A0h] [rbp-18h]

	if ((*(int(__fastcall**)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD**)(qword_140C65898 + 29264) + 40i64))(
		*(_QWORD*)(qword_140C65898 + 29264),
		a2,
		a1 + 40,
		0i64) < 0)
		return 2147500037i64;
	v5 = *(_QWORD*)(a1 + 40);
	v13 = 150i64;
	*(_DWORD*)v14 = 1065353216;
	*(_QWORD*)&v14[4] = 0i64;
	v15 = 0i64;
	v16 = 0;
	(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v5 + 584i64))(v5, 0i64, &v13);
	v6 = *(_QWORD*)(a1 + 40);
	v7 = a3[1];
	v8 = *(_QWORD*)(qword_140C65898 + 29256);
	v17[0] = *a3;
	v9 = a3[2];
	v18 = 0i64;
	v17[1] = v7;
	v10 = a3[3];
	v17[2] = v9;
	v17[3] = v10;
	if ((*(int(__fastcall**)(__int64, _QWORD, __int128*, __int64, int, _DWORD, __int64, _DWORD, __int64, _QWORD))(*(_QWORD*)v8 + 184i64))(
		v8,
		0i64,
		v17,
		v6,
		1,
		0,
		a1 + 48,
		0,
		v13,
		*(_QWORD*)v14) >= 0)
		return 0i64;
	v11 = *(_QWORD*)(a1 + 40);
	if (v11)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		*(_QWORD*)(a1 + 40) = 0i64;
	}
	return 2147500037i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

