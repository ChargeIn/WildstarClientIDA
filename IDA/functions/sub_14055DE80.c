//----- (000000014055DE80) ----------------------------------------------------
__int64 __fastcall sub_14055DE80(__int64 a1, unsigned int a2, int a3)
{
	__int64 v3; // r13
	__int64* v5; // r14
	__int64 v6; // rsi
	int v7; // ebx
	_QWORD* v9; // rcx
	__int64 v10; // rcx
	int** v11; // rdi
	int* v12; // rcx
	int* v13; // rax
	__int64 v14; // rax
	__int64* i; // rbx
	_QWORD* v16; // rcx
	__int64 v17; // rdx
	__int64* v18; // rcx
	int v19; // edi
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-40h] BYREF
	__int64 v21; // [rsp+38h] [rbp-38h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-30h]
	__int64 v23[4]; // [rsp+50h] [rbp-20h] BYREF
	__int64* v24; // [rsp+B0h] [rbp+40h] BYREF
	int v25; // [rsp+C0h] [rbp+50h] BYREF
	unsigned __int64 v26; // [rsp+C8h] [rbp+58h] BYREF

	v25 = a3;
	v24 = (__int64*)a1;
	v3 = qword_140C65B70;
	v5 = (__int64*)(qword_140C65B70 + 1992);
	v6 = *(_QWORD*)(qword_140C65B70 + 1992);
	if (v6)
	{
		while (*(_DWORD*)(v6 + 96) != a2)
		{
			v6 = *(_QWORD*)(v6 + 64);
			if (!v6)
				goto LABEL_4;
		}
		v9 = *(_QWORD**)(v6 + 56);
		if (v9)
			*v9 = *(_QWORD*)(v6 + 64);
		v10 = *(_QWORD*)(v6 + 64);
		if (v10)
			*(_QWORD*)(v10 + 56) = *(_QWORD*)(v6 + 56);
		*(_QWORD*)(v6 + 56) = 0i64;
		*(_QWORD*)(v6 + 64) = 0i64;
		*(_DWORD*)(v6 + 92) = v25;
		if (*(_QWORD*)(v3 + 1952) == *(_QWORD*)(v3 + 1960))
			sub_1400290D0(v3 + 1952);
		v26 = (*(__int64(__fastcall**)(int*))(v3 + 1976))(&v25);
		v11 = (int**)(*(_QWORD*)(v3 + 1968) + 8 * (v26 % *(_QWORD*)(v3 + 1960)));
		v12 = sub_14018B280(32i64, 0);
		if (v12)
		{
			v13 = *v11;
			*(_QWORD*)v12 = v26;
			*((_QWORD*)v12 + 1) = v13;
			v12[4] = v25;
			*((_QWORD*)v12 + 3) = v6;
		}
		else
		{
			v12 = 0i64;
		}
		*v11 = v12;
		++* (_QWORD*)(v3 + 1952);
		v24 = 0i64;
		v14 = *v5;
		*v5 = 0i64;
		v24 = (__int64*)v14;
		if (v14)
		{
			*(_QWORD*)(v14 + 56) = &v24;
			for (i = v24; v24; i = v24)
			{
				v16 = (_QWORD*)i[7];
				if (v16)
					*v16 = i[8];
				v17 = i[8];
				v18 = i + 8;
				if (v17)
					*(_QWORD*)(v17 + 56) = i[7];
				*v18 = 0i64;
				i[7] = (__int64)v5;
				*v18 = *v5;
				*v5 = (__int64)i;
				if (*v18)
					*(_QWORD*)(*v18 + 56) = v18;
				v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
				if ((*(unsigned int(__fastcall**)(__int64*))(*i + 8))(i) == v19 && *(_DWORD*)(v6 + 96) < a2)
					sub_140561AD0(v3, (__int64)i);
			}
		}
		return v6;
	}
	else
	{
	LABEL_4:
		TlsValue = &off_140B5E648;
		v21 = 0i64;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v26 = 0x141E19140i64;
		v23[0] = (__int64)TlsValue;
		v23[1] = v21;
		v23[2] = (__int64)lpTlsValue;
		v7 = sub_1401971E0(&dword_140C8AF28, 24, &v26, a2, v25, v23);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		if (v7)
			DebugBreak();
		return 0i64;
	}
}
// 14055DF92: conditional instruction was optimized away because rsi.8!=0
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C8AF28: using guessed type _DWORD dword_140C8AF28;

