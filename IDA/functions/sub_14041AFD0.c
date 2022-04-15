//----- (000000014041AFD0) ----------------------------------------------------
__int64 __fastcall sub_14041AFD0(_QWORD* a1)
{
	int* v2; // rdi
	int* v3; // rax
	__int64 v4; // rcx
	int v5; // eax
	__int64 v6; // rcx
	__int64 v7; // rax

	v2 = sub_140417BF0(a1, 1u);
	v3 = sub_140417C90(a1, 1u);
	if (v2)
	{
		v5 = sub_1403B5400(v4, (__int64)v2, (__int64)v3);
		v6 = a1[2];
		*(_DWORD*)(v6 + 8) = 3;
		*(double*)v6 = (double)v5;
	}
	else
	{
		v7 = a1[2];
		*(_QWORD*)v7 = 0i64;
		*(_DWORD*)(v7 + 8) = 3;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 14041B002: variable 'v4' is possibly undefined

