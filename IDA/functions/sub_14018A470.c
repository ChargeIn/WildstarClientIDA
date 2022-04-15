//----- (000000014018A470) ----------------------------------------------------
__int64 __fastcall sub_14018A470(_DWORD* a1, __int64 a2)
{
	__int64* v2; // r8
	unsigned __int64 v4; // rdx
	unsigned __int64 v5; // rax
	int v7; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v9; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v10)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v11; // [rsp+48h] [rbp-20h]
	__int64 v12; // [rsp+70h] [rbp+8h] BYREF

	v2 = (__int64*)(a1 - 4);
	if (((unsigned __int64)(a1 - 4) & qword_140C7F968) == 0 && *v2 < 0 && (HIBYTE(*v2) & 0x7F) == qword_140C7F958)
	{
		v4 = v2[1];
		if (((v4 >> 44) & 0xF) == 2 && (unsigned int)v4 == dwSize - 16)
		{
			v5 = qword_140C7F970[WORD2(v4) & 0xFFF];
			if (v5)
			{
				if ((unsigned __int64)v2 >= v5
					&& (unsigned __int64)v2 <= v5 - dwSize + 0x100000000i64
					&& (((1i64 << *a1) - 1) & a2) == 0)
				{
					return 1i64;
				}
			}
		}
	}
	*(_QWORD*)&v9 = 0i64;
	TlsValue = &off_140B5E648;
	*((_QWORD*)&v9 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v10 = TlsValue;
	v12 = 0x141D3A670i64;
	v11 = v9;
	v7 = sub_140196F30(&dword_140C8A188, 2, &v12, &v10);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v9 + 1));
	if (v7)
		DebugBreak();
	return 0i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C7F958: using guessed type __int64 qword_140C7F958;
// 140C7F968: using guessed type __int64 qword_140C7F968;
// 140C7F970: using guessed type __int64 qword_140C7F970[4096];
// 140C8A188: using guessed type _DWORD dword_140C8A188;

