//----- (000000014043CF90) ----------------------------------------------------
__int64 __fastcall sub_14043CF90(__int64 a1, int a2)
{
	__int64 result; // rax
	__int64 v4; // rax
	__int64* i; // rbx
	unsigned int v6; // ecx

	if (!a2)
		return 0i64;
	v4 = qword_140C7CC88;
	for (i = *(__int64**)qword_140C7CC88; i != (__int64*)v4; i = (__int64*)*i)
	{
		if (a2 == *((_DWORD*)i + 4))
		{
			v6 = *((_DWORD*)i + 5);
			if (!v6)
				return 0i64;
			result = sub_1401F4FA0(v6);
			if (result)
				return result;
			v4 = qword_140C7CC88;
		}
	}
	return 0i64;
}
// 140C7CC88: using guessed type __int64 qword_140C7CC88;

