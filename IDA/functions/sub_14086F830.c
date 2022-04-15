//----- (000000014086F830) ----------------------------------------------------
__int64 __fastcall sub_14086F830(__int64* a1, __int64 a2)
{
	__int64 v4; // rbp
	__int64 i; // rbx

	*(_BYTE*)(a2 + 156) = 1;
	*(_DWORD*)(a2 + 140) = (*(_DWORD*)(a2 + 140) * (unsigned int)(unsigned __int16)(0x5DC00u / dword_140C110B4)) >> 10;
	v4 = qword_140C61FE0;
	if (qword_140C61FE0)
	{
		for (i = a1[21]; i != a1[22]; i += 16i64)
		{
			if (sub_140846220(
				v4,
				*(unsigned __int16*)(*(_QWORD*)(i + 8) + 40i64),
				*(unsigned __int16*)(*(_QWORD*)(i + 8) + 42i64)))
			{
				sub_140844340(a1, *(int**)(i + 8), a2);
			}
		}
	}
	return 1i64;
}
// 140C110B4: using guessed type int dword_140C110B4;
// 140C61FE0: using guessed type __int64 qword_140C61FE0;

