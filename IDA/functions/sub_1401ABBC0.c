//----- (00000001401ABBC0) ----------------------------------------------------
__int64 __fastcall sub_1401ABBC0(_QWORD* a1, __int64 a2, _BYTE* a3)
{
	__int64 v5; // rax
	__int64 v6; // rdi
	unsigned int v7; // esi

	if (!a3 || *a3 != byte_140C1E4AC)
		return 4294967290i64;
	if (!a1)
		return 4294967294i64;
	a1[4] = 0i64;
	if (!a1[6])
	{
		a1[8] = 0i64;
		a1[6] = sub_1401CD9D0;
	}
	if (!a1[7])
		a1[7] = sub_1401CD9E0;
	v5 = ((__int64(__fastcall*)(_QWORD, __int64, __int64))a1[6])(a1[8], 1i64, 7144i64);
	v6 = v5;
	if (!v5)
		return 4294967292i64;
	a1[5] = v5;
	*(_QWORD*)(v5 + 56) = 0i64;
	v7 = sub_1401ABB20((__int64)a1);
	if (v7)
	{
		((void(__fastcall*)(_QWORD, __int64))a1[7])(a1[8], v6);
		a1[5] = 0i64;
	}
	return v7;
}
// 140C1E4AC: using guessed type char byte_140C1E4AC;

