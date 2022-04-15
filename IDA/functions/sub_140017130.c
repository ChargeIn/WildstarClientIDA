//----- (0000000140017130) ----------------------------------------------------
__int64 sub_140017130()
{
	int* v0; // rcx
	__m128i* v1; // rax
	bool v2; // zf
	int* v3; // rcx
	__m128i* v4; // rax
	__m128i v6[33]; // [rsp+40h] [rbp-228h] BYREF

	if ((int)sub_14001B370(
		v6,
		260i64,
		L"%s\\%s\\%s\\%s",
		*(_QWORD*)&qword_140C63788 + 3204i64,
		L"NCSOFT",
		*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
		L"Machine.ini") >= 0
		&& v6[0].m128i_i16[0])
	{
		v1 = v6;
		do
		{
			v2 = v1->m128i_i16[1] == 0;
			v1 = (__m128i*)((char*)v1 + 2);
		} while (!v2);
	}
	sub_14019CC10(v0, 0, v6);
	if ((int)sub_14001B370(
		v6,
		260i64,
		L"%s\\%s\\%s\\%s",
		*(_QWORD*)&qword_140C63788 + 2684i64,
		L"NCSOFT",
		*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
		L"User.ini") >= 0
		&& v6[0].m128i_i16[0])
	{
		v4 = v6;
		do
		{
			v2 = v4->m128i_i16[1] == 0;
			v4 = (__m128i*)((char*)v4 + 2);
		} while (!v2);
	}
	return sub_14019CC10(v3, 1, v6);
}
// 1400171B6: variable 'v0' is possibly undefined
// 140017225: variable 'v3' is possibly undefined
// 1409E0998: using guessed type wchar_t aMachineIni_0[12];
// 1409E09B0: using guessed type wchar_t aUserIni_0[9];
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A47410: using guessed type wchar_t aSSSS_0[12];
// 140A47468: using guessed type wchar_t aSSSS[12];
// 140017130: using guessed type __m128i var_228[33];

