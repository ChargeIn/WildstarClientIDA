#include "../winhttp.h"

//----- (00000001406F26C0) ----------------------------------------------------
__int64 __fastcall sub_1406F26C0(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rdi
	__int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	unsigned int* v7; // r9
	__int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	unsigned int* v11; // r9
	__int64 v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rax
	unsigned int* v15; // r9
	__int64 v16; // rax
	__int64 v17; // rbx
	__int64 v18; // rax
	unsigned int* v19; // r9
	__int64 v20; // rax
	__int64 v21; // rbx
	__int64 v22; // rax
	unsigned int* v23; // r9
	__int64 v24; // rax
	__int64 v25; // rbx
	__int64 v26; // rax
	unsigned int* v27; // r9
	__int64 v28; // rax
	__int64 v29; // rbx
	__int64 v30; // rax
	unsigned int* v31; // r9
	__int64 v32; // rax
	__int64 v33; // rbx
	__int64 v34; // rax
	unsigned int* v35; // r9
	__int64 v36; // rax
	__int64 v37; // rbx
	__int64 v38; // rax
	unsigned int* v39; // r9
	__int64 v40; // rax
	__int64 v41; // rbx
	__int64 v42; // rax
	unsigned int* v43; // r9
	__int64 v44; // rax
	__int64 v45; // rbx
	__int64 v46; // rax
	unsigned int* v47; // r9
	__int64 v48; // rax
	__int64 v49; // rbx
	__int64 v50; // rax
	unsigned int* v51; // r9
	__int64 v52; // rax
	__int64 v53; // rbx
	__int64 v54; // rax
	unsigned int* v55; // r9
	__int64 v56; // rax
	__int64 v57; // rbx
	__int64 v58; // rax
	unsigned int* v59; // r9
	__int64 v60; // rax
	__int64 v61; // rbx
	__int64 v62; // rax
	unsigned int* v63; // r9
	__int64 v64; // rax
	__int64 v65; // rbx
	__int64 v66; // rax
	unsigned int* v67; // r9
	__int64 v68; // rax
	__int64 v69; // rbx
	__int64 v70; // rax
	__int64 v71; // r9
	__int64 v73; // [rsp+20h] [rbp-10h] BYREF
	int v74; // [rsp+28h] [rbp-8h]

	v2 = *(_QWORD**)(a2 + 16);
	qword_140C65C48 = a1;
	sub_140057020(v2, "Tooltip", &off_140B725A0);
	v4 = v2[2];
	*(_QWORD*)v4 = 0x4071800000000000i64;
	*(_DWORD*)(v4 + 8) = 3;
	v2[2] += 16i64;
	v5 = v2[2];
	v6 = sub_140062650((__int64)v2, (unsigned __int64*)"TooltipWidth", 0xCui64);
	v7 = (unsigned int*)(v2[2] - 16i64);
	v73 = v6;
	v74 = 4;
	sub_14005EA50((__int64)v2, (__int64*)(v5 - 32), (int*)&v73, v7);
	v2[2] -= 16i64;
	v8 = v2[2];
	*(_QWORD*)v8 = 0x4068800000000000i64;
	*(_DWORD*)(v8 + 8) = 3;
	v2[2] += 16i64;
	v9 = v2[2];
	v10 = sub_140062650((__int64)v2, (unsigned __int64*)"TooltipLeftColumn", 0x11ui64);
	v11 = (unsigned int*)(v2[2] - 16i64);
	v73 = v10;
	v74 = 4;
	sub_14005EA50((__int64)v2, (__int64*)(v9 - 32), (int*)&v73, v11);
	v2[2] -= 16i64;
	v12 = v2[2];
	*(_QWORD*)v12 = 0x4055000000000000i64;
	*(_DWORD*)(v12 + 8) = 3;
	v2[2] += 16i64;
	v13 = v2[2];
	v14 = sub_140062650((__int64)v2, (unsigned __int64*)"TooltipRightColumn", 0x12ui64);
	v15 = (unsigned int*)(v2[2] - 16i64);
	v73 = v14;
	v74 = 4;
	sub_14005EA50((__int64)v2, (__int64*)(v13 - 32), (int*)&v73, v15);
	v2[2] -= 16i64;
	v16 = v2[2];
	*(_QWORD*)v16 = 0i64;
	*(_DWORD*)(v16 + 8) = 3;
	v2[2] += 16i64;
	v17 = v2[2];
	v18 = sub_140062650((__int64)v2, (unsigned __int64*)"TooltipGenerateType_Default", 0x1Bui64);
	v19 = (unsigned int*)(v2[2] - 16i64);
	v73 = v18;
	v74 = 4;
	sub_14005EA50((__int64)v2, (__int64*)(v17 - 32), (int*)&v73, v19);
	v2[2] -= 16i64;
	v20 = v2[2];
	*(_QWORD*)v20 = 0x3FF0000000000000i64;
	*(_DWORD*)(v20 + 8) = 3;
	v2[2] += 16i64;
	v21 = v2[2];
	v22 = sub_140062650((__int64)v2, (unsigned __int64*)"TooltipGenerateType_Grid", 0x18ui64);
	v23 = (unsigned int*)(v2[2] - 16i64);
	v73 = v22;
	v74 = 4;
	sub_14005EA50((__int64)v2, (__int64*)(v21 - 32), (int*)&v73, v23);
	v2[2] -= 16i64;
	v24 = v2[2];
	*(_QWORD*)v24 = 0x4000000000000000i64;
	*(_DWORD*)(v24 + 8) = 3;
	v2[2] += 16i64;
	v25 = v2[2];
	v26 = sub_140062650((__int64)v2, (unsigned __int64*)"TooltipGenerateType_ItemData", 0x1Cui64);
	v27 = (unsigned int*)(v2[2] - 16i64);
	v73 = v26;
	v74 = 4;
	sub_14005EA50((__int64)v2, (__int64*)(v25 - 32), (int*)&v73, v27);
	v2[2] -= 16i64;
	v28 = v2[2];
	*(_QWORD*)v28 = 0x4008000000000000i64;
	*(_DWORD*)(v28 + 8) = 3;
	v2[2] += 16i64;
	v29 = v2[2];
	v30 = sub_140062650((__int64)v2, (unsigned __int64*)"TooltipGenerateType_ItemInstance", 0x20ui64);
	v31 = (unsigned int*)(v2[2] - 16i64);
	v73 = v30;
	v74 = 4;
	sub_14005EA50((__int64)v2, (__int64*)(v29 - 32), (int*)&v73, v31);
	v2[2] -= 16i64;
	v32 = v2[2];
	*(_QWORD*)v32 = 0x4010000000000000i64;
	*(_DWORD*)(v32 + 8) = 3;
	v2[2] += 16i64;
	v33 = v2[2];
	v34 = sub_140062650((__int64)v2, (unsigned __int64*)"TooltipGenerateType_Spell", 0x19ui64);
	v35 = (unsigned int*)(v2[2] - 16i64);
	v73 = v34;
	v74 = 4;
	sub_14005EA50((__int64)v2, (__int64*)(v33 - 32), (int*)&v73, v35);
	v2[2] -= 16i64;
	v36 = v2[2];
	*(_QWORD*)v36 = 0x4014000000000000i64;
	*(_DWORD*)(v36 + 8) = 3;
	v2[2] += 16i64;
	v37 = v2[2];
	v38 = sub_140062650((__int64)v2, (unsigned __int64*)"TooltipGenerateType_GameCommand", 0x1Fui64);
	v39 = (unsigned int*)(v2[2] - 16i64);
	v73 = v38;
	v74 = 4;
	sub_14005EA50((__int64)v2, (__int64*)(v37 - 32), (int*)&v73, v39);
	v2[2] -= 16i64;
	v40 = v2[2];
	*(_QWORD*)v40 = 0x4018000000000000i64;
	*(_DWORD*)(v40 + 8) = 3;
	v2[2] += 16i64;
	v41 = v2[2];
	v42 = sub_140062650((__int64)v2, (unsigned __int64*)"TooltipGenerateType_Map", 0x17ui64);
	v43 = (unsigned int*)(v2[2] - 16i64);
	v73 = v42;
	v74 = 4;
	sub_14005EA50((__int64)v2, (__int64*)(v41 - 32), (int*)&v73, v43);
	v2[2] -= 16i64;
	v44 = v2[2];
	*(_QWORD*)v44 = 0x401C000000000000i64;
	*(_DWORD*)(v44 + 8) = 3;
	v2[2] += 16i64;
	v45 = v2[2];
	v46 = sub_140062650((__int64)v2, (unsigned __int64*)"TooltipGenerateType_UnitOrProp", 0x1Eui64);
	v47 = (unsigned int*)(v2[2] - 16i64);
	v73 = v46;
	v74 = 4;
	sub_14005EA50((__int64)v2, (__int64*)(v45 - 32), (int*)&v73, v47);
	v2[2] -= 16i64;
	v48 = v2[2];
	*(_QWORD*)v48 = 0x4020000000000000i64;
	*(_DWORD*)(v48 + 8) = 3;
	v2[2] += 16i64;
	v49 = v2[2];
	v50 = sub_140062650((__int64)v2, (unsigned __int64*)"TooltipGenerateType_Macro", 0x19ui64);
	v51 = (unsigned int*)(v2[2] - 16i64);
	v73 = v50;
	v74 = 4;
	sub_14005EA50((__int64)v2, (__int64*)(v49 - 32), (int*)&v73, v51);
	v2[2] -= 16i64;
	v52 = v2[2];
	*(_QWORD*)v52 = 0x4022000000000000i64;
	*(_DWORD*)(v52 + 8) = 3;
	v2[2] += 16i64;
	v53 = v2[2];
	v54 = sub_140062650((__int64)v2, (unsigned __int64*)"TooltipGenerateType_Reputation", 0x1Eui64);
	v55 = (unsigned int*)(v2[2] - 16i64);
	v73 = v54;
	v74 = 4;
	sub_14005EA50((__int64)v2, (__int64*)(v53 - 32), (int*)&v73, v55);
	v2[2] -= 16i64;
	v56 = v2[2];
	*(_QWORD*)v56 = 0x4024000000000000i64;
	*(_DWORD*)(v56 + 8) = 3;
	v2[2] += 16i64;
	v57 = v2[2];
	v58 = sub_140062650((__int64)v2, (unsigned __int64*)"TooltipGenerateType_Money", 0x19ui64);
	v59 = (unsigned int*)(v2[2] - 16i64);
	v73 = v58;
	v74 = 4;
	sub_14005EA50((__int64)v2, (__int64*)(v57 - 32), (int*)&v73, v59);
	v2[2] -= 16i64;
	v60 = v2[2];
	*(_QWORD*)v60 = 0x4026000000000000i64;
	*(_DWORD*)(v60 + 8) = 3;
	v2[2] += 16i64;
	v61 = v2[2];
	v62 = sub_140062650((__int64)v2, (unsigned __int64*)"TooltipGenerateType_TradeSkill", 0x1Eui64);
	v63 = (unsigned int*)(v2[2] - 16i64);
	v73 = v62;
	v74 = 4;
	sub_14005EA50((__int64)v2, (__int64*)(v61 - 32), (int*)&v73, v63);
	v2[2] -= 16i64;
	v64 = v2[2];
	*(_QWORD*)v64 = 0x4028000000000000i64;
	*(_DWORD*)(v64 + 8) = 3;
	v2[2] += 16i64;
	v65 = v2[2];
	v66 = sub_140062650((__int64)v2, (unsigned __int64*)"TooltipGenerateType_Xp", 0x16ui64);
	v67 = (unsigned int*)(v2[2] - 16i64);
	v73 = v66;
	v74 = 4;
	sub_14005EA50((__int64)v2, (__int64*)(v65 - 32), (int*)&v73, v67);
	v2[2] -= 16i64;
	v68 = v2[2];
	*(_QWORD*)v68 = 0x402A000000000000i64;
	*(_DWORD*)(v68 + 8) = 3;
	v2[2] += 16i64;
	v69 = v2[2];
	v70 = sub_140062650((__int64)v2, (unsigned __int64*)"TooltipGenerateType_PetCommand", 0x1Eui64);
	v71 = v2[2];
	v74 = 4;
	v73 = v70;
	sub_14005EA50((__int64)v2, (__int64*)(v69 - 32), (int*)&v73, (unsigned int*)(v71 - 16));
	v2[2] -= 32i64;
	return a1;
}
// 140B725A0: using guessed type char *off_140B725A0;
// 140C65C48: using guessed type __int64 qword_140C65C48;

