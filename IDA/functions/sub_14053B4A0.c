//----- (000000014053B4A0) ----------------------------------------------------
__int64 __fastcall sub_14053B4A0(__int64 a1, __int64 a2)
{
	int v3; // eax
	__int64 v4; // rdx
	__int64 v5; // rcx
	__int64 v6; // rcx
	_QWORD* v7; // rcx
	int v8; // eax

	if (qword_140C886B8)
	{
		v3 = *(_DWORD*)(qword_140C886B8 + 4);
		if (v3 != -1)
			*(_DWORD*)(qword_140C886B8 + 4) = v3 + 1;
	}
	sub_1403FA730(a2);
	sub_140434900(*(_QWORD**)(a2 + 32736));
	sub_1403A71F0(a2, 0, 0x65u, 1);
	if (qword_140C63658)
		sub_1400FD770(qword_140C63658);
	sub_140539640((_QWORD*)a2, 0);
	v4 = qword_140C635F0;
	*(_QWORD*)(a2 + 29496) = 0i64;
	sub_14053C410((__int64*)(a2 + 72), *(_QWORD*)(v4 + 5792));
	sub_140538FD0(a2);
	sub_1404050C0();
	sub_140581620(v5);
	sub_1400EC4B0(*(_QWORD*)(qword_140C65898 + 29504), dword_1409F40CC, (__int64)sub_14063FB10, 0i64);
	sub_1400EC4B0(*(_QWORD*)(qword_140C65898 + 29504), (int*)L"cc", (__int64)sub_14063FB10, 0i64);
	sub_14063AE00(v6);
	sub_1403E7B20(a2);
	v7 = *(_QWORD**)(a2 + 32736);
	*(_DWORD*)(a2 + 29484) = 1;
	sub_140434A00(v7);
	if (qword_140C886B8)
	{
		v8 = *(_DWORD*)(qword_140C886B8 + 4);
		if (v8)
			*(_DWORD*)(qword_140C886B8 + 4) = v8 - 1;
	}
	return 0i64;
}
// 14053B530: variable 'v5' is possibly undefined
// 14053B57D: variable 'v6' is possibly undefined
// 1409F40CC: using guessed type int dword_1409F40CC[12];
// 140B254B4: using guessed type wchar_t aCc_0[3];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63658: using guessed type __int64 qword_140C63658;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C886B8: using guessed type __int64 qword_140C886B8;

