#include "../winhttp.h"

//----- (00000001406A6160) ----------------------------------------------------
__int64 __fastcall sub_1406A6160(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v5; // rax
	unsigned __int64 v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // r14
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	__int64 v11; // rdi
	__int64 v12; // rax
	int v13; // eax
	__int64 v14; // rcx
	int v15; // r15d
	_QWORD* v16; // rax
	__int64 v17; // rdx
	int v18; // r10d
	__int64 v19; // rcx
	unsigned __int64 v20; // rax
	__int64 v21; // rdi
	__int64 v22; // rax
	__int64 v23; // rsi
	__int64 v24; // rdi
	__int64 v25; // rbp
	int v26; // ebp
	__int64 v27; // rcx
	unsigned __int64 v28; // rax
	__int64 v29; // rdi
	__int64 v30; // rax
	__int64 v31; // rdi
	int v32; // edi
	_QWORD* v33; // rax
	__int64 v34; // rdx
	__int64 v35; // rcx
	__int64(__fastcall * *v36)(); // [rsp+20h] [rbp-78h] BYREF
	int v37; // [rsp+28h] [rbp-70h]
	_QWORD* v38; // [rsp+30h] [rbp-68h]
	int v39; // [rsp+38h] [rbp-60h]
	__int64(__fastcall * *v40)(); // [rsp+40h] [rbp-58h] BYREF
	int v41; // [rsp+48h] [rbp-50h]
	_QWORD* v42; // [rsp+50h] [rbp-48h]
	int v43; // [rsp+58h] [rbp-40h]
	__int64(__fastcall * *v44)(); // [rsp+60h] [rbp-38h] BYREF
	int v45; // [rsp+68h] [rbp-30h]
	_QWORD* v46; // [rsp+70h] [rbp-28h]
	int v47; // [rsp+78h] [rbp-20h]

	v2 = sub_140056AB0(a1, 1u);
	v3 = v2;
	if (v2)
	{
		v5 = sub_1405B15C0(*(_QWORD*)(qword_140C659F0 + 824), *(_DWORD*)(*(_QWORD*)(v2 + 8) + 4i64));
		if (v5
			&& (v6 = **(unsigned int**)(v3 + 8), v6 < (__int64)(*(_QWORD*)(v5 + 256) - *(_QWORD*)(v5 + 248)) >> 3)
			&& (v7 = *(_QWORD*)(*(_QWORD*)(v5 + 248) + 8 * v6)) != 0)
		{
			v8 = sub_140208200(*(_DWORD*)(v7 + 4));
			if (v8)
			{
				v9 = a1[4];
				v10 = *(_QWORD*)(v9 + 112);
				v44 = off_140B569F0;
				v46 = a1;
				v47 = 1;
				if (*(_QWORD*)(v9 + 120) >= v10)
					sub_14005E2C0((__int64)a1);
				v11 = a1[2];
				v12 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v11 + 8) = 5;
				*(_QWORD*)v11 = v12;
				a1[2] += 16i64;
				v13 = sub_1400578C0((__int64)a1);
				v14 = *(_QWORD*)(a1[4] + 160i64);
				v15 = v13;
				v45 = v13;
				v16 = sub_14005C3C0(v14, v13);
				v17 = a1[2];
				*(_QWORD*)v17 = *v16;
				*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v17, L"nMaintenanceCost", v18);
				a1[2] -= 16i64;
				v19 = a1[4];
				v20 = *(_QWORD*)(v19 + 112);
				v40 = off_140B569F0;
				v42 = a1;
				v43 = 1;
				if (*(_QWORD*)(v19 + 120) >= v20)
					sub_14005E2C0((__int64)a1);
				v21 = a1[2];
				v22 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v21 + 8) = 5;
				*(_QWORD*)v21 = v22;
				a1[2] += 16i64;
				v23 = 3i64;
				v41 = sub_1400578C0((__int64)a1);
				v24 = v8 + 12;
				v25 = 3i64;
				do
				{
					sub_1400FA9E0((__int64)&v40);
					v24 += 4i64;
					--v25;
				} while (v25);
				v26 = v41;
				sub_1400FB2A0((__int64)&v44, (__int64)L"tUpgradeCost", v41);
				v27 = a1[4];
				v36 = off_140B569F0;
				v28 = *(_QWORD*)(v27 + 112);
				v38 = a1;
				v39 = 1;
				if (*(_QWORD*)(v27 + 120) >= v28)
					sub_14005E2C0((__int64)a1);
				v29 = a1[2];
				v30 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v29 + 8) = 5;
				*(_QWORD*)v29 = v30;
				a1[2] += 16i64;
				v37 = sub_1400578C0((__int64)a1);
				v31 = v8 + 24;
				do
				{
					sub_1400FA9E0((__int64)&v36);
					v31 += 4i64;
					--v23;
				} while (v23);
				v32 = v37;
				sub_1400FB2A0((__int64)&v44, (__int64)L"tSpell4IdAbility", v37);
				v33 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
				v34 = a1[2];
				*(_QWORD*)v34 = *v33;
				v35 = (__int64)v38;
				*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
				a1[2] += 16i64;
				if (v35)
					sub_1400579E0(v35, v34, v32);
				if (v42)
					sub_1400579E0((__int64)v42, v34, v26);
				sub_1400579E0((__int64)a1, v34, v15);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			return 1i64;
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
// 1406A62ED: variable 'v18' is possibly undefined
// 1406A646C: variable 'v34' is possibly undefined
// 140B35A18: using guessed type wchar_t aTupgradecost[13];
// 140B35A38: using guessed type wchar_t aTspell4idabili[17];
// 140B35A70: using guessed type wchar_t aNmaintenanceco[17];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C659F0: using guessed type __int64 qword_140C659F0;

