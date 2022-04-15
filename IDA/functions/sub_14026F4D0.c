#include "../winhttp.h"

//----- (000000014026F4D0) ----------------------------------------------------
__int64 __fastcall sub_14026F4D0(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rsi
	int v12; // eax
	int v13; // eax
	int v14; // ebx
	__int64 v15; // [rsp+30h] [rbp-58h] BYREF
	__int64 v16; // [rsp+38h] [rbp-50h] BYREF
	__int64 v17; // [rsp+40h] [rbp-48h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+48h] [rbp-40h] BYREF
	__int128 v19; // [rsp+50h] [rbp-38h]
	__int64(__fastcall * *v20)(); // [rsp+60h] [rbp-28h] BYREF
	__int128 v21; // [rsp+68h] [rbp-20h]

	if (!a2 || a2 > *(_DWORD*)(a1 + 7072))
		return 0i64;
	if (a4 < 0x10 && *(_DWORD*)(a1 + 4 * (a4 + 54i64 * a3) + 1188))
	{
		sub_14003D8F0(&v16, a1 + 24);
		v9 = *(unsigned int*)(a1 + 7076);
		v10 = *(_QWORD*)(a1 + 7064);
		v11 = 0i64;
		if ((unsigned int)v9 + a2 <= *(_DWORD*)(a1 + 7072))
		{
			v12 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64*, int))(*(_QWORD*)v10 + 88i64))(
				v10,
				v9,
				a2,
				&v15,
				4096);
		}
		else
		{
			++* (_DWORD*)(a1 + 7080);
			*(_DWORD*)(a1 + 7076) = 0;
			v12 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64*, int))(*(_QWORD*)v10 + 88i64))(
				v10,
				0i64,
				a2,
				&v15,
				0x2000);
		}
		if (v12 >= 0)
		{
			v13 = *(_DWORD*)(a1 + 7076);
			*(_DWORD*)(a1 + 7084) = v13;
			*(_DWORD*)(a1 + 7092) = a4;
			*(_DWORD*)(a1 + 7076) = a2 + v13;
			sub_14026BF80(a1, a3);
			_InterlockedIncrement((volatile signed __int32*)(a1 + 516));
			_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 520), a2);
			_InterlockedIncrement((volatile signed __int32*)(a1 + 524));
			_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 528), a2);
			v11 = v15;
		}
		sub_14003D880(&v16);
		return v11;
	}
	else
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v19 = 0i64;
		*((_QWORD*)&v19 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v20 = TlsValue;
		v17 = 0x141DE0EA0i64;
		v21 = v19;
		v14 = sub_1401971E0(&dword_140C8A348, 14, &v17, &v20);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v19 + 1));
		if (v14)
			DebugBreak();
		return 0i64;
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A348: using guessed type _DWORD dword_140C8A348;

