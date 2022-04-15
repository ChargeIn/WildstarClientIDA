//----- (00000001408327B0) ----------------------------------------------------
__int64 sub_1408327B0()
{
	__int64 result; // rax
	__int64 v1; // rbx
	int v2; // edi

	if (qword_140C61CC0)
	{
		result = sub_140864080(qword_140C61CC0);
		v1 = qword_140C61CC0;
		v2 = dword_140C10F28;
		if (qword_140C61CC0)
		{
			nullsub_1(qword_140C61CC0);
			result = sub_140881720(v2, v1);
		}
		qword_140C61CC0 = 0i64;
	}
	return result;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C10F28: using guessed type int dword_140C10F28;
// 140C61CC0: using guessed type __int64 qword_140C61CC0;

