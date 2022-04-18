#include "../winhttp.h"

//----- (00000001403AA680) ----------------------------------------------------
void __fastcall sub_1403AA680(__int64 a1)
{
	int v2; // eax
	int v3; // ecx
	__int64 v4; // rax
	int v5; // ecx
	__int64 v6; // rax
	int v7; // eax
	__int64 v8; // rcx
	__int16* v9; // rax
	__int16* v10; // rdi
	__int16* v11; // rax
	__int16* v12; // rdi
	int v13; // edi
	int v14; // [rsp+30h] [rbp-28h] BYREF
	__int64 v15; // [rsp+38h] [rbp-20h]
	__int64(__fastcall * v16)(); // [rsp+40h] [rbp-18h]
	__int64 v17; // [rsp+48h] [rbp-10h]

	if (*(_DWORD*)(qword_140C635F0 + 5896) == 1 && *(_DWORD*)(a1 + 32640))
	{
		v2 = dword_140DC222C;
		if ((dword_140DC222C & 1) != 0)
		{
			v3 = dword_140DC2234;
		}
		else
		{
			v2 = dword_140DC222C | 1;
			v3 = 0;
			dword_140DC222C |= 1u;
			dword_140DC2234 = 0;
		}
		if ((v2 & 2) == 0)
		{
			v2 |= 2u;
			dword_140DC223C = 0;
			dword_140DC222C = v2;
		}
		if ((v2 & 4) == 0)
		{
			v2 |= 4u;
			dword_140DC222C = v2;
			if (v3)
			{
				v5 = dword_140DC2230;
			}
			else
			{
				dword_140DC2234 = 1;
				v4 = sub_140200220(0x4B6u);
				if (v4)
				{
					v5 = *(_DWORD*)(v4 + 4);
					v2 = dword_140DC222C;
					dword_140DC2230 = v5;
				}
				else
				{
					v2 = dword_140DC222C;
					v5 = 0;
					dword_140DC2230 = 0;
				}
			}
			dword_140DC2240 = 60 * v5;
		}
		if ((v2 & 8) == 0)
		{
			dword_140DC222C = v2 | 8;
			if (dword_140DC223C)
			{
				v7 = dword_140DC2238;
			}
			else
			{
				dword_140DC223C = 1;
				v6 = sub_140200220(0x4B8u);
				if (v6)
				{
					v7 = *(_DWORD*)(v6 + 8);
					dword_140DC2238 = v7;
				}
				else
				{
					v7 = 0;
					dword_140DC2238 = 0;
				}
			}
			dword_140DC2244 = 60 * v7;
		}
		if (*(_DWORD*)(a1 + 32644) == 1 && (unsigned int)sub_1403B4F80(a1) - dword_140DC2240 < dword_140DC2244)
		{
			v9 = sub_14034BDD0(v8, 695399);
			v10 = v9;
			if (qword_140C658A0)
			{
				if (v9 && *v9)
				{
					sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v9, 0, 0i64);
					Apollo_LUAEvent(*(_QWORD*)(a1 + 29504), "HealthyGamingUpdate", "iS", *(unsigned int*)(a1 + 32644), v10);
				}
			}
		}
		v11 = sub_1403AAAB0(a1);
		v12 = v11;
		if (qword_140C658A0 && v11 && *v11)
		{
			sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v11, 0, 0i64);
			Apollo_LUAEvent(*(_QWORD*)(a1 + 29504), "HealthyGamingUpdate", "iS", *(unsigned int*)(a1 + 32644), v12);
		}
		v13 = 1000 * sub_1403AA9A0(a1);
		if (v13)
		{
			v14 = 0;
			v15 = sub_14001C280(a1);
			v17 = 0i64;
			v16 = sub_1403AA680;
			sub_140195960(a1 + 32664, v13, (__int64)&v14, 4);
		}
	}
}
// 1403AA7BC: variable 'v8' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140DC222C: using guessed type int dword_140DC222C;
// 140DC2230: using guessed type int dword_140DC2230;
// 140DC2234: using guessed type int dword_140DC2234;
// 140DC2238: using guessed type int dword_140DC2238;
// 140DC223C: using guessed type int dword_140DC223C;
// 140DC2240: using guessed type int dword_140DC2240;
// 140DC2244: using guessed type int dword_140DC2244;

