#include "../winhttp.h"

//----- (00000001400B3A50) ----------------------------------------------------
void __fastcall sub_1400B3A50(__int64 a1, __int64 a2)
{
	_DWORD* StackBase; // rdi
	int v5; // ebp
	unsigned int v6; // eax
	int* v7; // rax
	__int64 v8; // r8
	__int64 v9; // [rsp+30h] [rbp+8h] BYREF

	if (*(_QWORD*)(a1 - 176) && a2)
	{
		StackBase = NtCurrentTeb()->NtTib.StackBase;
		v5 = *(StackBase - 1);
		*(StackBase - 1) = 1;
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		if (v6)
		{
			v9 = 0x141D0DBB8i64;
			*(_DWORD*)(a1 - 384) = 15;
			sub_1401A3130(95, 0, &v9, v6);
		}
		else
		{
			v7 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 72i64))(a2);
			v8 = -1i64;
			do
				++v8;
			while (*((_BYTE*)v7 + v8));
			sub_14001B1A0(a1 + 200, v7, (int*)((char*)v7 + v8));
			sub_1400B23B0(a1 - 448, 14);
		}
		(**(void(__fastcall***)(__int64))a2)(a2);
		*(StackBase - 1) = v5;
	}
}

