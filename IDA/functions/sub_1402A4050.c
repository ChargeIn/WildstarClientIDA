#include "../winhttp.h"

//----- (00000001402A4050) ----------------------------------------------------
void __fastcall sub_1402A4050(__int64 a1)
{
	__int64* v1; // rbx
	__int64 v3; // rax
	int v4; // esi
	_QWORD* v5; // rbx
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // r9
	__int64 v9; // rcx
	_DWORD* v10; // rbx
	__int64 v11; // rdx
	int v12; // eax
	__int64 v13; // rdx
	volatile signed __int32* v14; // rdx
	__int64 v15; // rcx
	int v16; // eax
	__int64(__fastcall * *TlsValue)(); // [rsp+40h] [rbp-C0h] BYREF
	__int64 v18; // [rsp+48h] [rbp-B8h]
	LPVOID Value; // [rsp+50h] [rbp-B0h]
	__int64(__fastcall * *v20)(); // [rsp+58h] [rbp-A8h] BYREF
	const wchar_t* v21; // [rsp+60h] [rbp-A0h]
	LPVOID lpTlsValue; // [rsp+68h] [rbp-98h]
	__int64 v23; // [rsp+70h] [rbp-90h]
	__int128 v24; // [rsp+78h] [rbp-88h] BYREF
	LPVOID v25[2]; // [rsp+88h] [rbp-78h]
	__int64 v26; // [rsp+98h] [rbp-68h] BYREF
	__int64 v27[4]; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v28[4]; // [rsp+C0h] [rbp-40h] BYREF
	int v29[4]; // [rsp+E0h] [rbp-20h] BYREF
	int v30[4]; // [rsp+F0h] [rbp-10h] BYREF
	int v31[4]; // [rsp+100h] [rbp+0h] BYREF
	__int128 v32[2]; // [rsp+110h] [rbp+10h] BYREF
	int v33[10]; // [rsp+130h] [rbp+30h] BYREF

	v1 = *(__int64**)(a1 + 96);
	v3 = *v1;
	v29[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 32))(v1, v29);
	v4 = *((_DWORD*)v1 + 12);
	if (v4 >= 0)
	{
		v5 = *(_QWORD**)(a1 + 96);
		v31[0] = -1;
		(*(void(__fastcall**)(_QWORD*, int*))(*v5 + 32i64))(v5, v31);
		v6 = v5[8];
		if (v6)
		{
			*(_QWORD*)(a1 + 112) = v6;
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v5[8] + 8i64))(v5[8]);
			(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 112) + 80i64))(*(_QWORD*)(a1 + 112), v33);
			v10 = *(_DWORD**)(a1 + 96);
			*(_DWORD*)(a1 + 28) = v33[0];
			*(_DWORD*)(a1 + 32) = v33[1];
			*(_DWORD*)(a1 + 36) = v33[2];
			v30[0] = -1;
			*(_DWORD*)(a1 + 44) = v33[3];
			(*(void(__fastcall**)(_DWORD*, int*))(*(_QWORD*)v10 + 32i64))(v10, v30);
			v11 = *(_QWORD*)(a1 + 16) + 136i64;
			*(_DWORD*)(a1 + 48) = v10[22];
			v4 = sub_140263970((int*)(a1 + 24), v11);
			if (v4 >= 0)
			{
				v12 = sub_140263E70((_DWORD*)(a1 + 24));
				v13 = *(_QWORD*)(a1 + 16);
				*(_DWORD*)(a1 + 216) = v12;
				v14 = (volatile signed __int32*)(48i64 * *(int*)(a1 + 52) + v13 + 724);
				_InterlockedIncrement(v14);
				_InterlockedExchangeAdd(v14 + 1, *(_DWORD*)(a1 + 216));
				_InterlockedIncrement(v14 + 2);
				_InterlockedExchangeAdd(v14 + 3, *(_DWORD*)(a1 + 216));
				_InterlockedIncrement(v14 + 8);
				_InterlockedExchangeAdd(v14 + 9, *(_DWORD*)(a1 + 216));
				v15 = *(_QWORD*)(a1 + 96);
				*(_DWORD*)(a1 + 104) = *(_DWORD*)(v15 + 96);
				v16 = *(_DWORD*)(v15 + 100);
				*(_DWORD*)(a1 + 92) = 0;
				*(_DWORD*)(a1 + 108) = v16;
				*(_DWORD*)(a1 + 184) = 1;
				return;
			}
		}
		else
		{
			v4 = -2147467259;
		}
	}
	TlsValue = &off_140B5E648;
	v18 = 0i64;
	Value = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v27[0] = (__int64)TlsValue;
	v27[1] = v18;
	*(_QWORD*)&v24 = &off_140B5E648;
	*((_QWORD*)&v24 + 1) = L"Result";
	v27[2] = (__int64)Value;
	v25[0] = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v24);
	v7 = *(_QWORD*)(a1 + 72);
	LODWORD(v25[1]) = v4;
	v20 = &off_140B5E648;
	*(_QWORD*)&v24 = &off_140B5E640;
	v32[1] = *(_OWORD*)v25;
	v21 = L"FileName";
	v32[0] = v24;
	lpTlsValue = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v20);
	v8 = *(_QWORD*)(a1 + 72);
	v28[1] = (__int64)v21;
	v20 = &off_140B5E638;
	v23 = v7;
	v26 = 0x141DE6018i64;
	v28[0] = (__int64)&off_140B5E638;
	v28[3] = v7;
	v28[2] = (__int64)lpTlsValue;
	LODWORD(v7) = sub_1401971E0(&dword_140C8A4D4, 14, &v26, v8, v28, v32, v27);
	v20 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	*(_QWORD*)&v24 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, v25[0]);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, Value);
	if ((_DWORD)v7)
		DebugBreak();
	*(_DWORD*)(a1 + 92) = v4;
	v9 = *(_QWORD*)(a1 + 112);
	if (v9)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
		*(_QWORD*)(a1 + 112) = 0i64;
	}
}
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A4D4: using guessed type _DWORD dword_140C8A4D4;
// 1402A4050: using guessed type int var_90[4];
// 1402A4050: using guessed type int var_70[4];
// 1402A4050: using guessed type int var_80[4];

