//----- (00000001400461E0) ----------------------------------------------------
__int64 __fastcall sub_1400461E0(__int64 a1, __int64 a2)
{
	char v4; // di
	int* v5; // rsi
	__int64 v6; // rax
	__int64 v7; // rsi
	__int64 v8; // rcx
	_DWORD* v9; // rcx
	__int64 v10; // r8
	__int64 v11; // rdx
	__int64 result; // rax
	char v13[32]; // [rsp+30h] [rbp-A8h] BYREF
	__int64 v14; // [rsp+50h] [rbp-88h]

	v4 = 0;
	v5 = sub_14018B280(160i64, 0);
	if (v5)
	{
		v4 = 1;
		v6 = sub_140334BB0((__int64)v13, *(_DWORD*)(a2 + 20), *(_WORD*)(a2 + 24));
		v7 = sub_140029F00((__int64)v5, 1, v6);
	}
	else
	{
		v7 = 0i64;
	}
	v8 = *(_QWORD*)(a1 + 184);
	if (v8 != v7)
	{
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		*(_QWORD*)(a1 + 184) = v7;
	}
	if ((v4 & 1) != 0 && v14)
		sub_14018B900(v14, 0);
	v9 = (_DWORD*)qword_140C635F0;
	*(_DWORD*)(qword_140C635F0 + 5688) = *(_DWORD*)(a2 + 4);
	v9[1423] = *(_DWORD*)(a2 + 8);
	v9[1424] = *(_DWORD*)(a2 + 12);
	v9[1425] = *(_DWORD*)(a2 + 16);
	sub_140011800((__int64)v9, *(int**)(a2 + 32));
	v10 = qword_140C635F0;
	*(_DWORD*)(qword_140C635F0 + 5764) = *(_DWORD*)(a2 + 40);
	*(_DWORD*)(v10 + 5768) = *(_DWORD*)(a2 + 44);
	*(_DWORD*)(v10 + 5772) = *(_DWORD*)(a2 + 48);
	result = sub_14002A050(*(_QWORD*)(a1 + 184), v11, *(_QWORD*)(v10 + 5680));
	if ((int)result >= 0)
	{
		*(_DWORD*)(a1 + 168) = 2;
		sub_14003E470(a1, 516354, 0i64);
		return 0i64;
	}
	return result;
}
// 1400462E9: variable 'v11' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 1400461E0: using guessed type char var_A8[32];

