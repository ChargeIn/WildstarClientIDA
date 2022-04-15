//----- (00000001403444E0) ----------------------------------------------------
void __fastcall sub_1403444E0(_QWORD* a1)
{
	unsigned __int64 v2; // rbx
	__int64 v3; // rsi
	__int64 v4; // rcx
	__int64 v5; // rcx

	*a1 = off_140B64F70;
	if (a1[3])
	{
		v2 = 0i64;
		v3 = 0i64;
		do
		{
			if (*(_QWORD*)(a1[1] + 8 * v2))
			{
				sub_1403499E0(v3 + a1[8]);
				v4 = *(_QWORD*)(a1[1] + 8 * v2);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			}
			++v2;
			v3 += 32i64;
		} while (v2 < a1[3]);
		sub_14018B900(a1[1], 0);
		v5 = a1[8];
		if (v5)
			sub_140344580(v5);
	}
	sub_140349D80((__int64)(a1 + 4));
}
// 140344506: conditional instruction was optimized away because rax.8!=0
// 140B64F70: using guessed type __int64 (__fastcall *off_140B64F70[9])();

