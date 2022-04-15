//----- (00000001407DDED8) ----------------------------------------------------
__int64 sub_1407DDED8()
{
	int v0; // eax
	__int64 v1; // rbx
	__int64 v2; // rdi
	char* v3; // rax
	void** v5; // rcx

	v0 = dword_140DC5330;
	v1 = 0i64;
	v2 = 20i64;
	if (dword_140DC5330)
	{
		if (dword_140DC5330 < 20)
			v0 = 20;
	}
	else
	{
		v0 = 512;
	}
	dword_140DC5330 = v0;
	v3 = (char*)sub_1407E2BB0(v0, 8ui64);
	lpMem = v3;
	if (!v3)
	{
		dword_140DC5330 = 20;
		v3 = (char*)sub_1407E2BB0(0x14ui64, 8ui64);
		lpMem = v3;
		if (!v3)
			return 26i64;
	}
	v5 = &off_140C0F1B0;
	while (1)
	{
		*(_QWORD*)&v3[v1] = v5;
		v5 += 6;
		v1 += 8i64;
		if (!--v2)
			break;
		v3 = (char*)lpMem;
	}
	return 0i64;
}
// 140C0F1B0: using guessed type void *off_140C0F1B0;
// 140DC5330: using guessed type int dword_140DC5330;

