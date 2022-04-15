#include "../winhttp.h"

//----- (00000001406F1490) ----------------------------------------------------
__int64 __fastcall sub_1406F1490(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned int* v5; // r9
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	unsigned int* v9; // r9
	__int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	unsigned int* v13; // r9
	__int64 v14; // rax
	__int64 v15; // rbx
	__int64 v16; // rax
	unsigned int* v17; // r9
	__int64 v18; // rax
	__int64 v19; // rbx
	__int64 v20; // rax
	unsigned int* v21; // r9
	__int64 v22; // rax
	__int64 v23; // rbx
	__int64 v24; // rax
	unsigned int* v25; // r9
	__int64 v26; // rax
	__int64 v27; // rbx
	__int64 v28; // rax
	unsigned int* v29; // r9
	__int64 v30; // rax
	__int64 v31; // rbx
	__int64 v32; // rax
	unsigned int* v33; // r9
	__int64 v34; // rax
	__int64 v35; // rbx
	unsigned int* v36; // r9
	__int64 v37; // rax
	__int64 v38; // rbx
	__int64 v39; // rax
	unsigned int* v40; // r9
	__int64 v41; // rax
	__int64 v42; // rbx
	__int64 v43; // rax
	unsigned int* v44; // r9
	__int64 v45; // rax
	__int64 v46; // rbx
	__int64 v47; // rax
	unsigned int* v48; // r9
	__int64 v50; // [rsp+20h] [rbp-10h] BYREF
	int v51; // [rsp+28h] [rbp-8h]

	sub_140057020(a1, "PlayerPathLib", &off_140B72310);
	v2 = a1[2];
	*(_QWORD*)v2 = 0i64;
	*(_DWORD*)(v2 + 8) = 3;
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"PlayerPathType_Soldier", 0x16ui64);
	v5 = (unsigned int*)(a1[2] - 16i64);
	v50 = v4;
	v51 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v50, v5);
	a1[2] -= 16i64;
	v6 = a1[2];
	*(_QWORD*)v6 = 0x3FF0000000000000i64;
	*(_DWORD*)(v6 + 8) = 3;
	a1[2] += 16i64;
	v7 = a1[2];
	v8 = sub_140062650((__int64)a1, (unsigned __int64*)"PlayerPathType_Settler", 0x16ui64);
	v9 = (unsigned int*)(a1[2] - 16i64);
	v50 = v8;
	v51 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v7 - 32), (int*)&v50, v9);
	a1[2] -= 16i64;
	v10 = a1[2];
	*(_QWORD*)v10 = 0x4000000000000000i64;
	*(_DWORD*)(v10 + 8) = 3;
	a1[2] += 16i64;
	v11 = a1[2];
	v12 = sub_140062650((__int64)a1, (unsigned __int64*)"PlayerPathType_Scientist", 0x18ui64);
	v13 = (unsigned int*)(a1[2] - 16i64);
	v50 = v12;
	v51 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v11 - 32), (int*)&v50, v13);
	a1[2] -= 16i64;
	v14 = a1[2];
	*(_QWORD*)v14 = 0x4008000000000000i64;
	*(_DWORD*)(v14 + 8) = 3;
	a1[2] += 16i64;
	v15 = a1[2];
	v16 = sub_140062650((__int64)a1, (unsigned __int64*)"PlayerPathType_Explorer", 0x17ui64);
	v17 = (unsigned int*)(a1[2] - 16i64);
	v50 = v16;
	v51 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v15 - 32), (int*)&v50, v17);
	a1[2] -= 16i64;
	v18 = a1[2];
	*(_QWORD*)v18 = 0i64;
	*(_DWORD*)(v18 + 8) = 3;
	a1[2] += 16i64;
	v19 = a1[2];
	v20 = sub_140062650((__int64)a1, (unsigned __int64*)"PathRewardType_Item", 0x13ui64);
	v21 = (unsigned int*)(a1[2] - 16i64);
	v50 = v20;
	v51 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v19 - 32), (int*)&v50, v21);
	a1[2] -= 16i64;
	v22 = a1[2];
	*(_QWORD*)v22 = 0x3FF0000000000000i64;
	*(_DWORD*)(v22 + 8) = 3;
	a1[2] += 16i64;
	v23 = a1[2];
	v24 = sub_140062650((__int64)a1, (unsigned __int64*)"PathRewardType_Spell", 0x14ui64);
	v25 = (unsigned int*)(a1[2] - 16i64);
	v50 = v24;
	v51 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v23 - 32), (int*)&v50, v25);
	a1[2] -= 16i64;
	v26 = a1[2];
	*(_QWORD*)v26 = 0x4000000000000000i64;
	*(_DWORD*)(v26 + 8) = 3;
	a1[2] += 16i64;
	v27 = a1[2];
	v28 = sub_140062650((__int64)a1, (unsigned __int64*)"PathRewardType_Title", 0x14ui64);
	v29 = (unsigned int*)(a1[2] - 16i64);
	v50 = v28;
	v51 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v27 - 32), (int*)&v50, v29);
	a1[2] -= 16i64;
	v30 = a1[2];
	*(_QWORD*)v30 = 0x4008000000000000i64;
	*(_DWORD*)(v30 + 8) = 3;
	a1[2] += 16i64;
	v31 = a1[2];
	v32 = sub_140062650((__int64)a1, (unsigned __int64*)"PathRewardType_Quest", 0x14ui64);
	v33 = (unsigned int*)(a1[2] - 16i64);
	v50 = v32;
	v51 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v31 - 32), (int*)&v50, v33);
	a1[2] -= 16i64;
	v34 = a1[2];
	*(_QWORD*)v34 = 0x4010000000000000i64;
	*(_DWORD*)(v34 + 8) = 3;
	a1[2] += 16i64;
	v35 = a1[2];
	v50 = sub_140062650((__int64)a1, (unsigned __int64*)"PathRewardType_ScanBot", 0x16ui64);
	v36 = (unsigned int*)(a1[2] - 16i64);
	v51 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v35 - 32), (int*)&v50, v36);
	a1[2] -= 16i64;
	v37 = a1[2];
	*(_QWORD*)v37 = 0i64;
	*(_DWORD*)(v37 + 8) = 3;
	a1[2] += 16i64;
	v38 = a1[2];
	v39 = sub_140062650((__int64)a1, (unsigned __int64*)"SettlerInfrastructureState_Inactive", 0x23ui64);
	v40 = (unsigned int*)(a1[2] - 16i64);
	v50 = v39;
	v51 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v38 - 32), (int*)&v50, v40);
	a1[2] -= 16i64;
	v41 = a1[2];
	*(_QWORD*)v41 = 0x3FF0000000000000i64;
	*(_DWORD*)(v41 + 8) = 3;
	a1[2] += 16i64;
	v42 = a1[2];
	v43 = sub_140062650((__int64)a1, (unsigned __int64*)"SettlerInfrastructureState_Building", 0x23ui64);
	v44 = (unsigned int*)(a1[2] - 16i64);
	v50 = v43;
	v51 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v42 - 32), (int*)&v50, v44);
	a1[2] -= 16i64;
	v45 = a1[2];
	*(_QWORD*)v45 = 0x4000000000000000i64;
	*(_DWORD*)(v45 + 8) = 3;
	a1[2] += 16i64;
	v46 = a1[2];
	v47 = sub_140062650((__int64)a1, (unsigned __int64*)"SettlerInfrastructureState_Built", 0x20ui64);
	v48 = (unsigned int*)(a1[2] - 16i64);
	v50 = v47;
	v51 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v46 - 32), (int*)&v50, v48);
	a1[2] -= 16i64;
	return 1i64;
}
// 140B72310: using guessed type char *off_140B72310;

