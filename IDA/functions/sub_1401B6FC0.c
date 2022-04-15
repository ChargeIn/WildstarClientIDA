//----- (00000001401B6FC0) ----------------------------------------------------
__int64 __fastcall sub_1401B6FC0(__int64 a1, const WCHAR* a2, __int64 a3)
{
	__int64 v3; // rdi
	__int64 v4; // rsi
	const __m128i* v5; // rax
	const wchar_t* v6; // r9
	__m128i* p_PathName; // rax
	int v8; // edx
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rdx
	__int64 v12; // rcx
	int v13; // ebx
	__int64 v14; // r8
	__int64 v15; // r9
	__int64* v17; // rbx
	unsigned __int64 v18; // rsi
	const WCHAR* v19; // rax
	__int64 v20; // rdi
	const WCHAR* v21; // rax
	signed int LastError; // eax
	unsigned int v23; // edi
	__int64* v24; // [rsp+30h] [rbp-238h] BYREF
	__m128i PathName; // [rsp+40h] [rbp-228h] BYREF

	v3 = 0i64;
	v24 = 0i64;
	v4 = sub_1401B5020(a1, (WCHAR*)&PathName, a3, a2);
	v5 = sub_1407DD8D8(&PathName, 0x5Cu);
	if (!v5 || (v6 = (const wchar_t*)&unk_1409E29CC, v5->m128i_i16[1]))
		v6 = L"\\*";
	p_PathName = &PathName;
	v8 = 0;
	v9 = 260i64;
	while (p_PathName->m128i_i16[0])
	{
		p_PathName = (__m128i*)((char*)p_PathName + 2);
		if (!--v9)
		{
			v8 = -2147024809;
			v10 = 0i64;
			goto LABEL_9;
		}
	}
	v10 = 260 - v9;
LABEL_9:
	if (v8 < 0)
		return (unsigned int)v8;
	v8 = sub_14001B680(&PathName.m128i_i16[v10], 260 - v10, 260 - v10, (__int64)v6);
	if (v8 < 0)
		return (unsigned int)v8;
	v13 = sub_1401CFFA0(0i64, &PathName, 1u, &v24);
	if (v13 >= 0)
	{
		if ((unsigned __int64)(2 * v4) >= 0x208)
		{
			_report_rangecheckfailure(v12, v11, v14, v15);
			JUMPOUT(0x1401B71C0i64);
		}
		v17 = v24;
		PathName.m128i_i16[v4] = 0;
		v18 = (*(__int64(__fastcall**)(__int64*))(*v17 + 16))(v17);
		if (v18)
		{
			while (1)
			{
				v19 = (const WCHAR*)(*(__int64(__fastcall**)(__int64*, __int64))(*v17 + 24))(v17, v3);
				if (!DeleteFileW(v19))
					break;
				if (++v3 >= v18)
					goto LABEL_19;
			}
		}
		else
		{
		LABEL_19:
			v20 = (*(__int64(__fastcall**)(__int64*))(*v17 + 56))(v17);
			if (v20)
			{
				while (1)
				{
					v21 = (const WCHAR*)(*(__int64(__fastcall**)(__int64*, __int64))(*v17 + 64))(v17, --v20);
					if (!RemoveDirectoryW(v21))
						break;
					if (!v20)
						goto LABEL_22;
				}
			}
			else
			{
			LABEL_22:
				if (RemoveDirectoryW((LPCWSTR)&PathName))
				{
					(*(void(__fastcall**)(__int64*))(*v17 + 8))(v17);
					return 0i64;
				}
			}
		}
		LastError = GetLastError();
		v23 = LastError;
		if (LastError > 0)
			v23 = (unsigned __int16)LastError | 0x80070000;
		(*(void(__fastcall**)(__int64*))(*v17 + 8))(v17);
		return v23;
	}
	else
	{
		if (v24)
			(*(void(__fastcall**)(__int64*))(*v24 + 8))(v24);
		return (unsigned int)v13;
	}
}
// 1401B71BB: control flows out of bounds to 1401B71C0
// 1401B704B: conditional instruction was optimized away because rcx.8!=0
// 1401B71BB: variable 'v12' is possibly undefined
// 1401B71BB: variable 'v11' is possibly undefined
// 1401B71BB: variable 'v14' is possibly undefined
// 1401B71BB: variable 'v15' is possibly undefined
// 1407DEDF4: using guessed type __int64 __fastcall _report_rangecheckfailure(_QWORD, _QWORD, _QWORD, _QWORD);
// 1409E5034: using guessed type wchar_t asc_1409E5034[3];
// 1401B6FC0: using guessed type __m128i PathName;

