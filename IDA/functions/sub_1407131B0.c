//----- (00000001407131B0) ----------------------------------------------------
void __fastcall sub_1407131B0(__int64* a1, int* a2, unsigned __int64 a3)
{
	_DWORD* v6; // rax
	unsigned int v7; // r10d
	__int64 v8; // rax
	__int64 v9; // rax
	_DWORD* v10; // rax
	__int64 v11; // r9
	int v12; // eax
	int v13; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-48h] BYREF
	__int64 v15; // [rsp+38h] [rbp-40h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-38h]
	__int64 v17[4]; // [rsp+50h] [rbp-28h] BYREF
	__int64 v18; // [rsp+80h] [rbp+8h] BYREF

	v6 = (_DWORD*)(*(__int64(__fastcall**)(__int64*))(*a1 + 88))(a1);
	v7 = (v6[2] - *v6) * (v6[3] - v6[1]);
	v8 = v7 >> 3;
	if ((v7 & 7) != 0)
		v8 = (unsigned int)(v8 + 1);
	if (a3 == v8)
	{
		sub_1407DB590((int*)a1[9], a2, a3);
		++* ((_DWORD*)a1 + 14);
		sub_140713400(a1);
	}
	else
	{
		v15 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v9 = *a1;
		v17[0] = (__int64)TlsValue;
		v17[1] = v15;
		v17[2] = (__int64)lpTlsValue;
		v10 = (_DWORD*)(*(__int64(__fastcall**)(__int64*))(v9 + 88))(a1);
		v11 = (unsigned int)((v10[2] - *v10) * (v10[3] - v10[1])) >> 3;
		if ((((*((_BYTE*)v10 + 8) - *(_BYTE*)v10) * (*((_BYTE*)v10 + 12) - *((_BYTE*)v10 + 4))) & 7) != 0)
			v11 = (unsigned int)(v11 + 1);
		v18 = 0x141E40210i64;
		v12 = sub_1401971E0(&dword_140C8B0F8, 22, &v18, v11, a3, v17);
		TlsValue = &off_140B5E648;
		v13 = v12;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		if (v13)
			DebugBreak();
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8B0F8: using guessed type _DWORD dword_140C8B0F8;

