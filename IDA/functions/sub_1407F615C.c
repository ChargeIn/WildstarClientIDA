#include "../winhttp.h"

//----- (00000001407F615C) ----------------------------------------------------
__int64 __fastcall sub_1407F615C(ULONG_PTR a1, _QWORD* a2, char a3, __int16 a4, _DWORD* a5, _DWORD* a6, DWORD a7)
{
	DWORD v9; // edi
	char v10; // al
	__int64 v11; // rax
	_DWORD* v12; // rsi
	ULONG_PTR v13; // rcx
	__int64 result; // rax
	ULONG_PTR Arguments; // [rsp+30h] [rbp+10h] BYREF

	Arguments = a1;
	*(_DWORD*)(a1 + 4) = 0;
	*(_DWORD*)(Arguments + 8) = 0;
	*(_DWORD*)(Arguments + 12) = 0;
	if ((a3 & 0x10) != 0)
	{
		v9 = -1073741681;
		*(_DWORD*)(Arguments + 4) |= 1u;
	}
	else
	{
		v9 = a7;
	}
	if ((a3 & 2) != 0)
	{
		v9 = -1073741677;
		*(_DWORD*)(Arguments + 4) |= 2u;
	}
	if ((a3 & 1) != 0)
	{
		v9 = -1073741679;
		*(_DWORD*)(Arguments + 4) |= 4u;
	}
	if ((a3 & 4) != 0)
	{
		v9 = -1073741682;
		*(_DWORD*)(Arguments + 4) |= 8u;
	}
	if ((a3 & 8) != 0)
	{
		v9 = -1073741680;
		*(_DWORD*)(Arguments + 4) |= 0x10u;
	}
	*(_DWORD*)(Arguments + 8) ^= (*(_DWORD*)(Arguments + 8) ^ ~(16 * (*a2 >> 7))) & 0x10;
	*(_DWORD*)(Arguments + 8) ^= (*(_DWORD*)(Arguments + 8) ^ ~(8 * (*a2 >> 9))) & 8;
	*(_DWORD*)(Arguments + 8) ^= (*(_DWORD*)(Arguments + 8) ^ ~(4 * (*a2 >> 10))) & 4;
	*(_DWORD*)(Arguments + 8) ^= (*(_DWORD*)(Arguments + 8) ^ ~(2 * (*a2 >> 11))) & 2;
	*(_DWORD*)(Arguments + 8) ^= (*(_DWORD*)(Arguments + 8) ^ ~(*(_DWORD*)a2 >> 12)) & 1;
	v10 = sub_1407F664C();
	if ((v10 & 1) != 0)
		*(_DWORD*)(Arguments + 12) |= 0x10u;
	if ((v10 & 4) != 0)
		*(_DWORD*)(Arguments + 12) |= 8u;
	if ((v10 & 8) != 0)
		*(_DWORD*)(Arguments + 12) |= 4u;
	if ((v10 & 0x10) != 0)
		*(_DWORD*)(Arguments + 12) |= 2u;
	if ((v10 & 0x20) != 0)
		*(_DWORD*)(Arguments + 12) |= 1u;
	v11 = *(_DWORD*)a2 & 0x6000i64;
	if (v11)
	{
		switch (v11)
		{
		case 8192i64:
			*(_DWORD*)Arguments &= ~2u;
			*(_DWORD*)Arguments |= 1u;
			break;
		case 16384i64:
			*(_DWORD*)Arguments &= ~1u;
			*(_DWORD*)Arguments |= 2u;
			break;
		case 24576i64:
			*(_DWORD*)Arguments |= 3u;
			break;
		}
	}
	else
	{
		*(_DWORD*)Arguments &= 0xFFFFFFFC;
	}
	*(_DWORD*)Arguments &= 0xFFFE001F;
	*(_DWORD*)Arguments |= 32 * (a4 & 0xFFF);
	v12 = a6;
	*(_DWORD*)(Arguments + 32) |= 1u;
	if (a7)
	{
		*(_DWORD*)(Arguments + 32) &= 0xFFFFFFE1;
		*(_DWORD*)(Arguments + 16) = *a5;
		*(_DWORD*)(Arguments + 96) |= 1u;
		*(_DWORD*)(Arguments + 96) &= 0xFFFFFFE1;
		*(_DWORD*)(Arguments + 80) = *v12;
	}
	else
	{
		*(_DWORD*)(Arguments + 32) = *(_DWORD*)(Arguments + 32) & 0xFFFFFFE1 | 2;
		*(_QWORD*)(Arguments + 16) = *(_QWORD*)a5;
		*(_DWORD*)(Arguments + 96) |= 1u;
		*(_DWORD*)(Arguments + 96) = *(_DWORD*)(Arguments + 96) & 0xFFFFFFE1 | 2;
		*(_QWORD*)(Arguments + 80) = *(_QWORD*)v12;
	}
	sub_1407F6590();
	RaiseException(v9, 0, 1u, &Arguments);
	v13 = Arguments;
	if ((*(_BYTE*)(Arguments + 8) & 0x10) != 0)
		*a2 &= ~0x80ui64;
	if ((*(_BYTE*)(v13 + 8) & 8) != 0)
		*a2 &= ~0x200ui64;
	if ((*(_BYTE*)(v13 + 8) & 4) != 0)
		*a2 &= ~0x400ui64;
	if ((*(_BYTE*)(v13 + 8) & 2) != 0)
		*a2 &= ~0x800ui64;
	if ((*(_BYTE*)(v13 + 8) & 1) != 0)
		*a2 &= ~0x1000ui64;
	if ((*(_DWORD*)v13 & 3) != 0)
	{
		switch (*(_DWORD*)v13 & 3)
		{
		case 1:
			*a2 &= ~0x4000ui64;
			*a2 |= 0x2000ui64;
			break;
		case 2:
			*a2 &= ~0x2000ui64;
			*a2 |= 0x4000ui64;
			break;
		case 3:
			*a2 |= 0x6000ui64;
			break;
		}
	}
	else
	{
		*a2 &= 0xFFFFFFFFFFFF9FFFui64;
	}
	if (a7)
	{
		result = *(unsigned int*)(v13 + 80);
		*v12 = result;
	}
	else
	{
		result = *(_QWORD*)(v13 + 80);
		*(_QWORD*)v12 = result;
	}
	return result;
}

