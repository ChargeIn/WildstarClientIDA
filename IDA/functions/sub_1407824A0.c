//----- (00000001407824A0) ----------------------------------------------------
__int64 __fastcall sub_1407824A0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
	int v5; // eax
	_QWORD* v6; // r10
	__int64 v7; // rax
	int v8; // eax
	unsigned int v9; // ecx
	int v11; // [rsp+28h] [rbp-20h]

	v5 = *(_DWORD*)(a3 + 32);
	*(_DWORD*)(a1 + 8) = a2;
	*(_DWORD*)(a1 + 12) = v5;
	*(_QWORD*)(a1 + 16) = a5;
	if (a5)
	{
		v6 = (_QWORD*)(a5 + 144);
		if (!*(_QWORD*)(a1 + 24))
		{
			*(_QWORD*)(a1 + 24) = v6;
			*(_QWORD*)(a1 + 32) = *v6;
			*v6 = a1;
			v7 = *(_QWORD*)(a1 + 32);
			if (v7)
				*(_QWORD*)(v7 + 24) = a1 + 32;
		}
	}
	v8 = sub_1407855D0(
		a1 + 56,
		*(_DWORD*)a3,
		*(int**)(a3 + 8),
		*(int**)(a3 + 16),
		*(_DWORD*)(a3 + 24),
		v11,
		*(_DWORD*)(a3 + 28),
		a4);
	v9 = 0;
	if (v8 < 0)
		return (unsigned int)v8;
	return v9;
}
// 14078250E: variable 'v11' is possibly undefined

