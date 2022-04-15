//----- (000000014018BD90) ----------------------------------------------------
_QWORD* __fastcall sub_14018BD90(_QWORD* a1, char a2, unsigned __int64 a3, unsigned __int8 a4)
{
	unsigned __int64 v5; // r15
	_QWORD* result; // rax
	unsigned __int64 v9; // r14
	unsigned __int64 v10; // r13
	unsigned __int64 v11; // rdi
	unsigned __int64 v12; // rbx

	v5 = a1[1] & 0xFFFFFFFFFFFi64;
	if (((a3 ^ v5) & 0xFFFFFFFF00000000ui64) != 0)
		return 0i64;
	v9 = v5 + 16;
	v10 = a3 + 16;
	v11 = ~qword_140C7F968 & (qword_140C7F968 + v5 + 16);
	v12 = ~qword_140C7F968 & (qword_140C7F968 + a3 + 16);
	if (v5 >= a3)
	{
		if (v5 > a3)
		{
			if (v11 > v12)
			{
				VirtualFree((char*)a1 + v12, v11 - v12, 0x4000u);
				qword_140C87978 += v12 - v11;
			}
			if (((a4 | (unsigned __int8)dword_140C7F934) & 4) != 0)
			{
				if (v12 < v9)
					v9 = v12;
				sub_1407E4830((int*)((char*)a1 + v10), 0i64, v9 - v10);
			}
		}
	}
	else if (v11 < v12)
	{
		result = VirtualAlloc((char*)a1 + v11, v12 - v11, 0x1000u, 4u);
		if (!result)
			return result;
		qword_140C87978 += v12 - v11;
	}
	*((_DWORD*)a1 + 2) = a3;
	qword_140C87980 += a3 - v5;
	*a1 &= 0x80FFFFFFFFFFFFFFui64;
	*a1 |= (unsigned __int64)(a2 & 0x7F) << 56;
	_InterlockedCompareExchange64(
		&qword_140C63698,
		(unsigned int)(*((_DWORD*)NtCurrentTeb()->NtTib.StackBase - 1) - 1) >= 0xFFFF,
		0i64);
	return a1;
}
// 140C63698: using guessed type __int64 qword_140C63698;
// 140C7F934: using guessed type int dword_140C7F934;
// 140C7F968: using guessed type __int64 qword_140C7F968;
// 140C87978: using guessed type __int64 qword_140C87978;
// 140C87980: using guessed type __int64 qword_140C87980;

