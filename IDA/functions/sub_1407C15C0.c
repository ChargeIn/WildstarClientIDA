//----- (00000001407C15C0) ----------------------------------------------------
void __fastcall sub_1407C15C0(__int64 a1)
{
	_QWORD* Value; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64* v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rsi
	__int64* v12; // rax
	unsigned int v13; // r11d
	__int64 v14; // rdx
	__int64 v15; // r10
	__int16 v16; // ax
	unsigned int i; // r9d
	__int64 v18; // rcx
	__int64 v19; // r8
	__int64 v20; // rax
	__int64 v21; // rcx
	__int64 v22; // rax
	unsigned int j; // r9d
	__int64 v24; // r8
	__int64 v25; // rcx
	__int64* v26; // rax
	int v27; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-39h] BYREF
	__int64 v29; // [rsp+28h] [rbp-31h]
	LPVOID v30; // [rsp+30h] [rbp-29h]
	__int64(__fastcall * *v31)(); // [rsp+40h] [rbp-19h] BYREF
	__int64 v32; // [rsp+48h] [rbp-11h]
	LPVOID v33; // [rsp+50h] [rbp-9h]
	__int64(__fastcall * *v34)(); // [rsp+60h] [rbp+7h] BYREF
	const wchar_t* v35; // [rsp+68h] [rbp+Fh]
	LPVOID lpTlsValue; // [rsp+70h] [rbp+17h]
	__int64 v37; // [rsp+78h] [rbp+1Fh]
	__int64 v38[6]; // [rsp+80h] [rbp+27h] BYREF
	__int64 v39; // [rsp+C8h] [rbp+6Fh] BYREF

	if (qword_140C63758 && (Value = TlsGetValue(*(_DWORD*)(qword_140C63758 + 4))) != 0i64 && (v3 = Value[1]) != 0)
		v4 = *(_QWORD*)(v3 + 96);
	else
		v4 = 0i64;
	if ((*(int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 40i64))(v4, 0i64) < 0)
	{
		v29 = 0i64;
		TlsValue = &off_140B5E648;
		v30 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v5 = *(__int64**)(a1 + 16);
		v31 = TlsValue;
		v32 = v29;
		v33 = v30;
		v6 = *v5;
		v34 = &off_140B5E648;
		v35 = L"TableName";
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v34);
		v34 = &off_140B5E638;
		v7 = 0x141E4E530i64;
		goto LABEL_26;
	}
	v8 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 32i64))(*(_QWORD*)(a1 + 32));
	v9 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 16i64))(*(_QWORD*)(a1 + 32));
	if (*(_DWORD*)v8 != 1146372684
		|| (v32 = v9 + v8,
			v31 = (__int64(__fastcall**)())v8,
			v33 = 0i64,
			(int)sub_1407C1F00((unsigned __int64*)&v31, v8 + 96, v8) < 0))
	{
		v29 = 0i64;
		TlsValue = &off_140B5E648;
		v30 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v26 = *(__int64**)(a1 + 16);
		v31 = TlsValue;
		v32 = v29;
		v33 = v30;
		v6 = *v26;
		v34 = &off_140B5E648;
		v35 = L"TableName";
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v34);
		v34 = &off_140B5E638;
		v7 = 0x141E4E560i64;
	LABEL_26:
		v37 = v6;
		v38[0] = (__int64)v34;
		v38[1] = (__int64)v35;
		v39 = v7;
		v38[2] = (__int64)lpTlsValue;
		v38[3] = v6;
		v27 = sub_140197770(12, &v39, v38, &v31, TlsValue);
		v34 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v30);
		if (v27)
			DebugBreak();
		return;
	}
	v11 = *(_QWORD*)(a1 + 16);
	if ((int)sub_1407C19F0(v10, v11, v8 + 8) < 0)
	{
		v29 = 0i64;
		TlsValue = &off_140B5E648;
		v30 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v12 = *(__int64**)(a1 + 16);
		v31 = TlsValue;
		v32 = v29;
		v33 = v30;
		v6 = *v12;
		v34 = &off_140B5E648;
		v35 = L"TableName";
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v34);
		v34 = &off_140B5E638;
		v7 = 0x141E4E5C0i64;
		goto LABEL_26;
	}
	v13 = 0;
	if (*(_DWORD*)(v11 + 12))
	{
		do
		{
			v14 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
			v15 = 40i64 * v13;
			v16 = *(_WORD*)(v14 + v15 + 8);
			if (v16 == 130)
			{
				for (i = 0; i < *(_DWORD*)(v8 + 48); *(_QWORD*)(v21 + v22) += v19)
				{
					v18 = *(_QWORD*)(a1 + 16);
					v19 = *(_QWORD*)(v8 + 64);
					v20 = *(_QWORD*)(v18 + 16);
					v21 = i * *(_DWORD*)(v18 + 8);
					v22 = v19 + *(unsigned int*)(v20 + v15 + 12);
					++i;
				}
			}
			else if (v16 == 128 && (*(_BYTE*)(v14 + v15 + 24) & 0x10) == 0)
			{
				for (j = 0; j < *(_DWORD*)(v8 + 48); ++j)
				{
					v24 = *(_QWORD*)(v8 + 64);
					v25 = v24
						+ *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) + v15 + 12)
						+ j * *(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64);
					if (*(_QWORD*)v25)
						sub_1401E8450(v25, *(_QWORD*)v25 + v24, *(_DWORD*)(v25 + 8));
				}
			}
			++v13;
		} while (v13 < *(_DWORD*)(*(_QWORD*)(a1 + 16) + 12i64));
	}
	*(_QWORD*)(a1 + 40) = v8;
	sub_1400035B0();
}
// 1407C1713: variable 'v10' is possibly undefined
// 1407C185F: variable 'v15' is possibly undefined
// 1407C1883: variable 'j' is possibly undefined
// 1407C1890: variable 'v13' is possibly undefined
// 140A42BC0: using guessed type wchar_t aTablename[10];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63758: using guessed type __int64 qword_140C63758;

