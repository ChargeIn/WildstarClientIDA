//----- (00000001403374E0) ----------------------------------------------------
__int64 __fastcall sub_1403374E0(_QWORD* a1, __int64 a2)
{
	__int64 v2; // r9
	__int64 v3; // r10
	__int64 v5; // rax
	_DWORD* v6; // rcx
	int v7; // ebx
	__int64 v9; // rcx
	__int64 v10; // rdx
	unsigned __int64 v11; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-40h] BYREF
	__int64 v13; // [rsp+28h] [rbp-38h]
	LPVOID lpTlsValue; // [rsp+30h] [rbp-30h]
	__int64 v15[4]; // [rsp+40h] [rbp-20h] BYREF
	__int64 v16; // [rsp+70h] [rbp+10h] BYREF

	v2 = a1[4];
	v3 = a1[2];
	if (((v2 - v3 + 3) & 0xFFFFFFFFFFFFFFFCui64) != v2 - v3)
	{
		if (((v2 - v3 + 3) & 0xFFFFFFFFFFFFFFFCui64) + v3 > a1[3])
		{
			v13 = 0i64;
			TlsValue = &off_140B5E648;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v5 = 0x141DECA48i64;
			v6 = &unk_140C8A630;
			goto LABEL_4;
		}
		a1[4] = ((v2 - v3 + 3) & 0xFFFFFFFFFFFFFFFCui64) + v3;
	}
	v9 = a2 + 3;
	v10 = a1[4];
	v11 = v9 & 0xFFFFFFFFFFFFFFFCui64;
	if (v11 <= a1[3] - v10)
	{
		if (v11 + v10 - v3 <= *a1)
		{
			a1[4] = v10 + v11;
			return v10;
		}
		v13 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v5 = 0x141DECA78i64;
		v6 = &unk_140C8A634;
	}
	else
	{
		v13 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v5 = 0x141DECB30i64;
		v6 = &unk_140C8A62C;
	}
LABEL_4:
	v16 = v5;
	v15[0] = (__int64)TlsValue;
	v15[1] = v13;
	v15[2] = (__int64)lpTlsValue;
	v7 = sub_1401971E0(v6, 11, &v16, v15, TlsValue);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	if (v7)
		DebugBreak();
	return 0i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();

