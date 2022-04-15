#include "../winhttp.h"

//----- (000000014083FC30) ----------------------------------------------------
__int64 __fastcall sub_14083FC30(__int64* a1, __int64 a2, int* a3)
{
	unsigned int v6; // r8d
	int v7; // r9d
	unsigned int v8; // r10d
	__int64 v9; // rax
	unsigned int v10; // eax
	unsigned int v11; // ebx
	int v13; // [rsp+28h] [rbp-10h]
	unsigned int v14; // [rsp+40h] [rbp+8h] BYREF

	sub_14083C770(a1);
	v6 = *(_DWORD*)(a2 + 8);
	v7 = *(unsigned __int16*)(a2 + 34);
	v8 = *(_DWORD*)(a2 + 4);
	if (v6 || !*(_WORD*)(a2 + 34))
	{
		v9 = a1[v8 % 0x1F + 255];
		if (v9)
		{
			while (*(_DWORD*)(v9 + 8) != v8)
			{
				v9 = *(_QWORD*)v9;
				if (!v9)
					goto LABEL_7;
			}
			if (v9 != -16)
			{
				v10 = sub_14083C930((__int64)a1, *(const CHAR**)(v9 + 16), v6, 0i64);
				goto LABEL_9;
			}
		}
	LABEL_7:
		LOBYTE(v13) = 1;
		v7 = 0;
	}
	else
	{
		LOBYTE(v13) = *(_BYTE*)(a2 + 16) & 1;
	}
	v10 = sub_14083C790((__int64)a1, v8, v6, v7, 0i64, v13);
LABEL_9:
	v11 = v10;
	v14 = 0;
	if (v10 == 1)
	{
		v11 = sub_14083C410((__int64)a1, a3, *(_DWORD*)(a2 + 12), &v14);
		if (v11 == 1 && *(_DWORD*)(a2 + 12) != v14)
			v11 = 2;
	}
	sub_14083C3D0((__int64)a1);
	return v11;
}
// 14083FCC5: variable 'v13' is possibly undefined

