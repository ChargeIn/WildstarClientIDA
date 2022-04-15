#include "../winhttp.h"

//----- (0000000140289EA0) ----------------------------------------------------
__int64 __fastcall sub_140289EA0(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
	unsigned int v5; // ebx
	int v8; // r14d
	int v9; // ebx
	int v10; // esi
	int v11; // edx
	int v12; // ebx
	__int64 v13; // rcx
	int v14; // r15d
	void* v15; // xmm1_8
	volatile signed __int32* v16; // rdx
	__int64(__fastcall * *v17)(); // [rsp+30h] [rbp-89h] BYREF
	__int128 v18; // [rsp+38h] [rbp-81h]
	__int64(__fastcall * *TlsValue)(); // [rsp+48h] [rbp-71h] BYREF
	__int128 v20; // [rsp+50h] [rbp-69h]
	__int128 v21; // [rsp+60h] [rbp-59h] BYREF
	__int128 v22; // [rsp+70h] [rbp-49h]
	__int64 v23; // [rsp+80h] [rbp-39h] BYREF
	__int64 v24; // [rsp+88h] [rbp-31h] BYREF
	__int64 v25; // [rsp+90h] [rbp-29h] BYREF
	__int64(__fastcall * *v26)(); // [rsp+A0h] [rbp-19h] BYREF
	__int128 v27; // [rsp+A8h] [rbp-11h]
	__int64(__fastcall * *v28)(); // [rsp+C0h] [rbp+7h] BYREF
	__int128 v29; // [rsp+C8h] [rbp+Fh]
	__int128 v30; // [rsp+E0h] [rbp+27h]
	__int128 v31; // [rsp+F0h] [rbp+37h]

	v5 = a3;
	if ((a4 & 3) == 0)
		return 0i64;
	v8 = a4 & 1;
	if ((a4 & 1) != 0 && *(_DWORD*)(a1 + 28) == 1)
	{
		*(_QWORD*)&v20 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v20 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v28 = TlsValue;
		v23 = 0x141DE3C60i64;
		v29 = v20;
		v9 = sub_1401971E0(&dword_140C8A3B0, 14, &v23, &v28);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v20 + 1));
		if (v9)
		{
			DebugBreak();
			return 0i64;
		}
		return 0i64;
	}
	v10 = a4 & 2;
	v11 = 0;
	if ((a4 & 2) == 0)
		v11 = 16;
	if (!a3)
		v5 = *(_DWORD*)(a1 + 24);
	if (a2 + v5 > *(_DWORD*)(a1 + 24))
	{
		*(_QWORD*)&v18 = 0i64;
		v17 = &off_140B5E648;
		*((_QWORD*)&v18 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v17);
		v26 = v17;
		v25 = 0x141DE3C00i64;
		v27 = v18;
		v12 = sub_1401971E0(&dword_140C8A3B4, 14, &v25, &v26);
		v17 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v18 + 1));
		if (v12)
			DebugBreak();
		return 0i64;
	}
	v13 = *(_QWORD*)(a1 + 40);
	*(_DWORD*)(a1 + 48) = 1;
	v14 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64*, int))(*(_QWORD*)v13 + 88i64))(
		v13,
		a2,
		v5,
		&v24,
		v11);
	if (v14 >= 0)
	{
		v16 = (volatile signed __int32*)(48i64 * *(int*)(a1 + 28) + *(_QWORD*)(a1 + 16) + 340i64);
		if (v8)
		{
			_InterlockedIncrement(v16 + 6);
			_InterlockedExchangeAdd(v16 + 7, v5);
		}
		if (v10)
		{
			_InterlockedIncrement(v16 + 8);
			_InterlockedExchangeAdd(v16 + 9, v5);
		}
		return v24;
	}
	else
	{
		*(_QWORD*)&v21 = &off_140B5E648;
		*((_QWORD*)&v21 + 1) = L"Result";
		*(_QWORD*)&v22 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v21);
		*(_QWORD*)&v21 = &off_140B5E640;
		DWORD2(v22) = v14;
		v15 = (void*)v22;
		v30 = v21;
		v31 = v22;
		sub_1400035B0();
		*(_QWORD*)&v21 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v15);
		return 0i64;
	}
}
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A3B0: using guessed type _DWORD dword_140C8A3B0;
// 140C8A3B4: using guessed type _DWORD dword_140C8A3B4;

