//----- (00000001408265C0) ----------------------------------------------------
__int64 __fastcall sub_1408265C0(__int64 a1, HLOCAL* a2)
{
	unsigned int uBytes; // [rsp+48h] [rbp-30h] BYREF
	unsigned int uBytes_4; // [rsp+4Ch] [rbp-2Ch]
	unsigned int v5; // [rsp+50h] [rbp-28h]
	int v6; // [rsp+54h] [rbp-24h]
	DWORD LastError; // [rsp+58h] [rbp-20h]
	DWORD v8; // [rsp+5Ch] [rbp-1Ch]
	DWORD v9; // [rsp+60h] [rbp-18h]

	v5 = 0;
	*a2 = 0i64;
	for (uBytes_4 = 0; uBytes_4 < *(_DWORD*)(a1 + 120) && !v5; ++uBytes_4)
	{
		if (!lstrcmpA(*(LPCSTR*)(*(_QWORD*)(a1 + 128) + 24i64 * uBytes_4), a12840113549196))
		{
			v6 = qword_140C61990(
				65537i64,
				500i64,
				*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 128) + 24i64 * uBytes_4 + 16) + 8i64),
				**(unsigned int**)(*(_QWORD*)(a1 + 128) + 24i64 * uBytes_4 + 16),
				0,
				0i64,
				&uBytes);
			if (!v6)
			{
				LastError = GetLastError();
				return v5;
			}
			*a2 = LocalAlloc(0x40u, uBytes);
			if (!*a2)
			{
				v8 = GetLastError();
				return v5;
			}
			v6 = qword_140C61990(
				65537i64,
				500i64,
				*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 128) + 24i64 * uBytes_4 + 16) + 8i64),
				**(unsigned int**)(*(_QWORD*)(a1 + 128) + 24i64 * uBytes_4 + 16),
				0,
				*a2,
				&uBytes);
			if (!v6)
			{
				v9 = GetLastError();
				return v5;
			}
			v5 = 1;
		}
	}
	return v5;
}
// 140C61990: invalid function type has been ignored
// 140C61968: invalid function type has been ignored
// 1408267AA: conditional instruction was optimized away because %var_38.8==0
// 140C61968: using guessed type __int64 (__fastcall *qword_140C61968)(_QWORD);
// 140C61990: using guessed type __int64 (__fastcall *qword_140C61990)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD);

