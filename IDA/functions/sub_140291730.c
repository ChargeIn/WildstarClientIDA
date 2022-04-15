#include "../winhttp.h"

//----- (0000000140291730) ----------------------------------------------------
__int64 __fastcall sub_140291730(__int64 a1, __int64* a2)
{
	__int64 result; // rax
	__int64 v5; // rbx
	int v6; // ebx
	__int64 v7; // rax
	unsigned int v8; // r12d
	unsigned int v9; // edi
	int v10; // edx
	int v11; // ecx
	int v12; // r14d
	__int64 v13; // rdx
	__int64 v14; // rcx
	__int64(__fastcall * *v15)(); // [rsp+40h] [rbp-C0h] BYREF
	__int128 v16; // [rsp+48h] [rbp-B8h]
	__int64(__fastcall * *TlsValue)(); // [rsp+58h] [rbp-A8h] BYREF
	__int64 v18; // [rsp+60h] [rbp-A0h]
	LPVOID Value; // [rsp+68h] [rbp-98h]
	__int64(__fastcall * *v20)(); // [rsp+70h] [rbp-90h] BYREF
	const wchar_t* v21; // [rsp+78h] [rbp-88h]
	LPVOID lpTlsValue; // [rsp+80h] [rbp-80h]
	__int64 v23; // [rsp+88h] [rbp-78h]
	__int64 v24; // [rsp+90h] [rbp-70h] BYREF
	__int64 v25[4]; // [rsp+A0h] [rbp-60h] BYREF
	__int64(__fastcall * *v26)(); // [rsp+C0h] [rbp-40h] BYREF
	__int128 v27; // [rsp+C8h] [rbp-38h]
	__int64 v28[4]; // [rsp+E0h] [rbp-20h] BYREF
	int v29[4]; // [rsp+100h] [rbp+0h] BYREF
	__int64 v30; // [rsp+158h] [rbp+58h] BYREF
	__int64 v31; // [rsp+160h] [rbp+60h] BYREF
	__int64 v32; // [rsp+168h] [rbp+68h] BYREF

	if (!a2)
		return 2147942487i64;
	if (*(_QWORD*)(a1 + 72))
	{
		TlsValue = &off_140B5E648;
		v18 = 0i64;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v5 = *(_QWORD*)(a1 + 72);
		v25[0] = (__int64)TlsValue;
		v25[1] = v18;
		v20 = &off_140B5E648;
		v25[2] = (__int64)Value;
		v21 = L"FileName";
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v20);
		v23 = v5;
		v28[1] = (__int64)v21;
		v20 = &off_140B5E638;
		v28[3] = v5;
		v28[0] = (__int64)&off_140B5E638;
		v32 = 0x141DE4660i64;
		v28[2] = (__int64)lpTlsValue;
		LODWORD(v5) = sub_1401971E0(&dword_140C8A3F4, 14, &v32, v28, v25);
		v20 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if ((_DWORD)v5)
		{
			DebugBreak();
			return 2147500037i64;
		}
		return 2147500037i64;
	}
	if (*((_DWORD*)a2 + 13) == 1)
	{
		v15 = &off_140B5E648;
		*(_QWORD*)&v16 = 0i64;
		*((_QWORD*)&v16 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v15);
		v26 = v15;
		v24 = 0x141DE45B0i64;
		v27 = v16;
		v6 = sub_1401971E0(&dword_140C8A3F8, 14, &v24, &v26);
		v15 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v16 + 1));
		if (v6)
			DebugBreak();
		return 2147500037i64;
	}
	v7 = *a2;
	v29[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v7 + 32))(a2, v29);
	v8 = *((_DWORD*)a2 + 11);
	if (*(_DWORD*)(a1 + 44) < v8)
		v8 = *(_DWORD*)(a1 + 44);
	v9 = 0;
	if (v8)
	{
		while (1)
		{
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)a2[13] + 144i64))(a2[13], v9, &v31);
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64*))(**(_QWORD**)(a1 + 104) + 144i64))(
				*(_QWORD*)(a1 + 104),
				v9,
				&v30);
			v10 = *(_DWORD*)(a1 + 60);
			v11 = 524292;
			if ((v10 & 3) != 1)
				v11 = 589828;
			if ((v10 & 0xC) != 4)
				v11 |= 0x20000u;
			if ((v10 & 0x30) != 16)
				v11 |= 0x40000u;
			v12 = D3DXLoadVolumeFromVolume(v30, 0i64, 0i64, v31, 0i64, 0i64, v11, 0);
			if (v30)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 16i64))(v30);
				v30 = 0i64;
			}
			if (v31)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 16i64))(v31);
				v31 = 0i64;
			}
			if (v12 < 0)
				return (unsigned int)v12;
			if (++v9 >= v8)
				goto LABEL_25;
		}
	}
	else
	{
	LABEL_25:
		if (v9 >= *(_DWORD*)(a1 + 44)
			|| (result = D3DXFilterTexture(*(_QWORD*)(a1 + 104), 0i64, v9 - 1, 0xFFFFFFFFi64), (int)result >= 0))
		{
			v13 = *(_QWORD*)(a1 + 16) + 48i64 * *((int*)a2 + 13);
			_InterlockedIncrement((volatile signed __int32*)(v13 + 748));
			_InterlockedExchangeAdd((volatile signed __int32*)(v13 + 752), *(_DWORD*)(a1 + 128));
			v14 = *(_QWORD*)(a1 + 16) + 48i64 * *(int*)(a1 + 52);
			_InterlockedIncrement((volatile signed __int32*)(v14 + 756));
			_InterlockedExchangeAdd((volatile signed __int32*)(v14 + 760), *(_DWORD*)(a1 + 128));
			*(_DWORD*)(a1 + 96) = 1;
			return 0i64;
		}
	}
	return result;
}
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C656F8: using guessed type __int64 (__fastcall *D3DXFilterTexture)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140C65720: using guessed type __int64 (__fastcall *D3DXLoadVolumeFromVolume)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD);
// 140C8A3F4: using guessed type _DWORD dword_140C8A3F4;
// 140C8A3F8: using guessed type _DWORD dword_140C8A3F8;
// 140291730: using guessed type int var_40[4];

