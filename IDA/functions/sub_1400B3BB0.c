#include "../winhttp.h"

//----- (00000001400B3BB0) ----------------------------------------------------
void __fastcall sub_1400B3BB0(__int64 a1, __int64 a2)
{
	_DWORD* StackBase; // r14
	int v5; // ebp
	__int64 v6; // rsi
	__int64 v7; // rbx
	int v8; // eax
	__int64 v9; // rdi
	int v10; // [rsp+28h] [rbp-20h]
	__int64 v11; // [rsp+50h] [rbp+8h] BYREF

	if (*(_QWORD*)(a1 - 192))
	{
		if (a2)
		{
			StackBase = NtCurrentTeb()->NtTib.StackBase;
			v5 = *(StackBase - 1);
			*(StackBase - 1) = 1;
			v6 = (**(__int64(__fastcall***)(__int64))a2)(a2);
			v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
			v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
			v9 = v8;
			v10 = v8;
			v11 = 0x141D0E070i64;
			sub_1401A3130(95, 2, &v11, v6, v7, v10);
			sub_1400B2550(a1 - 464, 24, v9);
			*(StackBase - 1) = v5;
		}
	}
}

