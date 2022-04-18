#include "../winhttp.h"

//----- (000000014042FD40) ----------------------------------------------------
void __fastcall sub_14042FD40(__int64 a1, _QWORD* a2)
{
	__int128 v2; // xmm6
	__int64 v3; // rdi
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // eax
	unsigned int v9; // r11d
	int v10; // esi
	__int64 v11; // rcx
	unsigned int v12; // ebp
	int v13; // r10d
	__int64 v14; // r9
	_DWORD* v15; // rdx
	__int64 v16; // rcx
	unsigned int v17; // ebx
	__int64 v18; // rax
	__int64 v19; // rax
	__int64 v20; // r8
	__int64 v21; // rdx
	__int128 v22; // [rsp+20h] [rbp-38h]
	double v23; // [rsp+60h] [rbp+8h]

	v3 = *(_QWORD*)(a1 + 400);
	if (*(_QWORD*)(*(_QWORD*)(v3 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v3 + 32) + 112i64))
		sub_14005E2C0(*(_QWORD*)(a1 + 400));
	v6 = *(_QWORD*)(v3 + 16);
	v7 = sub_14005C1B0(v3, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	*(_QWORD*)(v3 + 16) += 16i64;
	v8 = sub_1400578C0(v3);
	v9 = 0;
	v10 = v8;
	if (a2[1])
	{
		v22 = v2;
		v11 = 0i64;
		v12 = v8 - 1;
		do
		{
			v13 = *(_DWORD*)(*a2 + 4 * v11);
			v14 = *(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64);
			if (v12 >= *(_DWORD*)(v14 + 56))
			{
				if ((double)v10 == 0.0)
				{
					v15 = *(_DWORD**)(v14 + 32);
				}
				else
				{
					v23 = (double)v10;
					v15 = (_DWORD*)(*(_QWORD*)(v14 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v23) + HIDWORD(v23)) % (((1i64 << *(_BYTE*)(v14 + 11)) - 1) | 1)));
				}
				while (v15[6] != 3 || (double)v10 != *((double*)v15 + 2))
				{
					v15 = (_DWORD*)*((_QWORD*)v15 + 4);
					if (!v15)
					{
						v15 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v15 = (_DWORD*)(*(_QWORD*)(v14 + 24) + 16i64 * (v10 - 1));
			}
			v16 = *(_QWORD*)(v3 + 16);
			v17 = v9 + 1;
			*(_QWORD*)v16 = *(_QWORD*)v15;
			*(_DWORD*)(v16 + 8) = v15[2];
			*(_QWORD*)(v3 + 16) += 16i64;
			v18 = *(_QWORD*)(v3 + 16);
			*(_DWORD*)(v18 + 8) = 3;
			*(double*)v18 = (double)(int)(v9 + 1);
			*(_QWORD*)(v3 + 16) += 16i64;
			v19 = *(_QWORD*)(v3 + 16);
			*(_DWORD*)(v19 + 8) = 3;
			*(double*)v19 = (double)v13;
			v20 = *(_QWORD*)(v3 + 16) + 16i64;
			*(_QWORD*)(v3 + 16) = v20;
			sub_14005EA50(v3, (__int64*)(v20 - 48), (int*)(v20 - 32), (unsigned int*)(v20 - 16));
			*(_QWORD*)(v3 + 16) -= 48i64;
			v9 = v17;
			v11 = v17;
		} while ((unsigned __int64)v17 < a2[1]);
	}
	Apollo_LUAEvent(a1, "MatchingLeaveQueue", "T", (unsigned int)v10, v22);
	sub_1400579E0(v3, v21, v10);
}
// 14042FD40: could not find valid save-restore pair for xmm6
// 14042FDB0: variable 'v2' is possibly undefined
// 14042FEF2: variable 'v22' is possibly undefined
// 14042FF08: variable 'v21' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

