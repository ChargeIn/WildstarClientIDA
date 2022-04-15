#include "../winhttp.h"

//----- (00000001407C0C50) ----------------------------------------------------
_DWORD* __fastcall sub_1407C0C50(_QWORD* a1, __int16** a2)
{
	__int16* v5; // r14
	__int64 v6; // rcx
	__int64 v7; // rbx
	unsigned __int64 v8; // rdx
	unsigned __int64 v9; // rbx
	unsigned __int64 v10; // rcx
	__int16** v11; // rax
	__int16* v12; // r9
	_DWORD* v13; // rbx
	__int16* v14; // rbx
	__int64 v15; // rax
	int v16; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-39h] BYREF
	__int64 v18; // [rsp+28h] [rbp-31h]
	LPVOID Value; // [rsp+30h] [rbp-29h]
	__int64(__fastcall * *v20)(); // [rsp+40h] [rbp-19h] BYREF
	__int64 v21; // [rsp+48h] [rbp-11h]
	LPVOID v22; // [rsp+50h] [rbp-9h]
	__int64(__fastcall * *v23)(); // [rsp+60h] [rbp+7h] BYREF
	const wchar_t* v24; // [rsp+68h] [rbp+Fh]
	LPVOID lpTlsValue; // [rsp+70h] [rbp+17h]
	__int16* v26; // [rsp+78h] [rbp+1Fh]
	__int64 v27[6]; // [rsp+80h] [rbp+27h] BYREF
	__int64 v28; // [rsp+C8h] [rbp+6Fh] BYREF

	if (!a2)
		return 0i64;
	v5 = *a2;
	v7 = sub_1407C0AF0((__int64)a1, *a2);
	if (v7 == -1)
	{
		v8 = a1[13];
		v9 = 0i64;
		v10 = 0i64;
		if (v8)
		{
			v11 = (__int16**)a1[12];
			while (*v11 != v5)
			{
				++v10;
				++v11;
				if (v10 >= v8)
					goto LABEL_8;
			}
		}
		else
		{
		LABEL_8:
			sub_140033260(a1 + 12, a2);
			v28 = 0x141E73D80i64;
			sub_1401A3130(12, 0, &v28);
			v12 = *a2;
			v28 = 0x141E73DC0i64;
			sub_1401A3130(12, 0, &v28, v12);
			if (IsDebuggerPresent() && a1[13])
			{
				do
				{
					sub_140059390();
					++v9;
				} while (v9 < a1[13]);
			}
		}
		return 0i64;
	}
	else
	{
		v13 = (_DWORD*)(a1[10] + *(_QWORD*)(264 * v7 + a1[11] + 256));
		if (*v13 == 1146372684)
		{
			if ((int)sub_1407C0A20(v6, (__int64)a2, (__int64)(v13 + 2), (__int64)v13) >= 0)
				return v13;
			TlsValue = &off_140B5E648;
			v18 = 0i64;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v14 = *a2;
			v20 = TlsValue;
			v21 = v18;
			v23 = &off_140B5E648;
			v22 = Value;
			v24 = L"TableName";
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v23);
			v23 = &off_140B5E638;
			v15 = 0x141E73D20i64;
		}
		else
		{
			TlsValue = &off_140B5E648;
			v18 = 0i64;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v14 = *a2;
			v20 = TlsValue;
			v21 = v18;
			v23 = &off_140B5E648;
			v22 = Value;
			v24 = L"TableName";
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v23);
			v23 = &off_140B5E638;
			v15 = 0x141E73CF0i64;
		}
		v26 = v14;
		v27[1] = (__int64)v24;
		v27[0] = (__int64)v23;
		v28 = v15;
		v27[3] = (__int64)v14;
		v27[2] = (__int64)lpTlsValue;
		v16 = sub_140197770(12, &v28, v27, &v20, TlsValue);
		v23 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if (v16)
			DebugBreak();
		return 0i64;
	}
}
// 1407C0E21: variable 'v6' is possibly undefined
// 140A42BC0: using guessed type wchar_t aTablename[10];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();

