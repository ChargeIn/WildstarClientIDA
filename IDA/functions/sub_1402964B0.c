//----- (00000001402964B0) ----------------------------------------------------
__int64 __fastcall sub_1402964B0(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v3; // rax
	__int64 v5; // r10
	int v7; // ecx
	__int64 v8; // rdi
	__int64 v9; // rax
	unsigned int v10; // edx
	__int64 v11; // rdi
	unsigned int* v12; // rcx
	__int64 v13; // r11
	__int64 v14; // r10
	__int64 v15; // rax

	v3 = *((_QWORD*)a3 + 1);
	v5 = v3 + a2;
	if ((unsigned __int64)(v3 + a2) < *a1)
		return 2147500037i64;
	v7 = *a3;
	v8 = 16i64 * *a3;
	if ((unsigned __int64)(a2 + v8 + v3) > a1[1])
		return 2147500037i64;
	v9 = 0i64;
	if (v7)
		v9 = v5;
	v10 = 0;
	*((_QWORD*)a3 + 1) = v9;
	v11 = v9 + ((v8 + 15) & 0xFFFFFFFFFFFFFFF0ui64);
	if (!v7)
		return 0i64;
	while (1)
	{
		v12 = (unsigned int*)(*((_QWORD*)a3 + 1) + a1[2] + 16i64 * v10);
		v13 = *((_QWORD*)v12 + 1);
		if ((unsigned __int64)(v13 + v11) < *a1)
			break;
		v14 = *v12;
		if ((unsigned __int64)(v11 + v13 + v14) > a1[1])
			break;
		v15 = 0i64;
		if ((_DWORD)v14)
			v15 = v13 + v11;
		++v10;
		*((_QWORD*)v12 + 1) = v15;
		if (v10 >= *a3)
			return 0i64;
	}
	return 2147500037i64;
}

