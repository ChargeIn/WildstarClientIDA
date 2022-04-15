//----- (00000001400D86C0) ----------------------------------------------------
__int64 __fastcall sub_1400D86C0(_QWORD* a1)
{
	unsigned int v1; // edi
	unsigned __int64 v3; // r8
	unsigned int v4; // eax
	__int64 v5; // r9
	__int64 v6; // rdx
	__int64 v7; // rsi
	__int64 result; // rax
	__int64 v9; // r12
	char* v10; // rax
	char* v11; // rax
	unsigned __int64 v12; // rdx
	_DWORD* v13; // rax
	int v14; // r8d
	_DWORD* v15; // rcx
	int* v16; // r15
	__m128i* v17; // r14
	_QWORD* v18; // rax
	__int64 v19; // rsi
	int v20; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+40h] [rbp-49h] BYREF
	__int64 v22; // [rsp+48h] [rbp-41h]
	LPVOID Value; // [rsp+50h] [rbp-39h]
	__int64 v24[4]; // [rsp+60h] [rbp-29h] BYREF
	__int64(__fastcall * *v25)(); // [rsp+80h] [rbp-9h] BYREF
	__m128i* v26; // [rsp+88h] [rbp-1h]
	LPVOID lpTlsValue; // [rsp+90h] [rbp+7h]
	__m128i* v28; // [rsp+98h] [rbp+Fh]
	__int64(__fastcall * *v29)(); // [rsp+A0h] [rbp+17h] BYREF
	int* v30; // [rsp+A8h] [rbp+1Fh]
	LPVOID v31; // [rsp+B0h] [rbp+27h]
	__m128i* v32; // [rsp+B8h] [rbp+2Fh]
	__int64 v33; // [rsp+F8h] [rbp+6Fh] BYREF

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	result = sub_1400D66A0(a1, 1u);
	v9 = result;
	if (result)
	{
		v10 = (char*)sub_140056BB0(a1, 2u, 0i64);
		sub_14018F2D0(&v25, v10);
		v11 = (char*)sub_140056BB0(a1, 3u, 0i64);
		sub_14018F2D0(&v29, v11);
		v12 = a1[2];
		v13 = (_DWORD*)(a1[3] + 48i64);
		v14 = -2;
		if ((unsigned __int64)v13 < v12)
		{
			v15 = dword_140A12138;
			if (v13 != dword_140A12138 && *(_DWORD*)(a1[3] + 56i64) == 5)
			{
				if ((unsigned __int64)v13 < v12)
					v15 = (_DWORD*)(a1[3] + 48i64);
				*(_QWORD*)v12 = *(_QWORD*)v15;
				*(_DWORD*)(v12 + 8) = v15[2];
				a1[2] += 16i64;
				v14 = sub_1400578C0((__int64)a1);
			}
		}
		v16 = v30;
		v17 = v26;
		v18 = sub_1400F52E0(v7 + 2688, v26, v30, 0i64, 0i64, v14);
		v19 = (__int64)v18;
		if (v18)
		{
			*((_BYTE*)v18 + 28) |= 0x10u;
			(*(void(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)v9 + 528i64))(v9, v18);
			v1 = sub_1400D62A0(a1, v19);
		}
		else
		{
			v22 = 0i64;
			TlsValue = &off_140B5E648;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v24[0] = (__int64)TlsValue;
			v24[1] = v22;
			v25 = &off_140B5E648;
			v26 = (__m128i*)L"FileName";
			v24[2] = (__int64)Value;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v25);
			v28 = v17;
			v30 = (int*)v26;
			v25 = &off_140B5E638;
			v32 = v17;
			v29 = &off_140B5E638;
			v33 = 0x141D109D0i64;
			v31 = lpTlsValue;
			v20 = sub_1401971E0(&dword_140C8A06C, 13, &v33, v16, v17, &v29, v24);
			v25 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, Value);
			if (v20)
				DebugBreak();
		}
		if (v16)
			sub_14018B900((__int64)v16, 0);
		if (v17)
			sub_14018B900((__int64)v17, 0);
		return v1;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C8A06C: using guessed type _DWORD dword_140C8A06C;

