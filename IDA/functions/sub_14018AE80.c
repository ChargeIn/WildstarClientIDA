//----- (000000014018AE80) ----------------------------------------------------
unsigned __int64* __fastcall sub_14018AE80(unsigned __int64 a1, __int64 a2, unsigned __int8 a3)
{
	SIZE_T v5; // rsi
	unsigned __int64 v6; // rax
	unsigned __int64* v7; // rbx
	__int64 v8; // rcx
	SIZE_T v9; // rdi
	unsigned __int64 v10; // rbp
	__int64 v11; // rsi
	unsigned __int64* v12; // rax
	unsigned __int64* v14; // rax
	unsigned __int64 v15; // rax

	v5 = a2 + 16;
	if (a1 > 0x20)
	{
		if (a1 <= 0x2B)
		{
			v10 = (a2 + 0x10000000Fi64) & 0xFFFFFFFF00000000ui64;
			v11 = ~qword_140C7F968 & (qword_140C7F968 + v5);
			if (((a3 | (unsigned __int8)dword_140C7F934) & 8) != 0)
			{
				v12 = (unsigned __int64*)VirtualAlloc(0i64, v10, 0x2000u, 4u);
				v7 = v12;
				if (!v12 || !VirtualAlloc(v12, v11, 0x1000u, 4u))
					return 0i64;
			}
			else
			{
				v14 = (unsigned __int64*)VirtualAlloc(0i64, v10, 0x102000u, 4u);
				v7 = v14;
				if (!v14 || !VirtualAlloc(v14, v11, 0x1000u, 4u))
					return 0i64;
			}
			v15 = *v7;
			qword_140C87970 += v10;
			qword_140C87978 += v11;
			*v7 = (a1 << 56) | v15 & 0xFFFFFFFFFFFFFFi64 | 0x8000000000000000ui64;
			v7[1] &= 0xFFFF100000000000ui64;
			v7[1] |= a2 & 0xFFFFFFFFFFFi64 | 0x100000000000i64;
			goto LABEL_15;
		}
		return 0i64;
	}
	v6 = (unsigned __int64)sub_14018AC90(a1);
	v7 = (unsigned __int64*)v6;
	if (!v6)
		return 0i64;
	*(_DWORD*)(v6 + 8) = a2;
	v8 = qword_140C7F968;
	*(_QWORD*)v6 = (a1 << 56) | *(_QWORD*)v6 & 0xFFFFFFFFFFFFFFi64 | 0x8000000000000000ui64;
	*(_QWORD*)(v6 + 8) &= 0xFFFF0FFFFFFFFFFFui64;
	if ((v8 & v6) != 0 || v5 <= dwSize)
		goto LABEL_15;
	v9 = ~v8 & (v8 + v5);
	if (!VirtualAlloc((LPVOID)(dwSize + v6), v9 - dwSize, 0x1000u, 4u))
		return 0i64;
	qword_140C87978 += v9 - dwSize;
LABEL_15:
	qword_140C87980 += a2;
	_InterlockedCompareExchange64(
		&qword_140C63698,
		(unsigned int)(*((_DWORD*)NtCurrentTeb()->NtTib.StackBase - 1) - 1) >= 0xFFFF,
		0i64);
	return v7 + 2;
}
// 140C63698: using guessed type __int64 qword_140C63698;
// 140C7F934: using guessed type int dword_140C7F934;
// 140C7F968: using guessed type __int64 qword_140C7F968;
// 140C87970: using guessed type __int64 qword_140C87970;
// 140C87978: using guessed type __int64 qword_140C87978;
// 140C87980: using guessed type __int64 qword_140C87980;

