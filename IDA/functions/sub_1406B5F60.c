#include "../winhttp.h"

//----- (00000001406B5F60) ----------------------------------------------------
__int64 __fastcall sub_1406B5F60(_QWORD* a1)
{
	__int64 v2; // rdx
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned int* v5; // r9
	__int64 v6; // rax
	char** v7; // rbx
	char* v8; // rsi
	__int64 v9; // rax
	__int64 v10; // r8
	_QWORD* v11; // rax
	__int64 v12; // rcx
	__int64* v13; // rax
	unsigned __int64* v14; // r10
	unsigned __int64 v15; // r8
	__int64* v16; // rsi
	__int64 v17; // rax
	unsigned int* v18; // r9
	__int64 v19; // rax
	__int64 v20; // rbx
	__int64 v21; // rax
	unsigned int* v22; // r9
	__int64 v23; // rax
	__int64 v24; // rbx
	__int64 v25; // rax
	unsigned int* v26; // r9
	__int64 v27; // rax
	__int64 v28; // rbx
	__int64 v29; // rax
	unsigned int* v30; // r9
	__int64 v31; // rax
	__int64 v32; // rbx
	__int64 v33; // rax
	unsigned int* v34; // r9
	__int64 v35; // rax
	__int64 v36; // rbx
	__int64 v37; // rax
	unsigned int* v38; // r9
	__int64 v39; // rax
	__int64 v40; // rbx
	__int64 v41; // rax
	unsigned int* v42; // r9
	__int64 v43; // rax
	__int64 v44; // rbx
	__int64 v45; // rax
	unsigned int* v46; // r9
	__int64 v47; // rax
	__int64 v48; // rbx
	__int64 v49; // rax
	unsigned int* v50; // r9
	__int64 v52; // [rsp+20h] [rbp-10h] BYREF
	int v53; // [rsp+28h] [rbp-8h]

	sub_1400569B0((__int64)a1, (unsigned __int64*)"Game.MailSystem");
	v2 = a1[2];
	*(_QWORD*)v2 = *(_QWORD*)(v2 - 16);
	*(_DWORD*)(v2 + 8) = *(_DWORD*)(v2 - 8);
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"__index", 7ui64);
	v5 = (unsigned int*)(a1[2] - 16i64);
	v52 = v4;
	v53 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v52, v5);
	a1[2] -= 16i64;
	v6 = a1[2];
	v7 = &off_140B700B0;
	if ("GetMessageInfo")
	{
		do
		{
			v8 = v7[1];
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v9 = a1[5];
			if (v9 == a1[10])
				v10 = a1[15];
			else
				v10 = *(_QWORD*)(**(_QWORD**)(v9 + 8) + 24i64);
			v11 = sub_140060AB0((__int64)a1, 0, v10);
			v11[4] = v8;
			v12 = a1[2];
			*(_QWORD*)v12 = v11;
			*(_DWORD*)(v12 + 8) = 6;
			a1[2] += 16i64;
			v13 = (__int64*)sub_1400580E0((__int64)a1, -2);
			v15 = -1i64;
			v16 = v13;
			do
				++v15;
			while (*((_BYTE*)v14 + v15));
			v17 = sub_140062650((__int64)a1, v14, v15);
			v18 = (unsigned int*)(a1[2] - 16i64);
			v52 = v17;
			v53 = 4;
			sub_14005EA50((__int64)a1, v16, (int*)&v52, v18);
			a1[2] -= 16i64;
			v6 = a1[2];
			v7 += 2;
		} while (*v7);
	}
	a1[2] = v6;
	sub_140057020(a1, "MailSystemLib", &off_140B70180);
	v19 = a1[2];
	*(_QWORD*)v19 = 0i64;
	*(_DWORD*)(v19 + 8) = 3;
	a1[2] += 16i64;
	v20 = a1[2];
	v21 = sub_140062650((__int64)a1, (unsigned __int64*)"EmailType_Character", 0x13ui64);
	v22 = (unsigned int*)(a1[2] - 16i64);
	v52 = v21;
	v53 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v20 - 32), (int*)&v52, v22);
	a1[2] -= 16i64;
	v23 = a1[2];
	*(_QWORD*)v23 = 0x3FF0000000000000i64;
	*(_DWORD*)(v23 + 8) = 3;
	a1[2] += 16i64;
	v24 = a1[2];
	v25 = sub_140062650((__int64)a1, (unsigned __int64*)"EmailType_Creature", 0x12ui64);
	v26 = (unsigned int*)(a1[2] - 16i64);
	v52 = v25;
	v53 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v24 - 32), (int*)&v52, v26);
	a1[2] -= 16i64;
	v27 = a1[2];
	*(_QWORD*)v27 = 0x4000000000000000i64;
	*(_DWORD*)(v27 + 8) = 3;
	a1[2] += 16i64;
	v28 = a1[2];
	v29 = sub_140062650((__int64)a1, (unsigned __int64*)"EmailType_GMMail", 0x10ui64);
	v30 = (unsigned int*)(a1[2] - 16i64);
	v52 = v29;
	v53 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v28 - 32), (int*)&v52, v30);
	a1[2] -= 16i64;
	v31 = a1[2];
	*(_QWORD*)v31 = 0x4010000000000000i64;
	*(_DWORD*)(v31 + 8) = 3;
	a1[2] += 16i64;
	v32 = a1[2];
	v33 = sub_140062650((__int64)a1, (unsigned __int64*)"EmailType_CommodityAuction", 0x1Aui64);
	v34 = (unsigned int*)(a1[2] - 16i64);
	v52 = v33;
	v53 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v32 - 32), (int*)&v52, v34);
	a1[2] -= 16i64;
	v35 = a1[2];
	*(_DWORD*)(v35 + 8) = 3;
	*(_QWORD*)v35 = 0x4014000000000000i64;
	a1[2] += 16i64;
	v36 = a1[2];
	v37 = sub_140062650((__int64)a1, (unsigned __int64*)"EmailType_ItemAuction", 0x15ui64);
	v38 = (unsigned int*)(a1[2] - 16i64);
	v52 = v37;
	v53 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v36 - 32), (int*)&v52, v38);
	a1[2] -= 16i64;
	v39 = a1[2];
	*(_QWORD*)v39 = 0i64;
	*(_DWORD*)(v39 + 8) = 3;
	a1[2] += 16i64;
	v40 = a1[2];
	v41 = sub_140062650((__int64)a1, (unsigned __int64*)"MailDeliverySpeed_Instant", 0x19ui64);
	v42 = (unsigned int*)(a1[2] - 16i64);
	v52 = v41;
	v53 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v40 - 32), (int*)&v52, v42);
	a1[2] -= 16i64;
	v43 = a1[2];
	*(_QWORD*)v43 = 0x3FF0000000000000i64;
	*(_DWORD*)(v43 + 8) = 3;
	a1[2] += 16i64;
	v44 = a1[2];
	v45 = sub_140062650((__int64)a1, (unsigned __int64*)"MailDeliverySpeed_Hour", 0x16ui64);
	v46 = (unsigned int*)(a1[2] - 16i64);
	v52 = v45;
	v53 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v44 - 32), (int*)&v52, v46);
	a1[2] -= 16i64;
	v47 = a1[2];
	*(_QWORD*)v47 = 0x4000000000000000i64;
	*(_DWORD*)(v47 + 8) = 3;
	a1[2] += 16i64;
	v48 = a1[2];
	v49 = sub_140062650((__int64)a1, (unsigned __int64*)"MailDeliverySpeed_Day", 0x15ui64);
	v50 = (unsigned int*)(a1[2] - 16i64);
	v52 = v49;
	v53 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v48 - 32), (int*)&v52, v50);
	a1[2] -= 16i64;
	return 1i64;
}
// 1406B6073: variable 'v14' is possibly undefined
// 140B700B0: using guessed type char *off_140B700B0;
// 140B70180: using guessed type void *off_140B70180;

