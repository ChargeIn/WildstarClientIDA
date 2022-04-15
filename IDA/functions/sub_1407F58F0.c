//----- (00000001407F58F0) ----------------------------------------------------
__int64 __fastcall sub_1407F58F0(unsigned __int8* a1, _BYTE* a2, unsigned __int64 a3, _OWORD* a4)
{
	unsigned __int64 v4; // rbx
	__int64 result; // rax
	__int64 v8; // rcx
	__int64 v9; // rdx
	char v10[8]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]
	__int64 v12; // [rsp+30h] [rbp-18h]
	char v13; // [rsp+38h] [rbp-10h]

	v4 = a3;
	if (!a3)
		return 0i64;
	sub_1407DE348((__int64)v10, a4);
	if (!*(_DWORD*)(v11 + 8))
	{
		result = sub_1407F8070(a1, (__int64)a2, v4);
		goto LABEL_26;
	}
	if (a1 && a2)
	{
		while (1)
		{
			v8 = *a1;
			--v4;
			++a1;
			if ((*(_BYTE*)(v8 + v11 + 25) & 4) == 0)
				goto LABEL_15;
			if (v4)
				break;
			LOWORD(v8) = 0;
			if ((*(_BYTE*)((unsigned __int8)*a2 + v11 + 25) & 4) != 0)
				goto LABEL_24;
			LOWORD(v9) = (unsigned __int8)*a2;
		LABEL_21:
			if ((_WORD)v9 != (_WORD)v8)
			{
				result = (unsigned __int16)v9 < (unsigned __int16)v8 ? 1 : -1;
				goto LABEL_26;
			}
			if (!(_WORD)v8 || !v4)
			{
			LABEL_24:
				result = 0i64;
				goto LABEL_26;
			}
		}
		if (*a1)
			LOWORD(v8) = *a1++ | (unsigned __int16)((_WORD)v8 << 8);
		else
			LOWORD(v8) = 0;
	LABEL_15:
		v9 = (unsigned __int8)*a2++;
		if ((*(_BYTE*)(v9 + v11 + 25) & 4) != 0)
		{
			if (v4)
			{
				--v4;
				if (*a2)
					LOWORD(v9) = (unsigned __int8)*a2++ | (unsigned __int16)((_WORD)v9 << 8);
				else
					LOWORD(v9) = 0;
			}
			else
			{
				LOWORD(v9) = 0;
			}
		}
		goto LABEL_21;
	}
	*(_DWORD*)sub_1407DE1B0() = 22;
	sub_1407DC370();
	result = 0x7FFFFFFFi64;
LABEL_26:
	if (v13)
		*(_DWORD*)(v12 + 200) &= ~2u;
	return result;
}
// 1407F58F0: using guessed type char var_28[8];

