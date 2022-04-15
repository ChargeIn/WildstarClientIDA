//----- (0000000140051AF0) ----------------------------------------------------
__int64 __fastcall sub_140051AF0(int a1, int a2)
{
	__int64 v2; // rdi
	__int64* v3; // rbx
	__int64 v4; // rbx
	unsigned int v5; // eax

	v2 = qword_140C63628 + 8i64 * a1;
	v3 = *(__int64**)(v2 + 720);
	if (!v3 || !*(_QWORD*)(qword_140C63628 + 744))
		return 2147500037i64;
	v4 = *v3;
	v5 = sub_1400518A0(qword_140C63628, a2, 1, 0);
	return (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v4 + 16))(
		*(_QWORD*)(v2 + 720),
		v5,
		0i64,
		0i64,
		0i64,
		0i64,
		0i64);
}
// 140C63628: using guessed type __int64 qword_140C63628;

