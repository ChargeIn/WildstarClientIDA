//----- (00000001406F6380) ----------------------------------------------------
__int64 __fastcall sub_1406F6380(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v3; // rbx
	int* v4; // rax
	int* v5; // rbp
	unsigned __int64 v6; // rbx
	__int64 v7; // rdx
	unsigned __int64 v8; // r8
	unsigned int v9; // ecx
	__int64 v10; // rdx
	__int64 v11; // rax
	_QWORD* v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rcx
	__int64 v15; // rbx
	__int64 v16; // rax
	__int64 v17; // rdx
	unsigned __int16* v18; // r9
	__int64 v19; // rdx
	unsigned __int16* v20; // r9

	v1 = 0i64;
	v3 = 0i64;
	do
		++v3;
	while (aGetaccountreal[v3]);
	v4 = sub_14018B280(2 * v3 + 18, 0);
	if (v4)
	{
		*((_QWORD*)v4 + 1) = v3;
		*(_QWORD*)v4 = off_140B55060;
	}
	else
	{
		v4 = 0i64;
	}
	v5 = v4 + 4;
	v6 = 2 * v3;
	sub_1407DB590(
		v4 + 4,
		(int*)L"GetAccountRealmName is deprecated and will be removed in the near future. GameLib.GetPlayerCharacterName() an"
		"d GameLib.GetRealmName() should be used instead.",
		v6);
	v7 = qword_140C63650;
	*(_WORD*)((char*)v5 + v6) = 0;
	v8 = *(_QWORD*)(v7 + 768);
	v9 = 0;
	if (v8)
	{
		v10 = *(_QWORD*)(v7 + 760);
		v11 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v10 + 8 * v11) + 400i64) != a1)
		{
			v11 = ++v9;
			if (v9 >= v8)
				goto LABEL_12;
		}
		v1 = *(_QWORD*)(v10 + 8i64 * v9);
	}
LABEL_12:
	v12 = *(_QWORD**)(v1 + 2480);
	if ((_QWORD*)*v12 != v12)
	{
		v13 = *(_QWORD*)(v12[1] + 16i64);
		if (v13)
		{
			v14 = *(_QWORD*)(v13 + 48);
			if (v14)
			{
				sub_140137120(v14, 6, v5);
				sub_1400EA7B0(v1, *(_QWORD*)(v13 + 48), (__int64)v5, *(_DWORD*)(*(_QWORD*)(v13 + 48) + 536i64) >= 6);
			}
		}
	}
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v15 = *(_QWORD*)(a1 + 16);
	v16 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v15 + 8) = 5;
	v18 = (unsigned __int16*)&unk_1409F7F5C;
	*(_QWORD*)v15 = v16;
	*(_QWORD*)(a1 + 16) += 16i64;
	if (*(_QWORD*)(qword_140C635F0 + 5752))
		v18 = *(unsigned __int16**)(qword_140C635F0 + 5752);
	sub_1400F0090(a1, v17, (unsigned __int64*)"strRealm", v18);
	if (qword_140C65898)
	{
		v20 = (unsigned __int16*)&unk_1409F7EF4;
		if (*(_QWORD*)(qword_140C65898 + 136))
			v20 = *(unsigned __int16**)(qword_140C65898 + 136);
	}
	else
	{
		v20 = (unsigned __int16*)&unk_1409F7ED4;
	}
	sub_1400F0090(a1, v19, (unsigned __int64*)"strCharacter", v20);
	if (v5)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v5 - 2) + 8i64))(v5 - 4);
	return 1i64;
}
// 1406F64E3: variable 'v17' is possibly undefined
// 1406F651C: variable 'v19' is possibly undefined
// 140B411E0: using guessed type wchar_t aGetaccountreal[158];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

