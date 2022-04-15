#include "../winhttp.h"

//----- (000000014013FAA0) ----------------------------------------------------
char __fastcall sub_14013FAA0(__int64 a1, __int64 a2)
{
	_WORD* v4; // rbx
	__int64 v5; // r8
	int v6; // edx
	int v7; // eax
	__int64 v8; // rax
	__int64 v9; // rdx
	__int64 v10; // r8
	int v11; // eax
	int v12; // edx
	__int64 v13; // r8
	int v14; // eax
	__int64 v15; // rcx
	_QWORD* v16; // rsi
	__int64 v17; // rax
	_DWORD* v18; // rcx
	int v19; // ebx
	__int64 v21; // rax
	__int64 v22; // rdx
	__int64 v23; // r8
	int v24; // eax
	__int64* v25; // rcx
	__int64 v26; // rdx
	__int64* v27; // rax
	__int64 v28; // rax
	__int64 v29; // rcx
	__int64 v30; // rbx
	__int64* v31; // rcx
	__int64* v32; // rax
	__int64 v33; // r8
	__int64 v34; // rax
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-40h] BYREF
	__int64 v36; // [rsp+28h] [rbp-38h]
	LPVOID lpTlsValue; // [rsp+30h] [rbp-30h]
	__int64 v38[4]; // [rsp+40h] [rbp-20h] BYREF
	__int64 v39; // [rsp+88h] [rbp+28h] BYREF

	if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 48i64))(a2))
		v4 = 0i64;
	else
		v4 = (_WORD*)sub_1401A4F40(a2 + 24);
	v5 = 0i64;
	if (*v4 == 80)
	{
		LOWORD(v6) = *v4;
		while ((_WORD)v6)
		{
			v6 = (unsigned __int16)v4[v5 + 1];
			v7 = (unsigned __int16)word_1409DB476[v5++];
			if (v6 != v7)
				goto LABEL_10;
		}
		v8 = sub_14013F060(a1);
		sub_140140390(v8);
	}
LABEL_10:
	v9 = (unsigned __int16)*v4;
	v10 = 0i64;
	if ((_DWORD)v9 == 116)
	{
		while ((_WORD)v9)
		{
			v9 = (unsigned __int16)v4[v10 + 1];
			v11 = (unsigned __int16)word_1409DB516[v10++];
			if ((_DWORD)v9 != v11)
				goto LABEL_13;
		}
		v15 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8i64);
		v16 = *(_QWORD**)(v15 + 16);
		if (!v16
			|| !(*(unsigned __int8(__fastcall**)(_QWORD, __int64, __int64))(*v16 + 96i64))(*(_QWORD*)(v15 + 16), v9, v10))
		{
			v36 = 0i64;
			TlsValue = &off_140B5E648;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v17 = 0x141D1DC80i64;
			v18 = &unk_140C8A134;
			goto LABEL_21;
		}
		sub_14013E960(v16);
	}
LABEL_13:
	v12 = (unsigned __int16)*v4;
	v13 = 0i64;
	if (v12 == 116)
	{
		while ((_WORD)v12)
		{
			v12 = (unsigned __int16)v4[v13 + 1];
			v14 = (unsigned __int16)word_1409DB586[v13++];
			if (v12 != v14)
				goto LABEL_25;
		}
		v21 = sub_14013F060(a1);
		sub_140140390(v21);
	}
LABEL_25:
	v22 = (unsigned __int16)*v4;
	v23 = 0i64;
	if ((_DWORD)v22 != 84)
	{
	LABEL_28:
		v25 = *(__int64**)(*(_QWORD*)(a1 + 40) + 8i64);
		v26 = *v25;
		v27 = (__int64*)v25[1];
		*v27 = *v25;
		*(_QWORD*)(v26 + 8) = v27;
		sub_14018B900((__int64)v25, 0);
	LABEL_29:
		v28 = sub_14013F060(a1);
		sub_140141080(v28);
		--* (_DWORD*)(a1 + 16);
		return 1;
	}
	while ((_WORD)v22)
	{
		v22 = (unsigned __int16)v4[v23 + 1];
		v24 = (unsigned __int16)word_140A31D42[v23++];
		if ((_DWORD)v22 != v24)
			goto LABEL_28;
	}
	v29 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8i64);
	v30 = *(_QWORD*)(v29 + 16);
	if (v30
		&& (*(unsigned __int8(__fastcall**)(_QWORD, __int64, __int64))(*(_QWORD*)v30 + 96i64))(
			*(_QWORD*)(v29 + 16),
			v22,
			v23))
	{
		v31 = *(__int64**)(*(_QWORD*)(a1 + 40) + 8i64);
		v32 = (__int64*)v31[1];
		v33 = *v31;
		*v32 = *v31;
		*(_QWORD*)(v33 + 8) = v32;
		sub_14018B900((__int64)v31, 0);
		v34 = sub_14013F060(a1);
		sub_140140EF0(v34, v30);
		goto LABEL_29;
	}
	v36 = 0i64;
	TlsValue = &off_140B5E648;
	lpTlsValue = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v17 = 0x141D1DD68i64;
	v18 = &unk_140C8A130;
LABEL_21:
	v39 = v17;
	v38[0] = (__int64)TlsValue;
	v38[1] = v36;
	v38[2] = (__int64)lpTlsValue;
	v19 = sub_140196F30(v18, 13, &v39, v38, TlsValue);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	if (v19)
		DebugBreak();
	return 0;
}
// 1409DB474: using guessed type __int16 word_1409DB474[];
// 1409DB476: using guessed type __int16 word_1409DB476[];
// 1409DB514: using guessed type __int16 word_1409DB514;
// 1409DB516: using guessed type __int16 word_1409DB516[55];
// 1409DB584: using guessed type __int16 word_1409DB584;
// 1409DB586: using guessed type __int16 word_1409DB586[171];
// 140A31D40: using guessed type __int16 word_140A31D40[];
// 140A31D42: using guessed type __int16 word_140A31D42[];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();

