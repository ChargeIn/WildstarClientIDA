//----- (00000001402730D0) ----------------------------------------------------
void __fastcall sub_1402730D0(_QWORD* a1)
{
	__int64 v2; // rcx
	int v3; // ebx
	_QWORD* v4; // rbx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-59h] BYREF
	__int128 v6; // [rsp+38h] [rbp-51h]
	__int64 v7; // [rsp+48h] [rbp-41h] BYREF
	__int64(__fastcall * *v8)(); // [rsp+50h] [rbp-39h] BYREF
	__int128 v9; // [rsp+58h] [rbp-31h]
	int v10; // [rsp+70h] [rbp-19h] BYREF
	__int64 v11; // [rsp+78h] [rbp-11h]
	int v12; // [rsp+80h] [rbp-9h]
	int v13; // [rsp+84h] [rbp-5h]
	int v14; // [rsp+88h] [rbp-1h] BYREF
	__int64 v15; // [rsp+90h] [rbp+7h]
	int v16; // [rsp+98h] [rbp+Fh]
	int v17; // [rsp+9Ch] [rbp+13h]
	int v18; // [rsp+A0h] [rbp+17h] BYREF
	__int64 v19; // [rsp+A8h] [rbp+1Fh]
	int v20; // [rsp+B0h] [rbp+27h]
	int v21; // [rsp+B4h] [rbp+2Bh]
	int v22; // [rsp+B8h] [rbp+2Fh] BYREF
	__int64 v23; // [rsp+C0h] [rbp+37h]
	int v24; // [rsp+C8h] [rbp+3Fh]
	int v25; // [rsp+CCh] [rbp+43h]

	v2 = a1[959];
	if (v2)
	{
		v10 = 0;
		v11 = 0i64;
		v14 = 0;
		v15 = 0i64;
		v18 = 0;
		v19 = 0i64;
		v22 = 0;
		v23 = 0i64;
		v10 = *(_DWORD*)v2;
		v11 = *(_QWORD*)(v2 + 8);
		v12 = *(_DWORD*)(v2 + 16);
		v13 = *(_DWORD*)(v2 + 20);
		v14 = *(_DWORD*)(v2 + 24);
		v15 = *(_QWORD*)(v2 + 32);
		v16 = *(_DWORD*)(v2 + 40);
		v17 = *(_DWORD*)(v2 + 44);
		v18 = *(_DWORD*)(v2 + 48);
		v19 = *(_QWORD*)(v2 + 56);
		v20 = *(_DWORD*)(v2 + 64);
		v21 = *(_DWORD*)(v2 + 68);
		v22 = *(_DWORD*)(v2 + 72);
		v23 = *(_QWORD*)(v2 + 80);
		v24 = *(_DWORD*)(v2 + 88);
		v25 = *(_DWORD*)(v2 + 92);
		(*(void(__fastcall**)(_QWORD*, int*, int*, int*, int*))(*a1 + 520i64))(a1, &v10, &v14, &v18, &v22);
		(*(void(__fastcall**)(_QWORD*, __int64))(*a1 + 592i64))(a1, a1[959] + 96i64);
		v4 = (_QWORD*)a1[959];
		if (v4)
		{
			sub_1402985A0(v4);
			sub_14018B900((__int64)v4, 0);
		}
	}
	else
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v6 = 0i64;
		*((_QWORD*)&v6 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v8 = TlsValue;
		v7 = 0x141DE18F8i64;
		v9 = v6;
		v3 = sub_1401971E0(&dword_140C8A2DC, 14, &v7, &v8);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v6 + 1));
		if (v3)
			DebugBreak();
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A2DC: using guessed type _DWORD dword_140C8A2DC;

