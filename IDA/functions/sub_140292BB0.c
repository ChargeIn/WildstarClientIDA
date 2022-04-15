#include "../winhttp.h"

//----- (0000000140292BB0) ----------------------------------------------------
void __fastcall sub_140292BB0(__int64 a1)
{
	__int64* v1; // rbx
	__int64 v3; // rax
	int v4; // esi
	_QWORD* v5; // rbx
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // r9
	__int64 v9; // rcx
	int v10; // eax
	__int64 v11; // rcx
	int v12; // eax
	int v13; // ecx
	int v14; // eax
	__int64 v15; // rdx
	int v16; // eax
	__int64 v17; // rdx
	volatile signed __int32* v18; // rdx
	__int64 v19; // rcx
	int v20; // eax
	__int64(__fastcall * *TlsValue)(); // [rsp+40h] [rbp-C0h] BYREF
	__int64 v22; // [rsp+48h] [rbp-B8h]
	LPVOID Value; // [rsp+50h] [rbp-B0h]
	__int64(__fastcall * *v24)(); // [rsp+58h] [rbp-A8h] BYREF
	const wchar_t* v25; // [rsp+60h] [rbp-A0h]
	LPVOID lpTlsValue; // [rsp+68h] [rbp-98h]
	__int64 v27; // [rsp+70h] [rbp-90h]
	__int128 v28; // [rsp+78h] [rbp-88h] BYREF
	LPVOID v29[2]; // [rsp+88h] [rbp-78h]
	__int64 v30; // [rsp+98h] [rbp-68h] BYREF
	__int64 v31[4]; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v32[4]; // [rsp+C0h] [rbp-40h] BYREF
	int v33[4]; // [rsp+E0h] [rbp-20h] BYREF
	int v34[4]; // [rsp+F0h] [rbp-10h] BYREF
	__int128 v35[2]; // [rsp+100h] [rbp+0h] BYREF
	int v36[8]; // [rsp+120h] [rbp+20h] BYREF

	v1 = *(__int64**)(a1 + 104);
	v3 = *v1;
	v33[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 32))(v1, v33);
	v4 = *((_DWORD*)v1 + 40);
	if (v4 >= 0)
	{
		v5 = *(_QWORD**)(a1 + 104);
		v34[0] = -1;
		(*(void(__fastcall**)(_QWORD*, int*))(*v5 + 32i64))(v5, v34);
		v6 = v5[7];
		if (v6)
		{
			*(_QWORD*)(a1 + 120) = v6;
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v5[7] + 8i64))(v5[7]);
			v4 = (*(__int64(__fastcall**)(_QWORD, _QWORD, int*))(**(_QWORD**)(a1 + 120) + 136i64))(
				*(_QWORD*)(a1 + 120),
				0i64,
				v36);
			if (v4 >= 0)
			{
				v10 = v36[6];
				v11 = *(_QWORD*)(a1 + 120);
				*(_DWORD*)(a1 + 36) = 1;
				*(_DWORD*)(a1 + 28) = v10;
				*(_DWORD*)(a1 + 32) = v36[7];
				v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 104i64))(v11);
				v13 = v36[0];
				*(_DWORD*)(a1 + 44) = v12;
				v14 = sub_14026C430(v13);
				v15 = *(_QWORD*)(a1 + 16) + 136i64;
				*(_DWORD*)(a1 + 48) = v14;
				v4 = sub_140263970((int*)(a1 + 24), v15);
				if (v4 >= 0)
				{
					v16 = sub_140263E70((_DWORD*)(a1 + 24));
					v17 = *(_QWORD*)(a1 + 16);
					*(_DWORD*)(a1 + 136) = v16;
					v18 = (volatile signed __int32*)(48i64 * *(int*)(a1 + 52) + v17 + 724);
					_InterlockedIncrement(v18);
					_InterlockedExchangeAdd(v18 + 1, *(_DWORD*)(a1 + 136));
					_InterlockedIncrement(v18 + 2);
					_InterlockedExchangeAdd(v18 + 3, *(_DWORD*)(a1 + 136));
					_InterlockedIncrement(v18 + 8);
					_InterlockedExchangeAdd(v18 + 9, *(_DWORD*)(a1 + 136));
					v19 = *(_QWORD*)(a1 + 104);
					*(_DWORD*)(a1 + 112) = *(_DWORD*)(v19 + 84);
					v20 = *(_DWORD*)(v19 + 88);
					*(_DWORD*)(a1 + 92) = 0;
					*(_DWORD*)(a1 + 116) = v20;
					*(_DWORD*)(a1 + 96) = 1;
					return;
				}
			}
		}
		else
		{
			v4 = -2147467259;
		}
	}
	TlsValue = &off_140B5E648;
	v22 = 0i64;
	Value = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v31[0] = (__int64)TlsValue;
	v31[1] = v22;
	*(_QWORD*)&v28 = &off_140B5E648;
	*((_QWORD*)&v28 + 1) = L"Result";
	v31[2] = (__int64)Value;
	v29[0] = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v28);
	v7 = *(_QWORD*)(a1 + 72);
	LODWORD(v29[1]) = v4;
	v24 = &off_140B5E648;
	*(_QWORD*)&v28 = &off_140B5E640;
	v35[1] = *(_OWORD*)v29;
	v25 = L"FileName";
	v35[0] = v28;
	lpTlsValue = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v24);
	v8 = *(_QWORD*)(a1 + 72);
	v32[1] = (__int64)v25;
	v24 = &off_140B5E638;
	v27 = v7;
	v30 = 0x141DE4B10i64;
	v32[0] = (__int64)&off_140B5E638;
	v32[3] = v7;
	v32[2] = (__int64)lpTlsValue;
	LODWORD(v7) = sub_1401971E0(&dword_140C8A438, 14, &v30, v8, v32, v35, v31);
	v24 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	*(_QWORD*)&v28 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, v29[0]);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, Value);
	if ((_DWORD)v7)
		DebugBreak();
	*(_DWORD*)(a1 + 92) = v4;
	v9 = *(_QWORD*)(a1 + 120);
	if (v9)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
		*(_QWORD*)(a1 + 120) = 0i64;
	}
}
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A438: using guessed type _DWORD dword_140C8A438;
// 140292BB0: using guessed type int var_80[4];
// 140292BB0: using guessed type int var_70[4];

