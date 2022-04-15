//----- (0000000140004540) ----------------------------------------------------
__int64 __fastcall sub_140004540(__int64* a1, __int64 a2)
{
	__int64 i; // rbx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 result; // rax

	sub_140005A90(a1);
	for (i = 0i64; (unsigned int)i < *(_DWORD*)a2; i = (unsigned int)(i + 1))
		sub_140005BF0(a1, *(_QWORD*)(a2 + 8) + 96 * i, 1);
	if (qword_140C65898)
	{
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "AccountPendingItemsUpdate", &unk_1409D138E);
		v5 = *(_QWORD*)(qword_140C65898 + 32736);
		if (v5)
			sub_1400EA3E0(*(_QWORD*)(v5 + 96), "AccountPendingItemsUpdate", &unk_1409D013B);
	}
	v6 = qword_140C66DA8;
	result = qword_140C66DA8;
	if (qword_140C66DA8)
	{
		while (*(_DWORD*)(result + 368) == 5)
		{
			result = *(_QWORD*)(result + 176);
			if (!result)
				return result;
		}
		if (qword_140C66DA8)
		{
			do
			{
				if (*(_DWORD*)(v6 + 368) != 5)
					break;
				v6 = *(_QWORD*)(v6 + 176);
			} while (v6);
		}
		sub_1400EA3E0(*(_QWORD*)(v6 + 72), "AccountItemUpdate", &unk_1409D013C);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

