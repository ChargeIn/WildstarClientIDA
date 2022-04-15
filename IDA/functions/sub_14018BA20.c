//----- (000000014018BA20) ----------------------------------------------------
__int64 __fastcall sub_14018BA20(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int8 a4)
{
	__int64 v4; // r15
	__int64 v5; // r9
	unsigned __int64 v6; // rbp
	unsigned __int64 v7; // rdi
	unsigned __int64 v8; // rbx
	unsigned __int64 v9; // r14
	unsigned __int64 v10; // r13
	__int64 v13; // rcx
	__int64 v14; // r9
	__int64 v15; // r8
	unsigned __int64 v16; // rax
	__int64 v17; // rdi
	__int64* v18; // rbp
	unsigned __int64 v19; // r15
	__int64 v20; // rax
	__int64 v21; // rbx
	unsigned __int64 v23; // rbp
	__int64* v24; // r14
	__int64 v25; // rdx
	unsigned __int64 v26; // rbx
	__int64 v27; // [rsp+20h] [rbp-48h]
	unsigned __int64 v28; // [rsp+80h] [rbp+18h]

	v28 = a3;
	v4 = qword_140C7F968;
	v5 = *(_QWORD*)(a1 + 8);
	v6 = a3 + 16;
	v7 = (unsigned int)v5 + 16i64;
	v8 = *(_BYTE*)(a1 + 7) & 0x7F;
	v9 = ~qword_140C7F968 & (qword_140C7F968 + a3 + 16);
	v10 = ~qword_140C7F968 & (qword_140C7F968 + v7);
	v27 = (unsigned int)v5;
	if ((unsigned int)v5 >= a3)
	{
		if ((unsigned int)v5 <= a3)
			goto LABEL_17;
		if (v10 > v9)
		{
			VirtualFree((LPVOID)(v9 + a1), v10 - v9, 0x4000u);
			v4 = qword_140C7F968;
			qword_140C87978 += v9 - v10;
		}
		if (((a4 | (unsigned __int8)dword_140C7F934) & 4) != 0)
		{
			if (v9 < v7)
				v7 = v9;
			sub_1407E4830((int*)(a1 + v6), 0i64, v7 - v6);
		}
		if (v8 > a2)
		{
			v23 = v8 - 1;
			v24 = &qword_140C87990[4 * v8 - 4];
			while (1)
			{
				v25 = qword_140C7F970[HIDWORD(*(_QWORD*)(a1 + 8)) & 0xFFF];
				v26 = v25 + ((1i64 << v23) ^ (a1 - v25));
				if ((v4 & v26) == 0)
				{
					if (!VirtualAlloc((LPVOID)v26, dwSize, 0x1000u, 4u))
						return 0i64;
					qword_140C87978 += dwSize;
				}
				*(_QWORD*)v26 &= ~0x8000000000000000ui64;
				*(_QWORD*)(v26 + 8) ^= (*(_QWORD*)(a1 + 8) ^ *(_QWORD*)(v26 + 8)) & 0xFFF00000000i64;
				*(_QWORD*)v26 ^= (*(_QWORD*)v26 ^ (v23 << 56)) & 0x7F00000000000000i64;
				sub_140189620((__int64)v24, v26);
				--v23;
				v24 -= 4;
				if (v23 + 1 <= a2)
					break;
				v4 = qword_140C7F968;
			}
		}
	LABEL_16:
		a3 = v28;
	LABEL_17:
		*(_DWORD*)(a1 + 8) = a3;
		qword_140C87980 += a3 - v27;
		*(_QWORD*)a1 &= 0x80FFFFFFFFFFFFFFui64;
		*(_QWORD*)a1 |= (a2 & 0x7F) << 56;
		_InterlockedCompareExchange64(
			&qword_140C63698,
			(unsigned int)(*((_DWORD*)NtCurrentTeb()->NtTib.StackBase - 1) - 1) >= 0xFFFF,
			0i64);
		return a1;
	}
	v13 = *(_BYTE*)(a1 + 7) & 0x7F;
	if (v8 < a2)
	{
		v14 = qword_140C7F970[WORD2(v5) & 0xFFF];
		v15 = a1 - v14;
		while (v14 + (v15 & ~(1i64 << v13)) == a1)
		{
			v16 = *(_QWORD*)((v15 ^ (1i64 << v13)) + v14);
			if ((v16 & 0x8000000000000000ui64) != 0 || (HIBYTE(v16) & 0x7F) != v13)
				break;
			if (++v13 >= a2)
				goto LABEL_8;
		}
		return 0i64;
	}
LABEL_8:
	v17 = __ROL8__(1i64, v8);
	if (v8 < a2)
	{
		v18 = &qword_140C87990[4 * v8];
		v19 = a2 - v8;
		do
		{
			v20 = HIDWORD(*(_QWORD*)(a1 + 8)) & 0xFFF;
			v21 = qword_140C7F970[v20] + (v17 ^ (a1 - qword_140C7F970[v20]));
			sub_140189970(v18, (unsigned __int64*)v21);
			if ((v21 & qword_140C7F968) == 0)
			{
				VirtualFree((LPVOID)v21, dwSize, 0x4000u);
				qword_140C87978 -= dwSize;
			}
			v17 = __ROL8__(v17, 1);
			v18 += 4;
			--v19;
		} while (v19);
	}
	if (v10 >= v9)
		goto LABEL_16;
	if (VirtualAlloc((LPVOID)(a1 + v10), v9 - v10, 0x1000u, 4u))
	{
		qword_140C87978 += v9 - v10;
		goto LABEL_16;
	}
	return 0i64;
}
// 140C63698: using guessed type __int64 qword_140C63698;
// 140C7F934: using guessed type int dword_140C7F934;
// 140C7F968: using guessed type __int64 qword_140C7F968;
// 140C7F970: using guessed type __int64 qword_140C7F970[4096];
// 140C87978: using guessed type __int64 qword_140C87978;
// 140C87980: using guessed type __int64 qword_140C87980;
// 140C87990: using guessed type __int64 qword_140C87990[38];

