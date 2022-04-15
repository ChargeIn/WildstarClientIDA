#include "../winhttp.h"

//----- (0000000140885F10) ----------------------------------------------------
void __fastcall sub_140885F10(__int64 a1)
{
	unsigned __int64 v2; // rbx
	char v3; // al
	char v4; // al
	char v5; // cl
	char v6; // al
	char v7; // al
	__int64 v8; // rcx
	char v9; // al
	__int64 v10; // rcx

	if (*(_DWORD*)(a1 + 148)
		|| (v2 = **(_QWORD**)(a1 + 40), (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 56i64))(a1) < v2)
		|| (v3 = *(_BYTE*)(a1 + 117), (v3 & 0x10) == 0))
	{
		*(_BYTE*)(a1 + 117) &= ~4u;
		v5 = *(_BYTE*)(a1 + 117);
		v6 = (*(_BYTE*)(a1 + 194) & 1) != 0 && (v5 & 8) == 0;
		v4 = v5 ^ (v5 ^ (v6 << 6)) & 0x40;
	}
	else
	{
		v4 = v3 & 0xBB | 4;
	}
	*(_BYTE*)(a1 + 117) = v4;
	if ((v4 & 0x40) != 0
		&& (float)*(int*)(a1 + 156) < (float)(*(float*)(*(_QWORD*)(a1 + 96) + 268i64) * *(float*)(a1 + 140))
		|| (v4 & 8) != 0 && (*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1))
	{
		v7 = *(_BYTE*)(a1 + 117);
		if ((v7 & 0x20) == 0)
		{
			v8 = *(_QWORD*)(a1 + 96);
			*(_BYTE*)(a1 + 117) = v7 | 0x20;
			sub_140889090(v8);
		}
	}
	else
	{
		v9 = *(_BYTE*)(a1 + 117);
		if ((v9 & 0x20) != 0)
		{
			v10 = *(_QWORD*)(a1 + 96);
			*(_BYTE*)(a1 + 117) = v9 & 0xDF;
			sub_140889050(v10);
		}
	}
}

