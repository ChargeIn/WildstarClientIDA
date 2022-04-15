#include "../winhttp.h"

//----- (00000001400B3EC0) ----------------------------------------------------
void __fastcall sub_1400B3EC0(__int64 a1, __int64 a2)
{
	_DWORD* StackBase; // rbx
	int v5; // r14d
	int v6; // eax
	__int64 v7; // rdx
	unsigned int v8; // ebp
	__int64 v9; // rcx
	int* v10; // rax
	__int64 v11; // r8
	__int64 v12; // [rsp+40h] [rbp+8h] BYREF

	StackBase = NtCurrentTeb()->NtTib.StackBase;
	v5 = *(StackBase - 1);
	*(StackBase - 1) = 1;
	if (*(_QWORD*)(a1 - 224) && a2)
	{
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		v8 = v6;
		if (v6)
		{
			v9 = a1 - 496;
			if (v6 == 3002)
			{
				sub_1400B23B0(v9, 32);
			}
			else
			{
				sub_1400B2700(v9, v7, v6);
				v12 = 0x141D0DEB8i64;
				sub_1401A3130(95, 0, &v12, v8);
			}
		}
		v10 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 96i64))(a2);
		v11 = -1i64;
		do
			++v11;
		while (*((_BYTE*)v10 + v11));
		sub_14001B1A0(a1 + 24, v10, (int*)((char*)v10 + v11));
		if (a1 + 24 != a1 + 56)
			sub_14001B1A0(a1 + 56, *(int**)(a1 + 32), *(int**)(a1 + 40));
		sub_1400B23B0(a1 - 496, 33);
		(**(void(__fastcall***)(__int64))a2)(a2);
	}
	*(StackBase - 1) = v5;
}
// 1400B3F25: variable 'v7' is possibly undefined

