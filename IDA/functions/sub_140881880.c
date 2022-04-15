//----- (0000000140881880) ----------------------------------------------------
__int64 __fastcall sub_140881880(int a1)
{
	__int64 v2; // rsi
	int* v3; // rax
	__int64 v5; // rdi
	int* v6; // rbx

	v2 = a1;
	v3 = sub_140344C60(112i64 * a1);
	qword_140C62918 = (__int64)v3;
	if (!v3)
		return 2i64;
	if (a1 > 0)
	{
		v5 = 0i64;
		do
		{
			v6 = &v3[v5];
			if (&v3[v5])
			{
				*((_QWORD*)v6 + 3) = 0i64;
				*((_QWORD*)v6 + 4) = 0i64;
				InitializeCriticalSection((LPCRITICAL_SECTION)(v6 + 12));
				*(_QWORD*)v6 = 0i64;
				*((_QWORD*)v6 + 1) = 0i64;
				*((_QWORD*)v6 + 2) = 0i64;
				v6[10] = 1;
				*((_QWORD*)v6 + 11) = 0i64;
				*((_QWORD*)v6 + 12) = 0i64;
				v6[26] = 0;
				v3 = (int*)qword_140C62918;
			}
			v5 += 28i64;
			--v2;
		} while (v2);
	}
	dword_140C6290C = a1;
	dword_140C62910 = 0;
	byte_140C62908 = 1;
	return 1i64;
}
// 140C62908: using guessed type char byte_140C62908;
// 140C6290C: using guessed type int dword_140C6290C;
// 140C62910: using guessed type int dword_140C62910;
// 140C62918: using guessed type __int64 qword_140C62918;

