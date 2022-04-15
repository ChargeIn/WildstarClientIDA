#include "../winhttp.h"

//----- (00000001402ADD50) ----------------------------------------------------
void __fastcall sub_1402ADD50(_QWORD* a1, __int64 a2, int a3)
{
	__int64 v6; // rbx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	_DWORD* v10; // rax
	unsigned int v11; // edx
	__int64 v12; // rax
	_DWORD* v13; // rcx
	int v14; // ebx
	int v15; // ebx
	__int64 v16; // rcx
	__int64 v17; // rdi
	__int64 v18; // rax
	__int64 v19; // rdi
	__int64 v20; // rax
	__int64 v21; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-40h] BYREF
	__int128 v23; // [rsp+28h] [rbp-38h]
	__int64(__fastcall * *v24)(); // [rsp+40h] [rbp-20h] BYREF
	__int128 v25; // [rsp+48h] [rbp-18h]
	__int64 v26; // [rsp+88h] [rbp+28h] BYREF

	if (!*(_DWORD*)a2)
	{
		v6 = *(_QWORD*)(a2 + 8);
		if (!v6)
			v6 = *(_QWORD*)(*a1 + 8584i64);
		v7 = *(_QWORD*)(v6 + 136);
		if (a1[4] != v7)
		{
			if (v7)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
			v8 = a1[4];
			if (v8)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8);
			a1[4] = *(_QWORD*)(v6 + 136);
		}
		goto LABEL_30;
	}
	v9 = *(_QWORD*)(a2 + 8);
	if (!v9)
	{
		v21 = a1[4];
		if (v21)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 16i64))(v21);
			a1[4] = 0i64;
		}
		goto LABEL_30;
	}
	v10 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 24i64))(v9);
	v11 = *(_DWORD*)(a2 + 20);
	if (v11 >= v10[5])
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v23 = 0i64;
		*((_QWORD*)&v23 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v12 = 0x141DE7050i64;
		v13 = &unk_140C8A530;
		goto LABEL_13;
	}
	if (((v10[7] - 3) & 0xFFFFFFFD) != 0)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v23 = 0i64;
		*((_QWORD*)&v23 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v12 = 0x141DE6FA0i64;
		v13 = &unk_140C8A534;
		goto LABEL_13;
	}
	if (!dword_140AE64C0[v10[6]])
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v23 = 0i64;
		*((_QWORD*)&v23 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v12 = 0x141DE6F40i64;
		v13 = &unk_140C8A538;
	LABEL_13:
		v26 = v12;
		v24 = TlsValue;
		v25 = v23;
		v14 = sub_1401971E0(v13, 14, &v26, &v24, TlsValue);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v23 + 1));
		if (v14)
			DebugBreak();
		return;
	}
	if (*(_DWORD*)a2 == 1)
	{
		v19 = *(_QWORD*)(a2 + 8);
		v20 = sub_1402A1290(v19, v11, a3);
		sub_140282570(a1 + 4, v20);
		*(_DWORD*)(v19 + 184) = 1;
		goto LABEL_30;
	}
	if (*(_DWORD*)a2 == 2)
	{
		v17 = *(_QWORD*)(a2 + 8);
		v18 = sub_1402A7280(v17, *(_DWORD*)(a2 + 16), v11);
		sub_140282570(a1 + 4, v18);
		*(_DWORD*)(v17 + 344) = 1;
		goto LABEL_30;
	}
	if (*(_DWORD*)a2 != 3)
	{
	LABEL_30:
		a1[1] = *(_QWORD*)a2;
		a1[2] = *(_QWORD*)(a2 + 8);
		a1[3] = *(_QWORD*)(a2 + 16);
		*(_DWORD*)(*a1 + 7176i64) |= 8u;
		return;
	}
	TlsValue = &off_140B5E648;
	*(_QWORD*)&v23 = 0i64;
	*((_QWORD*)&v23 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v24 = TlsValue;
	v26 = 0x141DE6EA0i64;
	v25 = v23;
	v15 = sub_1401971E0(&dword_140C8A53C, 14, &v26, &v24);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v23 + 1));
	if (v15)
		DebugBreak();
	v16 = a1[4];
	if (v16)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 16i64))(v16);
		a1[4] = 0i64;
	}
}
// 140AE64C0: using guessed type int dword_140AE64C0[56];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A53C: using guessed type _DWORD dword_140C8A53C;

