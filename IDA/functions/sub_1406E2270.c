//----- (00000001406E2270) ----------------------------------------------------
__int64 __fastcall sub_1406E2270(__int64 a1)
{
	_DWORD* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	int v5; // r14d
	int v6; // esi
	unsigned int v7; // ebx
	unsigned int v8; // esi
	int v9; // r14d
	int v10; // ebx
	__int64 v11; // rcx
	__int64 v12; // rdx
	__int64 v14; // [rsp+20h] [rbp-79h]
	__int64(__fastcall * *TlsValue)(); // [rsp+50h] [rbp-49h] BYREF
	__int64 v16; // [rsp+58h] [rbp-41h]
	LPVOID Value; // [rsp+60h] [rbp-39h]
	__int64 v18[4]; // [rsp+70h] [rbp-29h] BYREF
	__int128 v19; // [rsp+90h] [rbp-9h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+A0h] [rbp+7h]
	__int128 v21[4]; // [rsp+B0h] [rbp+17h] BYREF
	void (***v22)(void); // [rsp+100h] [rbp+67h] BYREF
	__int64 v23; // [rsp+108h] [rbp+6Fh] BYREF

	if (*(char*)(a1 + 29) >= 0)
	{
		v2 = sub_1400CB0E0(a1, &TlsValue, a1 + 64);
		*(_DWORD*)(a1 + 396) = *v2;
		*(_DWORD*)(a1 + 400) = v2[1];
		*(_DWORD*)(a1 + 404) = v2[2];
		*(_DWORD*)(a1 + 408) = v2[3];
		*(_BYTE*)(a1 + 29) |= 0x80u;
		v3 = a1;
		do
		{
			if (!*(_DWORD*)(v3 + 392))
				break;
			*(_DWORD*)(v3 + 392) = 0;
			v3 = *(_QWORD*)(v3 + 16);
		} while (v3);
	}
	v4 = *(_QWORD*)(a1 + 3816);
	v5 = *(_DWORD*)(a1 + 400);
	v6 = *(_DWORD*)(a1 + 408);
	if (v4)
	{
		v7 = *(_DWORD*)(a1 + 404) - *(_DWORD*)(a1 + 396);
		if (*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4) + 4) != v7
			|| *(_DWORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 3816) + 24i64))(*(_QWORD*)(a1 + 3816)) + 8) != v6 - v5)
		{
			v22 = 0i64;
			v8 = v6 - v5;
			v9 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, int, _DWORD, void (****)(void)))(*(_QWORD*)qword_140C65670 + 88i64))(
				qword_140C65670,
				v7,
				v8,
				1i64,
				0,
				5,
				1,
				256,
				0,
				&v22);
			if (v9 < 0)
			{
				TlsValue = &off_140B5E648;
				v16 = 0i64;
				Value = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v18[0] = (__int64)TlsValue;
				v18[1] = v16;
				*(_QWORD*)&v19 = &off_140B5E648;
				*((_QWORD*)&v19 + 1) = L"Result";
				v18[2] = (__int64)Value;
				lpTlsValue[0] = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v19);
				LODWORD(lpTlsValue[1]) = v9;
				*(_QWORD*)&v19 = &off_140B5E640;
				v21[1] = *(_OWORD*)lpTlsValue;
				v23 = 0x141E39370i64;
				v21[0] = v19;
				LODWORD(v14) = v8;
				v10 = sub_1401971E0(&dword_140C8B058, 13, &v23, v7, v14, v21, v18);
				*(_QWORD*)&v19 = &off_140B5E648;
				TlsSetValue(dwTlsIndex, lpTlsValue[0]);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, Value);
				if (v10)
					DebugBreak();
			}
			v11 = (__int64)v22;
			if (*(void (****)(void))(a1 + 3816) != v22)
			{
				if (v22)
				{
					(**v22)();
					v11 = (__int64)v22;
				}
				v12 = *(_QWORD*)(a1 + 3816);
				if (v12)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v12 + 8i64))(*(_QWORD*)(a1 + 3816));
					v11 = (__int64)v22;
				}
				*(_QWORD*)(a1 + 3816) = v11;
			}
			if (v11)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		}
	}
	return 0i64;
}
// 1406E2464: variable 'v14' is possibly undefined
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C8B058: using guessed type _DWORD dword_140C8B058;

