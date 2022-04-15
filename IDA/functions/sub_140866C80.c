#include "../winhttp.h"

//----- (0000000140866C80) ----------------------------------------------------
void __fastcall sub_140866C80(__int64 a1, __int64 a2)
{
	_DWORD* v3; // rsi
	__int64 v4; // rax
	_QWORD* v5; // r14
	int v6; // ebx
	__int64 v7; // rcx
	__int64 v8; // [rsp+40h] [rbp+8h]

	if ((*(_BYTE*)(a1 + 381) & 0x10) == 0)
	{
		LOBYTE(a2) = 1;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 136i64))(a1, a2);
		if ((*(_DWORD*)(a1 + 640) & 0xF) == 4)
		{
			if (*(_DWORD*)(a1 + 636))
			{
				v3 = (_DWORD*)sub_140856D40(1283, 0, (__int64*)(a1 + 544));
				if (v3)
				{
					v4 = sub_1408819F0(dword_140C10F20, 80i64);
					if (v4)
					{
						v5 = (_QWORD*)sub_14082B2C0(v4, *(_QWORD*)(a1 + 176));
						if (v5)
						{
							v3[60] = *(_DWORD*)(a1 + 404);
							sub_140857160(v3, (_DWORD*)(a1 + 552));
							LODWORD(v8) = *(_DWORD*)(a1 + 636);
							BYTE4(v8) = 0;
							(*(void(__fastcall**)(_DWORD*, __int64))(*(_QWORD*)v3 + 40i64))(v3, v8);
							sub_140857210((__int64)v3, *(_QWORD*)(a1 + 624));
							if ((unsigned int)sub_140857370(
								(__int64)v3,
								*(_QWORD*)(a1 + 128),
								*(_BYTE*)(a1 + 144) & 1,
								(__int64)v5) == 1
								&& (unsigned int)sub_1408572D0(
									(__int64)v3,
									*(_QWORD*)(a1 + 136),
									(*(_BYTE*)(a1 + 144) & 2) != 0,
									(__int64)v5) == 1)
							{
								sub_140857240((__int64)v3, a1 + 504);
								if ((*(_BYTE*)(a1 + 381) & 0x40) != 0)
									sub_140857410((__int64)v3);
								sub_140857400((__int64)v3, *(_DWORD*)(a1 + 152));
								v5[1] = v3;
								sub_14082B460((__int64)(v5 + 4), a1 + 96);
								sub_14082BB80((__int64)qword_140C61B68, (__int64)v5);
							}
							else
							{
								v6 = dword_140C10F20;
								(*(void(__fastcall**)(_QWORD*, _QWORD))(*v5 + 8i64))(v5, 0i64);
								sub_140881720(v6, (__int64)v5);
							}
						}
					}
					(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v3 + 16i64))(v3);
					*(_BYTE*)(a1 + 381) |= 2u;
				}
				v7 = *(_QWORD*)(a1 + 544);
				*(_QWORD*)(a1 + 544) = 0i64;
				if (v7)
					sub_140866000(v7);
				*(_DWORD*)(a1 + 636) = 0;
			}
		}
	}
}
// 140C10F20: using guessed type int dword_140C10F20;

