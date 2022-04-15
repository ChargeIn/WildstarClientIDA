#include "../winhttp.h"

//----- (00000001400B3FD0) ----------------------------------------------------
void __fastcall sub_1400B3FD0(__int64 a1, __int64 a2)
{
	_DWORD* StackBase; // rbx
	int v5; // esi
	int v6; // eax
	__int64 v7; // rdx
	unsigned int v8; // ebp
	__int64 v9; // rcx
	__int64 v10; // [rsp+40h] [rbp+8h] BYREF

	StackBase = NtCurrentTeb()->NtTib.StackBase;
	v5 = *(StackBase - 1);
	*(StackBase - 1) = 1;
	if (*(_QWORD*)(a1 - 232) && a2)
	{
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		v8 = v6;
		if (v6)
		{
			v9 = a1 - 504;
			if (v6 == 10)
			{
				sub_1400B23B0(v9, 16);
			}
			else
			{
				sub_1400B2700(v9, v7, v6);
				v10 = 0x141D0DE38i64;
				sub_1401A3130(95, 0, &v10, v8);
			}
		}
		(**(void(__fastcall***)(__int64))a2)(a2);
	}
	*(StackBase - 1) = v5;
}
// 1400B4029: variable 'v7' is possibly undefined

