#include "../winhttp.h"

//----- (000000014084F950) ----------------------------------------------------
__int64 __fastcall sub_14084F950(__int64 a1, char** a2)
{
	__int16 v3; // r10
	char* v4; // rax
	char v5; // r9
	char v6; // bp
	__int16 v7; // r8
	char v8; // cl
	__int16 v9; // di
	char* v10; // rax
	char v11; // bl
	char v12; // si
	char v13; // cl
	char v14; // cl
	char v15; // cl
	char v16; // cl

	v3 = (unsigned __int8)**a2;
	v4 = *a2 + 1;
	*a2 = v4;
	v5 = *v4++;
	*a2 = v4;
	v6 = *v4++;
	*a2 = v4;
	v7 = *(_WORD*)v4;
	*a2 = v4 + 2;
	*(_WORD*)(a1 + 88) = v7;
	v8 = *(*a2)++;
	*(_BYTE*)(a1 + 90) &= ~0x10u;
	*(_BYTE*)(a1 + 90) |= 16 * (v8 != 0);
	v9 = (unsigned __int8)**a2;
	v10 = *a2 + 1;
	*a2 = v10;
	v11 = *v10++;
	*a2 = v10;
	v12 = *v10++;
	*a2 = v10;
	v13 = *v10;
	*a2 = v10 + 1;
	*(_BYTE*)(a1 + 160) &= ~0x80u;
	*(_BYTE*)(a1 + 160) |= v13 << 7;
	v14 = *(*a2)++;
	*(_BYTE*)(a1 + 161) &= ~1u;
	*(_BYTE*)(a1 + 161) |= v14 & 1;
	v15 = *(*a2)++;
	*(_BYTE*)(a1 + 161) &= ~2u;
	*(_BYTE*)(a1 + 161) |= 2 * (v15 & 1);
	v16 = *(*a2)++;
	*(_BYTE*)(a1 + 161) &= ~4u;
	*(_WORD*)(a1 + 136) = v3;
	*(_BYTE*)(a1 + 161) |= 4 * (v16 & 1);
	sub_140854640(a1, v5 != 0);
	sub_140854910(a1, v6 != 0);
	*(_WORD*)(a1 + 138) = v9;
	sub_140854630(a1, v11 != 0);
	sub_140854DE0(a1, v12 != 0);
	return 1i64;
}

