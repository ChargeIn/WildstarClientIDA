#include "../winhttp.h"

//----- (000000014027EDC0) ----------------------------------------------------
void __fastcall sub_14027EDC0(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	__int64 v5; // rsi
	__int64 v6; // r15
	__int64 v8; // r14
	int v9; // eax
	void* v10; // rdx
	__int64 v11; // rcx
	int v12; // eax
	__int64 v13; // rcx
	int v14; // ebx
	__int64(__fastcall * *v15)(); // [rsp+30h] [rbp-49h] BYREF
	__int128 v16; // [rsp+38h] [rbp-41h]
	__int64(__fastcall * *TlsValue)(); // [rsp+48h] [rbp-31h] BYREF
	__int128 v18; // [rsp+50h] [rbp-29h]
	__int64 v19; // [rsp+60h] [rbp-19h] BYREF
	__int64 v20; // [rsp+68h] [rbp-11h] BYREF
	__int64 v21; // [rsp+70h] [rbp-9h] BYREF
	__int64 v22; // [rsp+78h] [rbp-1h] BYREF
	__int64(__fastcall * *v23)(); // [rsp+80h] [rbp+7h] BYREF
	__int128 v24; // [rsp+88h] [rbp+Fh]
	__int64(__fastcall * *v25)(); // [rsp+A0h] [rbp+27h] BYREF
	__int128 v26; // [rsp+A8h] [rbp+2Fh]
	int v27; // [rsp+E8h] [rbp+6Fh] BYREF

	v5 = a4;
	v6 = a3;
	v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 24i64))(a2);
	if (!*(_DWORD*)(v8 + 4))
	{
		*(_QWORD*)&v18 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v18 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v23 = TlsValue;
		v21 = 0x141DE3330i64;
		v24 = v18;
		v9 = sub_1401971E0(&dword_140C8A368, 14, &v21, &v23);
		v10 = (void*)*((_QWORD*)&v18 + 1);
		TlsValue = &off_140B5E648;
		goto LABEL_9;
	}
	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a2 + 40i64))(a2))
		return;
	if ((unsigned int)v5 >= 0x10 || (v11 = v5 + 54 * v6, !*(_DWORD*)(a1 + 4 * v11 + 1188)))
	{
		*(_QWORD*)&v16 = 0i64;
		v15 = &off_140B5E648;
		*((_QWORD*)&v16 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v15);
		v25 = v15;
		v19 = 0x141DE32B0i64;
		v26 = v16;
		v9 = sub_1401971E0(&dword_140C8A36C, 14, &v19, &v25);
		v10 = (void*)*((_QWORD*)&v16 + 1);
		v15 = &off_140B5E648;
	LABEL_9:
		v14 = v9;
		TlsSetValue(dwTlsIndex, v10);
		if (v14)
			DebugBreak();
		return;
	}
	*(_DWORD*)(a1 + 8120) = v6;
	v22 = *(_QWORD*)(a2 + 32);
	v27 = *(_DWORD*)(a1 + 4 * v11 + 1188);
	sub_14003D8F0(&v20, a1 + 6368);
	(*(void(__fastcall**)(_QWORD, _QWORD, __int64, __int64*, int*, int*))(**(_QWORD**)(a1 + 6352) + 144i64))(
		*(_QWORD*)(a1 + 6352),
		(unsigned int)v5,
		1i64,
		&v22,
		&v27,
		&dword_140B63928);
	sub_14003D880(&v20);
	v12 = *(_DWORD*)(a1 + 240);
	if (*(_DWORD*)(a2 + 68) != v12)
	{
		*(_DWORD*)(a2 + 68) = v12;
		v13 = 6i64 * *(int*)(v8 + 4);
		_InterlockedIncrement((volatile signed __int32*)(a1 + 48i64 * *(int*)(v8 + 4) + 380));
		_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 8 * v13 + 384), *(_DWORD*)(a2 + 24));
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B63928: using guessed type int dword_140B63928;
// 140C8A368: using guessed type _DWORD dword_140C8A368;
// 140C8A36C: using guessed type _DWORD dword_140C8A36C;

