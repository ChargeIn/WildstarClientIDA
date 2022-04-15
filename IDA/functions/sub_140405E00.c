//----- (0000000140405E00) ----------------------------------------------------
void __fastcall sub_140405E00(__int64 a1, unsigned __int16 a2)
{
	__int64 v3; // rsi
	__int64 v4; // rax
	__int64 v5; // rdi

	if (a2 && (unsigned __int64)a2 < *(_QWORD*)(a1 + 256))
	{
		v3 = 8i64 * a2;
		v4 = *(_QWORD*)(a1 + 248);
		v5 = *(_QWORD*)(v3 + v4);
		if (v5)
		{
			sub_140401490(*(_QWORD*)(v3 + v4));
			sub_14018B900(v5, 0);
		}
		*(_QWORD*)(v3 + *(_QWORD*)(a1 + 248)) = 0i64;
	}
}

