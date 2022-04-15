//----- (000000014030AAB0) ----------------------------------------------------
__int64 __fastcall sub_14030AAB0(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v4; // rcx
	__int64 v5; // r10
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // r11
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // r11
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rcx
	__int64 v15; // r11
	__int64 result; // rax

	v4 = *((_QWORD*)a3 + 1);
	if ((unsigned __int64)(v4 + a2) < *a1 || a2 + v4 + 16 * (unsigned __int64)*a3 > a1[1])
		return 2147500037i64;
	v5 = 0i64;
	v6 = 0i64;
	if (*a3)
		v6 = v4 + a2;
	*((_QWORD*)a3 + 1) = v6;
	v7 = *((_QWORD*)a3 + 3);
	if ((unsigned __int64)(v7 + a2) < *a1)
		return 2147500037i64;
	v8 = a3[4];
	if ((unsigned __int64)(a2 + v7 + 12 * v8) > a1[1])
		return 2147500037i64;
	v9 = 0i64;
	if ((_DWORD)v8)
		v9 = v7 + a2;
	*((_QWORD*)a3 + 3) = v9;
	v10 = *((_QWORD*)a3 + 5);
	v11 = v10 + a2;
	if ((unsigned __int64)(v10 + a2) < *a1)
		return 2147500037i64;
	v12 = a3[8];
	if ((unsigned __int64)(a2 + v10 + 4 * v12) > a1[1])
		return 2147500037i64;
	v13 = 0i64;
	if ((_DWORD)v12)
		v13 = v11;
	*((_QWORD*)a3 + 5) = v13;
	v14 = *((_QWORD*)a3 + 7);
	if ((unsigned __int64)(v14 + a2) < *a1)
		return 2147500037i64;
	v15 = a3[12];
	if ((unsigned __int64)(a2 + v14 + 20 * v15) > a1[1])
		return 2147500037i64;
	if ((_DWORD)v15)
		v5 = v14 + a2;
	result = 0i64;
	*((_QWORD*)a3 + 7) = v5;
	return result;
}

