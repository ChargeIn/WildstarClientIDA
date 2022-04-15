//----- (00000001404485C0) ----------------------------------------------------
__int64 __fastcall sub_1404485C0(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 v3; // rsi
	__int64 v5; // rbp
	__int64 v6; // rax
	unsigned __int64 v7; // rdi
	__int64 v8; // r15
	unsigned __int64 v9; // rbx
	int v10; // ebx
	__int64 v11; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-68h] BYREF
	__int64 v14; // [rsp+38h] [rbp-60h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-58h]
	__int64 v16[4]; // [rsp+50h] [rbp-48h] BYREF
	__int64 v17; // [rsp+A0h] [rbp+8h] BYREF

	v17 = a1;
	v3 = qword_140C658F8;
	v5 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 104) + 32i64))(*(_QWORD*)(qword_140C658F8 + 104))
		+ 12 * a2;
	v6 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 112) + 32i64))(*(_QWORD*)(v3 + 112));
	v7 = *(int*)(v5 + 4);
	v8 = v6;
	if (v7 >= *(int*)(v5 + 8))
		return 0i64;
	while (1)
	{
		v9 = *(unsigned int*)(v8 + 4 * v7);
		if (v9 <= *(unsigned int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 64) + 32i64))(*(_QWORD*)(v3 + 64))
			/ 0x30ui64)
			break;
		TlsValue = &off_140B5E648;
		v14 = 0i64;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v16[0] = (__int64)TlsValue;
		v17 = 0x141DFCFF0i64;
		v16[1] = v14;
		v16[2] = (__int64)lpTlsValue;
		v10 = sub_1401971E0(&dword_140C8AC5C, 22, &v17, (unsigned int)v9, v16);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		if (v10)
			DebugBreak();
	LABEL_7:
		if (++v7 >= *(int*)(v5 + 8))
			return 0i64;
	}
	v11 = *(_QWORD*)(v3 + 8) + 80 * v9;
	if (!v11 || !(*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v11 + 56i64))(v11, a3))
		goto LABEL_7;
	return 1i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C8AC5C: using guessed type _DWORD dword_140C8AC5C;

