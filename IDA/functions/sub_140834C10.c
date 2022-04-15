//----- (0000000140834C10) ----------------------------------------------------
__int64 __fastcall sub_140834C10(__int64 a1, int* a2, unsigned int a3, int a4)
{
	__int64 v5; // rdx
	unsigned __int64 v7; // rdi
	int* v9; // rax

	v5 = *(_QWORD*)(a1 + 8);
	v7 = a3;
	if (v5)
	{
		sub_140881720(dword_140C10F20, v5);
		*(_QWORD*)(a1 + 8) = 0i64;
	}
	if ((_DWORD)v7)
	{
		v9 = (int*)sub_1408819F0(dword_140C10F20, v7);
		*(_QWORD*)(a1 + 8) = v9;
		if (!v9)
			return 52i64;
		sub_1407DB590(v9, a2, v7);
	}
	*(_DWORD*)a1 = a4;
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

