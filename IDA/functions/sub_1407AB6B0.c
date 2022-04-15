//----- (00000001407AB6B0) ----------------------------------------------------
__int64 __fastcall sub_1407AB6B0(__int64 a1, unsigned int a2)
{
	unsigned int v4; // edi
	__int64 v5; // rbx
	__int64 v6; // rax
	unsigned int i; // ebx

	*(_DWORD*)(a1 + 4i64 * a2 + 431968) = *(_DWORD*)(a1 + 96);
	*(_DWORD*)(a1 + 4i64 * a2 + 434044) = *(_DWORD*)(a1 + 436136);
	v4 = 0;
	v5 = 88 * (*(unsigned int*)(a1 + 96) + 8i64 * a2) + a1 + 66592;
	*(_DWORD*)(v5 + 36) = *(_DWORD*)(v5 + 32);
	*(_DWORD*)(v5 + 32) = *(_DWORD*)(v5 + 28);
	*(_DWORD*)(v5 + 28) = sub_14018CDF0();
	if (!*(_QWORD*)(v5 + 56))
	{
		*(_QWORD*)(v5 + 56) = a1 + 436120;
		*(_QWORD*)(v5 + 64) = *(_QWORD*)(a1 + 436120);
		*(_QWORD*)(a1 + 436120) = v5;
		v6 = *(_QWORD*)(v5 + 64);
		if (v6)
			*(_QWORD*)(v6 + 56) = v5 + 64;
	}
	for (i = 0; i < 2; ++i)
	{
		if ((unsigned int)sub_1407AB780(a1, a2, i) || v4)
			v4 = 1;
	}
	return v4;
}

