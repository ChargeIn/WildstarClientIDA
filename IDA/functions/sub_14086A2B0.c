//----- (000000014086A2B0) ----------------------------------------------------
char __fastcall sub_14086A2B0(__int64 a1)
{
	__int64 v2; // rax

	if (*(_QWORD*)(a1 + 16))
		return 1;
	if (*(_DWORD*)(a1 + 32) < *(_DWORD*)(a1 + 28))
	{
		v2 = sub_1408819F0(dword_140C10F20, 128i64);
		if (v2)
		{
			if (v2 != -8)
			{
				*(_DWORD*)(v2 + 32) = 0;
				*(_QWORD*)(v2 + 8) = 0i64;
				*(_DWORD*)(v2 + 16) = 0;
				*(_QWORD*)(v2 + 24) = 0i64;
				*(_DWORD*)(v2 + 116) = 0;
			}
			*(_QWORD*)v2 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)(a1 + 16) = v2;
			return 1;
		}
	}
	return 0;
}
// 140C10F20: using guessed type int dword_140C10F20;

