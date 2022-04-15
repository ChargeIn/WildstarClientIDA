#include "../winhttp.h"

//----- (000000014053A000) ----------------------------------------------------
void __fastcall sub_14053A000(__int64 a1)
{
	__int64 v2; // rcx
	int v3; // edx
	int v4; // edi
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rbp
	__int64 v9; // r14
	unsigned int v10; // esi
	int v11; // eax
	int v12; // r9d
	int v13; // ecx
	int v14; // eax
	int v15; // eax
	__int64 v16; // [rsp+20h] [rbp-18h] BYREF
	__int64 v17; // [rsp+28h] [rbp-10h]

	if (qword_140C65898)
	{
		if (*(_QWORD*)(qword_140C65898 + 31016))
		{
			if ((*(_BYTE*)(qword_140C65898 + 31560) & 0x20) != 0)
			{
				v2 = qword_140C65808;
				if (qword_140C65808)
				{
					v3 = dword_140C636A8;
					v4 = 0;
					if ((dword_140DC3314 & 1) == 0)
					{
						dword_140DC3320 = 0;
						dword_140DC3318 = 60000;
						dword_140DC3314 |= 1u;
						dword_140DC331C = dword_140C636A8;
					}
					if (dword_140C5A410)
					{
						v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65808 + 200i64))(
							qword_140C65808,
							(unsigned int)dword_140C636A8);
						v6 = qword_140C65808;
						*(_QWORD*)(a1 + 29912) = v5;
						v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 192i64))(v6);
						v2 = qword_140C65808;
						v3 = dword_140C636A8;
						*(_QWORD*)(a1 + 29920) = v7;
						dword_140C5A410 = 0;
					}
					if (v3 - dword_140DC331C > (unsigned int)dword_140DC3318)
					{
						dword_140DC3320 = v3 - dword_140DC331C;
						dword_140DC331C = v3;
						v8 = (*(__int64 (**)(void))(*(_QWORD*)v2 + 200i64))();
						v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65808 + 192i64))(qword_140C65808);
						v10 = (dword_140C636A8 - dword_140DC3320) / 0xEA60u;
						if (v10)
						{
							v16 = 0i64;
							v17 = 0i64;
							v11 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65808 + 96i64))(
								qword_140C65808,
								*(unsigned int*)(*(_QWORD*)(qword_140C65898 + 31016) + 152i64));
							v12 = -1;
							LODWORD(v16) = v11;
							v13 = -1;
							if ((unsigned int)((v8 - *(_QWORD*)(a1 + 29912)) / (unsigned __int64)v10) != -1)
								v13 = (v8 - *(_QWORD*)(a1 + 29912)) / (unsigned __int64)v10;
							v14 = 0;
							if (v13)
								v14 = v13;
							HIDWORD(v16) = v14;
							if ((unsigned int)((v9 - *(_QWORD*)(a1 + 29920)) / (unsigned __int64)v10) != -1)
								v12 = (v9 - *(_QWORD*)(a1 + 29920)) / (unsigned __int64)v10;
							v15 = 0;
							if (v12)
								v15 = v12;
							LODWORD(v17) = v15;
							LOBYTE(v4) = qword_140C63698 != 0;
							HIDWORD(v17) = v4 | (2 * *(_DWORD*)(qword_140C65898 + 28424));
							sub_1403F4900(a1, 0x23Fu, (__int64)&v16);
						}
						*(_QWORD*)(a1 + 29912) = v8;
						*(_QWORD*)(a1 + 29920) = v9;
					}
				}
			}
		}
	}
}
// 140C5A410: using guessed type int dword_140C5A410;
// 140C63698: using guessed type __int64 qword_140C63698;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65808: using guessed type __int64 qword_140C65808;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC3314: using guessed type int dword_140DC3314;
// 140DC3318: using guessed type int dword_140DC3318;
// 140DC331C: using guessed type int dword_140DC331C;
// 140DC3320: using guessed type int dword_140DC3320;

