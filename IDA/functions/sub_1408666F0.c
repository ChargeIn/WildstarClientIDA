#include "../winhttp.h"

//----- (00000001408666F0) ----------------------------------------------------
__int64 __fastcall sub_1408666F0(__int64 a1, __int64 a2)
{
	unsigned int v3; // edx
	__int64 v5; // rsi
	_QWORD* v6; // rcx
	__int64 v7; // rcx
	unsigned int v9; // edx
	__int64 v10; // rcx
	__int64 v11; // rdi
	unsigned __int64 v12; // rdx
	__int64* v13; // rcx
	__int64 v14; // rdi
	__int64 v15; // rdi
	__int64 v16; // rcx
	_QWORD* v17; // r8
	__int64 v19; // [rsp+40h] [rbp+8h] BYREF

	v3 = *(_DWORD*)(a1 + 636);
	v5 = 0i64;
	if (v3)
		v5 = sub_140830F00(qword_140C61BA8, v3, 0);
	if ((*(_BYTE*)(a1 + 644) & 4) == 0 || !*(_DWORD*)(a1 + 636) || sub_14084F1E0(v5, a2))
	{
		v6 = *(_QWORD**)(a1 + 544);
		*(_BYTE*)(a1 + 644) &= ~4u;
		*(_DWORD*)(a1 + 636) = 0;
		if (v6)
		{
			if (v6[1] != *v6)
			{
				do
				{
					v7 = *(_QWORD*)(*(_QWORD*)(a1 + 544) + 8i64);
					if (*(_QWORD*)(v7 - 16))
					{
						v12 = *(_QWORD*)(v7 - 8);
						v13 = *(__int64**)(v7 - 16);
						v19 = 0i64;
						sub_140874330(v13, v12, &v19);
						v14 = *(_QWORD*)(a1 + 544);
						sub_140865E90((_QWORD*)(*(_QWORD*)(v14 + 8) - 40i64));
						*(_QWORD*)(v14 + 8) -= 40i64;
						v15 = v19;
						if (v19)
						{
							sub_140865FB0(v19);
							v16 = *(_QWORD*)(a1 + 544);
							*(_QWORD*)(a1 + 544) = v15;
							if (v16)
								sub_140866000(v16);
							if (v19)
								sub_140866000(v19);
						}
					}
					else
					{
						if (!sub_14084F1E0(*(_QWORD*)(v7 - 40), a2))
							break;
						if ((*(_DWORD*)(a1 + 552))-- != 1)
						{
							do
							{
								v9 = *(_DWORD*)(a1 + 552) - 1;
								if (v9 < 0x20)
								{
									v10 = *(unsigned int*)(a1 + 620);
									if (_bittest64(&v10, v9))
										break;
								}
								*(_DWORD*)(a1 + 552) = v9;
							} while (v9);
						}
						v11 = *(_QWORD*)(a1 + 544);
						sub_140865E90((_QWORD*)(*(_QWORD*)(v11 + 8) - 40i64));
						*(_QWORD*)(v11 + 8) -= 40i64;
					}
				} while (*(_QWORD*)(*(_QWORD*)(a1 + 544) + 8i64) != **(_QWORD**)(a1 + 544));
			}
			v17 = *(_QWORD**)(a1 + 544);
			if (!(unsigned int)((v17[1] - *v17) / 40i64))
			{
				*(_QWORD*)(a1 + 544) = 0i64;
				if (v17)
					sub_140866000((__int64)v17);
			}
		}
	}
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 16i64))(v5);
	return sub_14085F8A0(a1);
}

