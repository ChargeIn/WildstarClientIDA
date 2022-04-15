//----- (000000014030D8A0) ----------------------------------------------------
__int64 __fastcall sub_14030D8A0(__int64 a1)
{
	__int64 result; // rax
	int v3; // ebx
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rsi
	__int64 v10; // rcx
	__int64 v11; // rbx
	__int64 v12; // r9
	__int64 v13; // rcx
	__int64 v14; // rcx
	int v15; // [rsp+20h] [rbp-E0h]
	__int64(__fastcall * *TlsValue)(); // [rsp+40h] [rbp-C0h] BYREF
	__int64 v17; // [rsp+48h] [rbp-B8h]
	LPVOID Value; // [rsp+50h] [rbp-B0h]
	__int64(__fastcall * *v19)(); // [rsp+58h] [rbp-A8h] BYREF
	const wchar_t* v20; // [rsp+60h] [rbp-A0h]
	LPVOID lpTlsValue; // [rsp+68h] [rbp-98h]
	__int64 v22; // [rsp+70h] [rbp-90h]
	__int128 v23; // [rsp+78h] [rbp-88h] BYREF
	LPVOID v24[2]; // [rsp+88h] [rbp-78h]
	__int64 v25[4]; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v26[4]; // [rsp+C0h] [rbp-40h] BYREF
	__int128 v27[2]; // [rsp+E0h] [rbp-20h] BYREF
	__int64 v28; // [rsp+120h] [rbp+20h] BYREF

	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 40) + 32i64))(*(_QWORD*)(a1 + 40));
	if ((_DWORD)result)
	{
		v3 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 40) + 40i64))(*(_QWORD*)(a1 + 40), 0i64);
		if (v3 < 0
			|| (v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 16i64))(*(_QWORD*)(a1 + 48)),
				v5 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 32i64))(*(_QWORD*)(a1 + 48)),
				Value = 0i64,
				v17 = v5 + v4,
				TlsValue = (__int64(__fastcall**)())v5,
				v3 = sub_14030CAC0((unsigned __int64*)&TlsValue, v5 + 1584, v5),
				v3 < 0))
		{
			v8 = *(_QWORD*)(a1 + 48);
			if (v8)
				v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8);
			else
				v9 = -1i64;
			v10 = *(_QWORD*)(a1 + 40);
			v28 = 0x141DEBAA0i64;
			v15 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v10 + 40i64))(v10, 0i64);
			sub_1401A3130(14, 0, &v28, (unsigned int)v3, v15, v9);
			v17 = 0i64;
			TlsValue = &off_140B5E648;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v25[0] = (__int64)TlsValue;
			v25[1] = v17;
			*(_QWORD*)&v23 = &off_140B5E648;
			*((_QWORD*)&v23 + 1) = L"Result";
			v25[2] = (__int64)Value;
			v24[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v23);
			LODWORD(v24[1]) = v3;
			v11 = *(_QWORD*)(a1 + 24);
			v19 = &off_140B5E648;
			v27[1] = *(_OWORD*)v24;
			*(_QWORD*)&v23 = &off_140B5E640;
			v20 = L"FileName";
			v27[0] = v23;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v19);
			v12 = *(_QWORD*)(a1 + 24);
			v26[1] = (__int64)v20;
			v19 = &off_140B5E638;
			v22 = v11;
			v28 = 0x141DEBA68i64;
			v26[0] = (__int64)&off_140B5E638;
			v26[3] = v11;
			v26[2] = (__int64)lpTlsValue;
			LODWORD(v11) = sub_1401971E0(&dword_140C8A604, 6, &v28, v12, v26, v27, v25);
			v19 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue);
			*(_QWORD*)&v23 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v24[0]);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, Value);
			if ((_DWORD)v11)
				DebugBreak();
			v13 = *(_QWORD*)(a1 + 40);
			if (v13)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
				*(_QWORD*)(a1 + 40) = 0i64;
			}
			v14 = *(_QWORD*)(a1 + 48);
			if (v14)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
				*(_QWORD*)(a1 + 48) = 0i64;
			}
			v7 = *(_QWORD*)(a1 + 16) + 112i64;
		}
		else
		{
			v6 = *(_QWORD*)(a1 + 40);
			if (v6)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
				*(_QWORD*)(a1 + 40) = 0i64;
			}
			v7 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 32i64))(*(_QWORD*)(a1 + 48));
		}
		*(_QWORD*)(a1 + 56) = v7;
		sub_14030DBB0(a1);
		return 1i64;
	}
	return result;
}
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A604: using guessed type _DWORD dword_140C8A604;

