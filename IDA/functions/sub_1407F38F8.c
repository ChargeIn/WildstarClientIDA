//----- (00000001407F38F8) ----------------------------------------------------
__int64 __fastcall sub_1407F38F8(WCHAR a1, __int64 a2)
{
	int v4; // esi
	_BYTE* v5; // r14
	__int64 v6; // rbx
	char* v7; // rax
	__int64 v8; // rbx
	unsigned __int64 v9; // rdx
	__int64 v10; // rdx
	char v11; // al
	unsigned __int64 v13; // rcx
	WCHAR* v14; // rax
	int v15; // [rsp+20h] [rbp-48h] BYREF
	WCHAR v16; // [rsp+24h] [rbp-44h]
	int v17[2]; // [rsp+28h] [rbp-40h] BYREF

	v16 = a1;
	if (a1 == 0xFFFF)
		return 0xFFFFi64;
	v4 = 2;
	if ((*(_BYTE*)(a2 + 24) & 1) == 0 && (*(char*)(a2 + 24) >= 0 || (*(_BYTE*)(a2 + 24) & 2) != 0))
		return 0xFFFFi64;
	if (!*(_QWORD*)(a2 + 16))
		sub_1407F1128(a2);
	if ((*(_BYTE*)(a2 + 24) & 0x40) != 0
		|| ((v5 = &unk_140C0FFB0, (unsigned int)sub_1407EA35C(a2) == -1) || (unsigned int)sub_1407EA35C(a2) == -2
			? (v7 = (char*)&unk_140C0FFB0)
			: (v6 = (__int64)(int)sub_1407EA35C(a2) >> 5, v7 = (char*)(qword_140C60410[v6] + 88 * (sub_1407EA35C(a2) & 0x1F))),
			v7[8] >= 0))
	{
		v13 = *(_QWORD*)(a2 + 16) + 2i64;
		if (*(_QWORD*)a2 < v13)
		{
			if (*(_DWORD*)(a2 + 8) || (unsigned __int64)*(int*)(a2 + 36) < 2)
				return 0xFFFFi64;
			*(_QWORD*)a2 = v13;
		}
		*(_QWORD*)a2 -= 2i64;
		v14 = *(WCHAR**)a2;
		if ((*(_BYTE*)(a2 + 24) & 0x40) != 0)
		{
			if (*v14 != a1)
			{
				*(_QWORD*)a2 = v14 + 1;
				return 0xFFFFi64;
			}
		}
		else
		{
			*v14 = a1;
		}
	LABEL_27:
		*(_DWORD*)(a2 + 8) += v4;
		*(_DWORD*)(a2 + 24) &= ~0x10u;
		*(_DWORD*)(a2 + 24) |= 1u;
		return a1;
	}
	if ((unsigned int)sub_1407EA35C(a2) != -1 && (unsigned int)sub_1407EA35C(a2) != -2)
	{
		v8 = (__int64)(int)sub_1407EA35C(a2) >> 5;
		v5 = (_BYTE*)(qword_140C60410[v8] + 88 * (sub_1407EA35C(a2) & 0x1F));
	}
	if ((v5[56] & 0x7F) != 0)
	{
		LOBYTE(v17[0]) = a1;
		v15 = 2;
		BYTE1(v17[0]) = HIBYTE(v16);
	}
	else
	{
		if ((unsigned int)sub_1407F2338(&v15, v17, 5ui64, a1))
			return 0xFFFFi64;
		v4 = v15;
	}
	v9 = *(_QWORD*)(a2 + 16) + v4;
	if (*(_QWORD*)a2 >= v9)
		goto LABEL_24;
	if (!*(_DWORD*)(a2 + 8) && v4 <= *(_DWORD*)(a2 + 36))
	{
		*(_QWORD*)a2 = v9;
	LABEL_24:
		v10 = v4 - 1;
		if (v4 - 1 >= 0)
		{
			do
			{
				--* (_QWORD*)a2;
				v11 = *((_BYTE*)v17 + v10--);
				**(_BYTE**)a2 = v11;
			} while (v10 >= 0);
			v4 = v15;
		}
		goto LABEL_27;
	}
	return 0xFFFFi64;
}
// 140C60410: using guessed type __int64 qword_140C60410[64];

