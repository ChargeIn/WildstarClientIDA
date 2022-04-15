//----- (0000000140845E80) ----------------------------------------------------
__int64 sub_140845E80()
{
	__int64 v0; // rbx
	int v1; // edi
	__int64 result; // rax

	v0 = qword_140C61FE0;
	v1 = dword_140C10F28;
	if (qword_140C61FE0)
	{
		sub_140845760(qword_140C61FE0);
		result = sub_140881720(v1, v0);
	}
	qword_140C61FE0 = 0i64;
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C61FE0: using guessed type __int64 qword_140C61FE0;

