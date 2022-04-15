//----- (00000001408814D0) ----------------------------------------------------
__int64 __fastcall sub_1408814D0(__int64 a1)
{
	unsigned int i; // edi
	__int64 v3; // rdx
	__int64 result; // rax

	if (*(_QWORD*)(a1 + 8))
	{
		for (i = 0; i < *(_DWORD*)a1; ++i)
		{
			v3 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64 * i + 8);
			if (v3)
			{
				sub_140881720(dword_140C10F28, v3);
				*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64 * i + 8) = 0i64;
			}
		}
		result = sub_140881720(dword_140C10F28, *(_QWORD*)(a1 + 8));
		*(_QWORD*)(a1 + 8) = 0i64;
		*(_DWORD*)a1 = 0;
	}
	else
	{
		*(_DWORD*)a1 = 0;
	}
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;

