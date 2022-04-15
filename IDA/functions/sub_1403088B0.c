#include "../winhttp.h"

//----- (00000001403088B0) ----------------------------------------------------
void __fastcall sub_1403088B0(__int64 a1, _QWORD* a2)
{
	unsigned __int64 v3; // rbp
	unsigned __int64 v4; // rdx
	__int64 v5; // r8
	__int64 v6; // rbx
	__int64 v7; // rbx

	if (*a2 == a1)
	{
		*a2 = 0i64;
		v3 = a2[1];
		v4 = *(_QWORD*)(a1 + 16) - 1i64;
		if (v3 >= v4)
		{
			sub_14030A710((__int64*)(a1 + 8), v4);
		}
		else
		{
			v5 = *(_QWORD*)(a1 + 8);
			v6 = 2 * v3;
			*(_QWORD*)(v5 + 8 * v6) = *(_QWORD*)(v5 + 16 * v4);
			*(_QWORD*)(v5 + 8 * v6 + 8) = *(_QWORD*)(v5 + 16 * v4 + 8);
			sub_14030A710((__int64*)(a1 + 8), v4);
			v7 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 16 * v3);
			*(_QWORD*)(v7 + 8) = v3;
			if (!(unsigned int)sub_14030A510(a1, v7))
				sub_14030A5F0(a1, v7);
		}
	}
}

