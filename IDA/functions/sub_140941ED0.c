//----- (0000000140941ED0) ----------------------------------------------------
__int64 sub_140941ED0()
{
	__int64 v0; // rbx
	int* v1; // rax
	__int64 v2; // rdi
	unsigned __int64 v3; // rbx

	v0 = 0i64;
	do
		++v0;
	while (aStrliteral[v0]);
	v1 = sub_14018B280(2 * v0 + 18, 0);
	if (v1)
	{
		*((_QWORD*)v1 + 1) = v0;
		*(_QWORD*)v1 = off_140B55060;
	}
	else
	{
		v1 = 0i64;
	}
	v2 = (__int64)(v1 + 4);
	v3 = 2 * v0;
	sub_1407DB590(v1 + 4, (int*)L"strLiteral", v3);
	*(_WORD*)(v3 + v2) = 0;
	qword_140C7D5C0 = v2;
	return sub_1407DD89C(sub_140952340);
}
// 140B10D30: using guessed type wchar_t aStrliteral[11];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C7D5C0: using guessed type __int64 qword_140C7D5C0;

