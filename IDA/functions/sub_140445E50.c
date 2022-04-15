//----- (0000000140445E50) ----------------------------------------------------
__int64 __fastcall sub_140445E50(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rsi
	__int64 v3; // rbx
	int v4; // edi
	__int64* v5; // rbx
	__int64 v6; // rcx

	v1 = *(int*)(a1 - 8);
	v2 = a1 - 8;
	v3 = 80 * v1 + 64;
	v4 = v1 - 1;
	if (v4 >= 0)
	{
		v5 = (__int64*)(a1 + v3);
		do
		{
			v6 = *(v5 - 9);
			v5 -= 10;
			*(v5 - 8) = (__int64)off_140B739D0;
			sub_14018B900(v6, 0);
			sub_14018B900(*v5, 0);
			--v4;
		} while (v4 >= 0);
	}
	sub_14018B900(v2, 0);
	return v2;
}
// 140B739D0: using guessed type __int64 (__fastcall *off_140B739D0[23])();

