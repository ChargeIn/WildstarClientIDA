//----- (00000001406F3DE0) ----------------------------------------------------
__int64 __fastcall sub_1406F3DE0(_QWORD* a1)
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
	__int64 v34; // rbx
	__int64 v35; // rax
	__int64 v36; // rax
	__int64* v37; // rax
	__int64 v38; // rax
	__int64* v39; // rax
	__int64 v40; // rax
	__int64* v41; // rax
	__int64 v42; // rax
	__int64* v43; // rax
	__int64 v44; // rbx
	__int64 v45; // rax
	__int64 v46; // rax
	__int64* v47; // rax
	__int64 v48; // rax
	__int64* v49; // rax
	__int64 v50; // rax
	__int64* v51; // rax
	__int64 v52; // rsi
	__int64 v53; // rbx
	__int64 v54; // rax
	__int64 v55; // rax
	__int64* v56; // rax
	__int64 v57; // rax
	__int64* v58; // rax
	__int64 v59; // rax
	__int64* v60; // rax
	__int64 v61; // rax
	__int64 v62; // rbx
	__int64 v63; // rax
	__int64 v64; // rbx
	__int64 v65; // rax
	__int64 v66; // rdx
	wchar_t** v67; // rbx
	__int64* v68; // rax
	__int64 v70; // [rsp+20h] [rbp-10h] BYREF
	int v71; // [rsp+28h] [rbp-8h]

	sub_140057020(a1, "PetCustomizationLib", &off_140B72690);
	v2 = a1[2];
	*(_QWORD*)v2 = 0i64;
	*(_DWORD*)(v2 + 8) = 3;
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"PetFlairType_ScanBotRom", 0x17ui64);
	v5 = (unsigned int*)(a1[2] - 16i64);
	v70 = v4;
	v71 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v70, v5);
	a1[2] -= 16i64;
	v6 = a1[2];
	*(_QWORD*)v6 = 0x3FF0000000000000i64;
	*(_DWORD*)(v6 + 8) = 3;
	a1[2] += 16i64;
	v7 = a1[2];
	v8 = sub_140062650((__int64)a1, (unsigned __int64*)"PetFlairType_ScanBotVanity", 0x1Aui64);
	v9 = (unsigned int*)(a1[2] - 16i64);
	v70 = v8;
	v71 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v7 - 32), (int*)&v70, v9);
	a1[2] -= 16i64;
	v10 = a1[2];
	*(_QWORD*)v10 = 0x4000000000000000i64;
	*(_DWORD*)(v10 + 8) = 3;
	a1[2] += 16i64;
	v11 = a1[2];
	v12 = sub_140062650((__int64)a1, (unsigned __int64*)"PetFlairType_GroundMountFront", 0x1Dui64);
	v13 = (unsigned int*)(a1[2] - 16i64);
	v70 = v12;
	v71 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v11 - 32), (int*)&v70, v13);
	a1[2] -= 16i64;
	v14 = a1[2];
	*(_QWORD*)v14 = 0x4008000000000000i64;
	*(_DWORD*)(v14 + 8) = 3;
	a1[2] += 16i64;
	v15 = a1[2];
	v16 = sub_140062650((__int64)a1, (unsigned __int64*)"PetFlairType_GroundMountBack", 0x1Cui64);
	v17 = (unsigned int*)(a1[2] - 16i64);
	v70 = v16;
	v71 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v15 - 32), (int*)&v70, v17);
	a1[2] -= 16i64;
	v18 = a1[2];
	*(_DWORD*)(v18 + 8) = 3;
	*(_QWORD*)v18 = 0x4010000000000000i64;
	a1[2] += 16i64;
	v19 = a1[2];
	v20 = sub_140062650((__int64)a1, (unsigned __int64*)"PetFlairType_GroundMountSide", 0x1Cui64);
	v21 = (unsigned int*)(a1[2] - 16i64);
	v70 = v20;
	v71 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v19 - 32), (int*)&v70, v21);
	a1[2] -= 16i64;
	v22 = a1[2];
	*(_QWORD*)v22 = 0x4014000000000000i64;
	*(_DWORD*)(v22 + 8) = 3;
	a1[2] += 16i64;
	v23 = a1[2];
	v24 = sub_140062650((__int64)a1, (unsigned __int64*)"PetFlairType_HoverMountFront", 0x1Cui64);
	v25 = (unsigned int*)(a1[2] - 16i64);
	v70 = v24;
	v71 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v23 - 32), (int*)&v70, v25);
	a1[2] -= 16i64;
	v26 = a1[2];
	*(_QWORD*)v26 = 0x4018000000000000i64;
	*(_DWORD*)(v26 + 8) = 3;
	a1[2] += 16i64;
	v27 = a1[2];
	v28 = sub_140062650((__int64)a1, (unsigned __int64*)"PetFlairType_HoverMountBack", 0x1Bui64);
	v29 = (unsigned int*)(a1[2] - 16i64);
	v70 = v28;
	v71 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v27 - 32), (int*)&v70, v29);
	a1[2] -= 16i64;
	v30 = a1[2];
	*(_QWORD*)v30 = 0x401C000000000000i64;
	*(_DWORD*)(v30 + 8) = 3;
	a1[2] += 16i64;
	v31 = a1[2];
	v32 = sub_140062650((__int64)a1, (unsigned __int64*)"PetFlairType_HoverMountSide", 0x1Bui64);
	v33 = (unsigned int*)(a1[2] - 16i64);
	v70 = v32;
	v71 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v31 - 32), (int*)&v70, v33);
	a1[2] -= 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"MountSlot", 9ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v34 = a1[2];
	v35 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v34 + 8) = 5;
	*(_QWORD*)v34 = v35;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Front", 5ui64);
	v36 = a1[2];
	*(_QWORD*)v36 = 0i64;
	*(_DWORD*)(v36 + 8) = 3;
	a1[2] += 16i64;
	v37 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v37, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Back", 4ui64);
	v38 = a1[2];
	*(_QWORD*)v38 = 0x3FF0000000000000i64;
	*(_DWORD*)(v38 + 8) = 3;
	a1[2] += 16i64;
	v39 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v39, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Left", 4ui64);
	v40 = a1[2];
	*(_QWORD*)v40 = 0x4000000000000000i64;
	*(_DWORD*)(v40 + 8) = 3;
	a1[2] += 16i64;
	v41 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v41, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Right", 5ui64);
	v42 = a1[2];
	*(_QWORD*)v42 = 0x4008000000000000i64;
	*(_DWORD*)(v42 + 8) = 3;
	a1[2] += 16i64;
	v43 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v43, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"HoverboardSlot", 0xEui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v44 = a1[2];
	v45 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v44 + 8) = 5;
	*(_QWORD*)v44 = v45;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Front", 5ui64);
	v46 = a1[2];
	*(_QWORD*)v46 = 0i64;
	*(_DWORD*)(v46 + 8) = 3;
	a1[2] += 16i64;
	v47 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v47, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Back", 4ui64);
	v48 = a1[2];
	*(_QWORD*)v48 = 0x3FF0000000000000i64;
	*(_DWORD*)(v48 + 8) = 3;
	a1[2] += 16i64;
	v49 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v49, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Sides", 5ui64);
	v50 = a1[2];
	*(_QWORD*)v50 = 0x4000000000000000i64;
	*(_DWORD*)(v50 + 8) = 3;
	a1[2] += 16i64;
	v51 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v51, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	v52 = 7i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"PetType", 7ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v53 = a1[2];
	v54 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v53 + 8) = 5;
	*(_QWORD*)v53 = v54;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Scanbot", 7ui64);
	v55 = a1[2];
	*(_QWORD*)v55 = 0i64;
	*(_DWORD*)(v55 + 8) = 3;
	a1[2] += 16i64;
	v56 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v56, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"GroundMount", 0xBui64);
	v57 = a1[2];
	*(_QWORD*)v57 = 0x3FF0000000000000i64;
	*(_DWORD*)(v57 + 8) = 3;
	a1[2] += 16i64;
	v58 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v58, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"HoverBoard", 0xAui64);
	v59 = a1[2];
	*(_QWORD*)v59 = 0x4000000000000000i64;
	*(_DWORD*)(v59 + 8) = 3;
	a1[2] += 16i64;
	v60 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v60, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	v61 = a1[2];
	*(_DWORD*)(v61 + 8) = 3;
	*(_QWORD*)v61 = 0x4050400000000000i64;
	a1[2] += 16i64;
	v62 = a1[2];
	v63 = sub_140062650((__int64)a1, (unsigned __int64*)"HoverboardAttachmentPoint", 0x19ui64);
	v71 = 4;
	v70 = v63;
	sub_14005EA50((__int64)a1, (__int64*)(v62 - 32), (int*)&v70, (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"PetCustomizeResult", 0x12ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v64 = a1[2];
	v65 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v64 + 8) = 5;
	*(_QWORD*)v64 = v65;
	a1[2] += 16i64;
	v67 = &off_140C36F70;
	do
	{
		sub_1400F06F0((__int64)a1, v66, *v67, *((_DWORD*)v67 + 2));
		v67 += 2;
		--v52;
	} while (v52);
	v68 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v68, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 1406F460A: variable 'v66' is possibly undefined
// 140B72690: using guessed type char *off_140B72690;
// 140C36F70: using guessed type wchar_t *off_140C36F70;

