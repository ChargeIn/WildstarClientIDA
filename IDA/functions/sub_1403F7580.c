//----- (00000001403F7580) ----------------------------------------------------
__int64 __fastcall sub_1403F7580(__int64 a1, char a2)
{
	__int64 v2; // rcx
	int v4; // edx
	__int64 result; // rax
	__int64 v6; // [rsp+40h] [rbp+18h] BYREF

	v2 = qword_140C65898;
	if (qword_140C65898)
	{
		if (a2)
			*(_DWORD*)(qword_140C65898 + 31648) |= 8u;
		else
			*(_DWORD*)(qword_140C65898 + 31648) &= ~8u;
		v6 = 0i64;
		HIDWORD(v6) = *(_DWORD*)(v2 + 31648);
		sub_1403F4900(v2, 0x12Bu, (__int64)&v6);
		v4 = dword_140C45E80;
		if (*(_DWORD*)qword_140C63750 < dword_140C45E80)
			v4 = *(_DWORD*)qword_140C63750;
		result = sub_14001A6C0((__int64)&off_140C45E70, v4, a2);
		if (qword_140C63620 && *(_QWORD*)(qword_140C63620 + 24))
			result = sub_1400EA3E0(*(_QWORD*)(qword_140C63620 + 88), "OpenOptions", &unk_1409D0202);
		if (!a2)
		{
			result = qword_140C65898;
			*(_QWORD*)(qword_140C65898 + 25456) = 0i64;
		}
	}
	return result;
}
// 140C45E70: using guessed type __int64 (__fastcall *off_140C45E70)();
// 140C45E80: using guessed type int dword_140C45E80;
// 140C63620: using guessed type __int64 qword_140C63620;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

