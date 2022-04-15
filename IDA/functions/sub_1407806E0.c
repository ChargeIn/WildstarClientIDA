//----- (00000001407806E0) ----------------------------------------------------
__int64 __fastcall sub_1407806E0(__int64 a1, int a2)
{
	__int64 v2; // rbx
	unsigned __int64 v4; // rdi

	v2 = qword_140C7E688;
	if (!qword_140C7E688)
	{
		qword_140C7E688 = (__int64)sub_14018B280(16768i64, 0);
		sub_1407E4830((int*)qword_140C7E688, 0i64, 0x4180ui64);
		v2 = qword_140C7E688;
	}
	v4 = 0i64;
	while (*(_DWORD*)v2)
	{
		++v4;
		v2 += 2096i64;
		if (v4 >= 8)
			return 0i64;
	}
	sub_1407E4830((int*)v2, 0i64, 0x830ui64);
	*(_DWORD*)v2 = a2;
	*(_QWORD*)(v2 + 8) = v4;
	*(_DWORD*)(v2 + 16) = 0;
	return v2;
}
// 140C7E688: using guessed type __int64 qword_140C7E688;

