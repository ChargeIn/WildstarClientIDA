//----- (0000000140863C90) ----------------------------------------------------
__int64 __fastcall sub_140863C90(__int64 a1, __int64* a2, char a3, __int64 a4)
{
	bool v8; // zf
	unsigned int i; // ebx

	if (*(_WORD*)(*a2 + 18))
	{
		v8 = *(_DWORD*)(a1 + 1056) == 2;
		*(_DWORD*)(a1 + 860) = 45;
		if (v8)
		{
			for (i = 0; i < 4; ++i)
				sub_140863540(a1, &qword_140C62458, i);
		}
		*(_DWORD*)(a1 + 1056) = 1;
		sub_140863260((unsigned __int16*)(a1 + 840), *a2, a1 + 848, a3, a4);
	}
	return 1i64;
}
// 140C62458: using guessed type __int64 qword_140C62458;

