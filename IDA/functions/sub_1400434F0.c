//----- (00000001400434F0) ----------------------------------------------------
__int64 __fastcall sub_1400434F0(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rdx
	unsigned __int16* v5; // r9
	__int64 v6; // rdx
	unsigned __int16* v7; // r9
	__int64 v8; // rdx
	unsigned __int16* v9; // r9

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	v5 = (unsigned __int16*)&unk_1409D1094;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	if (*(_QWORD*)(qword_140C635F0 + 5744))
		v5 = *(unsigned __int16**)(qword_140C635F0 + 5744);
	sub_1400F0090(a1, v4, (unsigned __int64*)"strAccount", v5);
	v7 = (unsigned __int16*)&unk_1409D10AC;
	if (*(_QWORD*)(qword_140C635F0 + 5752))
		v7 = *(unsigned __int16**)(qword_140C635F0 + 5752);
	sub_1400F0090(a1, v6, (unsigned __int64*)"strRealm", v7);
	if (qword_140C65898)
	{
		v9 = (unsigned __int16*)&unk_1409D10C4;
		if (*(_QWORD*)(qword_140C65898 + 136))
			v9 = *(unsigned __int16**)(qword_140C65898 + 136);
	}
	else
	{
		v9 = (unsigned __int16*)&unk_1409D10E4;
	}
	sub_1400F0090(a1, v8, (unsigned __int64*)"strCharacter", v9);
	return 1i64;
}
// 140043556: variable 'v4' is possibly undefined
// 140043581: variable 'v6' is possibly undefined
// 1400435BA: variable 'v8' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

