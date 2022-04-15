#include "../winhttp.h"

//----- (00000001400B3C80) ----------------------------------------------------
void __fastcall sub_1400B3C80(__int64 a1, __int64 a2)
{
	_DWORD* StackBase; // r14
	int v5; // ebp
	int v6; // eax
	__int64 v7; // rdx
	unsigned int v8; // ebx
	int v9; // edx
	__int64 v10; // rdx
	__int64 v11; // rbx
	__int64 v12; // [rsp+40h] [rbp+8h] BYREF

	if (*(_QWORD*)(a1 - 208) && a2)
	{
		StackBase = NtCurrentTeb()->NtTib.StackBase;
		v5 = *(StackBase - 1);
		*(StackBase - 1) = 1;
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		v8 = v6;
		if (!v6)
		{
			if (*(_DWORD*)(a1 + 260) != 9)
			{
				if (a1 == 480)
					v10 = 0i64;
				else
					v10 = a1 - 48;
				v11 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 - 208) + 80i64))(*(_QWORD*)(a1 - 208), v10);
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v11 + 64i64))(v11, 0i64);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
			}
			v9 = 9;
			goto LABEL_24;
		}
		if (v6 > 3330)
		{
			if (v6 == 3344)
			{
				v9 = 25;
				goto LABEL_24;
			}
			if (v6 == 3716)
			{
				v9 = 19;
				goto LABEL_24;
			}
		}
		else
		{
			if (v6 == 3330)
			{
				v9 = 26;
				goto LABEL_24;
			}
			if (v6 >= 10)
			{
				if (v6 <= 11)
					goto LABEL_10;
				if (v6 == 42)
				{
					v9 = 20;
					goto LABEL_24;
				}
				if (v6 == 3002)
				{
				LABEL_10:
					v9 = 16;
				LABEL_24:
					sub_1400B23B0(a1 - 480, v9);
					goto LABEL_25;
				}
			}
		}
		sub_1400B2700(a1 - 480, v7, v6);
		v12 = 0x141D0DFD8i64;
		sub_1401A3130(95, 0, &v12, v8);
	LABEL_25:
		(**(void(__fastcall***)(__int64))a2)(a2);
		*(StackBase - 1) = v5;
	}
}
// 1400B3D35: variable 'v7' is possibly undefined

