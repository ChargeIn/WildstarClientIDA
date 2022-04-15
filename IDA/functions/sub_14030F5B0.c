//----- (000000014030F5B0) ----------------------------------------------------
__int64 __fastcall sub_14030F5B0(_QWORD* a1, __int64 a2, int* a3)
{
	__int64 v3; // rax
	__int64 v6; // r9
	__int64 result; // rax
	unsigned int v8; // r8d
	unsigned __int64 v9; // rcx
	unsigned int v10; // ebx
	__int64 v11; // rax
	__int64 v12; // rdx

	v3 = *((_QWORD*)a3 + 1);
	v6 = v3 + a2;
	if ((unsigned __int64)(v3 + a2) < *a1)
		return 2147500037i64;
	v8 = *a3;
	v9 = (unsigned __int64)v8 << 6;
	if (a2 + v9 + v3 > a1[1])
		return 2147500037i64;
	v10 = 0;
	v11 = 0i64;
	if (v8)
		v11 = v6;
	v12 = v11 + ((v9 + 15) & 0xFFFFFFFFFFFFFFF0ui64);
	*((_QWORD*)a3 + 1) = v11;
	if (!v8)
		return 0i64;
	while (1)
	{
		result = sub_14030AAB0(a1, v12, (unsigned int*)(*((_QWORD*)a3 + 1) + a1[2] + ((unsigned __int64)v10 << 6)));
		if ((int)result < 0)
			break;
		if (++v10 >= *a3)
			return 0i64;
	}
	return result;
}
// 14030F632: variable 'v12' is possibly undefined

