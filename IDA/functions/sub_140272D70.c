//----- (0000000140272D70) ----------------------------------------------------
void __fastcall sub_140272D70(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v4; // r15
	int v6; // r8d
	int v7; // ebx
	__int64 v8; // rax
	__int64 v9; // r8
	__int64 v10; // r14
	int v11; // ebx
	__int64 v12; // rsi
	__int64 v13; // rax
	__int64 v14; // rdx
	int v15; // ebx
	__int64 v16; // rcx
	__int64(__fastcall * *v17)(); // [rsp+40h] [rbp-89h] BYREF
	__int128 v18; // [rsp+48h] [rbp-81h]
	__int64(__fastcall * *v19)(); // [rsp+58h] [rbp-71h] BYREF
	__int128 v20; // [rsp+60h] [rbp-69h]
	__int64(__fastcall * *TlsValue)(); // [rsp+70h] [rbp-59h] BYREF
	__int128 v22; // [rsp+78h] [rbp-51h]
	__int64 v23; // [rsp+88h] [rbp-41h] BYREF
	__int64 v24; // [rsp+90h] [rbp-39h] BYREF
	__int64 v25; // [rsp+98h] [rbp-31h] BYREF
	__int64(__fastcall * *v26)(); // [rsp+A0h] [rbp-29h] BYREF
	__int128 v27; // [rsp+A8h] [rbp-21h]
	__int64(__fastcall * *v28)(); // [rsp+C0h] [rbp-9h] BYREF
	__int128 v29; // [rsp+C8h] [rbp-1h]
	__int64(__fastcall * *v30)(); // [rsp+E0h] [rbp+17h] BYREF
	__int128 v31; // [rsp+E8h] [rbp+1Fh]
	__int64 v32; // [rsp+140h] [rbp+77h] BYREF
	__int64 v33; // [rsp+148h] [rbp+7Fh] BYREF

	v4 = a2;
	v6 = *(_DWORD*)a3 - 1;
	if (v6)
	{
		if (v6 != 1)
		{
			TlsValue = &off_140B5E648;
			*(_QWORD*)&v22 = 0i64;
			*((_QWORD*)&v22 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v26 = TlsValue;
			v23 = 0x141DE1AE0i64;
			v27 = v22;
			v7 = sub_1401971E0(&dword_140C8A2D8, 14, &v23, &v26);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v22 + 1));
			if (v7)
				DebugBreak();
			return;
		}
		v8 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a3 + 8) + 24i64))(*(_QWORD*)(a3 + 8));
		v9 = *(unsigned int*)(a3 + 20);
		v10 = v8;
		if ((unsigned int)v9 >= *(_DWORD*)(v8 + 20))
		{
			v17 = &off_140B5E648;
			*(_QWORD*)&v18 = 0i64;
			*((_QWORD*)&v18 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v17);
			v28 = v17;
			v24 = 0x141DE1B40i64;
			v29 = v18;
			v11 = sub_1401971E0(&dword_140C8A2D4, 14, &v24, &v28);
			v17 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v18 + 1));
			if (v11)
				DebugBreak();
			return;
		}
		v12 = *(_QWORD*)(a3 + 8);
		if ((*(int(__fastcall**)(_QWORD, _QWORD, __int64, __int64*))(**(_QWORD**)(v12 + 120) + 144i64))(
			*(_QWORD*)(v12 + 120),
			(unsigned int)dword_140AE7B00[*(int*)(a3 + 16)],
			v9,
			&v32) >= 0)
		{
			if ((int)D3DXLoadSurfaceFromSurface(v32, 0i64, 0i64, *(_QWORD*)(a1 + 8 * v4 + 7624), 0i64, 0i64, -1, 0) >= 0)
				*(_DWORD*)(v12 + 96) = 1;
			if (v32)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v32 + 16i64))(v32);
				v32 = 0i64;
			}
		}
	LABEL_21:
		v16 = 6i64 * *(int*)(v10 + 28);
		_InterlockedIncrement((volatile signed __int32*)(a1 + 48i64 * *(int*)(v10 + 28) + 756));
		_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 8 * v16 + 760), *(_DWORD*)(v12 + 136));
		return;
	}
	v13 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a3 + 8) + 24i64))(*(_QWORD*)(a3 + 8));
	v14 = *(unsigned int*)(a3 + 20);
	v10 = v13;
	if ((unsigned int)v14 < *(_DWORD*)(v13 + 20))
	{
		v12 = *(_QWORD*)(a3 + 8);
		if ((*(int(__fastcall**)(_QWORD, __int64, __int64*))(**(_QWORD**)(v12 + 120) + 144i64))(
			*(_QWORD*)(v12 + 120),
			v14,
			&v33) >= 0)
		{
			if ((int)D3DXLoadSurfaceFromSurface(v33, 0i64, 0i64, *(_QWORD*)(a1 + 8 * v4 + 7624), 0i64, 0i64, -1, 0) >= 0)
				*(_DWORD*)(v12 + 96) = 1;
			if (v33)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v33 + 16i64))(v33);
				v33 = 0i64;
			}
		}
		goto LABEL_21;
	}
	v19 = &off_140B5E648;
	*(_QWORD*)&v20 = 0i64;
	*((_QWORD*)&v20 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v19);
	v30 = v19;
	v25 = 0x141DE1B90i64;
	v31 = v20;
	v15 = sub_1401971E0(&dword_140C8A2E8, 14, &v25, &v30);
	v19 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v20 + 1));
	if (v15)
		DebugBreak();
}
// 140C65710: invalid function type has been ignored
// 140AE7B00: using guessed type int dword_140AE7B00[6];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65710: using guessed type __int64 (__fastcall *D3DXLoadSurfaceFromSurface)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD);
// 140C8A2D4: using guessed type _DWORD dword_140C8A2D4;
// 140C8A2D8: using guessed type _DWORD dword_140C8A2D8;
// 140C8A2E8: using guessed type _DWORD dword_140C8A2E8;

