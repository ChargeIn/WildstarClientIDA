#include "../winhttp.h"

//----- (000000014050F270) ----------------------------------------------------
__int64 __fastcall sub_14050F270(_QWORD* a1)
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
	__int64 v36; // rax
	unsigned int* v37; // r9
	__int64 v39; // [rsp+20h] [rbp-10h] BYREF
	int v40; // [rsp+28h] [rbp-8h]

	sub_140057020(a1, "DialogSys", &off_140B6A7C0);
	v2 = a1[2];
	*(_QWORD*)v2 = 0i64;
	*(_DWORD*)(v2 + 8) = 3;
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"DialogState_Inactive", 0x14ui64);
	v5 = (unsigned int*)(a1[2] - 16i64);
	v39 = v4;
	v40 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v39, v5);
	a1[2] -= 16i64;
	v6 = a1[2];
	*(_QWORD*)v6 = 0x3FF0000000000000i64;
	*(_DWORD*)(v6 + 8) = 3;
	a1[2] += 16i64;
	v7 = a1[2];
	v8 = sub_140062650((__int64)a1, (unsigned __int64*)"DialogState_TopicChoice", 0x17ui64);
	v9 = (unsigned int*)(a1[2] - 16i64);
	v39 = v8;
	v40 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v7 - 32), (int*)&v39, v9);
	a1[2] -= 16i64;
	v10 = a1[2];
	*(_QWORD*)v10 = 0x4000000000000000i64;
	*(_DWORD*)(v10 + 8) = 3;
	a1[2] += 16i64;
	v11 = a1[2];
	v12 = sub_140062650((__int64)a1, (unsigned __int64*)"DialogState_QuestAccept", 0x17ui64);
	v13 = (unsigned int*)(a1[2] - 16i64);
	v39 = v12;
	v40 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v11 - 32), (int*)&v39, v13);
	a1[2] -= 16i64;
	v14 = a1[2];
	*(_QWORD*)v14 = 0x4008000000000000i64;
	*(_DWORD*)(v14 + 8) = 3;
	a1[2] += 16i64;
	v15 = a1[2];
	v16 = sub_140062650((__int64)a1, (unsigned __int64*)"DialogState_QuestComplete", 0x19ui64);
	v17 = (unsigned int*)(a1[2] - 16i64);
	v39 = v16;
	v40 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v15 - 32), (int*)&v39, v17);
	a1[2] -= 16i64;
	v18 = a1[2];
	*(_QWORD*)v18 = 0x4010000000000000i64;
	*(_DWORD*)(v18 + 8) = 3;
	a1[2] += 16i64;
	v19 = a1[2];
	v20 = sub_140062650((__int64)a1, (unsigned __int64*)"DialogState_QuestIncomplete", 0x1Bui64);
	v21 = (unsigned int*)(a1[2] - 16i64);
	v39 = v20;
	v40 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v19 - 32), (int*)&v39, v21);
	a1[2] -= 16i64;
	v22 = a1[2];
	*(_QWORD*)v22 = 0x4014000000000000i64;
	*(_DWORD*)(v22 + 8) = 3;
	a1[2] += 16i64;
	v23 = a1[2];
	v24 = sub_140062650((__int64)a1, (unsigned __int64*)"DialogState_Vending", 0x13ui64);
	v25 = (unsigned int*)(a1[2] - 16i64);
	v39 = v24;
	v40 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v23 - 32), (int*)&v39, v25);
	a1[2] -= 16i64;
	v26 = a1[2];
	*(_QWORD*)v26 = 0x4018000000000000i64;
	*(_DWORD*)(v26 + 8) = 3;
	a1[2] += 16i64;
	v27 = a1[2];
	v28 = sub_140062650((__int64)a1, (unsigned __int64*)"DialogState_Training", 0x14ui64);
	v29 = (unsigned int*)(a1[2] - 16i64);
	v39 = v28;
	v40 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v27 - 32), (int*)&v39, v29);
	a1[2] -= 16i64;
	v30 = a1[2];
	*(_QWORD*)v30 = 0x401C000000000000i64;
	*(_DWORD*)(v30 + 8) = 3;
	a1[2] += 16i64;
	v31 = a1[2];
	v32 = sub_140062650((__int64)a1, (unsigned __int64*)"DialogState_TradeskillTraining", 0x1Eui64);
	v33 = (unsigned int*)(a1[2] - 16i64);
	v39 = v32;
	v40 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v31 - 32), (int*)&v39, v33);
	a1[2] -= 16i64;
	v34 = a1[2];
	*(_QWORD*)v34 = 0x4020000000000000i64;
	*(_DWORD*)(v34 + 8) = 3;
	a1[2] += 16i64;
	v35 = a1[2];
	v36 = sub_140062650((__int64)a1, (unsigned __int64*)"DialogState_CraftingStation", 0x1Bui64);
	v37 = (unsigned int*)(a1[2] - 16i64);
	v39 = v36;
	v40 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v35 - 32), (int*)&v39, v37);
	a1[2] -= 16i64;
	return 0i64;
}
// 140B6A7C0: using guessed type char *off_140B6A7C0;

