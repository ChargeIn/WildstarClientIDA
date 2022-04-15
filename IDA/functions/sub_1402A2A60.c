#include "../winhttp.h"

//----- (00000001402A2A60) ----------------------------------------------------
__int64 __fastcall sub_1402A2A60(__int64 a1, __int64* a2)
{
	__int64 v5; // rbx
	int v6; // ebx
	__int64 v7; // rax
	__int64* v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // rcx
	int v11; // ecx
	int v12; // edx
	__int64 v13; // rdx
	int TextureFromTexture; // eax
	unsigned int v15; // esi
	__int64(__fastcall * *v16)(); // [rsp+30h] [rbp-D0h] BYREF
	__int128 v17; // [rsp+38h] [rbp-C8h]
	__int64(__fastcall * *v18)(); // [rsp+48h] [rbp-B8h] BYREF
	const wchar_t* v19; // [rsp+50h] [rbp-B0h]
	LPVOID lpTlsValue; // [rsp+58h] [rbp-A8h]
	__int64 v21; // [rsp+60h] [rbp-A0h]
	__int64(__fastcall * *TlsValue)(); // [rsp+68h] [rbp-98h] BYREF
	__int64 v23; // [rsp+70h] [rbp-90h]
	LPVOID Value; // [rsp+78h] [rbp-88h]
	__int64 v25[3]; // [rsp+80h] [rbp-80h] BYREF
	int v26; // [rsp+98h] [rbp-68h]
	__int64 v27; // [rsp+9Ch] [rbp-64h]
	int v28; // [rsp+A4h] [rbp-5Ch]
	int v29; // [rsp+A8h] [rbp-58h]
	int v30; // [rsp+ACh] [rbp-54h]
	__int64 v31[2]; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v32[4]; // [rsp+C0h] [rbp-40h] BYREF
	__int64(__fastcall * *v33)(); // [rsp+E0h] [rbp-20h] BYREF
	__int128 v34; // [rsp+E8h] [rbp-18h]
	__int64 v35[4]; // [rsp+100h] [rbp+0h] BYREF
	int v36[8]; // [rsp+120h] [rbp+20h] BYREF
	__int64 v37; // [rsp+158h] [rbp+58h] BYREF
	__int64 v38; // [rsp+160h] [rbp+60h] BYREF
	__int64 v39; // [rsp+168h] [rbp+68h] BYREF

	if (!a2)
		return 2147942487i64;
	if (*(_QWORD*)(a1 + 72))
	{
		TlsValue = &off_140B5E648;
		v23 = 0i64;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v5 = *(_QWORD*)(a1 + 72);
		v32[0] = (__int64)TlsValue;
		v32[1] = v23;
		v18 = &off_140B5E648;
		v32[2] = (__int64)Value;
		v19 = L"FileName";
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v18);
		v21 = v5;
		v35[1] = (__int64)v19;
		v18 = &off_140B5E638;
		v35[3] = v5;
		v35[0] = (__int64)&off_140B5E638;
		v38 = 0x141DE5DA0i64;
		v35[2] = (__int64)lpTlsValue;
		LODWORD(v5) = sub_1401971E0(&dword_140C8A488, 14, &v38, v35, v32);
		v18 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if ((_DWORD)v5)
			DebugBreak();
		return 2147500037i64;
	}
	if (*((_DWORD*)a2 + 13) == 1)
	{
		v16 = &off_140B5E648;
		*(_QWORD*)&v17 = 0i64;
		*((_QWORD*)&v17 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v16);
		v33 = v16;
		v39 = 0x141DE5D20i64;
		v34 = v17;
		v6 = sub_1401971E0(&dword_140C8A47C, 14, &v39, &v33);
		v16 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v17 + 1));
		if (!v6)
			return 2147500037i64;
		DebugBreak();
		return 2147500037i64;
	}
	else
	{
		v7 = *a2;
		v36[0] = -1;
		(*(void(__fastcall**)(__int64*, int*))(v7 + 32))(a2, v36);
		if (*(_DWORD*)(a1 + 28) == *((_DWORD*)a2 + 7)
			&& *(_DWORD*)(a1 + 32) == *((_DWORD*)a2 + 8)
			&& *(_DWORD*)(a1 + 44) == *((_DWORD*)a2 + 11)
			&& *(_DWORD*)(a1 + 48) == *((_DWORD*)a2 + 12))
		{
			sub_14003D8F0(v31, *(_QWORD*)(a1 + 16) + 6368i64);
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6352i64) + 376i64))(
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6352i64),
				*(_QWORD*)(a1 + 112),
				a2[14]);
			v8 = v31;
		}
		else
		{
			v11 = *(_DWORD*)(a1 + 60);
			v12 = 524292;
			memset(v25, 0, sizeof(v25));
			v27 = 0i64;
			v26 = -1;
			v28 = -1;
			if ((v11 & 3) != 1)
				v12 = 589828;
			v29 = v12;
			if ((v11 & 0xC) != 4)
				v29 = v12 | 0x20000;
			v13 = *(_QWORD*)(a1 + 16);
			v30 = -1;
			sub_14003D8F0(&v37, v13 + 6368);
			TextureFromTexture = D3DX11LoadTextureFromTexture(
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6352i64),
				a2[14],
				v25,
				*(_QWORD*)(a1 + 112));
			v8 = &v37;
			v15 = TextureFromTexture;
			if (TextureFromTexture < 0)
			{
				sub_14003D880(&v37);
				return v15;
			}
		}
		sub_14003D880(v8);
		v9 = *(_QWORD*)(a1 + 16) + 48i64 * *((int*)a2 + 13);
		_InterlockedIncrement((volatile signed __int32*)(v9 + 748));
		_InterlockedExchangeAdd((volatile signed __int32*)(v9 + 752), *(_DWORD*)(a1 + 216));
		v10 = *(_QWORD*)(a1 + 16) + 48i64 * *(int*)(a1 + 52);
		_InterlockedIncrement((volatile signed __int32*)(v10 + 756));
		_InterlockedExchangeAdd((volatile signed __int32*)(v10 + 760), *(_DWORD*)(a1 + 216));
		*(_DWORD*)(a1 + 184) = 1;
		return 0i64;
	}
}
// 140C65790: invalid function type has been ignored
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65790: using guessed type __int64 (__fastcall *D3DX11LoadTextureFromTexture)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140C8A47C: using guessed type _DWORD dword_140C8A47C;
// 140C8A488: using guessed type _DWORD dword_140C8A488;
// 1402A2A60: using guessed type int var_20[8];

