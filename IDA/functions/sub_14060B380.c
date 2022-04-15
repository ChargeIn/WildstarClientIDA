#include "../winhttp.h"

//----- (000000014060B380) ----------------------------------------------------
void __fastcall sub_14060B380(int* a1, __int64 a2)
{
	__int64 v4; // rax
	__int64 v5; // rax
	int v6; // edx
	__int64 v7; // rax
	__int64 v8; // rax
	int v9; // edx
	_QWORD* v10; // rax
	__int64 v11; // r10
	__int64 v12; // rdx
	int v13; // r11d
	_QWORD* v14; // rcx
	int v15; // [rsp+38h] [rbp+10h] BYREF

	if (a2)
	{
		if ((unsigned int)sub_140649870(*(_QWORD**)(a2 + 16), a1[2]))
		{
			sub_1400FB540(a2);
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		}
		v4 = sub_1403D90D0(qword_140C65898, a1[2]);
		if (v4)
		{
			v5 = sub_14047DCA0(v4);
			if (v5)
			{
				v6 = *(_DWORD*)(v5 + 8);
				if (v6 != a1[2])
				{
					if ((unsigned int)sub_140649870(*(_QWORD**)(a2 + 16), v6))
					{
						sub_1400FB540(a2);
						*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
					}
				}
			}
		}
		if ((unsigned int)sub_140649870(*(_QWORD**)(a2 + 16), a1[4]))
		{
			sub_1400FB540(a2);
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		}
		v7 = sub_1403D90D0(qword_140C65898, a1[4]);
		if (v7)
		{
			v8 = sub_14047DCA0(v7);
			if (v8)
			{
				v9 = *(_DWORD*)(v8 + 8);
				if (v9 != a1[4])
				{
					if ((unsigned int)sub_140649870(*(_QWORD**)(a2 + 16), v9))
					{
						sub_1400FB540(a2);
						*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
					}
				}
			}
		}
		v10 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v12 = *(_QWORD*)(v11 + 16);
		*(_QWORD*)v12 = *v10;
		*(_DWORD*)(v12 + 8) = *((_DWORD*)v10 + 2);
		*(_QWORD*)(v11 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a2 + 16), v12, L"eCombatResult", v13);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		v14 = *(_QWORD**)(a2 + 16);
		v15 = a1[5];
		if ((unsigned int)sub_1403D3470(v14, &v15))
		{
			sub_1400FB540(a2);
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		}
	}
}
// 14060B4A0: variable 'v11' is possibly undefined
// 14060B4C3: variable 'v13' is possibly undefined
// 140B263B0: using guessed type wchar_t aEcombatresult[14];
// 140C65898: using guessed type __int64 qword_140C65898;

