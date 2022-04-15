//----- (000000014072EE90) ----------------------------------------------------
__int64 __fastcall sub_14072EE90(_QWORD* a1)
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
	__int64 v51; // rax
	__int64 v52; // rbx
	__int64 v53; // rax
	unsigned int* v54; // r9
	__int64 v55; // rax
	__int64 v56; // rbx
	__int64 v57; // rax
	unsigned int* v58; // r9
	__int64 v59; // rax
	__int64 v60; // rbx
	__int64 v61; // rax
	unsigned int* v62; // r9
	__int64 v63; // rax
	__int64 v64; // rbx
	__int64 v65; // rax
	unsigned int* v66; // r9
	__int64 v67; // rax
	__int64 v68; // rbx
	unsigned int* v69; // r9
	__int64 v70; // rax
	__int64 v71; // rbx
	__int64 v72; // rax
	unsigned int* v73; // r9
	__int64 v75; // [rsp+20h] [rbp-10h] BYREF
	int v76; // [rsp+28h] [rbp-8h]

	sub_1400569B0((__int64)a1, (unsigned __int64*)"Game.DialogResponse");
	v2 = a1[2];
	*(_QWORD*)v2 = *(_QWORD*)(v2 - 16);
	*(_DWORD*)(v2 + 8) = *(_DWORD*)(v2 - 8);
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"__index", 7ui64);
	v5 = (unsigned int*)(a1[2] - 16i64);
	v75 = v4;
	v76 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v75, v5);
	a1[2] -= 16i64;
	v6 = a1[2];
	v7 = &off_140C5EE40;
	if (off_140C5EE40)
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
			v75 = v17;
			v76 = 4;
			sub_14005EA50((__int64)a1, v16, (int*)&v75, v18);
			a1[2] -= 16i64;
			v6 = a1[2];
			v7 += 2;
		} while (*v7);
	}
	a1[2] = v6;
	sub_140057020(a1, "DialogResponse", &off_140B746F0);
	v19 = a1[2];
	*(_QWORD*)v19 = 0i64;
	*(_DWORD*)(v19 + 8) = 3;
	a1[2] += 16i64;
	v20 = a1[2];
	v21 = sub_140062650((__int64)a1, (unsigned __int64*)"DialogResponseType_ViewVending", 0x1Eui64);
	v22 = (unsigned int*)(a1[2] - 16i64);
	v75 = v21;
	v76 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v20 - 32), (int*)&v75, v22);
	a1[2] -= 16i64;
	v23 = a1[2];
	*(_QWORD*)v23 = 0x3FF0000000000000i64;
	*(_DWORD*)(v23 + 8) = 3;
	a1[2] += 16i64;
	v24 = a1[2];
	v25 = sub_140062650((__int64)a1, (unsigned __int64*)"DialogResponseType_ViewTraining", 0x1Fui64);
	v26 = (unsigned int*)(a1[2] - 16i64);
	v75 = v25;
	v76 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v24 - 32), (int*)&v75, v26);
	a1[2] -= 16i64;
	v27 = a1[2];
	*(_QWORD*)v27 = 0x4000000000000000i64;
	*(_DWORD*)(v27 + 8) = 3;
	a1[2] += 16i64;
	v28 = a1[2];
	v29 = sub_140062650((__int64)a1, (unsigned __int64*)"DialogResponseType_ViewTradeskillTraining", 0x29ui64);
	v30 = (unsigned int*)(a1[2] - 16i64);
	v75 = v29;
	v76 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v28 - 32), (int*)&v75, v30);
	a1[2] -= 16i64;
	v31 = a1[2];
	*(_QWORD*)v31 = 0x4008000000000000i64;
	*(_DWORD*)(v31 + 8) = 3;
	a1[2] += 16i64;
	v32 = a1[2];
	v33 = sub_140062650((__int64)a1, (unsigned __int64*)"DialogResponseType_ViewCraftingStation", 0x26ui64);
	v34 = (unsigned int*)(a1[2] - 16i64);
	v75 = v33;
	v76 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v32 - 32), (int*)&v75, v34);
	a1[2] -= 16i64;
	v35 = a1[2];
	*(_DWORD*)(v35 + 8) = 3;
	*(_QWORD*)v35 = 0x4010000000000000i64;
	a1[2] += 16i64;
	v36 = a1[2];
	v37 = sub_140062650((__int64)a1, (unsigned __int64*)"DialogResponseType_ViewGuildRegistrar", 0x25ui64);
	v38 = (unsigned int*)(a1[2] - 16i64);
	v75 = v37;
	v76 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v36 - 32), (int*)&v75, v38);
	a1[2] -= 16i64;
	v39 = a1[2];
	*(_QWORD*)v39 = 0x4014000000000000i64;
	*(_DWORD*)(v39 + 8) = 3;
	a1[2] += 16i64;
	v40 = a1[2];
	v41 = sub_140062650((__int64)a1, (unsigned __int64*)"DialogResponseType_ViewWarPartyRegistrar", 0x28ui64);
	v42 = (unsigned int*)(a1[2] - 16i64);
	v75 = v41;
	v76 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v40 - 32), (int*)&v75, v42);
	a1[2] -= 16i64;
	v43 = a1[2];
	*(_QWORD*)v43 = 0x4018000000000000i64;
	*(_DWORD*)(v43 + 8) = 3;
	a1[2] += 16i64;
	v44 = a1[2];
	v45 = sub_140062650((__int64)a1, (unsigned __int64*)"DialogResponseType_ViewQuestAccept", 0x22ui64);
	v46 = (unsigned int*)(a1[2] - 16i64);
	v75 = v45;
	v76 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v44 - 32), (int*)&v75, v46);
	a1[2] -= 16i64;
	v47 = a1[2];
	*(_QWORD*)v47 = 0x401C000000000000i64;
	*(_DWORD*)(v47 + 8) = 3;
	a1[2] += 16i64;
	v48 = a1[2];
	v49 = sub_140062650((__int64)a1, (unsigned __int64*)"DialogResponseType_ViewQuestComplete", 0x24ui64);
	v50 = (unsigned int*)(a1[2] - 16i64);
	v75 = v49;
	v76 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v48 - 32), (int*)&v75, v50);
	a1[2] -= 16i64;
	v51 = a1[2];
	*(_QWORD*)v51 = 0x4020000000000000i64;
	*(_DWORD*)(v51 + 8) = 3;
	a1[2] += 16i64;
	v52 = a1[2];
	v53 = sub_140062650((__int64)a1, (unsigned __int64*)"DialogResponseType_ViewQuestIncomplete", 0x26ui64);
	v54 = (unsigned int*)(a1[2] - 16i64);
	v75 = v53;
	v76 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v52 - 32), (int*)&v75, v54);
	a1[2] -= 16i64;
	v55 = a1[2];
	*(_QWORD*)v55 = 0x4022000000000000i64;
	*(_DWORD*)(v55 + 8) = 3;
	a1[2] += 16i64;
	v56 = a1[2];
	v57 = sub_140062650((__int64)a1, (unsigned __int64*)"DialogResponseType_Goodbye", 0x1Aui64);
	v58 = (unsigned int*)(a1[2] - 16i64);
	v75 = v57;
	v76 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v56 - 32), (int*)&v75, v58);
	a1[2] -= 16i64;
	v59 = a1[2];
	*(_QWORD*)v59 = 0x4024000000000000i64;
	*(_DWORD*)(v59 + 8) = 3;
	a1[2] += 16i64;
	v60 = a1[2];
	v61 = sub_140062650((__int64)a1, (unsigned __int64*)"DialogResponseType_QuestComplete", 0x20ui64);
	v62 = (unsigned int*)(a1[2] - 16i64);
	v75 = v61;
	v76 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v60 - 32), (int*)&v75, v62);
	a1[2] -= 16i64;
	v63 = a1[2];
	*(_QWORD*)v63 = 0x4026000000000000i64;
	*(_DWORD*)(v63 + 8) = 3;
	a1[2] += 16i64;
	v64 = a1[2];
	v65 = sub_140062650((__int64)a1, (unsigned __int64*)"DialogResponseType_QuestAccept", 0x1Eui64);
	v66 = (unsigned int*)(a1[2] - 16i64);
	v75 = v65;
	v76 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v64 - 32), (int*)&v75, v66);
	a1[2] -= 16i64;
	v67 = a1[2];
	*(_QWORD*)v67 = 0x4028000000000000i64;
	*(_DWORD*)(v67 + 8) = 3;
	a1[2] += 16i64;
	v68 = a1[2];
	v75 = sub_140062650((__int64)a1, (unsigned __int64*)"DialogResponseType_QuestIncomplete", 0x22ui64);
	v69 = (unsigned int*)(a1[2] - 16i64);
	v76 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v68 - 32), (int*)&v75, v69);
	a1[2] -= 16i64;
	v70 = a1[2];
	*(_DWORD*)(v70 + 8) = 3;
	*(_QWORD*)v70 = 0x402A000000000000i64;
	a1[2] += 16i64;
	v71 = a1[2];
	v72 = sub_140062650((__int64)a1, (unsigned __int64*)"DialogResponseType_QuestMoreInfo", 0x20ui64);
	v73 = (unsigned int*)(a1[2] - 16i64);
	v75 = v72;
	v76 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v71 - 32), (int*)&v75, v73);
	a1[2] -= 16i64;
	return 1i64;
}
// 14072EFA3: variable 'v14' is possibly undefined
// 140B746F0: using guessed type void *off_140B746F0;
// 140C5EE40: using guessed type char *off_140C5EE40;

