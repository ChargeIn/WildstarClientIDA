//----- (00000001400E58C0) ----------------------------------------------------
__int64 __fastcall sub_1400E58C0(__int64 a1, int* a2)
{
	__int64 v4; // rax
	_DWORD* v5; // rcx
	int v6; // ebx
	__int64 v8; // rax
	int* v9; // rsi
	__int64 v10; // rbx
	unsigned __int64 v11; // rbx
	_WORD* v12; // r15
	__int64 v13; // r13
	__int64 v14; // r14
	_QWORD* v15; // rbx
	int v16; // eax
	__int64 v17; // rbx
	__int64 v18; // r13
	int* v19; // rsi
	__int64 v20; // rax
	__int64 v22; // rbx
	unsigned __int64 v23; // rbx
	_WORD* v24; // r14
	__int64 v25; // r15
	__int64 v26; // rdi
	_QWORD* v27; // rbx
	int v28; // eax
	__int64 v29; // rax
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-60h] BYREF
	__int64 v31; // [rsp+28h] [rbp-58h]
	LPVOID lpTlsValue; // [rsp+30h] [rbp-50h]
	__int64 v33[4]; // [rsp+40h] [rbp-40h] BYREF
	__int64 v34; // [rsp+A0h] [rbp+20h] BYREF
	__int64 v35; // [rsp+A8h] [rbp+28h]

	v34 = a1;
	while (!a2 || !*(_WORD*)a2)
		a2 = (int*)L"Default";
	if (*(_QWORD*)(a1 + 2784))
	{
		v8 = 0i64;
		v9 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v8;
			while (*((_WORD*)a2 + v8));
		}
		v10 = (2 * v8) >> 1;
		if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v9 = sub_14018B280(2 * (v10 + 1), 0);
		v11 = 2 * v10;
		sub_1407DB590(v9, a2, v11);
		v12 = (_WORD*)((char*)v9 + v11);
		if ((int*)((char*)v9 + v11))
			*v12 = 0;
		v13 = *(_QWORD*)(a1 + 2800);
		v14 = v13;
		v15 = *(_QWORD**)(v13 + 8);
		while (v15)
		{
			if ((int)sub_1400454D0(v15[5], v15[6], (unsigned __int16*)v9, (__int64)v12) < 0)
			{
				v15 = (_QWORD*)v15[3];
			}
			else
			{
				v14 = (__int64)v15;
				v15 = (_QWORD*)v15[2];
			}
		}
		if (v14 == v13
			|| (v16 = sub_1400454D0((__int64)v9, (__int64)v12, *(unsigned __int16**)(v14 + 40), *(_QWORD*)(v14 + 48)),
				v35 = v14,
				v16 < 0))
		{
			v35 = v13;
		}
		v17 = v35;
		if (v9)
			sub_14018B900((__int64)v9, 0);
		v18 = v34;
		if (v17 == *(_QWORD*)(v34 + 2800))
		{
			sub_1400035B0();
			v19 = 0i64;
			v20 = 0i64;
			while (aDefault_5[++v20] != 0)
				;
			v22 = (2 * v20) >> 1;
			if ((unsigned __int64)(v22 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				v19 = sub_14018B280(2 * (v22 + 1), 0);
			v23 = 2 * v22;
			sub_1407DB590(v19, (int*)L"Default", v23);
			v24 = (_WORD*)((char*)v19 + v23);
			if ((int*)((char*)v19 + v23))
				*v24 = 0;
			v25 = *(_QWORD*)(v18 + 2800);
			v26 = v25;
			v27 = *(_QWORD**)(v25 + 8);
			while (v27)
			{
				if ((int)sub_1400454D0(v27[5], v27[6], (unsigned __int16*)v19, (__int64)v24) < 0)
				{
					v27 = (_QWORD*)v27[3];
				}
				else
				{
					v26 = (__int64)v27;
					v27 = (_QWORD*)v27[2];
				}
			}
			if (v26 == v25
				|| (v28 = sub_1400454D0((__int64)v19, (__int64)v24, *(unsigned __int16**)(v26 + 40), *(_QWORD*)(v26 + 48)),
					v34 = v26,
					v28 < 0))
			{
				v34 = v25;
			}
			v17 = v34;
			if (v19)
				sub_14018B900((__int64)v19, 0);
		}
		v29 = *(_QWORD*)(v18 + 2800);
		if (v17 != v29)
			return *(_QWORD*)(v17 + 64);
		v17 = *(_QWORD*)(v29 + 16);
		if (v17 != v29)
			return *(_QWORD*)(v17 + 64);
		v31 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v4 = 0x141D11BD0i64;
		v5 = &unk_140C8A09C;
	}
	else
	{
		v31 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v4 = 0x141D11C30i64;
		v5 = &unk_140C8A098;
	}
	v34 = v4;
	v33[0] = (__int64)TlsValue;
	v33[1] = v31;
	v33[2] = (__int64)lpTlsValue;
	v6 = sub_1401971E0(v5, 13, &v34, v33, TlsValue);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	if (v6)
		DebugBreak();
	return 0i64;
}
// 140A175E0: using guessed type wchar_t aDefault_4[8];
// 140A17628: using guessed type wchar_t aDefault_5[8];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();

