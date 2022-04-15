//----- (00000001401A4A00) ----------------------------------------------------
const void**** __fastcall sub_1401A4A00(const void*** a1)
{
	__int64 v2; // rax
	const void** v3; // r15
	const void* v4; // r14
	__int64 v5; // rbx
	char* v6; // rsi
	int v7; // ebx
	const void**** result; // rax
	const void**** i; // rdx
	unsigned __int64 v10; // [rsp+30h] [rbp-D0h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+38h] [rbp-C8h] BYREF
	__int64 v12; // [rsp+40h] [rbp-C0h]
	LPVOID lpTlsValue; // [rsp+48h] [rbp-B8h]
	__int64 v14[4]; // [rsp+50h] [rbp-B0h] BYREF
	struct _MEMORY_BASIC_INFORMATION Buffer; // [rsp+70h] [rbp-90h] BYREF
	char v16[128]; // [rsp+A0h] [rbp-60h] BYREF

	v2 = sub_14018CAE0((unsigned __int64)a1, 0i64);
	v3 = *a1;
	v4 = **a1;
	v5 = v2;
	v6 = (char*)a1 - v2;
	if (VirtualQuery(v4, &Buffer, 0x30ui64) && Buffer.Type == 0x1000000 && Buffer.Protect == 2 && Buffer.State == 4096)
	{
		if (v5)
			sub_14001B370(v16, 64i64, L" (Offset=0x%Ix, Type=0x%Ix)", v6, v4);
		else
			sub_14001B370(v16, 64i64, L" (Type=0x%Ix)", v4);
	}
	else if (v5)
	{
		sub_14001B370(v16, 64i64, L" (Offset=0x%Ix)", v6);
	}
	else
	{
		sub_14001B370(v16, 64i64, word_1409E23B4);
	}
	if (dword_140C63734)
	{
		v10 = 0x141D3F830i64;
		sub_1401A3130(1, 0, &v10, v16);
	}
	else
	{
		v12 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v14[0] = (__int64)TlsValue;
		v10 = 0x141D3F7A0i64;
		v14[1] = v12;
		v14[2] = (__int64)lpTlsValue;
		v7 = sub_1401971E0(dword_140C8A220, 1, &v10, v16, v14);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		if (v7)
			DebugBreak();
	}
	result = (const void****)sub_14018CAE0((unsigned __int64)v3, &v10);
	if (result)
	{
		for (i = &result[v10 >> 3]; result < i; ++result)
		{
			if (*result == a1)
				*result = (const void***)&unk_140C8E128;
		}
	}
	return result;
}
// 1409E23B4: using guessed type unsigned __int16 word_1409E23B4[36];
// 140A45120: using guessed type wchar_t aOffset0xIxType[28];
// 140A451B0: using guessed type wchar_t aOffset0xIx[16];
// 140A451D0: using guessed type wchar_t aType0xIx[14];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63734: using guessed type int dword_140C63734;
// 140C8A220: using guessed type _DWORD dword_140C8A220[2];

