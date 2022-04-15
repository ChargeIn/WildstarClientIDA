//----- (00000001402A0680) ----------------------------------------------------
__int64 __fastcall sub_1402A0680(__int64 a1, int* a2, int a3, unsigned int a4, int a5, int a6, int a7, int a8)
{
	int v10; // ebx
	__int64 result; // rax
	__int64 v12; // rdi
	__int64 v13; // rdi
	unsigned __int64 v14; // r15
	int** v15; // r14
	int* v16; // rax
	int* v17; // rdx
	int* v18; // rcx
	__int64 v19; // rax
	__int64* v20; // rcx
	__int64 v21; // rax
	__int64(__fastcall * *v22)(); // [rsp+30h] [rbp-69h] BYREF
	const wchar_t* v23; // [rsp+38h] [rbp-61h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-59h]
	int* v25; // [rsp+48h] [rbp-51h]
	__int64(__fastcall * *TlsValue)(); // [rsp+50h] [rbp-49h] BYREF
	__int64 v27; // [rsp+58h] [rbp-41h]
	LPVOID Value; // [rsp+60h] [rbp-39h]
	__int64 v29; // [rsp+68h] [rbp-31h] BYREF
	__int64(__fastcall * *v30)(); // [rsp+70h] [rbp-29h] BYREF
	const wchar_t* v31; // [rsp+78h] [rbp-21h]
	__int64 v32; // [rsp+80h] [rbp-19h]
	int(__fastcall * v33)(__int64); // [rsp+88h] [rbp-11h]
	__int64 v34; // [rsp+90h] [rbp-9h]
	__int64 v35; // [rsp+98h] [rbp-1h]
	__int64 v36[4]; // [rsp+A0h] [rbp+7h] BYREF

	if (a4 <= 2)
	{
		*(_QWORD*)(a1 + 24) = 0i64;
		*(_QWORD*)(a1 + 32) = 0i64;
		*(_QWORD*)(a1 + 40) = 0i64;
		*(_QWORD*)(a1 + 48) = 0i64;
		*(_QWORD*)(a1 + 56) = 0i64;
		*(_QWORD*)(a1 + 64) = 0i64;
		*(_QWORD*)(a1 + 72) = 0i64;
		*(_QWORD*)(a1 + 80) = 0i64;
		*(_DWORD*)(a1 + 56) = a5;
		*(_DWORD*)(a1 + 24) = 0;
		*(_DWORD*)(a1 + 60) = a6;
		*(_DWORD*)(a1 + 40) = a3;
		*(_DWORD*)(a1 + 64) = a7;
		*(_DWORD*)(a1 + 52) = a4;
		*(_QWORD*)(a1 + 72) = sub_14018E9C0(a2);
		*(_DWORD*)(a1 + 80) = a8;
		result = sub_1402A0970(a1, 2);
		if ((int)result >= 0)
		{
			v12 = *(_QWORD*)(a1 + 16);
			LODWORD(v22) = *(_DWORD*)(a1 + 40);
			v13 = v12 + 6936;
			HIDWORD(v22) = *(_DWORD*)(a1 + 52);
			v23 = *(const wchar_t**)(a1 + 56);
			LODWORD(lpTlsValue) = *(_DWORD*)(a1 + 64);
			v25 = *(int**)(a1 + 72);
			HIDWORD(lpTlsValue) = *(_DWORD*)(a1 + 80);
			if (*(_QWORD*)v13 == *(_QWORD*)(v13 + 8))
				sub_1400290D0(v13);
			v14 = (*(__int64(__fastcall**)(__int64(__fastcall***)()))(v13 + 24))(&v22);
			v15 = (int**)(*(_QWORD*)(v13 + 16) + 8 * (v14 % *(_QWORD*)(v13 + 8)));
			v16 = sub_14018B280(56i64, 0);
			v17 = v16;
			if (v16)
			{
				v18 = *v15;
				*(_QWORD*)v16 = v14;
				*((_QWORD*)v16 + 1) = v18;
				*((_QWORD*)v16 + 2) = v22;
				*((_QWORD*)v16 + 3) = v23;
				*((_QWORD*)v16 + 4) = lpTlsValue;
				v19 = (__int64)v25;
				*((_QWORD*)v17 + 6) = a1;
				*((_QWORD*)v17 + 5) = v19;
			}
			else
			{
				v17 = 0i64;
			}
			*v15 = v17;
			++* (_QWORD*)v13;
			v20 = (__int64*)(*(_QWORD*)(a1 + 16) + 6856i64);
			if (!*(_QWORD*)(a1 + 288))
			{
				*(_QWORD*)(a1 + 288) = v20;
				*(_QWORD*)(a1 + 296) = *v20;
				*v20 = a1;
				v21 = *(_QWORD*)(a1 + 296);
				if (v21)
					*(_QWORD*)(v21 + 288) = a1 + 296;
			}
			v30 = *(__int64(__fastcall***)())(a1 + 72);
			LODWORD(v31) = 0;
			v32 = a1;
			v34 = 0i64;
			v35 = 0i64;
			v33 = sub_1402A10F0;
			sub_1401B6BF0((__int64)v20, &v30, (int**)(a1 + 232));
			return 0i64;
		}
	}
	else
	{
		v27 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v36[0] = (__int64)TlsValue;
		v36[1] = v27;
		v22 = &off_140B5E648;
		v23 = L"FileName";
		v36[2] = (__int64)Value;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v22);
		v25 = a2;
		v31 = v23;
		v22 = &off_140B5E638;
		v33 = (int(__fastcall*)(__int64))a2;
		v30 = &off_140B5E638;
		v29 = 0x141DE5910i64;
		v32 = (__int64)lpTlsValue;
		v10 = sub_1401971E0(&dword_140C8A4A8, 14, &v29, &v30, v36);
		v22 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if (v10)
			DebugBreak();
		return 2147500037i64;
	}
	return result;
}
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A4A8: using guessed type _DWORD dword_140C8A4A8;

