#include "../winhttp.h"

//----- (0000000140757AC0) ----------------------------------------------------
void __fastcall sub_140757AC0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rdx
	unsigned int v4; // r8d
	unsigned int v5; // edi
	__int64 v6; // rsi
	unsigned int v7; // eax

	if (!*(_DWORD*)(a1 + 40))
	{
		v2 = *(_QWORD*)(a1 + 16);
		v3 = (unsigned int)dword_140C636A8;
		if (!v2 || (v4 = *(_DWORD*)(v2 + 8)) == 0 || dword_140C636A8 - *(_DWORD*)(a1 + 24) <= v4)
		{
			v5 = *(_DWORD*)(a1 + 48);
			v6 = *(_QWORD*)(qword_140C65898 + 29504);
			if (v5)
			{
				if (!v2
					|| (v7 = *(_DWORD*)(v2 + 8)) == 0
					|| (v3 = (unsigned int)(dword_140C636A8 - *(_DWORD*)(a1 + 24)), (unsigned int)v3 <= v7))
				{
					Apollo_LUAEvent(v6, "Communicator_ShowQueuedMsg", byte_1409E90A4, v5);
				}
			}
			sub_1400579E0(*(_QWORD*)(v6 + 400), v3, v5);
			sub_1404CF930(qword_140C65A28);
		}
	}
	if (*(_QWORD*)a1)
		sub_1403D6480(*(_QWORD*)a1, (_QWORD*)a1);
	sub_14018B900(a1, 0);
}
// 140757B4A: variable 'v3' is possibly undefined
// 1409E90A4: using guessed type _BYTE byte_1409E90A4[24];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A28: using guessed type __int64 qword_140C65A28;

