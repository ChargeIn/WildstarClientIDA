#include "../winhttp.h"

//----- (0000000140900A64) ----------------------------------------------------
__int64 __fastcall sub_140900A64(int* a1, unsigned __int64 a2)
{
	int v5; // eax
	_BYTE* v6; // rdx
	char* v7; // rcx
	__int64 v8; // r14
	int v9; // ebx
	unsigned __int64 v10; // rsi

	if (!a1 || !a2)
		goto LABEL_2;
	if ((*(_BYTE*)(a2 + 24) & 0x40) != 0)
		goto LABEL_12;
	v5 = sub_1407EA35C(a2);
	if ((unsigned int)(v5 + 2) <= 1)
	{
		v7 = (char*)&unk_140C0FFB0;
		v6 = &unk_140C0FFB0;
	}
	else
	{
		v6 = (_BYTE*)(qword_140C60410[(__int64)v5 >> 5] + 88i64 * (v5 & 0x1F));
		v7 = (char*)&unk_140C0FFB0;
	}
	if ((v6[56] & 0x7F) != 0)
		goto LABEL_2;
	if ((unsigned int)(v5 + 2) > 1)
		v7 = (char*)(qword_140C60410[(__int64)v5 >> 5] + 88i64 * (v5 & 0x1F));
	if (v7[56] >= 0)
	{
	LABEL_12:
		v8 = sub_1407E1990((__int64)a1);
		sub_1407DDFA8(a2);
		v9 = sub_1407E3974(a2);
		v10 = sub_1407E0EF8(a1, 1ui64, v8, a2);
		sub_1407E393C(v9, a2);
		sub_1407DE044(a2);
		return (unsigned int)-(v8 != v10);
	}
	else
	{
	LABEL_2:
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0xFFFFFFFFi64;
	}
}
// 140C60410: using guessed type __int64 qword_140C60410[64];

