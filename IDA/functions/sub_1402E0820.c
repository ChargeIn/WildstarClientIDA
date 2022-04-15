#include "../winhttp.h"

//----- (00000001402E0820) ----------------------------------------------------
__int64 __fastcall sub_1402E0820(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	int v4; // ebx
	_DWORD* v5; // rcx
	__int64 v6; // rax
	int v7; // ebx
	int v8; // eax
	int v9; // ebx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rdx
	void(__fastcall * v13)(_QWORD*, _QWORD); // rax
	__int64(__fastcall * *v14)(); // [rsp+30h] [rbp-79h] BYREF
	const wchar_t* v15; // [rsp+38h] [rbp-71h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-69h]
	_QWORD* v17; // [rsp+48h] [rbp-61h]
	__int64(__fastcall * *TlsValue)(); // [rsp+50h] [rbp-59h] BYREF
	__int64 v19; // [rsp+58h] [rbp-51h]
	LPVOID Value; // [rsp+60h] [rbp-49h]
	__int128 v21; // [rsp+68h] [rbp-41h] BYREF
	LPVOID v22[2]; // [rsp+78h] [rbp-31h]
	__int64(__fastcall * *v23)(); // [rsp+90h] [rbp-19h] BYREF
	__int64 v24; // [rsp+98h] [rbp-11h]
	LPVOID v25; // [rsp+A0h] [rbp-9h]
	__int64 v26[4]; // [rsp+B0h] [rbp+7h] BYREF
	__int128 v27; // [rsp+D0h] [rbp+27h] BYREF
	__int128 v28; // [rsp+E0h] [rbp+37h]
	__int64 v29; // [rsp+110h] [rbp+67h] BYREF

	v2 = a1[148];
	if (v2)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 32i64))(v2);
		if (!(_DWORD)result)
			return result;
		v4 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)a1[148] + 40i64))(a1[148], 0i64);
		if (v4 >= 0)
		{
			v7 = sub_1402DF540((__int64)a1);
			if (v7 >= 0)
			{
			LABEL_9:
				v10 = a1[150];
				if (v10)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
					a1[150] = 0i64;
				}
				v11 = a1[148];
				if (v11)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
					a1[148] = 0i64;
				}
				sub_1402E0480(a1);
				sub_1402E0580(a1);
				sub_1402E0680(a1);
				v12 = a1[2];
				v13 = *(void(__fastcall**)(_QWORD*, _QWORD))(v12 + 1904);
				if (v13)
					v13(a1, *(_QWORD*)(v12 + 1928));
				return 1i64;
			}
			v19 = 0i64;
			TlsValue = &off_140B5E648;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v23 = TlsValue;
			v24 = v19;
			*(_QWORD*)&v21 = &off_140B5E648;
			*((_QWORD*)&v21 + 1) = L"Result";
			v25 = Value;
			v22[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v21);
			*(_QWORD*)&v21 = &off_140B5E640;
			LODWORD(v22[1]) = v7;
			v14 = &off_140B5E648;
			v15 = L"FileName";
			v27 = v21;
			v28 = *(_OWORD*)v22;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v14);
			v17 = a1 + 77;
			v5 = &unk_140C8A57C;
			v14 = &off_140B5E638;
			v6 = 0x141DEB560i64;
		}
		else
		{
			v19 = 0i64;
			TlsValue = &off_140B5E648;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v23 = TlsValue;
			v24 = v19;
			*(_QWORD*)&v21 = &off_140B5E648;
			*((_QWORD*)&v21 + 1) = L"Result";
			v25 = Value;
			v22[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v21);
			*(_QWORD*)&v21 = &off_140B5E640;
			LODWORD(v22[1]) = v4;
			v14 = &off_140B5E648;
			v15 = L"FileName";
			v27 = v21;
			v28 = *(_OWORD*)v22;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v14);
			v17 = a1 + 77;
			v5 = &unk_140C8A578;
			v14 = &off_140B5E638;
			v6 = 0x141DEB530i64;
		}
		v29 = v6;
		v26[0] = (__int64)v14;
		v26[1] = (__int64)v15;
		v26[2] = (__int64)lpTlsValue;
		v26[3] = (__int64)v17;
		v8 = sub_1401971E0(v5, 36, &v29, v26, &v27, &v23);
		v14 = &off_140B5E648;
		v9 = v8;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		*(_QWORD*)&v21 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v22[0]);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if (v9)
			DebugBreak();
		goto LABEL_9;
	}
	return 1i64;
}
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();

