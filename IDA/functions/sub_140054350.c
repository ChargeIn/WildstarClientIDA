//----- (0000000140054350) ----------------------------------------------------
__int64 __fastcall sub_140054350(_QWORD* a1, int* a2)
{
	__int64 v2; // r13
	__int64 v5; // rbx
	int* v6; // rax
	int* v7; // rdi
	unsigned __int64 v8; // rbx
	__int64 v9; // rcx
	__int64 result; // rax
	unsigned int v11; // edi
	int v12; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-49h] BYREF
	__int64 v14; // [rsp+38h] [rbp-41h]
	LPVOID Value; // [rsp+40h] [rbp-39h]
	__int64 v16[4]; // [rsp+50h] [rbp-29h] BYREF
	__int128 v17; // [rsp+70h] [rbp-9h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+80h] [rbp+7h]
	__int128 v19[4]; // [rsp+90h] [rbp+17h] BYREF
	__int64 v20; // [rsp+E0h] [rbp+67h] BYREF

	v2 = a1[9];
	if (a2)
	{
		v5 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v5;
			while (*((_WORD*)a2 + v5));
		}
		v6 = sub_14018B280(2 * v5 + 18, 0);
		if (v6)
		{
			*((_QWORD*)v6 + 1) = v5;
			*(_QWORD*)v6 = off_140B55060;
		}
		else
		{
			v6 = 0i64;
		}
		v7 = v6 + 4;
		v8 = 2 * v5;
		sub_1407DB590(v6 + 4, a2, v8);
		*(_WORD*)((char*)v7 + v8) = 0;
		a1[9] = v7;
	}
	else
	{
		a1[9] = 0i64;
	}
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	v9 = a1[3];
	if (!v9)
		return 0i64;
	result = (*(__int64(__fastcall**)(__int64, int*, __int64))(*(_QWORD*)v9 + 56i64))(v9, a2, -1i64);
	v11 = result;
	if ((int)result >= 0)
	{
		a1[8] = 0i64;
	}
	else
	{
		v14 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v16[0] = (__int64)TlsValue;
		v16[1] = v14;
		*(_QWORD*)&v17 = &off_140B5E648;
		*((_QWORD*)&v17 + 1) = L"Result";
		v16[2] = (__int64)Value;
		lpTlsValue[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v17);
		LODWORD(lpTlsValue[1]) = v11;
		*(_QWORD*)&v17 = &off_140B5E640;
		v19[1] = *(_OWORD*)lpTlsValue;
		v20 = 0x141D0BCB0i64;
		v19[0] = v17;
		v12 = sub_1401971E0(&dword_140C8A038, 22, &v20, v19, v16);
		*(_QWORD*)&v17 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue[0]);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if (v12)
			DebugBreak();
		return v11;
	}
	return result;
}
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A038: using guessed type _DWORD dword_140C8A038;

