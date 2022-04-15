#include "../winhttp.h"

//----- (00000001402A8F20) ----------------------------------------------------
__int64 __fastcall sub_1402A8F20(__int64 a1, __int64 a2)
{
	int v5; // ebx
	int v6; // eax
	__int64 v7; // rcx
	unsigned int v8; // edi
	__int64 v9; // rbx
	HANDLE EventW; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-48h] BYREF
	__int128 v12; // [rsp+38h] [rbp-40h]
	__int64(__fastcall * *v13)(); // [rsp+50h] [rbp-28h] BYREF
	__int128 v14; // [rsp+58h] [rbp-20h]
	__int64 v15; // [rsp+88h] [rbp+10h] BYREF
	__int64 v16; // [rsp+90h] [rbp+18h] BYREF

	if (!a2)
		return 2147942487i64;
	if (*(_DWORD*)(a1 + 52) == 1)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v12 = 0i64;
		*((_QWORD*)&v12 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v13 = TlsValue;
		v16 = 0x141DE6840i64;
		v14 = v12;
		v5 = sub_1401971E0(&dword_140C8A4E0, 14, &v16, &v13);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v12 + 1));
		if (v5)
			DebugBreak();
		return 2147500037i64;
	}
	if (!*(_QWORD*)(a1 + 112))
		return 2147500037i64;
	sub_14003D8F0(&v15, *(_QWORD*)(a1 + 16) + 6368i64);
	v6 = D3DX11SHProjectCubeMap(
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6352i64),
		3i64,
		*(_QWORD*)(a1 + 112),
		a2,
		a2 + 48,
		a2 + 96);
	v7 = v15;
	v8 = 0;
	if (v6 < 0)
		v8 = v6;
	if (*(_QWORD*)(v15 + 8) <= 1ui64)
	{
		*(_DWORD*)v15 = 0;
		_InterlockedExchange64((volatile __int64*)(v7 + 8), 0i64);
		if (*(_QWORD*)(v15 + 16))
		{
			v9 = v15;
			if (!*(_QWORD*)(v15 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v9 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v9 + 24));
		}
		return v8;
	}
	else
	{
		--* (_QWORD*)(v15 + 8);
		return v8;
	}
}
// 140C65798: invalid function type has been ignored
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65798: using guessed type __int64 (__fastcall *D3DX11SHProjectCubeMap)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 140C8A4E0: using guessed type _DWORD dword_140C8A4E0;

