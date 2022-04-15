//----- (00000001408330B0) ----------------------------------------------------
void __fastcall sub_1408330B0(int a1, float a2, int a3)
{
	__int64 i; // rbx
	__int64 v6; // rdi

	for (i = qword_140C61CC8; i != qword_140C61CD0; i += 8i64)
	{
		v6 = *(_QWORD*)i;
		if ((unsigned int)sub_14085CF90((__int64*)(*(_QWORD*)i + 1088i64)) == a1)
			sub_140863310(v6 + 32, a2, a3);
	}
}
// 140C61CC8: using guessed type __int64 qword_140C61CC8;
// 140C61CD0: using guessed type __int64 qword_140C61CD0;

