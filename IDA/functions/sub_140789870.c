//----- (0000000140789870) ----------------------------------------------------
__int64 __fastcall sub_140789870(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	int v4; // eax
	__int64 v5; // rcx
	int v7; // [rsp+60h] [rbp+8h] BYREF
	int v8; // [rsp+64h] [rbp+Ch]

	v4 = *(_DWORD*)(a1 + 80);
	if (v4 == 10 || !v4)
		return 0i64;
	v5 = *(_QWORD*)(a1 + 96);
	v7 = 0;
	v8 = 1065353216;
	return (*(__int64(__fastcall**)(__int64, __int64, __int64, int*, int, __int64, _DWORD, _DWORD, _QWORD, int))(*(_QWORD*)v5 + 1328i64))(
		v5,
		a2,
		a3,
		&v7,
		2,
		a4,
		0,
		0,
		0i64,
		1);
}

