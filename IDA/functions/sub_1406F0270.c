#include "../winhttp.h"

//----- (00000001406F0270) ----------------------------------------------------
__int64 __fastcall sub_1406F0270(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	unsigned int** v4; // rax
	__int64 v5; // rax
	__int64 v6; // r14
	__int64* v7; // rax
	__int64 v8; // rax
	int v9; // esi
	__int64 v10; // rbp
	__int64 result; // rax
	int v12; // eax
	int v13; // r12d
	int v14; // r13d
	int v15; // r15d
	__int64 v16; // rax
	float v17; // xmm2_4
	__int64 v18; // rcx
	unsigned __int64 v19; // rax
	__int64 v20; // rbx
	__int64 v21; // rax
	int v22; // eax
	__int64 v23; // rcx
	int v24; // ebx
	_QWORD* v25; // rax
	__int64 v26; // rdx
	int v27; // r10d
	_QWORD* v28; // rax
	__int64 v29; // r10
	__int64 v30; // rdx
	_QWORD* v31; // rax
	__int64 v32; // r10
	__int64 v33; // rdx
	_QWORD* v34; // rax
	__int64 v35; // r10
	__int64 v36; // rdx
	_QWORD* v37; // rax
	__int64 v38; // r10
	__int64 v39; // rdx
	_QWORD* v40; // rax
	__int64 v41; // r10
	__int64 v42; // rdx
	float v43; // xmm2_4
	_QWORD* v44; // rax
	__int64 v45; // r10
	__int64 v46; // rdx
	__int64 v47; // rcx
	_QWORD* v48; // rax
	__int64 v49; // rdx
	unsigned __int16* v50; // r10
	_QWORD* v51; // rax
	__int64 v52; // rdx
	__int64(__fastcall * *v53)(); // [rsp+20h] [rbp-48h] BYREF
	int v54; // [rsp+28h] [rbp-40h]
	_QWORD* v55; // [rsp+30h] [rbp-38h]
	int v56; // [rsp+38h] [rbp-30h]
	int v57; // [rsp+78h] [rbp+10h]

	if (qword_140C65970 && qword_140C65960)
	{
		v2 = sub_140056AB0(a1, 1u);
		if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = *(unsigned int***)(v3 + 8)) != 0i64)
		{
			v5 = sub_1403D7BC0(qword_140C65970, **v4);
			v6 = v5;
			if (v5 && (v7 = *(__int64**)(v5 + 48), *(_DWORD*)(*v7 + 12) == 21))
			{
				v8 = sub_1403D2D60(*v7, *(_DWORD*)(*v7 + 20));
				v9 = 0;
				v10 = v8;
				if (v8)
				{
					v12 = *(_DWORD*)(v8 + 16);
					v13 = 0;
					v14 = 0;
					v15 = 0;
					v57 = 0;
					if (v12 == 1)
					{
						v13 = *(_DWORD*)(*(_QWORD*)(v10 + 8) + 24i64);
						v9 = (int)(float)((float)((float)v13 * *(float*)(v10 + 20)) * 0.0099999998);
					}
					else if (v12 == 2)
					{
						if ((dword_140DC4BCC & 1) != 0)
						{
							v17 = *(float*)&dword_140DC4BD0;
						}
						else
						{
							dword_140DC4BCC |= 1u;
							v16 = sub_140200220(0x202u);
							if (v16)
							{
								v17 = *(float*)(v16 + 24);
								dword_140DC4BD0 = LODWORD(v17);
							}
							else
							{
								v17 = 0.0;
								dword_140DC4BD0 = 0;
							}
						}
						v15 = *(_DWORD*)(*(_QWORD*)(v10 + 8) + 28i64);
						v57 = (int)(float)((float)v15 * v17);
						v14 = (int)(float)((float)((float)v15 * *(float*)(v10 + 20)) * 0.0099999998);
					}
					v18 = a1[4];
					v55 = a1;
					v53 = off_140B569F0;
					v19 = *(_QWORD*)(v18 + 112);
					v56 = 1;
					if (*(_QWORD*)(v18 + 120) >= v19)
						sub_14005E2C0((__int64)a1);
					v20 = a1[2];
					v21 = sub_14005C1B0((__int64)a1, 0, 0);
					*(_DWORD*)(v20 + 8) = 5;
					*(_QWORD*)v20 = v21;
					a1[2] += 16i64;
					v22 = sub_1400578C0((__int64)a1);
					v23 = *(_QWORD*)(a1[4] + 160i64);
					v24 = v22;
					v54 = v22;
					v25 = sub_14005C3C0(v23, v22);
					v26 = a1[2];
					*(_QWORD*)v26 = *v25;
					*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
					a1[2] += 16i64;
					sub_1400F06F0((__int64)a1, v26, L"eState", v27);
					a1[2] -= 16i64;
					v28 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v24);
					*(_QWORD*)v29 = *v28;
					*(_DWORD*)(v29 + 8) = *((_DWORD*)v28 + 2);
					a1[2] += 16i64;
					sub_1400F06F0((__int64)a1, v30, L"nCurrentCount", v9);
					a1[2] -= 16i64;
					v31 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v24);
					*(_QWORD*)v32 = *v31;
					*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
					a1[2] += 16i64;
					sub_1400F06F0((__int64)a1, v33, L"nMaxCount", v13);
					a1[2] -= 16i64;
					v34 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v24);
					*(_QWORD*)v35 = *v34;
					*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
					a1[2] += 16i64;
					sub_1400F06F0((__int64)a1, v36, L"nRemainingTime", v14);
					a1[2] -= 16i64;
					v37 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v24);
					*(_QWORD*)v38 = *v37;
					*(_DWORD*)(v38 + 8) = *((_DWORD*)v37 + 2);
					a1[2] += 16i64;
					sub_1400F06F0((__int64)a1, v39, L"nMaxTime", v15);
					a1[2] -= 16i64;
					v40 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v24);
					*(_QWORD*)v41 = *v40;
					*(_DWORD*)(v41 + 8) = *((_DWORD*)v40 + 2);
					a1[2] += 16i64;
					sub_1400F06F0((__int64)a1, v42, L"nTimePerContribution", v57);
					a1[2] -= 16i64;
					v43 = *(float*)(v10 + 20);
					v44 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v24);
					*(_QWORD*)v45 = *v44;
					*(_DWORD*)(v45 + 8) = *((_DWORD*)v44 + 2);
					a1[2] += 16i64;
					sub_1400F06F0((__int64)a1, v46, L"nPercent", (int)v43);
					a1[2] -= 16i64;
					sub_14034BDD0(v47, *(_DWORD*)(*(_QWORD*)(v10 + 8) + 12i64));
					v48 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v24);
					v49 = a1[2];
					*(_QWORD*)v49 = *v48;
					*(_DWORD*)(v49 + 8) = *((_DWORD*)v48 + 2);
					a1[2] += 16i64;
					sub_1400F0870((__int64)a1, v49, L"strObjective", v50);
					a1[2] -= 16i64;
					if ((unsigned int)sub_140432AC0(a1, *(_QWORD*)(v6 + 48)))
					{
						sub_1400FB540((__int64)&v53);
						a1[2] -= 16i64;
					}
					v51 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v24);
					v52 = a1[2];
					*(_QWORD*)v52 = *v51;
					*(_DWORD*)(v52 + 8) = *((_DWORD*)v51 + 2);
					a1[2] += 16i64;
					sub_1400579E0((__int64)a1, v52, v24);
					return 1i64;
				}
				else
				{
					result = 1i64;
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
				return 1i64;
			}
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 1406F049D: variable 'v27' is possibly undefined
// 1406F04CA: variable 'v29' is possibly undefined
// 1406F04DC: variable 'v30' is possibly undefined
// 1406F0509: variable 'v32' is possibly undefined
// 1406F051B: variable 'v33' is possibly undefined
// 1406F0548: variable 'v35' is possibly undefined
// 1406F055A: variable 'v36' is possibly undefined
// 1406F057D: variable 'v38' is possibly undefined
// 1406F0599: variable 'v39' is possibly undefined
// 1406F05C8: variable 'v41' is possibly undefined
// 1406F05DA: variable 'v42' is possibly undefined
// 1406F060E: variable 'v45' is possibly undefined
// 1406F0620: variable 'v46' is possibly undefined
// 1406F0631: variable 'v47' is possibly undefined
// 1406F066D: variable 'v50' is possibly undefined
// 140B3FE40: using guessed type wchar_t aNtimepercontri[21];
// 140B3FE70: using guessed type wchar_t aNmaxtime[9];
// 140B3FE88: using guessed type wchar_t aNremainingtime_0[15];
// 140B3FEA8: using guessed type wchar_t aNmaxcount_4[10];
// 140B3FEC0: using guessed type wchar_t aNcurrentcount[14];
// 140B3FEE0: using guessed type wchar_t aEstate_4[7];
// 140B40138: using guessed type wchar_t aStrobjective_2[13];
// 140B40158: using guessed type wchar_t aNpercent_0[9];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65960: using guessed type __int64 qword_140C65960;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140DC4BCC: using guessed type int dword_140DC4BCC;
// 140DC4BD0: using guessed type int dword_140DC4BD0;

