#include "../winhttp.h"

//----- (00000001402D3300) ----------------------------------------------------
void __fastcall sub_1402D3300(_QWORD* a1)
{
	signed int v2; // eax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rcx
	_DWORD* v7; // rcx
	_DWORD* i; // rax
	_QWORD* v9; // rcx
	_QWORD* j; // rax
	int v11; // edx
	__int64 v12; // rax
	__int64 v13; // rcx
	int v14; // ebx
	__int64 v15; // rcx
	__int64 v16; // rcx
	int* v17; // rax
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-858h] BYREF
	__int64 v19; // [rsp+38h] [rbp-850h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-848h]
	__int64 v21; // [rsp+48h] [rbp-840h] BYREF
	__int64 v22[4]; // [rsp+50h] [rbp-838h] BYREF
	char Buffer[2048]; // [rsp+70h] [rbp-818h] BYREF

	v2 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)*a1 + 40i64))(*a1, 0i64);
	if (v2 < 0)
		goto LABEL_20;
	v3 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)a1[1] + 32i64))(a1[1]);
	v4 = a1[1];
	a1[2] = v3;
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
	TlsValue = (__int64(__fastcall**)())a1[2];
	v19 = (__int64)TlsValue + v5;
	lpTlsValue = 0i64;
	v2 = sub_1402D2E30(&TlsValue, (__int64)(TlsValue + 54), (__int64)TlsValue);
	if (v2 < 0)
		goto LABEL_20;
	v6 = a1[2];
	a1[6] = v6 + 136;
	*((_OWORD*)a1 + 4) = *(_OWORD*)(v6 + 288);
	*((_OWORD*)a1 + 5) = *(_OWORD*)(v6 + 304);
	sub_1402D4AA0((__int64)(a1 + 17), *(unsigned int*)(a1[2] + 104i64));
	v7 = (_DWORD*)a1[19];
	for (i = (_DWORD*)a1[18]; i != v7; ++i)
		*i = 0;
	sub_1402D1490((__int64)(a1 + 13), *(unsigned int*)(a1[2] + 384i64));
	v9 = (_QWORD*)a1[15];
	for (j = (_QWORD*)a1[14]; j != v9; ++j)
		*j = 0i64;
	v11 = *(_DWORD*)(a1[2] + 56i64);
	if (v11
		&& (v2 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64, _QWORD*))(*(_QWORD*)qword_140C65670 + 56i64))(
			qword_140C65670,
			(unsigned int)(32 * v11),
			1i64,
			a1 + 12),
			v2 < 0))
	{
	LABEL_20:
		if (v2 != -1608318974)
		{
			sub_1401B3450(Buffer, 1024i64, v2);
			v19 = 0i64;
			TlsValue = &off_140B5E648;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v12 = a1[4];
			v22[0] = (__int64)TlsValue;
			v22[1] = v19;
			v22[2] = (__int64)lpTlsValue;
			v13 = *(_QWORD*)(v12 + 16);
			v21 = 0x141DEABE0i64;
			v14 = sub_1401971E0(dword_140C8A568, 16, &v21, Buffer, v13, v22);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue);
			if (v14)
				DebugBreak();
		}
		v15 = a1[12];
		if (v15)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
			a1[12] = 0i64;
		}
		v16 = a1[1];
		if (v16)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
			a1[1] = 0i64;
		}
		sub_1401C5690(432i64, (int**)a1 + 1, 0);
		v17 = (int*)(*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)a1[1] + 32i64))(a1[1]);
		a1[2] = v17;
		sub_1407E4830(v17, 0i64, 0x1B0ui64);
	}
	else
	{
		sub_1402D35B0(a1);
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C8A568: using guessed type _DWORD dword_140C8A568[2];
// 1402D3300: using guessed type char Buffer[2048];

