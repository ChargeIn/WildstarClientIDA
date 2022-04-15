//----- (0000000140881B10) ----------------------------------------------------
void sub_140881B10()
{
	int v0; // ebx
	__int64 v1; // rdi
	__int64 v2; // rsi

	if (byte_140C62908)
	{
		v0 = 0;
		if (dword_140C6290C > 0)
		{
			v1 = 0i64;
			do
			{
				v2 = qword_140C62918;
				if (*(_DWORD*)(qword_140C62918 + v1))
					sub_140881DD0(v0);
				DeleteCriticalSection((LPCRITICAL_SECTION)(v1 + v2 + 48));
				++v0;
				v1 += 112i64;
			} while (v0 < dword_140C6290C);
		}
		sub_140001E60(qword_140C62918);
		dword_140C6290C = 0;
		dword_140C62910 = 0;
		qword_140C62918 = 0i64;
		byte_140C62908 = 0;
	}
}
// 140C62908: using guessed type char byte_140C62908;
// 140C6290C: using guessed type int dword_140C6290C;
// 140C62910: using guessed type int dword_140C62910;
// 140C62918: using guessed type __int64 qword_140C62918;

