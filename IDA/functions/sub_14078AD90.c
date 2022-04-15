//----- (000000014078AD90) ----------------------------------------------------
__int64 __fastcall sub_14078AD90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v4; // rcx
	int v6; // [rsp+60h] [rbp+8h] BYREF
	int v7; // [rsp+64h] [rbp+Ch]

	v4 = *(_QWORD*)(a1 + 96);
	v6 = 0;
	v7 = 1065353216;
	return (*(__int64(__fastcall**)(__int64, __int64, __int64, int*, int, __int64, _DWORD, _DWORD, _QWORD, int))(*(_QWORD*)v4 + 1328i64))(
		v4,
		a2,
		a3,
		&v6,
		2,
		a4,
		0,
		0,
		0i64,
		1);
}

