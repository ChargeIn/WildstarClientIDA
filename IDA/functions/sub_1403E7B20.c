//----- (00000001403E7B20) ----------------------------------------------------
__int64 __fastcall sub_1403E7B20(__int64 a1)
{
	int v2; // esi
	__int64 v3; // rcx
	__int64 result; // rax
	__int64 v5; // rcx
	__int64 v6; // rcx
	int v7; // eax
	__int64* v8; // rax
	__int64 v9; // rcx
	int v10; // edi
	__int64 v11; // rax
	__int64* v12; // rbx
	__int64 v13; // rbx
	__int64 v14; // rax
	__int64 v15; // rdi
	wchar_t* v16; // rax
	const wchar_t* v17; // rdx
	int v18; // ecx
	bool v19; // zf
	__int64 v20; // rax
	WCHAR* v21; // rax
	int v22; // ebx
	__int64(__fastcall * *v23)(); // [rsp+30h] [rbp-D0h] BYREF
	const wchar_t* v24; // [rsp+38h] [rbp-C8h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-C0h]
	const wchar_t* v26; // [rsp+48h] [rbp-B8h]
	__int64(__fastcall * *TlsValue)(); // [rsp+50h] [rbp-B0h] BYREF
	__int64 v28; // [rsp+58h] [rbp-A8h]
	LPVOID Value; // [rsp+60h] [rbp-A0h]
	__int64 v30[4]; // [rsp+70h] [rbp-90h] BYREF
	__int64 v31[4]; // [rsp+90h] [rbp-70h] BYREF
	char v32[48]; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v33; // [rsp+E0h] [rbp-20h]
	int v34; // [rsp+10Ch] [rbp+Ch]
	__int64 v35; // [rsp+118h] [rbp+18h]
	__int64 v36; // [rsp+120h] [rbp+20h]
	__int64 v37; // [rsp+360h] [rbp+260h] BYREF
	__int64 v38; // [rsp+368h] [rbp+268h] BYREF

	v2 = 0;
	v3 = a1 + 7200;
	*(_DWORD*)(v3 - 8) = 0;
	result = sub_14063FBA0(v3);
	if ((int)result < 0)
		return result;
	sub_1401A72E0((__int64)v32);
	sub_1401A59A0((__int64)v32);
	v5 = v35;
	v34 = 0;
	v35 = 0i64;
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	sub_14018B900(v36, 0);
	v36 = 0i64;
	v37 = 0i64;
	v7 = sub_1401B6D00(v6, (const __m128i*)L"UI\\CombatFloaters.xml", &v37);
	if (v7 < 0)
	{
		if (v34 >= 0)
		{
			v34 = v7;
			v8 = sub_14018D540(&v38, (__int64)L"%0.8x %s", (unsigned int)v7, L"UI\\CombatFloaters.xml");
			v9 = v35;
			v35 = *v8;
			*v8 = v9;
			if (v38)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v38 - 16) + 8i64))(v38 - 16);
		}
		v10 = v34;
		if (!v37)
			goto LABEL_13;
		v11 = *(_QWORD*)v37;
		goto LABEL_12;
	}
	v12 = (__int64*)v37;
	v10 = sub_1401A7C70((__int64)v32, v37);
	if (v12)
	{
		v11 = *v12;
	LABEL_12:
		(*(void (**)(void))(v11 + 8))();
	}
LABEL_13:
	if (v10 < 0)
	{
		v28 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v30[0] = (__int64)TlsValue;
		v30[1] = v28;
		v23 = &off_140B5E648;
		v24 = L"FileName";
		v30[2] = (__int64)Value;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v23);
		v31[1] = (__int64)v24;
		v26 = L"UI\\CombatFloaters.xml";
		v31[3] = (__int64)L"UI\\CombatFloaters.xml";
		v23 = &off_140B5E638;
		v31[0] = (__int64)&off_140B5E638;
		v37 = 0x141DF2540i64;
		v31[2] = (__int64)lpTlsValue;
		v22 = sub_1401971E0(&dword_140C8A774, 5, &v37, v31, v30);
		v23 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if (v22)
			DebugBreak();
	}
	else
	{
		v13 = v33;
		if (v33)
		{
			while (1)
			{
				v14 = (**(__int64(__fastcall***)(__int64))v13)(v13);
				v15 = v14;
				if (v14)
				{
					v16 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 48i64))(v14)
						? 0i64
						: (wchar_t*)sub_1401A4F40(v15 + 24);
					v17 = L"FloaterConfiguration";
					if (v16 == L"FloaterConfiguration")
						break;
					v18 = 0;
					if (*v16)
					{
						do
						{
							if (!*v17 || *v16 != *v17)
								break;
							v19 = v18 == 0x7FFFFFFF;
							if (v18 == 0x7FFFFFFF)
								goto LABEL_26;
							++v16;
							++v17;
							++v18;
						} while (*v16);
						v19 = v18 == 0x7FFFFFFF;
					LABEL_26:
						if (v19)
							break;
					}
					if (!*v16 && !*v17)
						break;
				}
				v13 = *(_QWORD*)(v13 + 72);
				if (!v13)
					goto LABEL_30;
			}
		}
		else
		{
		LABEL_30:
			v15 = 0i64;
		}
		v20 = sub_1401A6B80(v15, L"version");
		if (v20)
		{
			v21 = (WCHAR*)sub_1401A4F40(v20 + 32);
			if (v21)
				v2 = sub_1407E1970(v21, 0i64, 0xAu);
		}
		*(_DWORD*)(a1 + 7192) = v2;
		sub_14063FC60(v15, a1 + 7200);
	}
	sub_1401A76A0((__int64)v32);
	return 0i64;
}
// 1403E7BB3: variable 'v6' is possibly undefined
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140A45328: using guessed type wchar_t a08xS[9];
// 140AF7D38: using guessed type wchar_t aVersion_0[8];
// 140AF7E38: using guessed type wchar_t aFloaterconfigu[21];
// 140AF7E68: using guessed type wchar_t aUiCombatfloate[22];
// 140AF7ED0: using guessed type wchar_t aUiCombatfloate_0[22];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A774: using guessed type _DWORD dword_140C8A774;

