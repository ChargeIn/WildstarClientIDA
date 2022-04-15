//----- (0000000140020BC0) ----------------------------------------------------
__int64 __fastcall sub_140020BC0(__int64 a1, void(__fastcall*** a2)(_QWORD), int a3)
{
	__int64 result; // rax
	__int64 v6; // rcx
	__int64 v7; // rbx
	__int64 v8; // rdi
	int v9; // eax
	__int64 v10; // r9
	__int64 v11; // rax
	__int64 v12; // rdx
	__int64 v13[5]; // [rsp+30h] [rbp-58h] BYREF
	__int64 v14[6]; // [rsp+58h] [rbp-30h] BYREF
	__int64 v15; // [rsp+98h] [rbp+10h] BYREF
	int v16; // [rsp+A0h] [rbp+18h] BYREF
	__int64 v17; // [rsp+A8h] [rbp+20h] BYREF

	v16 = a3;
	if (!a2)
		return 2147500037i64;
	if (*(void(__fastcall****)(_QWORD))(a1 + 184) != a2)
	{
		(**a2)(a2);
		v6 = *(_QWORD*)(a1 + 184);
		if (v6)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		*(_QWORD*)(a1 + 184) = a2;
	}
	v14[0] = (__int64)L"Top";
	v14[1] = (__int64)L"AccountServices";
	v14[2] = (__int64)L"Navigation";
	*(_DWORD*)(a1 + 368) = 0;
	v14[3] = (__int64)L"DefaultStratum";
	v14[4] = (__int64)L"TempBlocker";
	v13[0] = (__int64)L"Character";
	v13[1] = (__int64)L"CharacterSelection";
	v13[2] = (__int64)L"AccountServices";
	v13[3] = (__int64)L"Credits";
	v13[4] = (__int64)L"MicroStore";
	result = sub_14003DB40(a1, (__int64)v14, 5ui64, (__int64)v13, 5ui64);
	if ((int)result >= 0)
	{
		v7 = *(_QWORD*)(a1 + 184);
		LOBYTE(v16) = 0;
		v15 = *(_QWORD*)(qword_140C635F0 + 280);
		if (!(*(unsigned int(__fastcall**)(__int64, __int64*, __int64, int*))(*(_QWORD*)qword_140C65808 + 264i64))(
			qword_140C65808,
			&v15,
			2016i64,
			&v16))
		{
			v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 16i64))(v15);
			v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 32i64))(v15);
			v10 = *(_QWORD*)(v7 + 16);
			if (v10)
				(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(v10 + 16))(
					*(_QWORD*)(v10 + 8),
					v8 + 4,
					(unsigned int)(v9 - 4));
			v17 = 0i64;
			v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 16i64))(v15);
			v12 = *(unsigned int*)(v7 + 152);
			v17 = v11;
			(*(void(__fastcall**)(__int64, __int64, __int64, __int64*))(*(_QWORD*)qword_140C65808 + 240i64))(
				qword_140C65808,
				v12,
				580i64,
				&v17);
		}
		return 0i64;
	}
	return result;
}
// 1409E6FC8: using guessed type wchar_t aDefaultstratum[15];
// 1409ED528: using guessed type wchar_t aTop[4];
// 1409ED530: using guessed type wchar_t aAccountservice[16];
// 1409ED550: using guessed type wchar_t aNavigation[11];
// 1409ED568: using guessed type wchar_t aTempblocker[12];
// 1409ED580: using guessed type wchar_t aCharacter[10];
// 1409ED598: using guessed type wchar_t aCharacterselec[19];
// 1409ED5C0: using guessed type wchar_t aAccountservice_0[16];
// 1409ED5E0: using guessed type wchar_t aCredits[8];
// 1409ED5F0: using guessed type wchar_t aMicrostore[11];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65808: using guessed type __int64 qword_140C65808;

