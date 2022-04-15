//----- (00000001402CA420) ----------------------------------------------------
__int64 __fastcall sub_1402CA420(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v3; // rax
	__int64 v5; // r9
	__int64 v7; // rcx
	__int64 v8; // rax

	v3 = *((_QWORD*)a3 + 1);
	v5 = v3 + a2;
	if ((unsigned __int64)(v3 + a2) < *a1)
		return 2147500037i64;
	v7 = *a3;
	if ((unsigned __int64)(a2 + v3 + 2 * v7) > a1[1])
		return 2147500037i64;
	v8 = 0i64;
	if ((_DWORD)v7)
		v8 = v5;
	*((_QWORD*)a3 + 1) = v8;
	return 0i64;
}

