#include "../winhttp.h"

//----- (000000014004D2B0) ----------------------------------------------------
__int64 __fastcall sub_14004D2B0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, __int64 a6)
{
	int v6; // r9d
	__int64 v7; // r10
	__int64 v8; // rdx
	__int64 v9; // rax
	BOOL v11; // [rsp+20h] [rbp-18h]
	__int64 v12; // [rsp+58h] [rbp+20h]

	if ((unsigned int)(a3 - 514) <= 1)
	{
		v6 = *(_DWORD*)(a1 + 456);
		if (v6)
		{
			v7 = *(_QWORD*)(a1 + 416);
			v8 = v7;
			v9 = *(_QWORD*)(v7 + 8);
			while (v9)
			{
				if (*(_DWORD*)(v9 + 32) < v6)
				{
					v9 = *(_QWORD*)(v9 + 24);
				}
				else
				{
					v8 = v9;
					v9 = *(_QWORD*)(v9 + 16);
				}
			}
			if (v8 == v7 || (v12 = v8, v6 < *(_DWORD*)(v8 + 32)))
				v12 = *(_QWORD*)(a1 + 416);
			if (v12 != v7)
			{
				v11 = a3 == 515;
				Apollo_LUAEvent(a6, "ActorClicked", byte_1409D11C4, *(_QWORD*)(v12 + 40), v11);
			}
		}
	}
	return 1i64;
}
// 1409D11C4: using guessed type _BYTE byte_1409D11C4[3];

