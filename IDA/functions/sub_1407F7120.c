#include "../winhttp.h"

//----- (00000001407F7120) ----------------------------------------------------
__int64 __fastcall sub_1407F7120(int a1, __int64 a2)
{
	int v4; // eax
	char* v5; // rdx
	_BYTE* v6; // r8
	_BYTE* v8; // rax

	if ((*(_BYTE*)(a2 + 24) & 0x40) == 0)
	{
		v4 = sub_1407EA35C(a2);
		v5 = (char*)&unk_140C0FFB0;
		v6 = (unsigned int)(v4 + 2) <= 1
			? &unk_140C0FFB0
			: (_BYTE*)(qword_140C60410[(__int64)v4 >> 5] + 88i64 * (v4 & 0x1F));
		if ((v6[56] & 0x7F) != 0)
			goto LABEL_9;
		if ((unsigned int)(v4 + 2) > 1)
			v5 = (char*)(qword_140C60410[(__int64)v4 >> 5] + 88i64 * (v4 & 0x1F));
		if (v5[56] < 0)
		{
		LABEL_9:
			*(_DWORD*)sub_1407DE1B0() = 22;
			sub_1407DC370();
			return 0xFFFFFFFFi64;
		}
	}
	if (a1 == -1 || (*(_BYTE*)(a2 + 24) & 1) == 0 && (*(char*)(a2 + 24) >= 0 || (*(_BYTE*)(a2 + 24) & 2) != 0))
		return 0xFFFFFFFFi64;
	if (!*(_QWORD*)(a2 + 16))
		sub_1407F1128(a2);
	if (*(_QWORD*)a2 == *(_QWORD*)(a2 + 16))
	{
		if (*(_DWORD*)(a2 + 8))
			return 0xFFFFFFFFi64;
		++* (_QWORD*)a2;
	}
	v8 = (_BYTE*)-- * (_QWORD*)a2;
	if ((*(_BYTE*)(a2 + 24) & 0x40) != 0)
	{
		if (*v8 != (_BYTE)a1)
		{
			*(_QWORD*)a2 = v8 + 1;
			return 0xFFFFFFFFi64;
		}
	}
	else
	{
		*v8 = a1;
	}
	++* (_DWORD*)(a2 + 8);
	*(_DWORD*)(a2 + 24) &= ~0x10u;
	*(_DWORD*)(a2 + 24) |= 1u;
	return (unsigned __int8)a1;
}
// 140C60410: using guessed type __int64 qword_140C60410[64];

