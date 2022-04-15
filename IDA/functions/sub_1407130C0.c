//----- (00000001407130C0) ----------------------------------------------------
__int64 __fastcall sub_1407130C0(_QWORD* a1, _DWORD* a2)
{
	_DWORD* v5; // rax
	int v6; // ecx
	unsigned __int64 v7; // rsi

	if ((*(unsigned int(__fastcall**)(_QWORD*))(*a1 + 32i64))(a1))
		return 1i64;
	v5 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD*))(*a1 + 88i64))(a1);
	if (*a2 < *v5)
		return 0i64;
	if (*a2 >= v5[2])
		return 0i64;
	v6 = a2[1];
	if (v6 < v5[1] || v6 >= v5[3])
		return 0i64;
	v7 = (*(__int64(__fastcall**)(_QWORD*, _DWORD*))(*a1 + 96i64))(a1, a2);
	if (v7 == -1i64)
		return 0i64;
	if (((*(__int64(__fastcall**)(_QWORD*, _DWORD*))(*a1 + 104i64))(a1, a2) & 2) != 0)
		return 1i64;
	return (1 << (v7 & 7)) & (unsigned int)*(unsigned __int8*)((v7 >> 3) + a1[9]);
}

