#include "../winhttp.h"

//----- (0000000140842E50) ----------------------------------------------------
void __fastcall sub_140842E50(__int64 a1)
{
	__int64 v2; // r15
	__int64 v3; // rdi
	__int64 v4; // rdx
	__int64 v5; // rbp
	__int64 v6; // r9
	__int64 v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // r8
	int v10; // et0
	char v11; // of
	char v12; // al
	_QWORD* v13; // rdx
	int v14; // ecx
	int v15; // esi
	int v16; // [rsp+28h] [rbp-50h]

	sub_14083E430(a1);
	sub_140842A80(a1);
	v2 = a1 + 1776;
	v3 = *(_QWORD*)(a1 + 1776);
	LODWORD(v4) = 0;
	v5 = 0i64;
	if (v3)
	{
		while (1)
		{
		LABEL_6:
			v6 = *(_QWORD*)(v3 + 16);
			v7 = v3;
			LODWORD(v8) = v4;
			v16 = v4;
			v9 = v5;
			v3 = v6;
			if (!v6)
			{
				do
				{
					v8 = (unsigned int)(v8 + 1);
					if ((unsigned int)v8 >= 0x1F)
						break;
					v3 = *(_QWORD*)(v2 + 8 * v8);
					v9 = 0i64;
				} while (!v3);
				v16 = v8;
			}
			*(_QWORD*)(v2 + 8i64 * (unsigned int)v4) = v6;
			--* (_DWORD*)(v2 + 248);
			v5 = v9;
			sub_1408425E0(v7);
			EnterCriticalSection(&stru_140C62878);
			v10 = _InterlockedAdd((volatile signed __int32*)(v7 + 112), 0xFFFFFFFF);
			if (!((v10 < 0) ^ v11 | (v10 == 0)))
				goto LABEL_21;
			if (*(_QWORD*)(v7 + 32))
			{
				v12 = sub_1408817F0(*(_DWORD*)(v7 + 44));
				v13 = *(_QWORD**)(v7 + 32);
				v14 = *(_DWORD*)(v7 + 44);
				if ((v12 & 8) != 0)
					sub_140881A80(v14, v13);
				else
					sub_140881720(v14, (__int64)v13);
				*(_QWORD*)(v7 + 32) = 0i64;
				if (*(_BYTE*)(v7 + 48))
				{
					sub_140881DD0(*(_DWORD*)(v7 + 44));
					*(_DWORD*)(v7 + 44) = -1;
				}
			}
			sub_140843180(qword_140C61B58, v7);
			if (*(int*)(v7 + 116) <= 0)
			{
				LeaveCriticalSection(&stru_140C62878);
				v15 = dword_140C10F20;
				if ((*(_BYTE*)(v7 + 120) & 2) != 0)
				{
					sub_140881720(dword_140C10F20, *(_QWORD*)(v7 + 64));
					*(_BYTE*)(v7 + 120) &= ~2u;
				}
				*(_QWORD*)(v7 + 64) = 0i64;
				sub_140881720(v15, v7);
			}
			else
			{
			LABEL_21:
				LeaveCriticalSection(&stru_140C62878);
			}
			if (!v3)
				break;
			LODWORD(v4) = v16;
		}
	}
	else
	{
		while (1)
		{
			v4 = (unsigned int)(v4 + 1);
			if ((unsigned int)v4 >= 0x1F)
				break;
			v3 = *(_QWORD*)(v2 + 8 * v4);
			if (v3)
				goto LABEL_6;
		}
	}
}
// 140842EA6: conditional instruction was optimized away because rdi.8==0
// 140842EF2: conditional instruction was optimized away because rbp.8==0
// 140842F2E: variable 'v11' is possibly undefined
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B58: using guessed type __int64 qword_140C61B58;

