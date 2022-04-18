#include "../winhttp.h"

//----- (0000000140602ED0) ----------------------------------------------------
__int64 __fastcall sub_140602ED0(__int64 a1, __int64 a2)
{
	__int64 v2; // r15
	__int128 v3; // xmm6
	__int64 v4; // rdi
	unsigned __int64 v7; // rbx
	__int64 v8; // rsi
	__int64 v9; // rdx
	int v10; // r12d
	__int64 v11; // rdi
	__int64 v12; // rbx
	__int64 v13; // rax
	int v14; // eax
	unsigned __int64 v15; // r13
	int v16; // esi
	__int64 v17; // rbx
	unsigned int v18; // r15d
	_QWORD* v19; // rdx
	__int64 v20; // r10
	unsigned __int64 v21; // r8
	unsigned __int64 v22; // r9
	unsigned __int64 v23; // rcx
	__int64 v24; // rcx
	__int64 v25; // r10
	_DWORD* v26; // rdx
	__int64 v27; // rcx
	__int64 v28; // rcx
	int v29; // eax
	__int64 v30; // rcx
	__int64 v31; // r8
	__int64 v32; // rdx
	__int128 v34; // [rsp+20h] [rbp-38h]
	__int64 v35; // [rsp+30h] [rbp-28h]
	double v36; // [rsp+60h] [rbp+8h] BYREF

	v4 = *(_QWORD*)(a1 + 64);
	if (v4 && *(_QWORD*)(v4 + 72) == *(_QWORD*)a2
		|| (v4 = *(_QWORD*)(a1 + 72)) != 0 && *(_QWORD*)(v4 + 72) == *(_QWORD*)a2)
	{
		v7 = 0i64;
		if (*(_DWORD*)(a2 + 16))
		{
			v8 = 0i64;
			do
			{
				if (sub_14079EE60(v4, v8 + *(_QWORD*)(a2 + 24), (unsigned __int64*)&v36))
				{
					v9 = *(_QWORD*)(*(_QWORD*)(v4 + 88) + 8i64 * *(_QWORD*)&v36);
					if (v9)
						*(_DWORD*)(v9 + 12) = *(_DWORD*)(*(_QWORD*)(a2 + 32) + 4 * v7);
				}
				++v7;
				v8 += 16i64;
			} while (v7 < *(unsigned int*)(a2 + 16));
		}
		if (v4 == *(_QWORD*)(a1 + 64))
		{
			v10 = 1;
			v11 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
			if (*(_QWORD*)(*(_QWORD*)(v11 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v11 + 32) + 112i64))
				sub_14005E2C0(v11);
			v12 = *(_QWORD*)(v11 + 16);
			v13 = sub_14005C1B0(v11, 0, 0);
			*(_DWORD*)(v12 + 8) = 5;
			*(_QWORD*)v12 = v13;
			*(_QWORD*)(v11 + 16) += 16i64;
			v14 = sub_1400578C0(v11);
			v15 = 0i64;
			v16 = v14;
			if (*(_DWORD*)(a2 + 16))
			{
				v35 = v2;
				v34 = v3;
				v17 = 0i64;
				v18 = v14 - 1;
				do
				{
					v19 = *(_QWORD**)(a1 + 64);
					v20 = *(_QWORD*)(a2 + 24);
					if (v19 && (v21 = v19[12], v22 = 0i64, v21))
					{
						while (1)
						{
							v23 = v22;
							if (v22 >= v21)
							{
								v24 = 0i64;
							}
							else if (v22)
							{
								if (v22 <= v19[13])
									v23 = v22 - 1;
								v24 = *(_QWORD*)(v19[11] + 8 * v23);
							}
							else
							{
								v24 = *(_QWORD*)(v19[11] + 8i64 * v19[13]);
							}
							if (*(_DWORD*)(v24 + 16) == *(_DWORD*)(v17 + v20)
								&& *(_QWORD*)(v24 + 24) == *(_QWORD*)(v17 + v20 + 8))
							{
								break;
							}
							if (++v22 >= v21)
								goto LABEL_28;
						}
					}
					else
					{
					LABEL_28:
						LODWORD(v22) = -1;
					}
					v25 = *(_QWORD*)(*(_QWORD*)(v11 + 32) + 160i64);
					if (v18 >= *(_DWORD*)(v25 + 56))
					{
						v36 = (double)v16;
						if ((double)v16 == 0.0)
							v26 = *(_DWORD**)(v25 + 32);
						else
							v26 = (_DWORD*)(*(_QWORD*)(v25 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v36) + HIDWORD(v36)) % (((1i64 << *(_BYTE*)(v25 + 11)) - 1) | 1)));
						while (v26[6] != 3 || (double)v16 != *((double*)v26 + 2))
						{
							v26 = (_DWORD*)*((_QWORD*)v26 + 4);
							if (!v26)
							{
								v26 = dword_140A12138;
								break;
							}
						}
					}
					else
					{
						v26 = (_DWORD*)(*(_QWORD*)(v25 + 24) + 16i64 * (v16 - 1));
					}
					v27 = *(_QWORD*)(v11 + 16);
					*(_QWORD*)v27 = *(_QWORD*)v26;
					*(_DWORD*)(v27 + 8) = v26[2];
					*(_QWORD*)(v11 + 16) += 16i64;
					v28 = *(_QWORD*)(v11 + 16);
					*(_DWORD*)(v28 + 8) = 3;
					v29 = v10++;
					*(double*)v28 = (double)v29;
					*(_QWORD*)(v11 + 16) += 16i64;
					v30 = *(_QWORD*)(v11 + 16);
					*(_DWORD*)(v30 + 8) = 3;
					*(double*)v30 = (double)((int)v22 + 1);
					v31 = *(_QWORD*)(v11 + 16) + 16i64;
					*(_QWORD*)(v11 + 16) = v31;
					sub_14005EA50(v11, (__int64*)(v31 - 48), (int*)(v31 - 32), (unsigned int*)(v31 - 16));
					*(_QWORD*)(v11 + 16) -= 48i64;
					++v15;
					v17 += 16i64;
				} while (v15 < *(unsigned int*)(a2 + 16));
			}
			Apollo_LUAEvent(
				*(_QWORD*)(qword_140C65898 + 29504),
				"Group_MemberOrderChanged",
				byte_1409EA11C,
				(unsigned int)v16,
				v34,
				v35);
			sub_1400579E0(v11, v32, v16);
		}
	}
	return 0i64;
}
// 140602ED0: could not find valid save-restore pair for r15
// 140602ED0: could not find valid save-restore pair for xmm6
// 140602FE0: variable 'v2' is possibly undefined
// 140602FE5: variable 'v3' is possibly undefined
// 140603198: variable 'v34' is possibly undefined
// 140603198: variable 'v35' is possibly undefined
// 1406031A3: variable 'v32' is possibly undefined
// 1409EA11C: using guessed type _BYTE byte_1409EA11C[16];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

