//----- (00000001407ABA80) ----------------------------------------------------
__int64 __fastcall sub_1407ABA80(__int64 a1, unsigned int a2)
{
	unsigned int v4; // edi
	__int64 v5; // rbx
	_QWORD* v6; // rcx
	__int64 v7; // rcx
	unsigned int i; // ebx

	v4 = 0;
	v5 = 88 * (*(unsigned int*)(a1 + 4i64 * a2 + 431968) + 8i64 * a2) + a1 + 66592;
	*(_DWORD*)(v5 + 48) = *(_DWORD*)(v5 + 44);
	*(_DWORD*)(v5 + 44) = *(_DWORD*)(v5 + 40);
	*(_DWORD*)(v5 + 40) = sub_14018CDF0();
	v6 = *(_QWORD**)(v5 + 56);
	if (v6)
		*v6 = *(_QWORD*)(v5 + 64);
	v7 = *(_QWORD*)(v5 + 64);
	if (v7)
		*(_QWORD*)(v7 + 56) = *(_QWORD*)(v5 + 56);
	*(_QWORD*)(v5 + 56) = 0i64;
	*(_QWORD*)(v5 + 64) = 0i64;
	for (i = 0; i < 2; ++i)
	{
		if ((unsigned int)sub_1407ABB30(a1, a2, i) || v4)
			v4 = 1;
	}
	return v4;
}

