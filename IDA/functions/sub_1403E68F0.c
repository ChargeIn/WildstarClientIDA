//----- (00000001403E68F0) ----------------------------------------------------
__int64 __fastcall sub_1403E68F0(__int64 a1)
{
	int v2; // edi
	_DWORD* v3; // rcx
	__int64 v4; // rax
	int* v5; // rax
	__int64 v6; // rcx
	__int64 result; // rax
	__int64 v8; // rcx
	__int64 v9; // rcx
	int* v10; // rax
	__int64 v11; // rax
	bool v12; // zf
	int* v13; // rax
	__int64 v14; // rcx
	int v15; // ebx
	int* v16; // rax
	int v17; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-39h] BYREF
	__int64 v19; // [rsp+38h] [rbp-31h]
	LPVOID Value; // [rsp+40h] [rbp-29h]
	__int64(__fastcall * *v21)(); // [rsp+50h] [rbp-19h] BYREF
	__int64 v22; // [rsp+58h] [rbp-11h]
	LPVOID v23; // [rsp+60h] [rbp-9h]
	__int128 v24; // [rsp+70h] [rbp+7h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+80h] [rbp+17h]
	__int128 v26; // [rsp+90h] [rbp+27h] BYREF
	__int128 v27; // [rsp+A0h] [rbp+37h]
	__int64 v28; // [rsp+D8h] [rbp+6Fh] BYREF

	v2 = sub_140613840(a1);
	if (v2 < 0)
	{
		TlsValue = &off_140B5E648;
		v19 = 0i64;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v21 = TlsValue;
		v22 = v19;
		*(_QWORD*)&v24 = &off_140B5E648;
		*((_QWORD*)&v24 + 1) = L"Result";
		v23 = Value;
		lpTlsValue[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v24);
		v3 = &unk_140C8A798;
		*(_QWORD*)&v24 = &off_140B5E640;
		v4 = 0x141DF2228i64;
	LABEL_46:
		LODWORD(lpTlsValue[1]) = v2;
		v28 = v4;
		v27 = *(_OWORD*)lpTlsValue;
		v26 = v24;
		v17 = sub_1401971E0(v3, 5, &v28, &v26, &v21);
		*(_QWORD*)&v24 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue[0]);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if (v17)
			DebugBreak();
		return (unsigned int)v2;
	}
	v2 = sub_14055C6A0();
	if (v2 < 0 || (v2 = sub_140575B60(), v2 < 0) || (v2 = sub_1406005D0(), v2 < 0) || (v2 = sub_14062F570(), v2 < 0))
	{
		TlsValue = &off_140B5E648;
		v19 = 0i64;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v21 = TlsValue;
		v22 = v19;
		*(_QWORD*)&v24 = &off_140B5E648;
		*((_QWORD*)&v24 + 1) = L"Result";
		v23 = Value;
		lpTlsValue[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v24);
		v3 = &unk_140C8A788;
		*(_QWORD*)&v24 = &off_140B5E640;
		v4 = 0x141DF2260i64;
		goto LABEL_46;
	}
	sub_14055C800();
	v2 = sub_1405BEDF0();
	if (v2 < 0)
	{
		v19 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v21 = TlsValue;
		v22 = v19;
		*(_QWORD*)&v24 = &off_140B5E648;
		*((_QWORD*)&v24 + 1) = L"Result";
		v23 = Value;
		lpTlsValue[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v24);
		v3 = &unk_140C8A78C;
		*(_QWORD*)&v24 = &off_140B5E640;
		v4 = 0x141DF2180i64;
		goto LABEL_46;
	}
	if (!qword_140C65C20)
	{
		v5 = sub_14018B280(480i64, 0);
		if (v5)
			qword_140C65C20 = (__int64)sub_140635840(v5);
		else
			qword_140C65C20 = 0i64;
		sub_140635B60(v6);
	}
	result = sub_14040AD50();
	if ((int)result >= 0)
	{
		result = sub_140631390();
		if ((int)result >= 0)
		{
			v2 = sub_140538FD0(a1);
			if (v2 < 0
				|| (v2 = sub_1404050C0(), v2 < 0)
				|| (v2 = sub_1405814B0(), v2 < 0)
				|| (v2 = sub_14063AE00(v8), v2 < 0)
				|| (v2 = sub_14063FB40(), v2 < 0)
				|| (v2 = sub_1405A48F0(v9), v2 < 0))
			{
				v19 = 0i64;
				TlsValue = &off_140B5E648;
				Value = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v21 = TlsValue;
				v22 = v19;
				*(_QWORD*)&v24 = &off_140B5E648;
				*((_QWORD*)&v24 + 1) = L"Result";
				v23 = Value;
				lpTlsValue[0] = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v24);
				v3 = &unk_140C8A784;
				*(_QWORD*)&v24 = &off_140B5E640;
				v4 = 0x141DF2658i64;
				goto LABEL_46;
			}
			v10 = sub_14018B280(688i64, 0);
			if (v10)
				v11 = sub_140608670((__int64)v10);
			else
				v11 = 0i64;
			*(_QWORD*)(a1 + 29688) = v11;
			result = sub_1406085E0(v11);
			if ((int)result >= 0)
			{
				v12 = qword_140C665D0 == 0;
				*(_DWORD*)(*(_QWORD*)(a1 + 29688) + 212i64) = 0;
				*(_DWORD*)(*(_QWORD*)(a1 + 29688) + 216i64) = 1;
				*(_DWORD*)(*(_QWORD*)(a1 + 29688) + 220i64) = 1;
				*(_DWORD*)(*(_QWORD*)(a1 + 29688) + 224i64) = 1;
				*(_DWORD*)(*(_QWORD*)(a1 + 29688) + 228i64) = 1;
				*(_DWORD*)(*(_QWORD*)(a1 + 29688) + 232i64) = 1;
				*(_DWORD*)(*(_QWORD*)(a1 + 29688) + 236i64) = 1;
				*(_DWORD*)(*(_QWORD*)(a1 + 29688) + 240i64) = 1;
				*(_DWORD*)(*(_QWORD*)(a1 + 29688) + 244i64) = 1;
				*(_DWORD*)(*(_QWORD*)(a1 + 29688) + 248i64) = 1;
				*(_DWORD*)(*(_QWORD*)(a1 + 29688) + 252i64) = 1;
				*(_DWORD*)(*(_QWORD*)(a1 + 29688) + 160i64) = 0;
				*(_DWORD*)(*(_QWORD*)(a1 + 29688) + 164i64) = 0;
				*(_DWORD*)(*(_QWORD*)(a1 + 29688) + 168i64) = 0;
				*(_DWORD*)(*(_QWORD*)(a1 + 29688) + 172i64) = 0;
				*(_DWORD*)(*(_QWORD*)(a1 + 29688) + 176i64) = 0;
				*(_DWORD*)(*(_QWORD*)(a1 + 29688) + 180i64) = 0;
				*(_DWORD*)(*(_QWORD*)(a1 + 29688) + 184i64) = 0;
				*(_DWORD*)(*(_QWORD*)(a1 + 29688) + 188i64) = 0;
				*(_DWORD*)(*(_QWORD*)(a1 + 29688) + 192i64) = 0;
				*(_DWORD*)(*(_QWORD*)(a1 + 29688) + 196i64) = 0;
				*(_DWORD*)(*(_QWORD*)(a1 + 29688) + 200i64) = 0;
				if (!v12
					|| ((v13 = sub_14018B280(48i64, 0)) == 0i64
						? (qword_140C665D0 = 0i64)
						: (qword_140C665D0 = (__int64)sub_140716980(v13)),
						(int)sub_140716AC0(v14) >= 0))
				{
					if (!qword_140C65B90)
					{
						v16 = sub_14018B280(280i64, 0);
						if (v16)
							qword_140C65B90 = (__int64)sub_1405BE5A0(v16);
						else
							qword_140C65B90 = 0i64;
						sub_1405BE7D0();
					}
					v2 = sub_1405FAFB0();
					if (v2 >= 0)
						return 0i64;
					v19 = 0i64;
					TlsValue = &off_140B5E648;
					Value = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &TlsValue);
					v21 = TlsValue;
					v22 = v19;
					*(_QWORD*)&v24 = &off_140B5E648;
					*((_QWORD*)&v24 + 1) = L"Result";
					v23 = Value;
					lpTlsValue[0] = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &v24);
					v3 = &unk_140C8A77C;
					*(_QWORD*)&v24 = &off_140B5E640;
					v4 = 0x141DF2600i64;
					goto LABEL_46;
				}
				if (qword_140C665D0)
					sub_1406160D0((__int64*)qword_140C665D0);
				qword_140C665D0 = 0i64;
				TlsValue = &off_140B5E648;
				v19 = 0i64;
				Value = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v21 = TlsValue;
				v22 = v19;
				*(_QWORD*)&v24 = &off_140B5E648;
				*((_QWORD*)&v24 + 1) = L"Result";
				v23 = Value;
				lpTlsValue[0] = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v24);
				LODWORD(lpTlsValue[1]) = -2147467259;
				*(_QWORD*)&v24 = &off_140B5E640;
				v27 = *(_OWORD*)lpTlsValue;
				v28 = 0x141DF2690i64;
				v26 = v24;
				v15 = sub_1401971E0(&dword_140C8A780, 5, &v28, &v26, &v21);
				*(_QWORD*)&v24 = &off_140B5E648;
				TlsSetValue(dwTlsIndex, lpTlsValue[0]);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, Value);
				if (v15)
					DebugBreak();
				return 2147500037i64;
			}
		}
	}
	return result;
}
// 1403E6AD6: variable 'v6' is possibly undefined
// 1403E6B25: variable 'v8' is possibly undefined
// 1403E6B43: variable 'v9' is possibly undefined
// 1403E6D01: variable 'v14' is possibly undefined
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65B90: using guessed type __int64 qword_140C65B90;
// 140C65C20: using guessed type __int64 qword_140C65C20;
// 140C665D0: using guessed type __int64 qword_140C665D0;
// 140C8A780: using guessed type _DWORD dword_140C8A780;

