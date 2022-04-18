#include "../winhttp.h"

//----- (00000001403DA0B0) ----------------------------------------------------
__int64 __fastcall sub_1403DA0B0(__int64 a1, int* a2)
{
	_DWORD* v4; // rsi
	__int64 v5; // rax
	unsigned int v6; // ebx
	__int64 v7; // rcx
	__int64 v8; // rdi
	int v9; // r15d
	int v10; // eax
	__int64 v11; // rdi
	int v12; // ebx
	int v13; // edx
	int v14; // eax
	int v15; // edx
	int v16; // r15d
	int v17; // eax
	__int64 v19; // [rsp+20h] [rbp-48h]
	int v20; // [rsp+20h] [rbp-48h]

	v4 = (_DWORD*)sub_1403D90D0(a1, *a2);
	if (v4)
	{
		v5 = *(_QWORD*)(a1 + 120);
		if (v5)
		{
			if (v4[2] == *(_DWORD*)(v5 + 8))
			{
				v6 = a2[1];
				v7 = *(_QWORD*)(qword_140C65898 + 120);
				v8 = *(_QWORD*)(a1 + 29504);
				if (v7)
				{
					v20 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 72i64))(v7);
					Apollo_LUAEvent(v8, "UI_HealthChanged", byte_1409EBC44, v6, v20);
				}
				v9 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)v4 + 64i64))(v4);
				(*(void(__fastcall**)(_DWORD*, _QWORD))(*(_QWORD*)v4 + 80i64))(v4, (unsigned int)a2[1]);
				if ((a2[2] & 0x200) != 0)
				{
					v10 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)v4 + 72i64))(v4);
					v11 = *(_QWORD*)(a1 + 29504);
					v12 = v10;
					v13 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)v4 + 64i64))(v4);
					v14 = 1;
					if (v12 > 1)
						v14 = v12;
					Apollo_LUAEvent(v11, "Breath_FlashEvent", byte_1409EBCCC, (float)((float)v13 / (float)v14));
				}
				v15 = a2[2];
				if ((v15 & 0x40) != 0 || (v15 & 0x200) != 0)
				{
					v16 = v9 - a2[1];
					if (v16 > 0)
					{
						v17 = 6;
						if ((v15 & 0x200) != 0)
							v17 = 7;
						LODWORD(v19) = v4[2];
						Apollo_LUAEvent(
							*(_QWORD*)(a1 + 29504),
							"DamageOrHealingDone",
							"UUiiibS",
							0i64,
							v19,
							v17,
							v16,
							0i64,
							0,
							&unk_1409E7E04);
					}
				}
				Apollo_LUAEvent(*(_QWORD*)(a1 + 29504), "RefreshHealthShieldBar", byte_1409D08BB);
			}
		}
	}
	return 0i64;
}
// 1403DA237: variable 'v19' is possibly undefined
// 1409D08BB: using guessed type _BYTE byte_1409D08BB[3];
// 1409EBC44: using guessed type _BYTE byte_1409EBC44[64];
// 1409EBCCC: using guessed type _BYTE byte_1409EBCCC[32];
// 140C65898: using guessed type __int64 qword_140C65898;

