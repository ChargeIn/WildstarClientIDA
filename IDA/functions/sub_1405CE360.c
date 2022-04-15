#include "../winhttp.h"

//----- (00000001405CE360) ----------------------------------------------------
void __fastcall sub_1405CE360(__int64 a1, _DWORD* a2, double a3, double a4)
{
	bool v5; // zf
	__int64 v6; // rcx
	__int64 v7; // rax
	int v8; // edx
	int v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v11)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v12; // [rsp+38h] [rbp-10h]

	if (*a2)
	{
		*(_QWORD*)&a3 = (unsigned int)a2[2];
		sub_14062D0F0(*(__int64**)a1, COERCE_DOUBLE((unsigned __int64)a2[1]), *(float*)&a3);
	}
	if (*(_DWORD*)(a1 + 72))
	{
		v5 = *(_DWORD*)(a1 + 76) == 0;
		*(_DWORD*)(a1 + 72) = 0;
		if (!v5)
		{
			v6 = *(_QWORD*)(*(_QWORD*)a1 + 8i64);
			if (v6)
			{
				if (*(_DWORD*)(v6 + 692))
					sub_1405D3380(v6, (__int64)a2, a3, a4);
			}
			*(_DWORD*)(a1 + 76) = 0;
		}
	}
	else
	{
		v7 = sub_140200220(0x231u);
		if (v7)
			v8 = *(_DWORD*)(v7 + 4);
		else
			v8 = 0;
		*(_DWORD*)(a1 + 552) = v8;
		v9 = 0;
		v11 = sub_1405CE4D0;
		v10 = a1;
		v12 = 0i64;
		sub_140195960(a1 + 480, v8, (__int64)&v9, 4);
	}
}
// 1405CE3A8: variable 'a2' is possibly undefined

