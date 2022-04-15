//----- (000000014030B3E0) ----------------------------------------------------
__int64 __fastcall sub_14030B3E0(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v3; // rax
	__int64 v4; // r11
	__int64 v5; // r10
	__int64 v6; // r9
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // r11
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // r11
	__int64 v13; // r10
	__int64 v14; // rax
	__int64 v15; // rax
	__int64 result; // rax

	v3 = *((_QWORD*)a3 + 1);
	v4 = v3 + a2;
	if ((unsigned __int64)(v3 + a2) < *a1)
		return 2147500037i64;
	v5 = *a3;
	if ((unsigned __int64)(a2 + v3 + 4 * v5) > a1[1])
		return 2147500037i64;
	v6 = 0i64;
	v7 = 0i64;
	if ((_DWORD)v5)
		v7 = v4;
	*((_QWORD*)a3 + 1) = v7;
	v8 = *((_QWORD*)a3 + 2);
	v9 = v8 + a2;
	if ((unsigned __int64)(v8 + a2) < *a1 || (unsigned __int64)(a2 + v8 + 2 * v5) > a1[1])
		return 2147500037i64;
	v10 = 0i64;
	if ((_DWORD)v5)
		v10 = v9;
	*((_QWORD*)a3 + 2) = v10;
	v11 = *((_QWORD*)a3 + 4);
	v12 = v11 + a2;
	if ((unsigned __int64)(v11 + a2) < *a1)
		return 2147500037i64;
	v13 = a3[6];
	if ((unsigned __int64)(a2 + v11 + 4 * v13) > a1[1])
		return 2147500037i64;
	v14 = 0i64;
	if ((_DWORD)v13)
		v14 = v12;
	*((_QWORD*)a3 + 4) = v14;
	v15 = *((_QWORD*)a3 + 5);
	if ((unsigned __int64)(v15 + a2) < *a1 || (unsigned __int64)(a2 + v15 + 2 * v13) > a1[1])
		return 2147500037i64;
	if ((_DWORD)v13)
		v6 = v15 + a2;
	result = 0i64;
	*((_QWORD*)a3 + 5) = v6;
	return result;
}

