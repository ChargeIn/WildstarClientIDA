#include "../winhttp.h"

//----- (00000001400D5450) ----------------------------------------------------
__int64 __fastcall sub_1400D5450(_QWORD* a1)
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
	__int64 v42; // rbx
	__int64 v43; // rax
	__int64 v44; // rax
	__int64* v45; // rax
	__int64 v46; // rax
	__int64* v47; // rax
	__int64 v48; // rax
	__int64* v49; // rax
	__int64 v50; // rax
	__int64* v51; // rax
	__int64 v52; // rax
	__int64* v53; // rax
	__int64 v54; // rax
	__int64* v55; // rax
	__int64 v56; // rax
	__int64* v57; // rax
	__int64 v58; // rax
	__int64* v59; // rax
	__int64 v60; // rax
	__int64* v61; // rax
	__int64 v62; // rax
	__int64* v63; // rax
	__int64 v64; // rax
	__int64* v65; // rax
	__int64 v66; // rax
	__int64* v67; // rax
	__int64 v68; // rax
	__int64* v69; // rax
	__int64 v70; // rax
	__int64* v71; // rax
	__int64 v72; // rax
	__int64* v73; // rax
	__int64 v74; // rax
	__int64* v75; // rax
	__int64 v76; // rax
	__int64* v77; // rax
	__int64 v78; // rax
	__int64* v79; // rax
	__int64 v80; // rax
	__int64* v81; // rax
	__int64 v82; // rax
	__int64* v83; // rax
	__int64 v84; // rax
	__int64* v85; // rax
	__int64 v86; // rax
	__int64* v87; // rax
	__int64 v88; // rax
	__int64* v89; // rax
	__int64 v90; // rax
	__int64* v91; // rax
	__int64 v92; // rax
	__int64* v93; // rax
	__int64 v94; // rax
	__int64* v95; // rax
	__int64 v97; // [rsp+20h] [rbp-10h] BYREF
	int v98; // [rsp+28h] [rbp-8h]

	sub_140057020(a1, "Window", &off_140B56538);
	v2 = a1[2];
	*(_QWORD*)v2 = 0i64;
	*(_DWORD*)(v2 + 8) = 3;
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"Anchor_Left", 0xBui64);
	v5 = (unsigned int*)(a1[2] - 16i64);
	v97 = v4;
	v98 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v97, v5);
	a1[2] -= 16i64;
	v6 = a1[2];
	*(_QWORD*)v6 = 0x3FF0000000000000i64;
	*(_DWORD*)(v6 + 8) = 3;
	a1[2] += 16i64;
	v7 = a1[2];
	v8 = sub_140062650((__int64)a1, (unsigned __int64*)"Anchor_Top", 0xAui64);
	v9 = (unsigned int*)(a1[2] - 16i64);
	v97 = v8;
	v98 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v7 - 32), (int*)&v97, v9);
	a1[2] -= 16i64;
	v10 = a1[2];
	*(_QWORD*)v10 = 0x4000000000000000i64;
	*(_DWORD*)(v10 + 8) = 3;
	a1[2] += 16i64;
	v11 = a1[2];
	v12 = sub_140062650((__int64)a1, (unsigned __int64*)"Anchor_Right", 0xCui64);
	v13 = (unsigned int*)(a1[2] - 16i64);
	v97 = v12;
	v98 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v11 - 32), (int*)&v97, v13);
	a1[2] -= 16i64;
	v14 = a1[2];
	*(_QWORD*)v14 = 0x4008000000000000i64;
	*(_DWORD*)(v14 + 8) = 3;
	a1[2] += 16i64;
	v15 = a1[2];
	v16 = sub_140062650((__int64)a1, (unsigned __int64*)"Anchor_Bottom", 0xDui64);
	v17 = (unsigned int*)(a1[2] - 16i64);
	v97 = v16;
	v98 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v15 - 32), (int*)&v97, v17);
	a1[2] -= 16i64;
	v18 = a1[2];
	*(_QWORD*)v18 = 0i64;
	*(_DWORD*)(v18 + 8) = 3;
	a1[2] += 16i64;
	v19 = a1[2];
	v20 = sub_140062650((__int64)a1, (unsigned __int64*)"TPT_OnCursor", 0xCui64);
	v21 = (unsigned int*)(a1[2] - 16i64);
	v97 = v20;
	v98 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v19 - 32), (int*)&v97, v21);
	a1[2] -= 16i64;
	v22 = a1[2];
	*(_QWORD*)v22 = 0x3FF0000000000000i64;
	*(_DWORD*)(v22 + 8) = 3;
	a1[2] += 16i64;
	v23 = a1[2];
	v24 = sub_140062650((__int64)a1, (unsigned __int64*)"TPT_NavText", 0xBui64);
	v25 = (unsigned int*)(a1[2] - 16i64);
	v97 = v24;
	v98 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v23 - 32), (int*)&v97, v25);
	a1[2] -= 16i64;
	v26 = a1[2];
	*(_QWORD*)v26 = 0x4000000000000000i64;
	*(_DWORD*)(v26 + 8) = 3;
	a1[2] += 16i64;
	v27 = a1[2];
	v28 = sub_140062650((__int64)a1, (unsigned __int64*)"TPT_UserDraw", 0xCui64);
	v29 = (unsigned int*)(a1[2] - 16i64);
	v97 = v28;
	v98 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v27 - 32), (int*)&v97, v29);
	a1[2] -= 16i64;
	v30 = a1[2];
	*(_QWORD*)v30 = 0x4008000000000000i64;
	*(_DWORD*)(v30 + 8) = 3;
	a1[2] += 16i64;
	v31 = a1[2];
	v32 = sub_140062650((__int64)a1, (unsigned __int64*)"TPT_DynamicFloater", 0x12ui64);
	v33 = (unsigned int*)(a1[2] - 16i64);
	v97 = v32;
	v98 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v31 - 32), (int*)&v97, v33);
	a1[2] -= 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumArrangeOrigin", 0x15ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v34 = a1[2];
	v35 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v34 + 8) = 5;
	*(_QWORD*)v34 = v35;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"LeftOrTop", 9ui64);
	v36 = a1[2];
	*(_QWORD*)v36 = 0i64;
	*(_DWORD*)(v36 + 8) = 3;
	a1[2] += 16i64;
	v37 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v37, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Middle", 6ui64);
	v38 = a1[2];
	*(_QWORD*)v38 = 0x3FF0000000000000i64;
	*(_DWORD*)(v38 + 8) = 3;
	a1[2] += 16i64;
	v39 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v39, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"RightOrBottom", 0xDui64);
	v40 = a1[2];
	*(_QWORD*)v40 = 0x4000000000000000i64;
	*(_DWORD*)(v40 + 8) = 3;
	a1[2] += 16i64;
	v41 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v41, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"MoveMethod", 0xAui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v42 = a1[2];
	v43 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v42 + 8) = 5;
	*(_QWORD*)v42 = v43;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Nothing", 7ui64);
	v44 = a1[2];
	*(_QWORD*)v44 = 0i64;
	*(_DWORD*)(v44 + 8) = 3;
	a1[2] += 16i64;
	v45 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v45, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Simple", 6ui64);
	v46 = a1[2];
	*(_QWORD*)v46 = 0x3FF0000000000000i64;
	*(_DWORD*)(v46 + 8) = 3;
	a1[2] += 16i64;
	v47 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v47, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseInSine", 0xAui64);
	v48 = a1[2];
	*(_QWORD*)v48 = 0x4000000000000000i64;
	*(_DWORD*)(v48 + 8) = 3;
	a1[2] += 16i64;
	v49 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v49, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseOutSine", 0xBui64);
	v50 = a1[2];
	*(_QWORD*)v50 = 0x4008000000000000i64;
	*(_DWORD*)(v50 + 8) = 3;
	a1[2] += 16i64;
	v51 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v51, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseInOutSine", 0xDui64);
	v52 = a1[2];
	*(_QWORD*)v52 = 0x4010000000000000i64;
	*(_DWORD*)(v52 + 8) = 3;
	a1[2] += 16i64;
	v53 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v53, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseInQuad", 0xAui64);
	v54 = a1[2];
	*(_QWORD*)v54 = 0x4014000000000000i64;
	*(_DWORD*)(v54 + 8) = 3;
	a1[2] += 16i64;
	v55 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v55, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseOutQuad", 0xBui64);
	v56 = a1[2];
	*(_QWORD*)v56 = 0x4018000000000000i64;
	*(_DWORD*)(v56 + 8) = 3;
	a1[2] += 16i64;
	v57 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v57, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseInOutQuad", 0xDui64);
	v58 = a1[2];
	*(_QWORD*)v58 = 0x401C000000000000i64;
	*(_DWORD*)(v58 + 8) = 3;
	a1[2] += 16i64;
	v59 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v59, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseInCubic", 0xBui64);
	v60 = a1[2];
	*(_QWORD*)v60 = 0x4020000000000000i64;
	*(_DWORD*)(v60 + 8) = 3;
	a1[2] += 16i64;
	v61 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v61, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseOutCubic", 0xCui64);
	v62 = a1[2];
	*(_QWORD*)v62 = 0x4022000000000000i64;
	*(_DWORD*)(v62 + 8) = 3;
	a1[2] += 16i64;
	v63 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v63, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseInOutCubic", 0xEui64);
	v64 = a1[2];
	*(_QWORD*)v64 = 0x4024000000000000i64;
	*(_DWORD*)(v64 + 8) = 3;
	a1[2] += 16i64;
	v65 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v65, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseInQuart", 0xBui64);
	v66 = a1[2];
	*(_QWORD*)v66 = 0x4026000000000000i64;
	*(_DWORD*)(v66 + 8) = 3;
	a1[2] += 16i64;
	v67 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v67, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseOutQuart", 0xCui64);
	v68 = a1[2];
	*(_QWORD*)v68 = 0x4028000000000000i64;
	*(_DWORD*)(v68 + 8) = 3;
	a1[2] += 16i64;
	v69 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v69, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseInOutQuart", 0xEui64);
	v70 = a1[2];
	*(_QWORD*)v70 = 0x402A000000000000i64;
	*(_DWORD*)(v70 + 8) = 3;
	a1[2] += 16i64;
	v71 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v71, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseInQuint", 0xBui64);
	v72 = a1[2];
	*(_QWORD*)v72 = 0x402C000000000000i64;
	*(_DWORD*)(v72 + 8) = 3;
	a1[2] += 16i64;
	v73 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v73, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseOutQuint", 0xCui64);
	v74 = a1[2];
	*(_QWORD*)v74 = 0x402E000000000000i64;
	*(_DWORD*)(v74 + 8) = 3;
	a1[2] += 16i64;
	v75 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v75, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseInOutQuint", 0xEui64);
	v76 = a1[2];
	*(_QWORD*)v76 = 0x4030000000000000i64;
	*(_DWORD*)(v76 + 8) = 3;
	a1[2] += 16i64;
	v77 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v77, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseInExpo", 0xAui64);
	v78 = a1[2];
	*(_QWORD*)v78 = 0x4031000000000000i64;
	*(_DWORD*)(v78 + 8) = 3;
	a1[2] += 16i64;
	v79 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v79, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseOutExpo", 0xBui64);
	v80 = a1[2];
	*(_QWORD*)v80 = 0x4032000000000000i64;
	*(_DWORD*)(v80 + 8) = 3;
	a1[2] += 16i64;
	v81 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v81, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseInOutExpo", 0xDui64);
	v82 = a1[2];
	*(_QWORD*)v82 = 0x4033000000000000i64;
	*(_DWORD*)(v82 + 8) = 3;
	a1[2] += 16i64;
	v83 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v83, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseInCirc", 0xAui64);
	v84 = a1[2];
	*(_QWORD*)v84 = 0x4034000000000000i64;
	*(_DWORD*)(v84 + 8) = 3;
	a1[2] += 16i64;
	v85 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v85, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseOutCirc", 0xBui64);
	v86 = a1[2];
	*(_QWORD*)v86 = 0x4035000000000000i64;
	*(_DWORD*)(v86 + 8) = 3;
	a1[2] += 16i64;
	v87 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v87, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseInOutCirc", 0xDui64);
	v88 = a1[2];
	*(_QWORD*)v88 = 0x4036000000000000i64;
	*(_DWORD*)(v88 + 8) = 3;
	a1[2] += 16i64;
	v89 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v89, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseInBack", 0xAui64);
	v90 = a1[2];
	*(_QWORD*)v90 = 0x4037000000000000i64;
	*(_DWORD*)(v90 + 8) = 3;
	a1[2] += 16i64;
	v91 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v91, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseOutBack", 0xBui64);
	v92 = a1[2];
	*(_QWORD*)v92 = 0x4038000000000000i64;
	*(_DWORD*)(v92 + 8) = 3;
	a1[2] += 16i64;
	v93 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v93, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EaseInOutBack", 0xDui64);
	v94 = a1[2];
	*(_QWORD*)v94 = 0x4039000000000000i64;
	*(_DWORD*)(v94 + 8) = 3;
	a1[2] += 16i64;
	v95 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v95, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	return 0i64;
}
// 140B56538: using guessed type char *off_140B56538;

