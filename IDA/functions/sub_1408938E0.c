//----- (00000001408938E0) ----------------------------------------------------
__int64 __fastcall sub_1408938E0(__int64 a1, int* a2, int* a3, unsigned int a4)
{
	__int64 v5; // rdx
	unsigned __int64 v6; // rsi
	unsigned int v9; // edi
	__int64 v10; // rdx
	int* v11; // rax
	int* v12; // rax

	v5 = *(_QWORD*)(a1 + 304);
	v6 = a4;
	v9 = 1;
	if (v5)
	{
		sub_140881720(dword_140C10F20, v5);
		*(_QWORD*)(a1 + 304) = 0i64;
	}
	v10 = *(_QWORD*)(a1 + 312);
	if (v10)
	{
		sub_140881720(dword_140C10F20, v10);
		*(_QWORD*)(a1 + 312) = 0i64;
	}
	v11 = (int*)sub_1408819F0(dword_140C10F20, (unsigned int)(4 * v6));
	*(_QWORD*)(a1 + 304) = v11;
	if (v11)
	{
		sub_1407DB590(v11, a2, (unsigned int)(4 * v6));
		v12 = (int*)sub_1408819F0(dword_140C10F20, v6);
		*(_QWORD*)(a1 + 312) = v12;
		if (!v12)
			return 52i64;
		sub_1407DB590(v12, a3, v6);
	}
	else if ((_DWORD)v6)
	{
		return 52;
	}
	return v9;
}
// 140C10F20: using guessed type int dword_140C10F20;

