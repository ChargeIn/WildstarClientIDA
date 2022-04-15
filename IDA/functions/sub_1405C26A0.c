#include "../winhttp.h"

//----- (00000001405C26A0) ----------------------------------------------------
void __fastcall sub_1405C26A0(__int64 a1, int a2, __int64 a3)
{
	int* v5; // rbx
	__int64 v6; // r8
	int v7; // ecx
	__int64 v8; // [rsp+20h] [rbp-D8h]
	__int64 v9; // [rsp+30h] [rbp-C8h]
	int v10; // [rsp+38h] [rbp-C0h]
	char v11[80]; // [rsp+40h] [rbp-B8h] BYREF
	char v12[80]; // [rsp+90h] [rbp-68h] BYREF

	if (*(_QWORD*)(a1 + 128))
	{
		v5 = *(int**)(a1 + 120);
		if ((unsigned int)sub_1405C2530(a1, (__int64)v11, a3, a2, 1, *v5, v5 + 2))
		{
			if ((unsigned int)sub_1405C2530(a1, (__int64)v12, v6, a2, 2, v5[8], v5 + 10))
			{
				if (*v5)
					v7 = 23;
				else
					v7 = v5[6];
				v10 = v5[16];
				LODWORD(v9) = v7;
				LODWORD(v8) = v5[17];
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PvpKillNotification", "SiSii", v12, v8, v11, v9, v10);
				sub_1405C5180(a1 + 120);
				if (*(_QWORD*)(a1 + 128))
					sub_1405C26A0(a1, 0i64);
			}
		}
	}
}
// 1405C2732: variable 'v6' is possibly undefined
// 1405C278A: variable 'v8' is possibly undefined
// 1405C278A: variable 'v9' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

