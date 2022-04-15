#include "../winhttp.h"

//----- (000000014086D580) ----------------------------------------------------
__int64 __fastcall sub_14086D580(__int64 a1, int a2)
{
	char v3; // cl
	char v4; // al
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	unsigned int v9; // edi

	v3 = *(_BYTE*)(a1 + 479);
	if (a2 == (v3 & 7))
		return 1i64;
	v4 = v3 ^ (a2 ^ v3) & 7;
	v5 = *(_QWORD*)(a1 + 192);
	*(_BYTE*)(a1 + 479) = v4;
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 16i64))(v5);
	if ((*(_BYTE*)(a1 + 479) & 7) != 1)
	{
		v8 = sub_1408819F0(dword_140C10F20, 32i64);
		if (v8)
		{
			v7 = sub_14087C3A0(v8);
			goto LABEL_10;
		}
	LABEL_9:
		v7 = 0i64;
		goto LABEL_10;
	}
	v6 = sub_1408819F0(dword_140C10F20, 32i64);
	if (!v6)
		goto LABEL_9;
	v7 = sub_14087C3C0(v6);
LABEL_10:
	*(_QWORD*)(a1 + 192) = v7;
	if (v7)
	{
		v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		if (v9 != 1)
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 192) + 16i64))(*(_QWORD*)(a1 + 192));
			*(_QWORD*)(a1 + 192) = 0i64;
		}
	}
	else
	{
		v9 = 2;
	}
	sub_14086C9F0(a1);
	if (*(_BYTE*)(a1 + 486))
	{
		if (qword_140C61B68)
		{
			sub_14082E400((__int64)qword_140C61B68, (void**)a1);
			sub_14082E5B0((__int64)qword_140C61B68, a1);
		}
		sub_1408551C0((__int64*)a1, 0i64, 0, 0, 4);
	}
	return v9;
}
// 140C10F20: using guessed type int dword_140C10F20;

