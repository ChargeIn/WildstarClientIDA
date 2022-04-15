//----- (0000000140885D90) ----------------------------------------------------
__int64 __fastcall sub_140885D90(__int64 a1, char* a2)
{
	__int64 v3; // rdx
	__int64 v5; // rbx
	__int64 v6; // rbx
	__int64 v7; // rax

	v3 = *(_QWORD*)(a1 - 16);
	if (v3)
		sub_140881720(dword_140C111C0, v3);
	if (a2)
	{
		v5 = -1i64;
		do
			++v5;
		while (*(_WORD*)&a2[2 * v5]);
		v6 = v5 + 1;
		v7 = sub_1408819F0(dword_140C111C0, 2 * v6);
		*(_QWORD*)(a1 - 16) = v7;
		if (!v7)
			return 52i64;
		sub_140856440(v7, a2, v6);
	}
	return 1i64;
}
// 140C111C0: using guessed type int dword_140C111C0;

