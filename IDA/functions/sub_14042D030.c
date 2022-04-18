#include "../winhttp.h"

//----- (000000014042D030) ----------------------------------------------------
void __fastcall sub_14042D030(__int64 a1, _QWORD* a2)
{
	__int128 v2; // xmm6
	__int64 v3; // rdi
	int v6; // r15d
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // eax
	unsigned __int64 v10; // rsi
	int v11; // ebx
	unsigned int v12; // ebp
	__int64 v13; // r9
	int v14; // r10d
	_DWORD* v15; // rdx
	__int64 v16; // rcx
	__int64 v17; // rcx
	int v18; // eax
	__int64 v19; // rax
	__int64 v20; // r8
	__int64 v21; // rdx
	__int128 v22; // [rsp+20h] [rbp-38h]
	double v23; // [rsp+60h] [rbp+8h]

	v3 = *(_QWORD*)(a1 + 400);
	v6 = 1;
	if (*(_QWORD*)(*(_QWORD*)(v3 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v3 + 32) + 112i64))
		sub_14005E2C0(*(_QWORD*)(a1 + 400));
	v7 = *(_QWORD*)(v3 + 16);
	v8 = sub_14005C1B0(v3, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	*(_QWORD*)(v3 + 16) += 16i64;
	v9 = sub_1400578C0(v3);
	v10 = 0i64;
	v11 = v9;
	if (a2[1])
	{
		v22 = v2;
		v12 = v9 - 1;
		do
		{
			v13 = *(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64);
			v14 = *(_DWORD*)(*a2 + 4 * v10);
			if (v12 >= *(_DWORD*)(v13 + 56))
			{
				if ((double)v11 == 0.0)
				{
					v15 = *(_DWORD**)(v13 + 32);
				}
				else
				{
					v23 = (double)v11;
					v15 = (_DWORD*)(*(_QWORD*)(v13 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v23) + HIDWORD(v23)) % (((1i64 << *(_BYTE*)(v13 + 11)) - 1) | 1)));
				}
				while (v15[6] != 3 || (double)v11 != *((double*)v15 + 2))
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
				v15 = (_DWORD*)(*(_QWORD*)(v13 + 24) + 16i64 * (v11 - 1));
			}
			v16 = *(_QWORD*)(v3 + 16);
			*(_QWORD*)v16 = *(_QWORD*)v15;
			*(_DWORD*)(v16 + 8) = v15[2];
			*(_QWORD*)(v3 + 16) += 16i64;
			v17 = *(_QWORD*)(v3 + 16);
			*(_DWORD*)(v17 + 8) = 3;
			v18 = v6++;
			*(double*)v17 = (double)v18;
			*(_QWORD*)(v3 + 16) += 16i64;
			v19 = *(_QWORD*)(v3 + 16);
			*(_DWORD*)(v19 + 8) = 3;
			*(double*)v19 = (double)v14;
			v20 = *(_QWORD*)(v3 + 16) + 16i64;
			*(_QWORD*)(v3 + 16) = v20;
			sub_14005EA50(v3, (__int64*)(v20 - 48), (int*)(v20 - 32), (unsigned int*)(v20 - 16));
			*(_QWORD*)(v3 + 16) -= 48i64;
			++v10;
		} while (v10 < a2[1]);
	}
	Apollo_LUAEvent(a1, "ScientistExperimentationResult", byte_1409ECF9C, (unsigned int)v11, v22);
	sub_1400579E0(v3, v21, v11);
}
// 14042D030: could not find valid save-restore pair for xmm6
// 14042D0AA: variable 'v2' is possibly undefined
// 14042D1ED: variable 'v22' is possibly undefined
// 14042D209: variable 'v21' is possibly undefined
// 1409ECF9C: using guessed type _BYTE byte_1409ECF9C[4];
// 140A12138: using guessed type _DWORD dword_140A12138[4];

