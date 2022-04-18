#include "../winhttp.h"

//----- (00000001403A81E0) ----------------------------------------------------
void __fastcall sub_1403A81E0(__int64 a1, int a2)
{
	__int64 v2; // rdi
	int v4; // eax
	__int64 v5; // rax
	unsigned int v6; // ebx
	__int64 v7; // rax
	float v8; // xmm0_4
	unsigned int v9; // eax
	__int64 v10; // r9
	__int64 v11; // rcx
	_QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

	v2 = qword_140C65898;
	if (*(_DWORD*)(qword_140C65898 + 25480))
	{
		v4 = dword_140DC2218;
		*(_DWORD*)(qword_140C65898 + 25484) = a2;
		if ((v4 & 1) != 0)
		{
			v6 = dword_140DC221C;
		}
		else
		{
			dword_140DC2218 = v4 | 1;
			v5 = sub_140200220(0x454u);
			if (v5)
			{
				v6 = *(_DWORD*)(v5 + 4);
				v4 = dword_140DC2218;
				dword_140DC221C = v6;
			}
			else
			{
				v4 = dword_140DC2218;
				v6 = 100;
				dword_140DC221C = 100;
			}
		}
		if ((v4 & 2) != 0)
		{
			v8 = *(float*)&dword_140DC2220;
		}
		else
		{
			dword_140DC2218 = v4 | 2;
			v7 = sub_140200220(0x454u);
			if (v7)
			{
				v8 = *(float*)(v7 + 24);
				v6 = dword_140DC221C;
				dword_140DC2220 = LODWORD(v8);
			}
			else
			{
				v8 = 0.80000001;
				v6 = dword_140DC221C;
				dword_140DC2220 = 1061997773;
			}
		}
		*(_DWORD*)(v2 + 25488) = a2 / v6;
		v9 = (a2 - (int)(float)((float)(1.0 - v8) * (float)a2)) / v6;
		LODWORD(v12[0]) = 0;
		*(_DWORD*)(v2 + 25492) = v9;
		*(_DWORD*)(v2 + 25504) = v9;
		v12[1] = sub_14001C280(v2);
		v12[3] = 0i64;
		v12[2] = sub_1403A84D0;
		sub_140195960(v2 + 25520, v6, (__int64)v12, 4);
		v10 = *(unsigned int*)(v2 + 25480);
		v11 = *(_QWORD*)(v2 + 29504);
		*(_DWORD*)(v2 + 25512) = dword_140C636A8;
		Apollo_LUAEvent(v11, "ActivateCCStateStun", byte_1409E9CC4, v10, v12[0]);
	}
}
// 1409E9CC4: using guessed type _BYTE byte_1409E9CC4[24];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC2218: using guessed type int dword_140DC2218;
// 140DC221C: using guessed type int dword_140DC221C;
// 140DC2220: using guessed type int dword_140DC2220;

