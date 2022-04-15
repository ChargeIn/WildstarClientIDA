#include "../winhttp.h"

//----- (000000014018A5F0) ----------------------------------------------------
__int64 __fastcall sub_14018A5F0(unsigned __int64 a1)
{
	__int64 v2; // rcx
	int v3; // eax
	int v4; // ebx
	unsigned __int64 v6; // rcx
	unsigned __int64 v7; // rbx
	unsigned __int64 v8; // r9
	unsigned __int64 v9; // rdx
	unsigned __int64 v10; // rax
	unsigned __int64 v11; // r14
	unsigned __int64 v12; // r8
	__int64 v13; // r9
	int v14; // eax
	char v15; // r9
	_DWORD* v16; // rcx
	unsigned __int64 v17; // rbx
	__int64 v18; // r9
	int v19; // ebx
	char v20; // r9
	__int64 v21; // [rsp+20h] [rbp-60h]
	__int64(__fastcall * *TlsValue)(); // [rsp+40h] [rbp-40h] BYREF
	__int128 v23; // [rsp+48h] [rbp-38h]
	__int64(__fastcall * *v24)(); // [rsp+60h] [rbp-20h] BYREF
	__int128 v25; // [rsp+68h] [rbp-18h]
	__int64 v26; // [rsp+A0h] [rbp+20h] BYREF

	v2 = *(_QWORD*)a1;
	if (v2 >= 0)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v23 = 0i64;
		*((_QWORD*)&v23 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v24 = TlsValue;
		v26 = 0x141D3A300i64;
		v25 = v23;
		v3 = sub_140196F30(dword_140C8A190, 2, &v26, &v24);
	LABEL_3:
		v4 = v3;
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v23 + 1));
		if (v4)
			DebugBreak();
		return 0i64;
	}
	v6 = HIBYTE(v2) & 0x7F;
	if (v6 - 9 > 0x22)
	{
		*(_QWORD*)&v23 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v23 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v20 = *(_BYTE*)(a1 + 7);
		v24 = TlsValue;
		v25 = v23;
		v26 = 0x141D3A200i64;
		v3 = sub_140196F30(&dword_140C8A18C, 2, &v26, v20 & 0x7F, &v24);
		goto LABEL_3;
	}
	v7 = *(_QWORD*)(a1 + 8);
	if (((v7 >> 44) & 0xF) >= 2)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v23 = 0i64;
		*((_QWORD*)&v23 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v8 = *(_QWORD*)(a1 + 8);
		v24 = TlsValue;
		v25 = v23;
		v26 = 0x141D3A520i64;
		v3 = sub_140196F30(&dword_140C8A17C, 2, &v26, (v8 >> 44) & 0xF, &v24);
		goto LABEL_3;
	}
	v9 = 1i64 << v6;
	v10 = (unsigned __int64)(1i64 << v6) >> 1;
	if (v6 > 0x20)
	{
		v17 = (v7 & 0xFFFFFFFFFFFi64) + 16;
		if (v17 > v10 && v17 <= v9)
			return 1i64;
		*(_QWORD*)&v23 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v23 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v16 = &unk_140C8A16C;
		v26 = 0x141D3AA00i64;
		v21 = v17;
	LABEL_25:
		v18 = *(_BYTE*)(a1 + 7) & 0x7F;
		v24 = TlsValue;
		v25 = v23;
		v14 = sub_140196F30(v16, 2, &v26, v18, v21, &v24);
		goto LABEL_26;
	}
	v11 = (unsigned int)v7 + 16i64;
	if (v11 <= v10 || v11 > v9)
	{
		*(_QWORD*)&v23 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v23 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v16 = &unk_140C8A178;
		v26 = 0x141D3A400i64;
		v21 = (unsigned int)v7 + 16i64;
		goto LABEL_25;
	}
	v12 = qword_140C7F970[WORD2(v7) & 0xFFF];
	if (v12)
	{
		if (a1 < v12 || a1 > v12 - v9 + 0x100000000i64)
		{
			*(_QWORD*)&v23 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v23 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v15 = *(_BYTE*)(a1 + 7);
			v24 = TlsValue;
			v25 = v23;
			v26 = 0x141D3A7C0i64;
			v14 = sub_140196F30(&dword_140C8A180, 2, &v26, v15 & 0x7F, HIDWORD(*(_QWORD*)(a1 + 8)) & 0xFFF, a1, &v24);
			goto LABEL_26;
		}
		if (((a1 - v12) & (v9 - 1)) != 0)
		{
			TlsValue = &off_140B5E648;
			*(_QWORD*)&v23 = 0i64;
			*((_QWORD*)&v23 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v24 = TlsValue;
			v25 = v23;
			v26 = 0x141D3AB30i64;
			v14 = sub_140196F30(&dword_140C8A170, 2, &v26);
			goto LABEL_26;
		}
		return 1i64;
	}
	TlsValue = &off_140B5E648;
	*(_QWORD*)&v23 = 0i64;
	*((_QWORD*)&v23 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v13 = *(_QWORD*)(a1 + 8);
	v24 = TlsValue;
	v25 = v23;
	v26 = 0x141D3A900i64;
	v14 = sub_140196F30(&dword_140C8A184, 2, &v26, WORD2(v13) & 0xFFF, &v24);
LABEL_26:
	v19 = v14;
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v23 + 1));
	if (v19)
		DebugBreak();
	return 0i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C7F970: using guessed type __int64 qword_140C7F970[4096];
// 140C8A170: using guessed type _DWORD dword_140C8A170;
// 140C8A17C: using guessed type _DWORD dword_140C8A17C;
// 140C8A180: using guessed type _DWORD dword_140C8A180;
// 140C8A184: using guessed type _DWORD dword_140C8A184;
// 140C8A18C: using guessed type _DWORD dword_140C8A18C;
// 140C8A190: using guessed type _DWORD dword_140C8A190[2];

