#include "../winhttp.h"

//----- (0000000140270420) ----------------------------------------------------
void __fastcall sub_140270420(__int64 a1, __int64* a2, unsigned int a3)
{
	__int64 v3; // rax
	__int64 v6; // rsi
	int v7; // ebx
	__int64 v8; // rdx
	__int64 v9; // r9
	__int64 v10; // rsi
	int v11; // r14d
	int v12; // ebx
	__int64 v13; // rdx
	__int64 v14; // rcx
	int v15; // eax
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-79h] BYREF
	__int128 v17; // [rsp+38h] [rbp-71h]
	__int64(__fastcall * *v18)(); // [rsp+48h] [rbp-61h] BYREF
	__int64 v19; // [rsp+50h] [rbp-59h]
	LPVOID Value; // [rsp+58h] [rbp-51h]
	__int128 v21; // [rsp+60h] [rbp-49h] BYREF
	LPVOID v22[2]; // [rsp+70h] [rbp-39h]
	__int64(__fastcall * *v23)(); // [rsp+80h] [rbp-29h] BYREF
	__int128 v24; // [rsp+88h] [rbp-21h]
	__int64 v25[4]; // [rsp+A0h] [rbp-9h] BYREF
	int v26[4]; // [rsp+C0h] [rbp+17h] BYREF
	__int128 v27[3]; // [rsp+D0h] [rbp+27h] BYREF
	__int64 v28; // [rsp+118h] [rbp+6Fh] BYREF
	__int64 v29; // [rsp+128h] [rbp+7Fh] BYREF

	v3 = *a2;
	v6 = a3;
	v26[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 32))(a2, v26);
	if ((unsigned int)v6 < *((_DWORD*)a2 + 7))
	{
		v8 = a2[6];
		v9 = *(unsigned int*)(*(_QWORD*)(v8 + 32) + 4 * v6);
		v10 = 8 * v9;
		if (*(_QWORD*)(8 * v9 + a2[9])
			|| (v11 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 6608) + 728i64))(
				*(_QWORD*)(a1 + 6608),
				*(_QWORD*)(*(_QWORD*)(v8 + 16) + 16 * v9 + 8)),
				v11 >= 0))
		{
			v13 = *(_QWORD*)(v10 + a2[9]);
			if (*(_QWORD*)(a1 + 10032) != v13)
			{
				v14 = *(_QWORD*)(a1 + 6608);
				*(_QWORD*)(a1 + 10032) = v13;
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 736i64))(v14);
			}
			v15 = *(_DWORD*)(a1 + 240);
			if (*((_DWORD*)a2 + 21) != v15)
			{
				*((_DWORD*)a2 + 21) = v15;
				_InterlockedIncrement((volatile signed __int32*)(a1 + 284));
				_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 288), *((_DWORD*)a2 + 11));
			}
		}
		else
		{
			v19 = 0i64;
			v18 = &off_140B5E648;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v18);
			v25[0] = (__int64)v18;
			v25[1] = v19;
			*(_QWORD*)&v21 = &off_140B5E648;
			*((_QWORD*)&v21 + 1) = L"Result";
			v25[2] = (__int64)Value;
			v22[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v21);
			LODWORD(v22[1]) = v11;
			*(_QWORD*)&v21 = &off_140B5E640;
			v27[1] = *(_OWORD*)v22;
			v29 = 0x141DE16A0i64;
			v27[0] = v21;
			v12 = sub_1401971E0(&dword_140C8A31C, 14, &v29, v27, v25);
			*(_QWORD*)&v21 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v22[0]);
			v18 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, Value);
			if (v12)
				DebugBreak();
		}
	}
	else
	{
		*(_QWORD*)&v17 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v17 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v23 = TlsValue;
		v28 = 0x141DE0F90i64;
		v24 = v17;
		v7 = sub_1401971E0(&dword_140C8A32C, 14, &v28, &v23);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v17 + 1));
		if (v7)
			DebugBreak();
	}
}
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A31C: using guessed type _DWORD dword_140C8A31C;
// 140C8A32C: using guessed type _DWORD dword_140C8A32C;
// 140270420: using guessed type int var_40[4];

