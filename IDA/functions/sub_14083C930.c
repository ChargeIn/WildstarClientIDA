//----- (000000014083C930) ----------------------------------------------------
__int64 __fastcall sub_14083C930(__int64 a1, const CHAR* a2, unsigned int a3, __int64 a4)
{
	__int64 v4; // rsi
	__int64 v6; // rax
	unsigned __int64 v8; // rax
	__int64 v9; // rcx
	signed __int64 v10; // rcx
	void* v11; // rsp
	void* v12; // rsp
	__int64 v13; // rax
	_QWORD* v14; // r14
	unsigned int v15; // ebx
	unsigned int v16; // eax
	unsigned int v18; // ecx
	__int64 v19; // rcx
	__int64 v20; // r9
	unsigned int v21; // esi
	int cchWideChara; // [rsp+28h] [rbp-8h]
	int cchWideChar; // [rsp+28h] [rbp-8h]
	WCHAR WideCharStr[4]; // [rsp+30h] [rbp+0h] BYREF
	int v25; // [rsp+38h] [rbp+8h]
	__int64 v26; // [rsp+40h] [rbp+10h]
	__int16 v27; // [rsp+48h] [rbp+18h]
	int v28; // [rsp+4Ch] [rbp+1Ch]
	unsigned int v29; // [rsp+80h] [rbp+50h] BYREF
	__int64 v30; // [rsp+98h] [rbp+68h] BYREF

	v4 = a3;
	v28 = -1;
	*(_QWORD*)WideCharStr = 0i64;
	v25 = 0;
	v27 = 1;
	v26 = a4;
	v6 = -1i64;
	while (a2[++v6] != 0)
		;
	v8 = 2 * v6 + 2;
	v9 = v8 + 15;
	if (v8 + 15 <= v8)
		v9 = 0xFFFFFFFFFFFFFF0i64;
	v10 = v9 & 0xFFFFFFFFFFFFFFF0ui64;
	v11 = alloca(v10);
	v12 = alloca(v10);
	v13 = -1i64;
	do
		++v13;
	while (a2[v13]);
	MultiByteToWideChar(0, 0, a2, -1, WideCharStr, v13 + 1);
	v14 = (_QWORD*)(a1 + 48);
	LOBYTE(cchWideChara) = 1;
	v15 = (*(__int64(__fastcall**)(__int64, WCHAR*, WCHAR*, _QWORD, __int64, int))(*(_QWORD*)qword_140C62930 + 32i64))(
		qword_140C62930,
		WideCharStr,
		WideCharStr,
		0i64,
		a1 + 48,
		cchWideChara);
	if (v15 == 1
		|| (LOBYTE(v27) = 0,
			LOBYTE(cchWideChar) = 1,
			v15 = (*(__int64(__fastcall**)(__int64, WCHAR*, WCHAR*, _QWORD, __int64, int))(*(_QWORD*)qword_140C62930
				+ 32i64))(
					qword_140C62930,
					WideCharStr,
					WideCharStr,
					0i64,
					a1 + 48,
					cchWideChar),
			v15 == 1))
	{
		v16 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v14 + 40i64))(*v14);
		*(_DWORD*)(a1 + 24) = v16;
		if (!v16)
			return 2i64;
		if (*(_DWORD*)(a1 + 20) < v16)
		{
			if (*(_QWORD*)a1)
				sub_140881720(dword_140C10F20, *(_QWORD*)a1);
			v18 = 0x8000;
			if (*(_DWORD*)(a1 + 24) > 0x8000u)
				v18 = *(_DWORD*)(a1 + 24);
			*(_DWORD*)(a1 + 20) = v18;
			*(_QWORD*)a1 = sub_140881960(dword_140C10F20, v18, 0x20u);
		}
		if (!*(_QWORD*)a1)
			return 52i64;
		if ((_DWORD)v4)
		{
			v19 = *v14;
			v30 = 0i64;
			v15 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64*))(*(_QWORD*)v19 + 72i64))(
				v19,
				v4,
				0i64,
				&v30);
			if (v15 == 1)
			{
				v21 = v4 - v30;
				v15 = sub_14083CB00(a1, v21, &v29, v20);
				if (v29 != v21)
					return 2;
			}
		}
	}
	return v15;
}
// 14083C9F7: variable 'cchWideChara' is possibly undefined
// 14083CA23: variable 'cchWideChar' is possibly undefined
// 14083CAC2: variable 'v20' is possibly undefined
// 140C10F20: using guessed type int dword_140C10F20;
// 140C62930: using guessed type __int64 qword_140C62930;

