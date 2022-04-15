#include "../winhttp.h"

//----- (000000014086D3F0) ----------------------------------------------------
__int64 __fastcall sub_14086D3F0(__int64 a1)
{
	unsigned int v2; // eax
	int v3; // ecx
	bool v4; // al
	__int64 v5; // rbx
	_QWORD* v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rax

	v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 112i64))(a1);
	v4 = 0;
	if (v2 <= 0xC)
	{
		v3 = 5121;
		if (_bittest(&v3, v2))
			v4 = 1;
	}
	*(_BYTE*)(a1 + 91) &= ~2u;
	*(_BYTE*)(a1 + 91) |= 2 * v4;
	sub_140851A00(a1);
	v5 = 0i64;
	v6 = (_QWORD*)(a1 + 200);
	v7 = 3i64;
	*(_DWORD*)(a1 + 448) = 0;
	do
	{
		*v6 = 0i64;
		v6[1] = 0i64;
		v6[2] = 0i64;
		v6 += 8;
		*(v6 - 5) = 0i64;
		*(v6 - 4) = 0i64;
		*(v6 - 3) = 0i64;
		*(v6 - 2) = 0i64;
		*(v6 - 1) = 0i64;
		--v7;
	} while (v7);
	*v6 = 0i64;
	v6[1] = 0i64;
	v6[2] = 0i64;
	v6[3] = 0i64;
	v6[4] = 0i64;
	v6[5] = 0i64;
	v6[6] = 0i64;
	if ((*(_BYTE*)(a1 + 479) & 7) == 1)
	{
		v8 = sub_1408819F0(dword_140C10F20, 32i64);
		if (!v8)
			goto LABEL_13;
		v9 = sub_14087C3C0(v8);
	}
	else
	{
		v10 = sub_1408819F0(dword_140C10F20, 32i64);
		if (!v10)
			goto LABEL_13;
		v9 = sub_14087C3A0(v10);
	}
	v5 = v9;
LABEL_13:
	*(_QWORD*)(a1 + 192) = v5;
	if (v5)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	else
		return 2i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

