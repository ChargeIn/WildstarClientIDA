#include "../winhttp.h"

//----- (0000000140899730) ----------------------------------------------------
void __fastcall sub_140899730(__int64 a1)
{
	__int64 v1; // rbx
	_QWORD* v3; // rbx
	_QWORD* v4; // rax
	_QWORD* v5; // rsi
	__int64 v6; // rcx
	int v7; // ebp
	__int64 v8; // rcx
	__int64 v9; // rax
	char v10; // al
	_QWORD* v11; // [rsp+20h] [rbp-28h]
	_QWORD* v12; // [rsp+28h] [rbp-20h]

	++* (_DWORD*)(a1 + 80);
	v1 = a1 + 136;
	if (*(_QWORD*)(a1 + 136))
	{
		sub_140899E50(a1 + 136);
		sub_140881720(dword_140C10F20, *(_QWORD*)v1);
		*(_QWORD*)v1 = 0i64;
		*(_QWORD*)(v1 + 8) = 0i64;
		*(_DWORD*)(v1 + 16) = 0;
	}
	v3 = *(_QWORD**)(a1 + 160);
	v4 = 0i64;
	if (v3)
	{
		while (1)
		{
			v5 = (_QWORD*)*v3;
			v12 = v4;
			v11 = (_QWORD*)*v3;
			if (v3 == *(_QWORD**)(a1 + 160))
				*(_QWORD*)(a1 + 160) = v5;
			else
				*v4 = v5;
			if (v3 == *(_QWORD**)(a1 + 168))
				*(_QWORD*)(a1 + 168) = v4;
			v6 = v3[1];
			v7 = dword_140C10F20;
			v3[1] = 0i64;
			if (v6)
				sub_14088B630(v6);
			v8 = v3[1];
			if (v8)
			{
				sub_14088B630(v8);
				v3[1] = 0i64;
			}
			sub_140881720(v7, (__int64)v3);
			if (!v5)
				break;
			v4 = v12;
			v3 = v11;
		}
	}
	v9 = *(_QWORD*)(a1 + 160);
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_QWORD*)(a1 + 176) = v9;
	*(_QWORD*)(a1 + 168) = 0i64;
	v10 = *(_BYTE*)(a1 + 192);
	if ((v10 & 2) != 0)
	{
		*(_BYTE*)(a1 + 192) = v10 & 0xFD;
		sub_14088B630(a1);
	}
	sub_14088C450(a1);
	sub_14088B630(a1);
}
// 140C10F20: using guessed type int dword_140C10F20;

