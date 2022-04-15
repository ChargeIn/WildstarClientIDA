//----- (00000001407F5300) ----------------------------------------------------
__int64 sub_1407F5300()
{
	unsigned int v0; // esi
	int i; // edi
	unsigned __int64 v3; // rbx
	_WORD* v4; // rax
	int v5; // edi

	v0 = -1;
	if (!(unsigned int)sub_1407E240C(11))
		return 0xFFFFFFFFi64;
	sub_1407E2340(11);
	for (i = 0; i < 64; ++i)
	{
		v3 = qword_140C60410[i];
		if (!v3)
		{
			v4 = sub_1407E2BB0(0x20ui64, 0x58ui64);
			if (v4)
			{
				qword_140C60410[i] = (__int64)v4;
				dword_140DC523C += 32;
				while ((unsigned __int64)v4 < qword_140C60410[i] + 2816)
				{
					v4[4] = 2560;
					*(_QWORD*)v4 = -1i64;
					*((_DWORD*)v4 + 3) = 0;
					v4 += 44;
				}
				v5 = 32 * i;
				*(_BYTE*)(qword_140C60410[(__int64)v5 >> 5] + 88i64 * (v5 & 0x1F) + 8) = 1;
				if (!(unsigned int)sub_1407F5268(v5))
					v5 = -1;
				v0 = v5;
			}
			break;
		}
		while (v3 < qword_140C60410[i] + 2816)
		{
			if ((*(_BYTE*)(v3 + 8) & 1) == 0)
			{
				if (!*(_DWORD*)(v3 + 12))
				{
					sub_1407E2340(10);
					if (!*(_DWORD*)(v3 + 12))
					{
						InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(v3 + 16), 0xFA0u);
						++* (_DWORD*)(v3 + 12);
					}
					sub_1407E2528(10);
				}
				EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 16));
				if ((*(_BYTE*)(v3 + 8) & 1) == 0)
				{
					*(_BYTE*)(v3 + 8) = 1;
					*(_QWORD*)v3 = -1i64;
					v0 = 32 * i + ((int)v3 - LODWORD(qword_140C60410[i])) / 88;
					break;
				}
				LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 16));
			}
			v3 += 88i64;
		}
		if (v0 != -1)
			break;
	}
	sub_1407E2528(11);
	return v0;
}
// 140C60410: using guessed type __int64 qword_140C60410[64];
// 140DC523C: using guessed type int dword_140DC523C;

