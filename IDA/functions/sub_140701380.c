//----- (0000000140701380) ----------------------------------------------------
__int64 __fastcall sub_140701380(__int64 a1)
{
	_DWORD* v1; // rdx
	int v2; // eax
	int v3; // ecx

	v1 = &unk_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v1 = *(_DWORD**)(a1 + 24);
	v2 = 0;
	v3 = v1[2];
	if (v3 && (v3 != 1 || *v1))
	{
		LOBYTE(v2) = 0;
		dword_140C89BB4 = v2;
		return 0i64;
	}
	else
	{
		LOBYTE(v2) = 1;
		dword_140C89BB4 = v2;
		return 0i64;
	}
}
// 140C89BB4: using guessed type int dword_140C89BB4;

