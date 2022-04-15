#include "../winhttp.h"

//----- (000000014019E200) ----------------------------------------------------
void __fastcall sub_14019E200(__int64 a1, __int64 a2, unsigned int a3)
{
	unsigned int v3; // r14d
	int v5; // ebx
	_DWORD* v6; // rdi
	int v7; // ebx
	__int64 v8; // rcx
	__int64 v9; // rdi
	HANDLE EventW; // rcx
	__int64(__fastcall * *v11)(); // [rsp+90h] [rbp-80h] BYREF
	__int128 v12; // [rsp+98h] [rbp-78h]
	__int64(__fastcall * *TlsValue)(); // [rsp+A8h] [rbp-68h] BYREF
	__int128 v14; // [rsp+B0h] [rbp-60h]
	__int64 v15; // [rsp+C0h] [rbp-50h] BYREF
	__int64(__fastcall * *v16)(); // [rsp+D0h] [rbp-40h] BYREF
	__int128 v17; // [rsp+D8h] [rbp-38h]
	__int64(__fastcall * *v18)(); // [rsp+F0h] [rbp-20h] BYREF
	__int128 v19; // [rsp+F8h] [rbp-18h]
	__int64 v20; // [rsp+130h] [rbp+20h] BYREF
	__int64 v21; // [rsp+148h] [rbp+38h] BYREF

	v3 = a2;
	if (a1)
	{
		v6 = (_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64 * a3);
		if (*v6)
		{
			v11 = &off_140B5E648;
			*(_QWORD*)&v12 = 0i64;
			*((_QWORD*)&v12 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v11);
			v15 = 0x141D3EC60i64;
			v18 = v11;
			v19 = v12;
			v7 = sub_140196F30(
				&dword_140C8A1DC,
				35,
				&v15,
				v3,
				v6[1],
				*v6,
				*(_DWORD*)(a1 + 16),
				*(_DWORD*)(a1 + 20),
				*(_DWORD*)(a1 + 12),
				*(_DWORD*)(a1 + 8),
				*(_DWORD*)(a1 + 40),
				*(_DWORD*)(a1 + 44),
				*(_DWORD*)(a1 + 48),
				*(_DWORD*)(a1 + 52),
				*(_DWORD*)(a1 + 56),
				a1,
				*(_QWORD*)(a1 + 96),
				&v18);
			v11 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v12 + 1));
			if (v7)
				DebugBreak();
		}
		else
		{
			*v6 = 1;
			v6[1] = a2;
			if (!_InterlockedDecrement((volatile signed __int32*)(a1 + 20)))
			{
				sub_14003D8F0(&v20, qword_140C63758 + 8);
				sub_1401C6280(a1);
				v8 = v20;
				if (*(_QWORD*)(v20 + 8) <= 1ui64)
				{
					*(_DWORD*)v20 = 0;
					a2 = _InterlockedExchange64((volatile __int64*)(v8 + 8), 0i64);
					if (*(_QWORD*)(v20 + 16))
					{
						v9 = v20;
						if (!*(_QWORD*)(v20 + 24))
						{
							EventW = CreateEventW(0i64, 0, 0, 0i64);
							if (_InterlockedCompareExchange64((volatile signed __int64*)(v9 + 24), (signed __int64)EventW, 0i64))
								CloseHandle(EventW);
						}
						SetEvent(*(HANDLE*)(v9 + 24));
					}
				}
				else
				{
					--* (_QWORD*)(v20 + 8);
				}
			}
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, a2);
		}
	}
	else
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v14 = 0i64;
		*((_QWORD*)&v14 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v16 = TlsValue;
		v21 = 0x141D3ED08i64;
		v17 = v14;
		v5 = sub_140196F30(&dword_140C8A1E0, 35, &v21, &v16);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v14 + 1));
		if (v5)
			DebugBreak();
	}
}
// 14019E479: variable 'a2' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63758: using guessed type __int64 qword_140C63758;
// 140C8A1DC: using guessed type _DWORD dword_140C8A1DC;
// 140C8A1E0: using guessed type _DWORD dword_140C8A1E0;

