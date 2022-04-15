#include "../winhttp.h"

//----- (00000001400F45F0) ----------------------------------------------------
void __fastcall sub_1400F45F0(__int64 a1, _DWORD* a2)
{
	__int64 v3; // rdx
	unsigned __int64 v4; // rcx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rsi
	__int64 v8; // rax
	__int64 v9; // rbx
	unsigned int v10; // ecx
	unsigned __int64 v11; // rax
	unsigned __int64* v12; // rdx
	unsigned __int64 v13; // r8
	__int64 v14; // [rsp+20h] [rbp-28h] BYREF
	unsigned __int16* v15; // [rsp+28h] [rbp-20h]
	LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp+10h] BYREF

	if (*a2 == 2)
	{
		v3 = 0i64;
		v4 = *(_QWORD*)(qword_140C63650 + 768);
		if (v4)
		{
			v5 = *(_QWORD*)(qword_140C63650 + 760);
			v6 = 0i64;
			while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
			{
				v3 = (unsigned int)(v3 + 1);
				v6 = (unsigned int)v3;
				if ((unsigned int)v3 >= v4)
					return;
			}
			v7 = *(_QWORD*)(v5 + 8 * v3);
			if (v7)
			{
				v8 = *(_QWORD*)(v7 + 2480);
				if (*(_QWORD*)v8 != v8)
				{
					v9 = *(_QWORD*)(*(_QWORD*)v8 + 16i64);
					QueryPerformanceCounter(&PerformanceCount);
					v10 = 15000;
					v11 = (PerformanceCount.QuadPart - *(_QWORD*)(v9 + 8) - ::PerformanceCount.QuadPart)
						/ (unsigned __int64)qword_140C636B0;
					if (*(_BYTE*)(v7 + 392))
						v10 = 2500;
					if ((unsigned int)v11 > v10)
					{
						sub_14018EFA0(&v14, (__int64)L"Lua event handler has exceeded %d ms.", (unsigned int)v11);
						v12 = (unsigned __int64*)sub_14018F0E0(&v14, v15)[1];
						if (v12)
						{
							v13 = -1i64;
							do
								++v13;
							while (*((_BYTE*)v12 + v13));
							sub_140058710(a1, v12, v13);
						}
						else
						{
							*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
							*(_QWORD*)(a1 + 16) += 16i64;
						}
						if (v15)
							sub_14018B900((__int64)v15, 0);
						sub_14005AB30(a1);
					}
				}
			}
		}
	}
}
// 140A18570: using guessed type wchar_t aLuaEventHandle[38];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C636B0: using guessed type __int64 qword_140C636B0;

