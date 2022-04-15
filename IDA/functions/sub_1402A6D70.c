//----- (00000001402A6D70) ----------------------------------------------------
void __fastcall sub_1402A6D70(__int64 a1)
{
	__int64* v1; // rbx
	__int64 v3; // rax
	int v4; // esi
	_QWORD* v5; // rbx
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // r9
	__int64 v9; // rcx
	__int64* v10; // rbx
	int v11; // eax
	__int64 v12; // rax
	__int64 v13; // rdx
	int v14; // eax
	__int64 v15; // rdx
	volatile signed __int32* v16; // rdx
	__int64 v17; // rcx
	int v18; // eax
	__int64(__fastcall * *TlsValue)(); // [rsp+40h] [rbp-C0h] BYREF
	__int64 v20; // [rsp+48h] [rbp-B8h]
	LPVOID Value; // [rsp+50h] [rbp-B0h]
	__int64(__fastcall * *v22)(); // [rsp+58h] [rbp-A8h] BYREF
	const wchar_t* v23; // [rsp+60h] [rbp-A0h]
	LPVOID lpTlsValue; // [rsp+68h] [rbp-98h]
	__int64 v25; // [rsp+70h] [rbp-90h]
	__int128 v26; // [rsp+78h] [rbp-88h] BYREF
	LPVOID v27[2]; // [rsp+88h] [rbp-78h]
	__int64 v28; // [rsp+98h] [rbp-68h] BYREF
	__int64 v29[4]; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v30[4]; // [rsp+C0h] [rbp-40h] BYREF
	int v31[4]; // [rsp+E0h] [rbp-20h] BYREF
	int v32[4]; // [rsp+F0h] [rbp-10h] BYREF
	int v33[4]; // [rsp+100h] [rbp+0h] BYREF
	__int128 v34[2]; // [rsp+110h] [rbp+10h] BYREF
	int v35[12]; // [rsp+130h] [rbp+30h] BYREF

	v1 = *(__int64**)(a1 + 96);
	v3 = *v1;
	v31[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 32))(v1, v31);
	v4 = *((_DWORD*)v1 + 12);
	if (v4 >= 0)
	{
		v5 = *(_QWORD**)(a1 + 96);
		v33[0] = -1;
		(*(void(__fastcall**)(_QWORD*, int*))(*v5 + 32i64))(v5, v33);
		v6 = v5[8];
		if (v6)
		{
			*(_QWORD*)(a1 + 112) = v6;
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v5[8] + 8i64))(v5[8]);
			(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 112) + 80i64))(*(_QWORD*)(a1 + 112), v35);
			v10 = *(__int64**)(a1 + 96);
			*(_DWORD*)(a1 + 28) = v35[0];
			v11 = v35[1];
			*(_DWORD*)(a1 + 36) = 1;
			*(_DWORD*)(a1 + 32) = v11;
			*(_DWORD*)(a1 + 44) = v35[2];
			v12 = *v10;
			v32[0] = -1;
			(*(void(__fastcall**)(__int64*, int*))(v12 + 32))(v10, v32);
			v13 = *(_QWORD*)(a1 + 16) + 136i64;
			*(_DWORD*)(a1 + 48) = *((_DWORD*)v10 + 22);
			v4 = sub_140263970((int*)(a1 + 24), v13);
			if (v4 >= 0)
			{
				v14 = sub_140263E70((_DWORD*)(a1 + 24));
				v15 = *(_QWORD*)(a1 + 16);
				*(_DWORD*)(a1 + 496) = v14;
				v16 = (volatile signed __int32*)(48i64 * *(int*)(a1 + 52) + v15 + 724);
				_InterlockedIncrement(v16);
				_InterlockedExchangeAdd(v16 + 1, *(_DWORD*)(a1 + 496));
				_InterlockedIncrement(v16 + 2);
				_InterlockedExchangeAdd(v16 + 3, *(_DWORD*)(a1 + 496));
				_InterlockedIncrement(v16 + 8);
				_InterlockedExchangeAdd(v16 + 9, *(_DWORD*)(a1 + 496));
				v17 = *(_QWORD*)(a1 + 96);
				*(_DWORD*)(a1 + 104) = *(_DWORD*)(v17 + 96);
				v18 = *(_DWORD*)(v17 + 100);
				*(_DWORD*)(a1 + 92) = 0;
				*(_DWORD*)(a1 + 108) = v18;
				*(_DWORD*)(a1 + 344) = 1;
				return;
			}
		}
		else
		{
			v4 = -2147467259;
		}
	}
	TlsValue = &off_140B5E648;
	v20 = 0i64;
	Value = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v29[0] = (__int64)TlsValue;
	v29[1] = v20;
	*(_QWORD*)&v26 = &off_140B5E648;
	*((_QWORD*)&v26 + 1) = L"Result";
	v29[2] = (__int64)Value;
	v27[0] = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v26);
	v7 = *(_QWORD*)(a1 + 72);
	LODWORD(v27[1]) = v4;
	v22 = &off_140B5E648;
	*(_QWORD*)&v26 = &off_140B5E640;
	v34[1] = *(_OWORD*)v27;
	v23 = L"FileName";
	v34[0] = v26;
	lpTlsValue = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v22);
	v8 = *(_QWORD*)(a1 + 72);
	v30[1] = (__int64)v23;
	v22 = &off_140B5E638;
	v25 = v7;
	v28 = 0x141DE6420i64;
	v30[0] = (__int64)&off_140B5E638;
	v30[3] = v7;
	v30[2] = (__int64)lpTlsValue;
	LODWORD(v7) = sub_1401971E0(&dword_140C8A50C, 14, &v28, v8, v30, v34, v29);
	v22 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	*(_QWORD*)&v26 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, v27[0]);
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
// 140C8A50C: using guessed type _DWORD dword_140C8A50C;
// 1402A6D70: using guessed type int var_A0[4];
// 1402A6D70: using guessed type int var_80[4];
// 1402A6D70: using guessed type int var_90[4];

