//----- (00000001402CA460) ----------------------------------------------------
__int64 __fastcall sub_1402CA460(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v4; // r8
	__int64 result; // rax
	__int64 v7; // rcx
	unsigned int v8; // ebx
	__int64 v9; // rax
	__int64 v10; // rbp

	v4 = *((_QWORD*)a3 + 1);
	if ((unsigned __int64)(v4 + a2) < *a1)
		return 2147500037i64;
	v7 = *a3;
	if ((unsigned __int64)(a2 + v4 + 40 * v7) > a1[1])
		return 2147500037i64;
	v8 = 0;
	v9 = 0i64;
	if ((_DWORD)v7)
		v9 = v4 + a2;
	*((_QWORD*)a3 + 1) = v9;
	v10 = v9 + ((40 * v7 + 15) & 0xFFFFFFFFFFFFFFF0ui64);
	if (!(_DWORD)v7)
		return 0i64;
	while (1)
	{
		result = sub_1402C9080(a1, v10, *((_QWORD*)a3 + 1) + a1[2] + 40i64 * v8);
		if ((int)result < 0)
			break;
		if (++v8 >= *a3)
			return 0i64;
	}
	return result;
}

