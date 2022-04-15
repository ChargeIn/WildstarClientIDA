//----- (000000014018B830) ----------------------------------------------------
__int64 __fastcall sub_14018B830(unsigned __int16* a1, int* a2, unsigned __int8 a3)
{
	unsigned __int64 v6; // rbp
	int v7; // ecx
	__int64 result; // rax
	bool v9; // zf

	v6 = (unsigned __int64)(a1 - 8);
	if (!a1[2])
		sub_140189A90((__int64)&qword_140C87F10[4 * *a1], (unsigned __int64)a1);
	if (((a3 | (unsigned __int8)dword_140C7F934) & 4) != 0)
		sub_1407E4830(a2, 0i64, a1[1]);
	*(_WORD*)a2 = a1[2];
	v7 = *(_DWORD*)a1;
	--a1[3];
	result = a1[1];
	qword_140C87980 -= result;
	v9 = a1[3] == 0;
	a1[2] = ((unsigned __int64)a2 - v6) >> v7;
	if (v9)
	{
		sub_140189DC0(&qword_140C87F10[4 * *a1], (__int64)a1);
		return sub_14018B570(v6);
	}
	return result;
}
// 140C7F934: using guessed type int dword_140C7F934;
// 140C87980: using guessed type __int64 qword_140C87980;
// 140C87F10: using guessed type __int64 qword_140C87F10[4];

