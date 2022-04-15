//----- (00000001407E3974) ----------------------------------------------------
__int64 __fastcall sub_1407E3974(__int64 a1)
{
	int v2; // eax
	int v3; // eax
	__int64 v4; // rdi
	LPVOID v5; // rax

	v2 = sub_1407EA35C(a1);
	if (!(unsigned int)sub_1407F0A90(v2))
		return 0i64;
	if ((void**)a1 == sub_1407DDFA0() + 6)
	{
		v3 = 0;
	}
	else
	{
		if ((void**)a1 != sub_1407DDFA0() + 12)
			return 0i64;
		v3 = 1;
	}
	++dword_140C5F564;
	if ((*(_DWORD*)(a1 + 24) & 0x10C) != 0)
		return 0i64;
	v4 = v3;
	v5 = (LPVOID)qword_140C603F0[v3];
	if (v5 || (v5 = sub_1407E2C30(0x1000ui64), (qword_140C603F0[v4] = v5) != 0i64))
	{
		*(_QWORD*)(a1 + 16) = v5;
		*(_QWORD*)a1 = v5;
		*(_DWORD*)(a1 + 36) = 4096;
		*(_DWORD*)(a1 + 8) = 4096;
	}
	else
	{
		*(_QWORD*)(a1 + 16) = a1 + 32;
		*(_QWORD*)a1 = a1 + 32;
		*(_DWORD*)(a1 + 36) = 2;
		*(_DWORD*)(a1 + 8) = 2;
	}
	*(_DWORD*)(a1 + 24) |= 0x1102u;
	return 1i64;
}
// 140C5F564: using guessed type int dword_140C5F564;
// 140C603F0: using guessed type _QWORD qword_140C603F0[2];

