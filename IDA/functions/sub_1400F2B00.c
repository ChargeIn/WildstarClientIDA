//----- (00000001400F2B00) ----------------------------------------------------
char sub_1400F2B00(__int64 a1, __int64 a2, LARGE_INTEGER a3, __int64 a4, _BYTE* a5, ...)
{
	__int64 v5; // rax
	int v8; // ebx
	__int64 v9; // rcx
	__int64 v10; // rax
	_QWORD* v11; // rcx
	char v12; // di
	__int64 v13; // r10
	int v14; // edx
	int v15; // r13d
	__int64 v16; // rbx
	_QWORD* v17; // rax
	__int64 v18; // r10
	__int64 v19; // rdx
	_BYTE* v20; // r12
	_BYTE* v21; // rsi
	char* v22; // r15
	__int64 v23; // rcx
	__int64 v24; // r12
	int v25; // edi
	int v26; // edi
	int v27; // r15d
	unsigned int v28; // ebx
	__int64 v29; // rcx
	int v30; // edi
	__int64 v31; // rcx
	__int64 v33; // [rsp+30h] [rbp-59h] BYREF
	int v34[2]; // [rsp+38h] [rbp-51h] BYREF
	__int64(__fastcall * *v35)(); // [rsp+40h] [rbp-49h] BYREF
	__int64 v36; // [rsp+48h] [rbp-41h]
	LPVOID lpTlsValue; // [rsp+50h] [rbp-39h]
	__int64(__fastcall * *v38)(); // [rsp+60h] [rbp-29h] BYREF
	__int64 v39; // [rsp+68h] [rbp-21h]
	LPVOID v40; // [rsp+70h] [rbp-19h]
	__int64 TlsValue[2]; // [rsp+80h] [rbp-9h] BYREF
	LPVOID Value; // [rsp+90h] [rbp+7h]
	int v43; // [rsp+98h] [rbp+Fh]
	__int64 v44; // [rsp+E0h] [rbp+57h]
	va_list va; // [rsp+108h] [rbp+7Fh] BYREF

	va_start(va, a5);
	v5 = *(_QWORD*)(a1 + 16);
	if (v5
		&& v5 == *(_QWORD*)(a4 + 16)
		&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a4 + 8i64))(a4)
		&& *(_QWORD*)(a4 + 16)
		&& (unsigned int)sub_1400F9ED0(a4) == 6)
	{
		v8 = *(_DWORD*)(a4 + 8);
		TlsValue[0] = (__int64)&off_140B5E648;
		TlsValue[1] = (__int64)L"Function";
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, TlsValue);
		v9 = *(_QWORD*)(a1 + 16);
		TlsValue[0] = (__int64)off_140B56850;
		v43 = v8;
		v10 = sub_1400E93D0(v9);
		if (v10 && *(_BYTE*)(v10 + 2825))
		{
			v12 = 1;
		LABEL_41:
			TlsValue[0] = (__int64)&off_140B5E648;
			TlsSetValue(dwTlsIndex, Value);
			return v12;
		}
		v44 = (__int64)(v11[2] - v11[3]) >> 4;
		sub_1400587D0(v11, (__int64)sub_1400F3FF0, 0);
		v13 = *(_QWORD*)(a4 + 16);
		v14 = *(_DWORD*)(a4 + 8);
		v12 = 1;
		v15 = 0;
		LODWORD(v16) = 0;
		*(_QWORD*)v34 = (__int64)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) - *(_QWORD*)(*(_QWORD*)(a1 + 16) + 24i64)) >> 4;
		v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v13 + 32) + 160i64), v14);
		v19 = *(_QWORD*)(v18 + 16);
		v20 = a5;
		v21 = 0i64;
		v22 = a5;
		*(_QWORD*)v19 = *v17;
		*(_DWORD*)(v19 + 8) = *((_DWORD*)v17 + 2);
		*(_QWORD*)(v18 + 16) += 16i64;
		if (!*a5)
		{
		LABEL_28:
			v27 = 1;
		LABEL_29:
			if ((unsigned __int8)sub_1400F2730(a1, v15, v16, v34[0], a3, a2))
			{
				v28 = -(int)v16;
				while (v21)
				{
					if (!*v21)
						break;
					v29 = *(_QWORD*)(a1 + 8i64 * (char)*v21 + 40);
					if (v29)
					{
						(*(void(__fastcall**)(__int64, _QWORD, _QWORD, char*))(*(_QWORD*)v29 + 16i64))(
							v29,
							*(_QWORD*)(a1 + 16),
							v28++,
							va);
						++v21;
					}
					else
					{
						++v21;
						v35 = &off_140B5E648;
						v36 = 0i64;
						lpTlsValue = TlsGetValue(dwTlsIndex);
						TlsSetValue(dwTlsIndex, &v35);
						v38 = v35;
						v39 = v36;
						*(_QWORD*)v34 = 0x141D12A90i64;
						v40 = lpTlsValue;
						v30 = sub_140196F30(&dword_140C8A0E0, 13, v34, a2, v20, &v38);
						v35 = &off_140B5E648;
						TlsSetValue(dwTlsIndex, lpTlsValue);
						if (v30)
							DebugBreak();
						v12 = 0;
						++v28;
					}
				}
				sub_1400582A0(*(_QWORD*)(a1 + 16), -1 - v27);
				v31 = *(_QWORD*)(a1 + 16);
				if ((_DWORD)v44 != (unsigned int)((__int64)(*(_QWORD*)(v31 + 16) - *(_QWORD*)(v31 + 24)) >> 4))
					sub_1400582A0(v31, v44);
			}
			else
			{
				sub_1400582A0(*(_QWORD*)(a1 + 16), v44);
				v12 = 0;
			}
			goto LABEL_41;
		}
		while (1)
		{
			if (v21)
			{
			LABEL_25:
				v16 = -1i64;
				do
					++v16;
				while (v21[v16]);
				v27 = v16 + 1;
				goto LABEL_29;
			}
			v23 = *v22;
			v24 = *(_QWORD*)(a1 + 8 * v23 + 40);
			if (v24)
			{
				if (!(unsigned int)sub_140058190(*(_QWORD*)(a1 + 16), 1))
				{
					v36 = 0i64;
					v35 = &off_140B5E648;
					lpTlsValue = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &v35);
					v38 = v35;
					v39 = v36;
					v33 = 0x141D12968i64;
					v40 = lpTlsValue;
					v25 = sub_140196F30(&dword_140C8A0DC, 13, &v33, a5, &v38);
					v35 = &off_140B5E648;
					TlsSetValue(dwTlsIndex, lpTlsValue);
					if (v25)
						DebugBreak();
					v12 = 0;
				}
				(*(void(__fastcall**)(__int64, _QWORD, char*))(*(_QWORD*)v24 + 8i64))(v24, *(_QWORD*)(a1 + 16), va);
				++v15;
			}
			else
			{
				if ((_BYTE)v23 != 62)
				{
					v36 = 0i64;
					v35 = &off_140B5E648;
					lpTlsValue = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &v35);
					v20 = a5;
					v38 = v35;
					v39 = v36;
					v33 = 0x141D129A8i64;
					v40 = lpTlsValue;
					v26 = sub_140196F30(&dword_140C8A0D8, 13, &v33, a5, &v38);
					v35 = &off_140B5E648;
					TlsSetValue(dwTlsIndex, lpTlsValue);
					if (v26)
						DebugBreak();
					v12 = 0;
					goto LABEL_23;
				}
				v21 = v22 + 1;
			}
			v20 = a5;
		LABEL_23:
			if (!*++v22)
			{
				if (!v21)
					goto LABEL_28;
				goto LABEL_25;
			}
		}
	}
	return 0;
}
// 1400F2BF2: variable 'v11' is possibly undefined
// 1400F2C44: variable 'v18' is possibly undefined
// 140A18310: using guessed type wchar_t aFunction[9];
// 140B56850: using guessed type __int64 (__fastcall *off_140B56850[50])();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A0D8: using guessed type _DWORD dword_140C8A0D8;
// 140C8A0DC: using guessed type _DWORD dword_140C8A0DC;
// 140C8A0E0: using guessed type _DWORD dword_140C8A0E0;

