//----- (00000001402D2D00) ----------------------------------------------------
__int64 __fastcall sub_1402D2D00(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v3; // rax
	__int64 v4; // r10
	__int64 v5; // r11
	__int64 v6; // r9
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // r11
	__int64 v10; // r10
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // r10
	__int64 result; // rax

	v3 = *((_QWORD*)a3 + 1);
	v4 = v3 + a2;
	if ((unsigned __int64)(v3 + a2) < *a1)
		return 2147500037i64;
	v5 = *a3;
	if ((unsigned __int64)(a2 + v3 + 8 * v5) > a1[1])
		return 2147500037i64;
	v6 = 0i64;
	v7 = 0i64;
	if ((_DWORD)v5)
		v7 = v4;
	*((_QWORD*)a3 + 1) = v7;
	v8 = *((_QWORD*)a3 + 3);
	v9 = v8 + a2;
	if ((unsigned __int64)(v8 + a2) < *a1)
		return 2147500037i64;
	v10 = a3[4];
	if ((unsigned __int64)(a2 + v8 + 8 * v10) > a1[1])
		return 2147500037i64;
	v11 = 0i64;
	if ((_DWORD)v10)
		v11 = v9;
	*((_QWORD*)a3 + 3) = v11;
	v12 = *((_QWORD*)a3 + 5);
	if ((unsigned __int64)(v12 + a2) < *a1)
		return 2147500037i64;
	v13 = a3[8];
	if ((unsigned __int64)(a2 + v12 + 4 * v13) > a1[1])
		return 2147500037i64;
	if ((_DWORD)v13)
		v6 = v12 + a2;
	result = 0i64;
	*((_QWORD*)a3 + 5) = v6;
	return result;
}

