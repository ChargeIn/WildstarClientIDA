//----- (000000014030EB00) ----------------------------------------------------
__int64 __fastcall sub_14030EB00(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v3; // rax
	__int64 v6; // rcx
	__int64 result; // rax
	__int64 v8; // rdx
	__int64 v9; // r9
	__int64 v10; // rax
	__int64 v11; // rcx

	v3 = *((_QWORD*)a3 + 1);
	v6 = v3 + a2;
	if ((unsigned __int64)(v3 + a2) < *a1)
		return 2147500037i64;
	v8 = *a3;
	if ((unsigned __int64)(a2 + v3 + 4 * v8) > a1[1])
		return 2147500037i64;
	v9 = 0i64;
	v10 = 0i64;
	if ((_DWORD)v8)
		v10 = v6;
	v11 = *((_QWORD*)a3 + 2);
	*((_QWORD*)a3 + 1) = v10;
	if ((unsigned __int64)(v11 + a2) < *a1 || (unsigned __int64)(a2 + v11 + 12 * v8) > a1[1])
		return 2147500037i64;
	if ((_DWORD)v8)
		v9 = v11 + a2;
	result = 0i64;
	*((_QWORD*)a3 + 2) = v9;
	return result;
}

