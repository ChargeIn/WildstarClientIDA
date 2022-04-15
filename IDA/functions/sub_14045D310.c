#include "../winhttp.h"

//----- (000000014045D310) ----------------------------------------------------
void __fastcall sub_14045D310(__int64 a1, __int64 a2)
{
	int v3; // r10d
	_QWORD* v4; // r11
	__int64 v5; // rdx
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rcx
	unsigned __int64 v9; // rdx
	unsigned __int64 v10; // r8
	int v11; // eax
	_DWORD* v12; // rcx
	__int64 v13; // rdx
	__int64 v14; // [rsp+48h] [rbp+10h]

	if (*(int*)(a2 + 4) < 28)
	{
		sub_1400035B0();
		v5 = v4[147];
		v6 = *(_QWORD*)(v5 + 8);
		v7 = v5;
		while (v6)
		{
			if (*(_DWORD*)(v6 + 32) < v3)
			{
				v6 = *(_QWORD*)(v6 + 24);
			}
			else
			{
				v7 = v6;
				v6 = *(_QWORD*)(v6 + 16);
			}
		}
		if (v7 == v5 || (v14 = v7, v3 < *(_DWORD*)(v7 + 32)))
			v14 = v4[147];
		if (v14 == v5 || (v8 = *(_QWORD*)(v14 + 40), v9 = 0i64, (v10 = *(_QWORD*)(v8 + 8)) == 0))
		{
		LABEL_15:
			sub_14045D890((__int64)v4, v3, *(_DWORD*)(a2 + 8));
		}
		else
		{
			v11 = *(_DWORD*)(a2 + 8);
			v12 = *(_DWORD**)v8;
			while (*v12 != v11)
			{
				++v9;
				++v12;
				if (v9 >= v10)
					goto LABEL_15;
			}
			v13 = v4[698];
			if (v13)
			{
				while (v11 && *(_DWORD*)(v13 + 100) != v11)
				{
					v13 = *(_QWORD*)(v13 + 48);
					if (!v13)
						goto LABEL_21;
				}
			}
			else
			{
			LABEL_21:
				v13 = v4[699];
				if (v13)
				{
					while (v11 && *(_DWORD*)(v13 + 100) != v11)
					{
						v13 = *(_QWORD*)(v13 + 64);
						if (!v13)
							goto LABEL_25;
					}
				}
				else
				{
				LABEL_25:
					v13 = 0i64;
				}
			}
			sub_14045D440((__int64)v4, (__int64*)v13);
		}
	}
}
// 14045D353: variable 'v4' is possibly undefined
// 14045D36A: variable 'v3' is possibly undefined

