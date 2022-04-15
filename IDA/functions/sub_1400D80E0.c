#include "../winhttp.h"

//----- (00000001400D80E0) ----------------------------------------------------
__int64 __fastcall sub_1400D80E0(_QWORD* a1)
{
	unsigned int v1; // r14d
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // r13
	__int64 result; // rax
	__int64 v9; // r12
	char* v10; // rax
	unsigned __int64 v11; // rdx
	_DWORD* v12; // rax
	int v13; // ebx
	_DWORD* v14; // rcx
	__m128i* v15; // rsi
	int* v16; // r15
	_DWORD* v17; // rax
	char* v18; // rax
	__int64 v19; // rcx
	_QWORD* v20; // rax
	__int64 v21; // rax
	__int64 v23; // rax
	__int64 v24; // rax
	__int64 v25; // rbx
	int v26; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+40h] [rbp-49h] BYREF
	__int64 v28; // [rsp+48h] [rbp-41h]
	LPVOID Value; // [rsp+50h] [rbp-39h]
	__int64 v30[4]; // [rsp+60h] [rbp-29h] BYREF
	__int64(__fastcall * *v31)(); // [rsp+80h] [rbp-9h] BYREF
	const wchar_t* v32; // [rsp+88h] [rbp-1h]
	LPVOID lpTlsValue; // [rsp+90h] [rbp+7h]
	__m128i* v34; // [rsp+98h] [rbp+Fh]
	__int64(__fastcall * *v35)(); // [rsp+A0h] [rbp+17h] BYREF
	const wchar_t* v36; // [rsp+A8h] [rbp+1Fh]
	LPVOID v37; // [rsp+B0h] [rbp+27h]
	__m128i* v38; // [rsp+B8h] [rbp+2Fh]
	__int64 v39; // [rsp+F8h] [rbp+6Fh] BYREF

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
		v10 = (char*)sub_140056BB0(a1, 3u, 0i64);
		sub_14018F2D0(&v35, v10);
		v11 = a1[2];
		v12 = (_DWORD*)(a1[3] + 48i64);
		v13 = -2;
		v14 = dword_140A12138;
		LODWORD(v39) = -2;
		if ((unsigned __int64)v12 < v11 && v12 != dword_140A12138 && v12[2] == 5)
		{
			if ((unsigned __int64)v12 < v11)
				v14 = v12;
			*(_QWORD*)v11 = *(_QWORD*)v14;
			*(_DWORD*)(v11 + 8) = v14[2];
			a1[2] += 16i64;
			v13 = sub_1400578C0((__int64)a1);
			LODWORD(v39) = v13;
		}
		v15 = (__m128i*)sub_14018B280(16i64, 0);
		v32 = (const wchar_t*)v15;
		lpTlsValue = v15;
		v34 = v15 + 1;
		if (v15)
			v15->m128i_i16[0] = 0;
		v16 = (int*)v36;
		v17 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v17 >= a1[2] || v17 == dword_140A12138 || (unsigned int)(*(_DWORD*)(a1[3] + 24i64) - 3) > 1)
		{
			v21 = 0i64;
			while (aXmldoc[++v21] != 0)
				;
			if ((2 * v21) >> 1)
			{
				sub_14001C310(&v31, (int*)L"XMLDoc", (int*)&aXmldoc[v21]);
				v15 = (__m128i*)v32;
			}
			else
			{
				sub_1407DB590(v15->m128i_i32, (int*)L"XMLDoc", 0i64);
			}
			v23 = sub_14012A990((__int64)a1, 2);
			if (!v23)
				goto LABEL_32;
			v24 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v23 + 16i64))(v23);
			v20 = sub_1400F5890(v7 + 2688, v24, v16, 0i64, 0i64, v39, 0, 0i64);
		}
		else
		{
			v18 = (char*)sub_140056BB0(a1, 2u, 0i64);
			sub_14018F2D0(&v35, v18);
			v19 = (__int64)v15;
			v15 = (__m128i*)v36;
			if (v19)
				sub_14018B900(v19, 0);
			v20 = sub_1400F52E0(v7 + 2688, v15, v16, 0i64, 0i64, v13);
		}
		v25 = (__int64)v20;
		if (v20)
		{
			*((_BYTE*)v20 + 28) |= 0x10u;
			(*(void(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)v9 + 520i64))(v9, v20);
			v1 = sub_1400D62A0(a1, v25);
		LABEL_34:
			if (v15)
				sub_14018B900((__int64)v15, 0);
			if (v16)
				sub_14018B900((__int64)v16, 0);
			return v1;
		}
	LABEL_32:
		v28 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v30[0] = (__int64)TlsValue;
		v30[1] = v28;
		v31 = &off_140B5E648;
		v32 = L"FileName";
		v30[2] = (__int64)Value;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v31);
		v34 = v15;
		v36 = v32;
		v31 = &off_140B5E638;
		v38 = v15;
		v35 = &off_140B5E638;
		v39 = 0x141D10970i64;
		v37 = lpTlsValue;
		v26 = sub_1401971E0(&dword_140C8A070, 13, &v39, v16, v15, &v35, v30);
		v31 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if (v26)
			DebugBreak();
		goto LABEL_34;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A162F8: using guessed type wchar_t aXmldoc[7];
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C8A070: using guessed type _DWORD dword_140C8A070;

