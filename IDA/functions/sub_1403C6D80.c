#include "../winhttp.h"

//----- (00000001403C6D80) ----------------------------------------------------
void __fastcall sub_1403C6D80(__int64 a1, __int64 a2)
{
	unsigned int v3; // eax
	unsigned int v4; // edi
	__int64 v5; // rax
	_DWORD* v6; // rcx
	int v7; // ebx
	__int64 v8; // rsi
	__int64 v9; // rax
	_DWORD* v10; // rcx
	__int64 v11; // rax
	int v12; // ecx
	__int64 v13; // rax
	int v14; // ebx
	unsigned int v15; // ecx
	unsigned int v16; // edx
	__int64(__fastcall * *TlsValue)(); // [rsp+40h] [rbp-40h] BYREF
	__int64 v18; // [rsp+48h] [rbp-38h]
	LPVOID lpTlsValue; // [rsp+50h] [rbp-30h]
	__int64(__fastcall * *v20)(); // [rsp+60h] [rbp-20h] BYREF
	__int64 v21; // [rsp+68h] [rbp-18h]
	LPVOID v22; // [rsp+70h] [rbp-10h]
	__int64 v23; // [rsp+90h] [rbp+10h] BYREF

	v3 = sub_140029820(a1, a2, *(_DWORD*)(a1 + 5752));
	v4 = v3;
	switch (v3)
	{
	case 0xFFFFFFFF:
		v18 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v5 = 0x141DF0950i64;
		v6 = &unk_140C8A6B4;
		goto LABEL_3;
	case 0xFFFFFFFE:
		v18 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v5 = 0x141DF0A18i64;
		v6 = &unk_140C8A6AC;
	LABEL_3:
		v23 = v5;
		v20 = TlsValue;
		v21 = v18;
		v22 = lpTlsValue;
		v7 = sub_1401971E0(v6, 22, &v23, &v20);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		if (!v7)
			return;
		goto LABEL_4;
	case 0xFFFFFFFD:
		sub_1400035B0();
		return;
	}
	v8 = sub_14024DFC0(v3);
	if (!v8)
	{
		v18 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v9 = 0x141DF0A58i64;
		v10 = &unk_140C8A6B0;
		goto LABEL_20;
	}
	if ((dword_140DC2288 & 1) != 0)
	{
		v12 = dword_140DC228C;
	}
	else
	{
		dword_140DC2288 |= 1u;
		v11 = sub_140200220(0x91u);
		if (v11)
		{
			v12 = *(_DWORD*)(v11 + 4);
			dword_140DC228C = v12;
		}
		else
		{
			v12 = 1;
			dword_140DC228C = 1;
		}
	}
	*(_DWORD*)(a1 + 5756) = *(_DWORD*)(v8 + 4);
	if (v4 == v12)
	{
		*(_DWORD*)(a1 + 5764) = 0;
		*(_DWORD*)(a1 + 5760) = -1;
	LABEL_24:
		Apollo_LUAEvent(
			*(_QWORD*)(a1 + 29504),
			"UI_XPChanged",
			"iiii",
			*(unsigned int*)(a1 + 5752),
			*(_DWORD*)(v8 + 4),
			*(_DWORD*)(a1 + 5760),
			*(_DWORD*)(a1 + 5768));
		return;
	}
	v13 = sub_14024DFC0(v4 + 1);
	if (v13)
	{
		*(_DWORD*)(a1 + 5760) = *(_DWORD*)(v13 + 4) - *(_DWORD*)(v8 + 4);
		v15 = *(_DWORD*)(v13 + 4);
		v16 = *(_DWORD*)(v8 + 4);
		if (v15 > v16)
			*(float*)(a1 + 5764) = (float)(int)(*(_DWORD*)(a1 + 5752) - v16) / (float)(int)(v15 - v16);
		goto LABEL_24;
	}
	v18 = 0i64;
	TlsValue = &off_140B5E648;
	lpTlsValue = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v9 = 0x141DF09D0i64;
	v10 = &unk_140C8A6A4;
LABEL_20:
	v23 = v9;
	v20 = TlsValue;
	v21 = v18;
	v22 = lpTlsValue;
	v14 = sub_1401971E0(v10, 22, &v23, &v20);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	if (v14)
		LABEL_4:
	DebugBreak();
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC2288: using guessed type int dword_140DC2288;
// 140DC228C: using guessed type int dword_140DC228C;

