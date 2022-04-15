//----- (00000001407D7A20) ----------------------------------------------------
__int64 __fastcall sub_1407D7A20(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v3; // rax
	__int64 v6; // r11
	__int64 result; // rax
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // rbx
	__int64 v11; // rax

	v3 = *((_QWORD*)a3 + 1);
	v6 = v3 + a2;
	if ((unsigned __int64)(v3 + a2) < *a1)
		return 2147500037i64;
	v8 = *a3;
	if ((unsigned __int64)(a2 + v3 + 4 * v8) > a1[1])
		return 2147500037i64;
	v9 = 0i64;
	v10 = *((_QWORD*)a3 + 2);
	v11 = 0i64;
	if ((_DWORD)v8)
		v11 = v6;
	*((_QWORD*)a3 + 1) = v11;
	if ((unsigned __int64)(v10 + a2) < *a1 || (unsigned __int64)(a2 + v10 + 96 * v8) > a1[1])
		return 2147500037i64;
	if ((_DWORD)v8)
		v9 = v10 + a2;
	result = 0i64;
	*((_QWORD*)a3 + 2) = v9;
	return result;
}

