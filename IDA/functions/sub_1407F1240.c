#include "../winhttp.h"

//----- (00000001407F1240) ----------------------------------------------------
__int64 __fastcall sub_1407F1240(unsigned __int16 a1, __int64 a2)
{
	char* v4; // rbp
	__int64 v5; // rbx
	_BYTE* v6; // rax
	__int64 v7; // rbx
	_BYTE* v8; // rax
	__int64 v9; // rbx
	int v10; // ebx
	int* i; // r14
	int v14; // ecx
	int v15; // eax
	int v16; // [rsp+20h] [rbp-38h] BYREF
	int v17[3]; // [rsp+24h] [rbp-34h] BYREF

	if ((*(_BYTE*)(a2 + 24) & 0x40) != 0)
		goto LABEL_26;
	v4 = (char*)&unk_140C0FFB0;
	if ((unsigned int)sub_1407EA35C(a2) == -1 || (unsigned int)sub_1407EA35C(a2) == -2)
	{
		v6 = &unk_140C0FFB0;
	}
	else
	{
		v5 = (__int64)(int)sub_1407EA35C(a2) >> 5;
		v6 = (_BYTE*)(qword_140C60410[v5] + 88 * (sub_1407EA35C(a2) & 0x1F));
	}
	if ((v6[56] & 0x7F) == 2)
		goto LABEL_26;
	if ((unsigned int)sub_1407EA35C(a2) == -1 || (unsigned int)sub_1407EA35C(a2) == -2)
	{
		v8 = &unk_140C0FFB0;
	}
	else
	{
		v7 = (__int64)(int)sub_1407EA35C(a2) >> 5;
		v8 = (_BYTE*)(qword_140C60410[v7] + 88 * (sub_1407EA35C(a2) & 0x1F));
	}
	if ((v8[56] & 0x7F) == 1)
		goto LABEL_26;
	if ((unsigned int)sub_1407EA35C(a2) != -1 && (unsigned int)sub_1407EA35C(a2) != -2)
	{
		v9 = (__int64)(int)sub_1407EA35C(a2) >> 5;
		v4 = (char*)(qword_140C60410[v9] + 88 * (sub_1407EA35C(a2) & 0x1F));
	}
	if (v4[8] >= 0)
	{
	LABEL_26:
		v15 = *(_DWORD*)(a2 + 8) - 2;
		*(_DWORD*)(a2 + 8) = v15;
		if (v15 < 0)
		{
			return sub_1407F66C8(a1, a2);
		}
		else
		{
			**(_WORD**)a2 = a1;
			*(_QWORD*)a2 += 2i64;
			return a1;
		}
	}
	else
	{
		v10 = 0;
		if ((unsigned int)sub_1407F2338(&v16, v17, 5ui64, a1))
			return 0xFFFFi64;
		if (v16 > 0)
		{
			for (i = v17; ; i = (int*)((char*)i + 1))
			{
				if (-- * (_DWORD*)(a2 + 8) < 0)
				{
					v14 = sub_1407E88EC(*(char*)i, a2);
				}
				else
				{
					**(_BYTE**)a2 = *(_BYTE*)i;
					v14 = *(unsigned __int8*)(*(_QWORD*)a2)++;
				}
				if (v14 == -1)
					break;
				if (++v10 >= v16)
					return a1;
			}
			return 0xFFFFi64;
		}
		return a1;
	}
}
// 140C60410: using guessed type __int64 qword_140C60410[64];
// 1407F1240: using guessed type int var_34[3];

