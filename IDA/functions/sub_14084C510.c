//----- (000000014084C510) ----------------------------------------------------
__int64 __fastcall sub_14084C510(__int64 a1, int* a2, unsigned __int16 a3)
{
	__int64 v6; // rax

	if (a3 == *(_WORD*)(a1 + 8))
		goto LABEL_7;
	if (*(_QWORD*)a1)
	{
		sub_140881720(dword_140C10F20, *(_QWORD*)a1);
		*(_QWORD*)a1 = 0i64;
		*(_WORD*)(a1 + 8) = 0;
	}
	if (!a3)
		goto LABEL_7;
	v6 = sub_1408819F0(dword_140C10F20, 24i64 * a3);
	*(_QWORD*)a1 = v6;
	if (v6)
	{
		*(_WORD*)(a1 + 8) = a3;
	LABEL_7:
		sub_1407DB590(*(int**)a1, a2, 24i64 * *(unsigned __int16*)(a1 + 8));
		return 1i64;
	}
	return 52i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

