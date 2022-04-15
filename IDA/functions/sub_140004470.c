//----- (0000000140004470) ----------------------------------------------------
__int64 __fastcall sub_140004470(__int64* a1, __int64 a2)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 result; // rax

	sub_140005BF0(a1, a2, 0);
	if (qword_140C65898)
	{
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "AccountPendingItemsUpdate", &unk_1409D138E);
		v2 = *(_QWORD*)(qword_140C65898 + 32736);
		if (v2)
			sub_1400EA3E0(*(_QWORD*)(v2 + 96), "AccountPendingItemsUpdate", &unk_1409D0132);
	}
	v3 = qword_140C66DA8;
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
				if (*(_DWORD*)(v3 + 368) != 5)
					break;
				v3 = *(_QWORD*)(v3 + 176);
			} while (v3);
		}
		sub_1400EA3E0(*(_QWORD*)(v3 + 72), "AccountItemUpdate", &unk_1409D0133);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

