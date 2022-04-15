//----- (0000000140955D70) ----------------------------------------------------
void __fastcall sub_140955D70(__int64 a1)
{
	int v1; // edi
	__int64* v2; // rbx

	v1 = 62;
	v2 = &qword_140C53648;
	do
	{
		v2 -= 36;
		nullsub_1(a1);
		a1 = *v2;
		if (*v2)
			sub_14018B900(a1, 0);
		--v1;
	} while (v1 >= 0);
}
// 140955D97: variable 'a1' is possibly undefined
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C53648: using guessed type __int64 qword_140C53648;

