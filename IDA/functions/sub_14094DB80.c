//----- (000000014094DB80) ----------------------------------------------------
void __fastcall sub_14094DB80(__int64 a1)
{
	unsigned __int64 v1; // rbx
	__int64 v2; // rsi
	__int64 v3; // rdi

	v1 = 0i64;
	if (qword_140C79A78)
	{
		v2 = 0i64;
		do
		{
			v3 = qword_140C79A70;
			nullsub_1(a1);
			a1 = *(_QWORD*)(v3 + v2 + 8);
			if (a1)
				sub_14018B900(a1, 0);
			++v1;
			v2 += 32i64;
		} while (v1 < qword_140C79A78);
	}
	if (qword_140C79A70)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(qword_140C79A70 - 16) + 8i64))(qword_140C79A70 - 16);
}
// 14094DBA7: variable 'a1' is possibly undefined
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C79A70: using guessed type __int64 qword_140C79A70;
// 140C79A78: using guessed type __int64 qword_140C79A78;

