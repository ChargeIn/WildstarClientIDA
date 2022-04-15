//----- (00000001402C9130) ----------------------------------------------------
__int64 __fastcall sub_1402C9130(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 v4; // rcx
	__int64 v5; // r11
	__int64 v6; // r10
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // r10
	__int64 result; // rax

	v4 = *(_QWORD*)(a3 + 32);
	v5 = v4 + a2;
	if ((unsigned __int64)(v4 + a2) < *a1)
		return 2147500037i64;
	v6 = *(unsigned int*)(a3 + 24);
	if ((unsigned __int64)(a2 + v4 + 48 * v6) > a1[1])
		return 2147500037i64;
	v7 = 0i64;
	v8 = 0i64;
	if ((_DWORD)v6)
		v8 = v5;
	*(_QWORD*)(a3 + 32) = v8;
	v9 = *(_QWORD*)(a3 + 48);
	if ((unsigned __int64)(v9 + a2) < *a1)
		return 2147500037i64;
	v10 = *(unsigned int*)(a3 + 40);
	if ((unsigned __int64)(a2 + v9 + v10) > a1[1])
		return 2147500037i64;
	if ((_DWORD)v10)
		v7 = v9 + a2;
	result = 0i64;
	*(_QWORD*)(a3 + 48) = v7;
	return result;
}

