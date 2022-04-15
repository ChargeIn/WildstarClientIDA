#include "../winhttp.h"

//----- (0000000140045760) ----------------------------------------------------
__int64 __fastcall sub_140045760(__int64 a1, void(__fastcall*** a2)(_QWORD))
{
	__int64 v4; // rcx
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // rsi
	__int64 v8; // rbx
	int v9; // eax
	__int64 v10; // r9
	__int64 v11; // rax
	__int64 v12; // rdx
	__int64 result; // rax
	__int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF
	char v15; // [rsp+60h] [rbp+8h] BYREF
	const wchar_t* v16; // [rsp+68h] [rbp+10h] BYREF
	__int64 v17; // [rsp+70h] [rbp+18h] BYREF

	if (*(void(__fastcall****)(_QWORD))(a1 + 176) != a2)
	{
		if (a2)
			(**a2)(a2);
		v4 = *(_QWORD*)(a1 + 176);
		if (v4)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a1 + 176) = a2;
	}
	sub_140016E90((_QWORD*)qword_140C635F0);
	v5 = qword_140C635F0;
	sub_14018B900(*(_QWORD*)(qword_140C635F0 + 5776), 0);
	v6 = qword_140C635F0;
	*(_QWORD*)(v5 + 5776) = 0i64;
	*(_QWORD*)(v6 + 5792) = 0i64;
	v7 = *(_QWORD*)(a1 + 176);
	*(_DWORD*)(a1 + 168) = 0;
	v15 = 0;
	v16 = *(const wchar_t**)(v6 + 280);
	if (!(*(unsigned int(__fastcall**)(__int64, const wchar_t**, __int64, char*))(*(_QWORD*)qword_140C65808 + 264i64))(
		qword_140C65808,
		&v16,
		1956i64,
		&v15))
	{
		v8 = (*(__int64(__fastcall**)(const wchar_t*))(*(_QWORD*)v16 + 16i64))(v16);
		v9 = (*(__int64(__fastcall**)(const wchar_t*))(*(_QWORD*)v16 + 32i64))(v16);
		v10 = *(_QWORD*)(v7 + 16);
		if (v10)
			(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(v10 + 16))(*(_QWORD*)(v10 + 8), v8 + 4, (unsigned int)(v9 - 4));
		v17 = 0i64;
		v11 = (*(__int64(__fastcall**)(const wchar_t*))(*(_QWORD*)v16 + 16i64))(v16);
		v12 = *(unsigned int*)(v7 + 152);
		v17 = v11;
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64*))(*(_QWORD*)qword_140C65808 + 240i64))(
			qword_140C65808,
			v12,
			580i64,
			&v17);
	}
	v16 = L"RealmSelect";
	v14[0] = (__int64)L"Realm";
	v14[1] = (__int64)L"DefaultStratum";
	result = sub_14003DB40(a1, (__int64)v14, 2ui64, (__int64)&v16, 1ui64);
	if ((int)result >= 0)
	{
		sub_14003E470(a1, 516632, 0i64);
		return 0i64;
	}
	return result;
}
// 1409F7F20: using guessed type wchar_t aDefaultstratum_2[15];
// 1409FEC18: using guessed type wchar_t aRealmselect[12];
// 1409FEC30: using guessed type wchar_t aRealm_1[6];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65808: using guessed type __int64 qword_140C65808;

