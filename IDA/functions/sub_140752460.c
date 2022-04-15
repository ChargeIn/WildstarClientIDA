//----- (0000000140752460) ----------------------------------------------------
__int64 __fastcall sub_140752460(_QWORD* a1)
{
	char* v2; // rax
	int* v3; // rbx
	__int64 v4; // rax
	__int64 v5; // rcx
	int v6; // eax
	__int64 v7; // rdx
	_QWORD v9[4]; // [rsp+20h] [rbp-48h] BYREF
	__int64 v10; // [rsp+40h] [rbp-28h] BYREF
	int* v11; // [rsp+48h] [rbp-20h]

	v2 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v10, v2);
	v3 = v11;
	v4 = 0i64;
	memset(&v9[1], 0, 24);
	if (*(_WORD*)v11)
	{
		do
			++v4;
		while (*((_WORD*)v11 + v4));
	}
	sub_14001C1B0(v9, v11, (__int64)v11 + 2 * v4);
	v6 = sub_1403F6830(v5, (__int64)v9);
	v7 = a1[2];
	*(_DWORD*)(v7 + 8) = 3;
	*(double*)v7 = (double)v6;
	a1[2] += 16i64;
	sub_14018B900((__int64)v3, 0);
	return 1i64;
}
// 1407524C1: variable 'v5' is possibly undefined

