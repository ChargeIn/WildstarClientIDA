#include "../winhttp.h"

//----- (000000014027FA60) ----------------------------------------------------
void __fastcall sub_14027FA60(__int64 a1, __int64 a2, unsigned int a3)
{
	void(__fastcall * *v3)(__int64); // rax
	__int64 v6; // rsi
	int v7; // ebx
	int v8; // ebp
	__int64 v9; // rax
	__int64 v10; // rcx
	int v11; // eax
	int v12[4]; // [rsp+20h] [rbp-58h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-48h] BYREF
	__int128 v14; // [rsp+38h] [rbp-40h]
	__int64(__fastcall * *v15)(); // [rsp+50h] [rbp-28h] BYREF
	__int128 v16; // [rsp+58h] [rbp-20h]
	__int64 v17; // [rsp+88h] [rbp+10h] BYREF

	v3 = *(void(__fastcall***)(__int64))a2;
	v6 = a3;
	v12[0] = -1;
	((void(__fastcall*)(__int64, int*))v3[4])(a2, v12);
	if ((unsigned int)v6 < *(_DWORD*)(a2 + 28))
	{
		v8 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 48) + 32i64) + 4 * v6);
		v9 = *(_QWORD*)(a1 + 8216);
		if (v9 != a2 || *(_DWORD*)(a1 + 8224) != v8)
			*(_DWORD*)(a1 + 7176) |= 0x100u;
		if (v9 != a2)
		{
			(**(void(__fastcall***)(__int64))a2)(a2);
			v10 = *(_QWORD*)(a1 + 8216);
			if (v10)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
			*(_QWORD*)(a1 + 8216) = a2;
		}
		v11 = *(_DWORD*)(a1 + 240);
		*(_DWORD*)(a1 + 8224) = v8;
		*(_DWORD*)(a1 + 8228) = v6;
		if (*(_DWORD*)(a2 + 84) != v11)
		{
			*(_DWORD*)(a2 + 84) = v11;
			_InterlockedIncrement((volatile signed __int32*)(a1 + 332));
			_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 336), *(_DWORD*)(a2 + 44));
		}
	}
	else
	{
		*(_QWORD*)&v14 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v14 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v15 = TlsValue;
		v17 = 0x141DE3580i64;
		v16 = v14;
		v7 = sub_1401971E0(&dword_140C8A354, 14, &v17, &v15);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v14 + 1));
		if (v7)
			DebugBreak();
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A354: using guessed type _DWORD dword_140C8A354;
// 14027FA60: using guessed type int var_58[4];

