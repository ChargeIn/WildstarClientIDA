#include "../winhttp.h"

//----- (0000000140895400) ----------------------------------------------------
__int64 __fastcall sub_140895400(__int64 a1, signed int a2)
{
	__int64 v5; // rbx
	__int64(__fastcall * **v6)(_QWORD, _QWORD); // rcx
	unsigned int v7; // ebp
	__int64 v8; // rbx
	__int64 v9; // rsi
	__int64 v10; // rcx
	int v11; // [rsp+40h] [rbp+8h] BYREF
	int v12; // [rsp+44h] [rbp+Ch]

	if ((*(_BYTE*)(a1 + 98) & 0xFu) > 1)
		return 2i64;
	++* (_DWORD*)(a1 + 80);
	v5 = *(_QWORD*)(a1 + 48);
	while (v5)
	{
		v6 = (__int64(__fastcall***)(_QWORD, _QWORD))v5;
		v5 = *(_QWORD*)(v5 + 8);
		sub_14088B850(v6);
	}
	sub_14088FBA0(a1);
	v7 = sub_140895670((__int64*)a1, *(_QWORD*)(*(_QWORD*)(a1 + 104) + 56i64), *(_QWORD*)(a1 + 104) + 24i64, a2, &v11);
	if (v7 == 1)
	{
		v8 = *(_QWORD*)(a1 + 112);
		v9 = *(_QWORD*)(*(_QWORD*)(a1 + 104) + 8i64);
		v10 = *(_QWORD*)(a1 + 16);
		if (v10)
			v8 += sub_14088C230(v10);
		*(_QWORD*)(a1 + 112) = v9 + v11 - v8;
	}
	else
	{
		v12 = 4;
		v11 = 0;
		sub_14088BB90(a1, &v11, 0);
	}
	sub_14088B630(a1);
	return v7;
}

