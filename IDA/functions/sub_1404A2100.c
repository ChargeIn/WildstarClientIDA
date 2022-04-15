#include "../winhttp.h"

//----- (00000001404A2100) ----------------------------------------------------
__int64 __fastcall sub_1404A2100(__int64 a1, _QWORD* a2, __int64 a3)
{
	unsigned int v3; // ebp
	_QWORD* v5; // rbx
	__int64 v7; // rax
	unsigned int v8; // r8d
	__int64 v9; // rcx
	__int64 v10; // rax
	int v11; // edx
	unsigned int v12; // r9d
	unsigned int v13; // r8d
	__int64 v14; // rax
	bool v15; // zf
	unsigned int v16; // edi
	int v17; // ebp
	unsigned int v18; // eax
	__int64 v19; // rcx
	unsigned int v20; // edi
	int v21; // ebp
	unsigned int v22; // eax
	__int64 v23; // rcx
	unsigned int v24; // edi
	int v25; // ebp
	float v26; // xmm0_4
	__int64 v27; // rcx
	__int64 v28; // rbx
	int v29; // edi
	int v30; // ebp
	float v31; // xmm6_4
	float v32; // xmm0_4
	__int64 v33; // rcx
	__int64 v34; // rcx
	__int64 v35; // rax
	float v36; // xmm2_4
	__int64 v37; // rcx
	__int64 v38; // rdx
	__int64 v39; // rax
	float v40; // xmm3_4
	float v41; // xmm2_4
	__int64 v42; // rax
	__int64 v43; // rcx
	__int64 v44; // rax
	unsigned int v45; // ecx
	_QWORD* v46; // rax
	int v47; // edi
	float v48; // xmm6_4
	__int64 v49; // rcx
	float v50; // xmm0_4
	__int64 v51; // rcx
	__int64 v52; // rbx
	int v53; // edi
	__int64 v54; // rax
	BOOL v55; // ecx
	int v56; // edi
	__int64 v57; // rax
	__int64 v58; // rbx
	float v59; // xmm0_4
	__int64 v60; // rcx
	__int64 v61; // rax
	__int64 v62; // rcx
	__int64 v63; // rcx
	__int64 v64; // rax
	int v65; // edi
	unsigned int v66; // eax
	int v67; // edi
	__int64 v68; // rdx
	int v69; // r8d
	unsigned int v70; // ebp
	int v71; // r15d
	__int64 v72; // rdi
	__int64 v73; // rbx
	unsigned int v74; // eax
	int v75; // r15d
	__int64 v76; // rax
	__int64 v77; // rcx
	unsigned int v78; // ebp
	__int64 v79; // rax
	int v80; // edi
	int v81; // edi
	unsigned int v82; // eax
	__int64 v83; // rcx
	__int64 v84; // rax
	int v85; // ebp
	int v86; // edi
	_QWORD* v87; // rbx
	int v88; // edi
	__m128* v89; // rcx
	__m128* v90; // rax
	__m128 v91; // xmm2
	__m128 v92; // xmm1
	__int64 v93; // r9
	__int64 v94; // r9
	__int64 v95; // r9
	__int64 v96; // r9
	__int64 v97; // r9
	__int64 v98; // r9
	unsigned int v99; // ebx
	int v100; // edi
	double v101; // xmm0_8
	__int64 v102; // rcx
	unsigned int v103; // eax
	__int64 v104; // rdi
	int v105; // r13d
	__int64 v106; // r15
	unsigned __int64 v107; // r12
	_QWORD* v108; // rdi
	BOOL v109; // r15d
	unsigned int i; // edi
	__int64 v111; // rax
	__int16* v112; // r8
	const wchar_t* v113; // rax
	_QWORD* v114; // rax
	unsigned int j; // ebx
	__int64 v116; // rax
	const wchar_t* v117; // r8
	_QWORD* v118; // rax
	__int64 v120; // [rsp+30h] [rbp-88h] BYREF
	__int64 v121; // [rsp+38h] [rbp-80h]
	__int64 v122; // [rsp+50h] [rbp-68h] BYREF
	__int64 v123; // [rsp+58h] [rbp-60h]
	unsigned int v124; // [rsp+C0h] [rbp+8h] BYREF
	__int64 v125; // [rsp+D0h] [rbp+18h]

	v3 = 0;
	*(_DWORD*)(a1 + 64) = *(_DWORD*)a3;
	v5 = a2;
	switch (*(_DWORD*)a3)
	{
	case 1:
		v7 = *a2;
		if (*a2)
		{
			v8 = *(_DWORD*)(v7 + 60);
			if (!v8)
				v8 = *(_DWORD*)(v7 + 56);
			v3 = sub_1404A2090(0x140000000i64, *(_DWORD*)(a3 + 4), v8, *(_DWORD*)(a3 + 12));
		}
		goto LABEL_433;
	case 2:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 48i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 3:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 64i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 4:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 88i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 5:
		v47 = *(_DWORD*)(a3 + 4);
		v48 = (float)*(int*)(a3 + 12);
		if (*a2)
		{
			v49 = *(_QWORD*)(*a2 + 280i64);
			if (!v49)
				goto LABEL_98;
			v50 = (*(float(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v49 + 32i64))(v49, *(unsigned int*)(a3 + 8));
			v3 = sub_1404A2010(v51, v47, v50, v48);
		}
		goto LABEL_433;
	case 6:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 1048i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 7:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 1064i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 8:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 280i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 9:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 1056i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0xA:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 80i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xB:
		v104 = *(_QWORD*)(a1 + 56);
		v105 = *(_DWORD*)(a1 + 48);
		v124 = *(_DWORD*)(a3 + 8);
		v125 = v104;
		if (!*(_DWORD*)(a1 + 108))
			goto LABEL_420;
		v106 = *(_QWORD*)(a1 + 8);
		v107 = (*(__int64(__fastcall**)(unsigned int*))(v106 + 24))(&v124);
		v108 = *(_QWORD**)(*(_QWORD*)(v106 + 16) + 8 * (v107 % *(_QWORD*)(v106 + 8)));
		if (!v108)
			goto LABEL_433;
		while (v107 != *v108 || !(*(unsigned int(__fastcall**)(unsigned int*, _QWORD*))(v106 + 32))(&v124, v108 + 2))
		{
			v108 = (_QWORD*)v108[1];
			if (!v108)
				goto LABEL_433;
		}
		if (v108 != (_QWORD*)-24i64)
		{
			v109 = (*(_BYTE*)(v108[3] + 4i64) & 1) != 0;
			for (i = 0; i < *(_DWORD*)(a1 + 104); ++i)
			{
				v111 = 0i64;
				do
					v15 = asc_140B685B8[++v111] == 0;
				while (!v15);
				sub_14001C310((_QWORD*)(a1 + 72), (int*)L"    ", (int*)&asc_140B685B8[v111]);
			}
			v112 = &word_140B7B704;
			if (*(_DWORD*)(a3 + 4) == 2)
				v112 = L"NOT";
			v113 = L"  AND";
			if (v109)
				v113 = L"  OR";
			v114 = sub_14018EFA0(&v120, (__int64)L"- %s Nested Prereq Id (%d)  %s\n", v112, v124, v113);
			sub_14001C310((_QWORD*)(a1 + 72), (int*)v114[1], (int*)v114[2]);
			if (v121)
				sub_14018B900(v121, 0);
			++* (_DWORD*)(a1 + 104);
			v104 = v125;
		LABEL_420:
			if (*(_DWORD*)(a3 + 4) == 2)
				LOBYTE(v3) = (unsigned int)sub_1404A1CA0(a1, v5) == 0;
			else
				v3 = sub_1404A1CA0(a1, v5);
			v15 = *(_DWORD*)(a1 + 108) == 0;
			*(_DWORD*)(a1 + 48) = v105;
			*(_QWORD*)(a1 + 56) = v104;
			if (!v15)
			{
				for (j = 0; j < *(_DWORD*)(a1 + 104); ++j)
				{
					v116 = 0i64;
					do
						v15 = asc_140B685B8[++v116] == 0;
					while (!v15);
					sub_14001C310((_QWORD*)(a1 + 72), (int*)L"    ", (int*)&asc_140B685B8[v116]);
				}
				v117 = L"FAIL";
				if (v3)
					v117 = L"PASS";
				v118 = sub_14018EFA0(&v122, (__int64)L"  - NESTED RESULT: %s\n", v117);
				sub_14001C310((_QWORD*)(a1 + 72), (int*)v118[1], (int*)v118[2]);
				if (v123)
					sub_14018B900(v123, 0);
				--* (_DWORD*)(a1 + 104);
			}
		}
		goto LABEL_433;
	case 0xC:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 128i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xD:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 288i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xE:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 296i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xF:
		v3 = sub_1404A4EC0(0x140000000i64, *a2, *(_DWORD*)(a3 + 4), *(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x10:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, float))(*(_QWORD*)a1 + 632i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			(float)*(int*)(a3 + 12));
		goto LABEL_433;
	case 0x12:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 912i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x13:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 984i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x14:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 776i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x16:
		v103 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD*)a1 + 1032i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			0,
			*(_DWORD*)(a3 + 12));
		goto LABEL_311;
	case 0x17:
		v103 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, int, _DWORD))(*(_QWORD*)a1 + 1032i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			1,
			*(_DWORD*)(a3 + 12));
		goto LABEL_311;
	case 0x18:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 656i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x19:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 664i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x1A:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 672i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x1B:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 680i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x1C:
		if (!*a2)
			goto LABEL_433;
		LODWORD(a2) = *(_DWORD*)(*a2 + 684i64);
		goto LABEL_28;
	case 0x1D:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 904i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x1E:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 752i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x1F:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 872i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x21:
		v103 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, int, _DWORD))(*(_QWORD*)a1 + 1032i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			2,
			*(_DWORD*)(a3 + 12));
		goto LABEL_311;
	case 0x22:
		v103 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, int, _DWORD))(*(_QWORD*)a1 + 1032i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			3,
			*(_DWORD*)(a3 + 12));
		goto LABEL_311;
	case 0x23:
		v103 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, int, _DWORD))(*(_QWORD*)a1 + 1032i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			4,
			*(_DWORD*)(a3 + 12));
		goto LABEL_311;
	case 0x24:
		v103 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, int, _DWORD))(*(_QWORD*)a1 + 1032i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			5,
			*(_DWORD*)(a3 + 12));
	LABEL_311:
		v3 = v103;
		goto LABEL_433;
	case 0x25:
		v99 = *(_DWORD*)(a3 + 12);
		v100 = *(_DWORD*)(a3 + 4);
		v101 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890);
		v3 = sub_1404A2090(v102, v100, 1 - (int)(v101 * -100.0), v99);
		goto LABEL_433;
	case 0x26:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 848i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x27:
		v14 = *a2;
		if (!*a2)
			goto LABEL_433;
		LODWORD(a2) = 0;
		v15 = *(_DWORD*)(v14 + 128) == 20;
		goto LABEL_27;
	case 0x28:
		v3 = sub_1404A4D90(0x140000000i64, *a2, *(_DWORD*)(a3 + 4), *(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x29:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, float))(*(_QWORD*)a1 + 688i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			(float)*(int*)(a3 + 12));
		goto LABEL_433;
	case 0x2A:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 784i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4));
		goto LABEL_433;
	case 0x2B:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 1016i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x2C:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 880i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x2E:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 696i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x2F:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 760i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x30:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 488i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4));
		goto LABEL_433;
	case 0x31:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 920i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12),
			*((unsigned int*)a2 + 12));
		goto LABEL_433;
	case 0x32:
		v64 = a2[1];
		v65 = *(_DWORD*)(a3 + 4);
		if (!*a2)
			goto LABEL_433;
		if (!v64)
			goto LABEL_136;
		v66 = sub_1404699F0(*a2, *(_DWORD*)(v64 + 8), *(_DWORD*)(a3 + 12));
		goto LABEL_139;
	case 0x33:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 312i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x34:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1144i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x35:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1152i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x36:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1160i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x37:
		v34 = *a2;
		v35 = *(int*)(a3 + 8);
		if (!*a2)
			goto LABEL_433;
		if ((unsigned int)v35 > 0xC4)
			goto LABEL_59;
		v36 = *(float*)(v34 + 8 * v35 + 1476);
		goto LABEL_61;
	case 0x38:
		v43 = *a2;
		v44 = *(int*)(a3 + 12);
		if (!*a2)
			goto LABEL_433;
		LODWORD(a2) = 0;
		if ((int)v44 < 28)
			LOBYTE(a2) = *(_QWORD*)(v43 + 16 * v44 + 728) != 0i64;
		goto LABEL_28;
	case 0x3B:
		v3 = sub_1404A4F60(0x140000000i64, *a2, *(_DWORD*)(a3 + 4), *(_DWORD*)(a3 + 8), *(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x3C:
		v78 = *(_DWORD*)(a3 + 12);
		v79 = a2[1];
		v80 = *(_DWORD*)(a3 + 4);
		if (*a2)
		{
			if (v79)
			{
				v82 = sub_14046A110(*a2, *(_DWORD*)(v79 + 8), *(_DWORD*)(a3 + 8));
				v3 = sub_1404A2090(v83, v80, v82, v78);
			}
			else
			{
				v81 = v80 - 1;
				if (v81)
				{
					if (v81 == 1)
						LABEL_271:
					v3 = 1;
					else
						v3 = 0;
				}
				else
				{
				LABEL_179:
					v3 = 0;
				}
			}
		}
		else
		{
			v3 = 0;
		}
		goto LABEL_433;
	case 0x3D:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 1184i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x3E:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 1192i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			a2[1],
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x3F:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 120i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4));
		goto LABEL_433;
	case 0x40:
		v34 = *a2;
		v42 = *(int*)(a3 + 8);
		if (!*a2)
			goto LABEL_433;
		if ((int)v42 < 11)
			v36 = *(float*)(v34 + 4 * v42 + 540);
		else
			LABEL_59:
		v36 = 0.0;
	LABEL_61:
		v3 = sub_1404A2010(v34, *(_DWORD*)(a3 + 4), v36, (float)*(int*)(a3 + 12));
		goto LABEL_433;
	case 0x41:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 856i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x42:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 864i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x43:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1168i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x44:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 1024i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x45:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1088i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x46:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 1096i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x47:
		v3 = sub_1404A4E30(
			0x140000000i64,
			(unsigned int*)*a2,
			*(_DWORD*)(a3 + 4),
			*(_DWORD*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x49:
		v24 = *(_DWORD*)(a3 + 12);
		v25 = *(_DWORD*)(a3 + 4);
		if (*a2)
		{
			v26 = COERCE_FLOAT(sub_140466520(*a2, *(_DWORD*)(a3 + 8)));
			v3 = sub_1404A2090(v27, v25, (int)v26, v24);
		}
		else
		{
			v3 = 0;
		}
		goto LABEL_433;
	case 0x4A:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1104i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x4C:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 768i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x4D:
		if (!*a2)
			goto LABEL_433;
		v45 = 0;
		v46 = (_QWORD*)(*a2 + 728i64);
		while (!*v46)
		{
			++v45;
			v46 += 2;
			if (v45 >= 0x1C)
			{
			LABEL_71:
				LODWORD(a2) = 0;
				goto LABEL_28;
			}
		}
		goto LABEL_72;
	case 0x4E:
		v62 = *a2;
		if (!*a2)
			goto LABEL_433;
		LODWORD(a2) = 0;
		v15 = *(_DWORD*)(v62 + 4232) == *(_DWORD*)(a3 + 12);
	LABEL_27:
		LOBYTE(a2) = v15;
		goto LABEL_28;
	case 0x4F:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 216i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4));
		goto LABEL_433;
	case 0x50:
		v20 = *(_DWORD*)(a3 + 12);
		v21 = *(_DWORD*)(a3 + 4);
		if (*a2)
		{
			v22 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*a2 + 64i64))(*a2);
			v3 = sub_1404A2090(v23, v21, v22, v20);
		}
		else
		{
			v3 = 0;
		}
		goto LABEL_433;
	case 0x51:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 336i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x52:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 72i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x53:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 224i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x54:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 232i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x55:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 240i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x56:
		if (!*a2)
			goto LABEL_433;
		LODWORD(a2) = *(_DWORD*)(*a2 + 4208i64) & 0x40;
		goto LABEL_28;
	case 0x57:
		if (!*a2)
			goto LABEL_433;
		LODWORD(a2) = *(_DWORD*)(*a2 + 4208i64) & 2;
		goto LABEL_28;
	case 0x58:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 344i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			a2[1]);
		goto LABEL_433;
	case 0x59:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 352i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			a2[1]);
		goto LABEL_433;
	case 0x5A:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 704i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4));
		goto LABEL_433;
	case 0x5B:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1200i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x5C:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 360i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x5D:
		v68 = *a2;
		if (!v68)
			goto LABEL_433;
		a2 = *(_QWORD**)(v68 + 5576);
		if (!a2)
			goto LABEL_71;
		v69 = *(_DWORD*)(a3 + 8);
		while (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a2[7] + 312i64) + 112i64) + 248i64) != v69)
		{
			a2 = (_QWORD*)a2[3];
			if (!a2)
				goto LABEL_28;
		}
	LABEL_72:
		LODWORD(a2) = 1;
	LABEL_28:
		if (*(_DWORD*)(a3 + 4) == 1)
		{
			v3 = (unsigned int)a2;
		}
		else if (*(_DWORD*)(a3 + 4) == 2)
		{
			LOBYTE(v3) = (_DWORD)a2 == 0;
		}
		goto LABEL_433;
	case 0x5E:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))(*(_QWORD*)a1 + 1040i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12),
			a2[1]);
		goto LABEL_433;
	case 0x5F:
		v89 = (__m128*) * a2;
		v90 = (__m128*)a2[1];
		v11 = *(_DWORD*)(a3 + 4);
		if (!*v5)
			goto LABEL_433;
		if (!v90)
			goto LABEL_8;
		v91 = _mm_sub_ps(v90[286], v89[286]);
		v92 = _mm_mul_ps(v91, v91);
		v3 = sub_1404A2090(
			(__int64)v89,
			v11,
			(int)(float)((float)(v92.m128_f32[0] + _mm_shuffle_ps(v92, v92, 85).m128_f32[0])
				+ _mm_shuffle_ps(v92, v92, 170).m128_f32[0]),
			*(_DWORD*)(a3 + 12) * *(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x60:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 432i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			a2[1]);
		goto LABEL_433;
	case 0x61:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 440i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			a2[1]);
		goto LABEL_433;
	case 0x62:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 448i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			a2[1]);
		goto LABEL_433;
	case 0x63:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 456i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			a2[1]);
		goto LABEL_433;
	case 0x64:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 464i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			a2[1]);
		goto LABEL_433;
	case 0x65:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 472i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			a2[1]);
		goto LABEL_433;
	case 0x66:
		v3 = sub_1404A4FE0(0x140000000i64, *a2, *(_DWORD*)(a3 + 4), *(_DWORD*)(a3 + 8));
		goto LABEL_433;
	case 0x67:
		v84 = a2[1];
		v65 = *(_DWORD*)(a3 + 4);
		if (!*a2)
			goto LABEL_433;
		if (!v84)
			goto LABEL_136;
		v66 = sub_14046A190(*a2, *(_DWORD*)(v84 + 8), *(_DWORD*)(a3 + 8));
		goto LABEL_139;
	case 0x68:
		v65 = *(_DWORD*)(a3 + 4);
		if (!*a2)
			goto LABEL_433;
		v66 = sub_14046A210(*a2);
		goto LABEL_139;
	case 0x69:
		v85 = *(_DWORD*)(a3 + 8);
		v86 = *(_DWORD*)(a3 + 4);
		if (!*a2)
			goto LABEL_179;
		v87 = *(_QWORD**)(*a2 + 5584i64);
		if (!v87)
			goto LABEL_183;
		while ((*(unsigned int(__fastcall**)(_QWORD*))(*v87 + 56i64))(v87) != v85)
		{
			v87 = (_QWORD*)v87[6];
			if (!v87)
			{
			LABEL_183:
				v55 = 0;
				goto LABEL_184;
			}
		}
		v55 = 1;
	LABEL_184:
		v88 = v86 - 1;
		if (!v88)
			goto LABEL_188;
		v3 = 0;
		if (v88 == 1)
			LOBYTE(v3) = !v55;
		goto LABEL_433;
	case 0x6A:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 792i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			a2[1]);
		goto LABEL_433;
	case 0x6B:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1208i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			a2[1]);
		goto LABEL_433;
	case 0x6C:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 480i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			a2[1],
			*(_DWORD*)(a3 + 8));
		goto LABEL_433;
	case 0x6D:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 712i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x6E:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 1216i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x6F:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1304i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x70:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 1312i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x71:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, float))(*(_QWORD*)a1 + 1320i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			(float)*(int*)(a3 + 12));
		goto LABEL_433;
	case 0x72:
		v28 = *a2;
		v29 = *(_DWORD*)(a3 + 12);
		v30 = *(_DWORD*)(a3 + 4);
		if (*a2)
		{
			LODWORD(v31) = sub_140466520(v28, *(_DWORD*)(a3 + 8));
			LODWORD(v32) = sub_140466520(v28, v29);
			v3 = sub_1404A2010(v33, v30, v31, v32);
		}
		else
		{
			v3 = 0;
		}
		goto LABEL_433;
	case 0x73:
		v37 = *a2;
		v38 = *(int*)(a3 + 12);
		v39 = *(int*)(a3 + 8);
		if (*v5)
		{
			v40 = 0.0;
			if ((unsigned int)v39 > 0xC4)
				v41 = 0.0;
			else
				v41 = *(float*)(v37 + 8 * v39 + 1476);
			if ((unsigned int)v38 <= 0xC4)
				v40 = *(float*)(v37 + 8 * v38 + 1476);
			v3 = sub_1404A2010(v37, *(_DWORD*)(a3 + 4), v41, v40);
		}
		goto LABEL_433;
	case 0x74:
		if (!*a2)
			goto LABEL_433;
		LODWORD(a2) = *(_DWORD*)(*a2 + 84i64) > 1;
		goto LABEL_28;
	case 0x75:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 1336i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x76:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1344i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x77:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1352i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			a2[1]);
		goto LABEL_433;
	case 0x78:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 1360i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x79:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1368i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x7A:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1376i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x7B:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1384i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x7C:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 1120i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x7D:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1112i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x7E:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 1224i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x7F:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1232i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x80:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 104i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x81:
		v70 = *(_DWORD*)(a3 + 8);
		v71 = *(_DWORD*)(a3 + 4);
		if (!*a2)
		{
			v3 = 0;
			goto LABEL_433;
		}
		v72 = *(_QWORD*)(*a2 + 5576i64);
		if (!v72)
			goto LABEL_153;
		break;
	case 0x82:
		v76 = a2[1];
		v65 = *(_DWORD*)(a3 + 4);
		if (!*a2)
			goto LABEL_433;
		if (v76)
		{
			v66 = sub_140469A70(*a2, *(_DWORD*)(v76 + 8), *(_DWORD*)(a3 + 8));
		LABEL_139:
			v67 = v65 - 1;
			if (v67)
			{
				if (v67 == 1)
					LOBYTE(v3) = v66 == 0;
			}
			else
			{
			LABEL_401:
				v3 = v66;
			}
		}
		else
		{
		LABEL_136:
			if (v65 == 2)
				v3 = 1;
		}
		goto LABEL_433;
	case 0x83:
		v9 = *a2;
		v10 = a2[1];
		v11 = *(_DWORD*)(a3 + 4);
		if (!*v5)
			goto LABEL_433;
		if (v10)
		{
			v12 = *(_DWORD*)(v10 + 60);
			if (!v12)
				v12 = *(_DWORD*)(v10 + 56);
			v13 = *(_DWORD*)(v9 + 60);
			if (!v13)
				v13 = *(_DWORD*)(v9 + 56);
			v3 = sub_1404A2090(v9, v11, v13, v12);
		}
		else
		{
		LABEL_8:
			if (v11 == 2)
				v3 = 1;
		}
		goto LABEL_433;
	case 0x85:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1480i64))(
			a1,
			a2[2],
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x86:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1488i64))(
			a1,
			a2[2],
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x87:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1496i64))(
			a1,
			a2[2],
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x88:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1504i64))(
			a1,
			a2[3],
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x89:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1512i64))(
			a1,
			a2[3],
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x8A:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 1520i64))(
			a1,
			a2[2],
			a2[3],
			*(unsigned int*)(a3 + 4),
			*(_DWORD*)(a3 + 8));
		goto LABEL_433;
	case 0x8B:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1528i64))(
			a1,
			a2[2],
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x8C:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 1536i64))(
			a1,
			a2[3],
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x8D:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 640i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x8E:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 368i64))(
			a1,
			*((unsigned int*)a2 + 8),
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x8F:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 928i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x91:
		if (*(_DWORD*)(a3 + 4) != 1)
			goto LABEL_433;
		goto LABEL_271;
	case 0x92:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1544i64))(
			a1,
			a2[2],
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x93:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 720i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x94:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1256i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x95:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 136i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x96:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD*)a1 + 1264i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			a3,
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x97:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD*)a1 + 1272i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			a3,
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x98:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD*)a1 + 1280i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			a3,
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x99:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1240i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x9A:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1248i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x9B:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 1288i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12),
			*(_DWORD*)(a3 + 8));
		goto LABEL_433;
	case 0x9F:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 480i64))(
			a1,
			a2[1],
			*(unsigned int*)(a3 + 4),
			*a2,
			*(_DWORD*)(a3 + 8));
		goto LABEL_433;
	case 0xA0:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 1128i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0xA2:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD*)a1 + 1392i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			a3,
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xA3:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1400i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xA4:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD*)a1 + 1408i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			a3,
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xA6:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 1416i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4));
		goto LABEL_433;
	case 0xA7:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 1424i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xA8:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1440i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xA9:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1448i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xAA:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 144i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xAB:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1296i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			a2[1]);
		goto LABEL_433;
	case 0xAC:
		v57 = *a2;
		v47 = *(_DWORD*)(a3 + 4);
		v48 = (float)*(int*)(a3 + 12);
		if (*a2)
		{
			v58 = *(_QWORD*)(v57 + 3336);
			if (v58)
			{
				v59 = sub_14047A940((_QWORD*)*a2);
				v3 = sub_1404A2010(v60, v47, v59 * *(float*)(v58 + 140), v48);
			}
			else
			{
				v61 = sub_14022D500(*(_DWORD*)(v57 + 216));
				if (v61)
					v3 = sub_1404A2010(v49, v47, *(float*)(v61 + 40), v48);
				else
					LABEL_98:
				v3 = sub_1404A2010(v49, v47, 0.0, v48);
			}
		}
		goto LABEL_433;
	case 0xAD:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1552i64))(
			a1,
			a2[2],
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xAE:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1560i64))(
			a1,
			a2[2],
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xAF:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 992i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xB0:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1136i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			a2[1]);
		goto LABEL_433;
	case 0xB1:
		if (*a2)
			v3 = sub_1404A2090(0x140000000i64, *(_DWORD*)(a3 + 4), *(_DWORD*)(*a2 + 56i64), *(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0xB2:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 320i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xB3:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 888i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xB4:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 944i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xB6:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1568i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			a2[1]);
		goto LABEL_433;
	case 0xB7:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 808i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4));
		goto LABEL_433;
	case 0xB8:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 816i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			a2[1]);
		goto LABEL_433;
	case 0xB9:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 824i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xBA:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1576i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			a2[1]);
		goto LABEL_433;
	case 0xBB:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1608i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xBC:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 832i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xBD:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 728i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xBE:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1624i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xBF:
		v52 = *a2;
		v53 = *(_DWORD*)(a3 + 4);
		if (!*a2)
			goto LABEL_433;
		v54 = sub_140561C30(qword_140C65B70, *(_DWORD*)(v52 + 5632));
		if (!v54 && *(_QWORD*)(qword_140C65898 + 120) == v52)
		{
			v54 = sub_14039DF50(qword_140C65898);
			if (v54)
				v54 = sub_1404695E0(v54);
		}
		v55 = v54 != 0;
		v56 = v53 - 1;
		if (!v56)
			goto LABEL_188;
		if (v56 == 1)
			LOBYTE(v3) = v54 == 0;
		goto LABEL_433;
	case 0xC0:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 1584i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4));
		goto LABEL_433;
	case 0xC1:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 736i64))(a1, *(unsigned int*)(a3 + 4));
		goto LABEL_433;
	case 0xC2:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 248i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4));
		goto LABEL_433;
	case 0xC3:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 256i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4));
		goto LABEL_433;
	case 0xC4:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 56i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xC5:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 264i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4));
		goto LABEL_433;
	case 0xC6:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 272i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4));
		goto LABEL_433;
	case 0xC7:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1456i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xC8:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1464i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xC9:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 1072i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0xCB:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 840i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4));
		goto LABEL_433;
	case 0xCC:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 496i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4));
		goto LABEL_433;
	case 0xCD:
		v93 = (unsigned int)(50 * (*(_DWORD*)(a3 + 12) + 28));
		goto LABEL_229;
	case 0xCE:
		v94 = (unsigned int)(50 * (*(_DWORD*)(a3 + 12) + 28));
		goto LABEL_231;
	case 0xCF:
		v95 = (unsigned int)(50 * (*(_DWORD*)(a3 + 12) + 28));
		goto LABEL_233;
	case 0xD0:
		v96 = (unsigned int)(50 * (*(_DWORD*)(a3 + 12) + 28));
		goto LABEL_235;
	case 0xD1:
		v97 = (unsigned int)(50 * (*(_DWORD*)(a3 + 12) + 28));
		goto LABEL_237;
	case 0xD2:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 560i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xD3:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 568i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xD4:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 576i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xD5:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 584i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xD6:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 392i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xD7:
		v3 = sub_1404A4CF0(0x140000000i64, *a2, *(_DWORD*)(a3 + 4), *(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0xD8:
		v16 = *(_DWORD*)(a3 + 12);
		v17 = *(_DWORD*)(a3 + 4);
		if (*a2)
		{
			v18 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*a2 + 112i64))(*a2);
			v3 = sub_1404A2090(v19, v17, v18, v16);
		}
		else
		{
			v3 = 0;
		}
		goto LABEL_433;
	case 0xD9:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 504i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xDA:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1632i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xDB:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1640i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xDC:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 1176i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0xDD:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 400i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xDE:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 896i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4));
		goto LABEL_433;
	case 0xDF:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1080i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			a2[1]);
		goto LABEL_433;
	case 0xE0:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 952i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*((unsigned int*)a2 + 11));
		goto LABEL_433;
	case 0xE1:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 960i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*((unsigned int*)a2 + 11));
		goto LABEL_433;
	case 0xE2:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1648i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xE3:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 408i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xE4:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1000i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xE5:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1008i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xE6:
		v98 = (unsigned int)(50 * (*(_DWORD*)(a3 + 12) + 28));
		goto LABEL_239;
	case 0xE7:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 416i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xE8:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 648i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xE9:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 424i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xEA:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1616i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			a2[1]);
		goto LABEL_433;
	case 0xEB:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 152i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xEC:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 160i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xED:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 168i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xEE:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 176i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xEF:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 184i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xF0:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 744i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xF1:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 1592i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4));
		goto LABEL_433;
	case 0xF2:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 1432i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xF3:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 112i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xF4:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 192i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4));
		goto LABEL_433;
	case 0xF5:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1688i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0xF6:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 304i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xF8:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 1472i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0xFA:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 96i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0xFB:
		v93 = *(unsigned int*)(a3 + 12);
	LABEL_229:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)a1 + 512i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			v93);
		goto LABEL_433;
	case 0xFC:
		v94 = *(unsigned int*)(a3 + 12);
	LABEL_231:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)a1 + 520i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			v94);
		goto LABEL_433;
	case 0xFD:
		v95 = *(unsigned int*)(a3 + 12);
	LABEL_233:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)a1 + 528i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			v95);
		goto LABEL_433;
	case 0xFE:
		v96 = *(unsigned int*)(a3 + 12);
	LABEL_235:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)a1 + 536i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			v96);
		goto LABEL_433;
	case 0xFF:
		v97 = *(unsigned int*)(a3 + 12);
	LABEL_237:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)a1 + 544i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			v97);
		goto LABEL_433;
	case 0x100:
		v98 = *(unsigned int*)(a3 + 12);
	LABEL_239:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)a1 + 552i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			v98);
		goto LABEL_433;
	case 0x103:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 1328i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x104:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1600i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			a2[1]);
		goto LABEL_433;
	case 0x105:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 592i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x106:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 600i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x107:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 608i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x108:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 616i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x109:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 624i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x10A:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 200i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4));
		goto LABEL_433;
	case 0x10B:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 800i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4));
		goto LABEL_433;
	case 0x10C:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 968i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x10D:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 208i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x10E:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1664i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x10F:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 376i64))(
			a1,
			*((unsigned int*)a2 + 9),
			*(unsigned int*)(a3 + 4));
		goto LABEL_433;
	case 0x110:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 384i64))(
			a1,
			*((unsigned int*)a2 + 10),
			*(unsigned int*)(a3 + 4));
		goto LABEL_433;
	case 0x111:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 1656i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x113:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1696i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x114:
		if ((*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 680i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12))
			&& (*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 680i64))(
				a1,
				v5[1],
				*(unsigned int*)(a3 + 4),
				*(unsigned int*)(a3 + 12)))
		{
			v3 = 1;
		}
		goto LABEL_433;
	case 0x115:
		if ((*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 760i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12))
			&& (*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 760i64))(
				a1,
				v5[1],
				*(unsigned int*)(a3 + 4),
				*(unsigned int*)(a3 + 12)))
		{
			v3 = 1;
		}
		goto LABEL_433;
	case 0x116:
		if ((*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 768i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12))
			&& (*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 768i64))(
				a1,
				v5[1],
				*(unsigned int*)(a3 + 4),
				*(unsigned int*)(a3 + 8),
				*(_DWORD*)(a3 + 12)))
		{
			goto LABEL_271;
		}
		goto LABEL_433;
	case 0x117:
		if ((unsigned int)sub_1404A4EC0(0x140000000i64, *a2, *(_DWORD*)(a3 + 4), *(_DWORD*)(a3 + 12))
			&& (unsigned int)sub_1404A4EC0(v63, v5[1], *(_DWORD*)(a3 + 4), *(_DWORD*)(a3 + 12)))
		{
			v3 = 1;
		}
		goto LABEL_433;
	case 0x118:
		if (sub_1404A4F60(0x140000000i64, *a2, *(_DWORD*)(a3 + 4), *(_DWORD*)(a3 + 8), *(_DWORD*)(a3 + 12))
			&& sub_1404A4F60(v77, v5[1], *(_DWORD*)(a3 + 4), *(_DWORD*)(a3 + 8), *(_DWORD*)(a3 + 12)))
		{
			v3 = 1;
		}
		goto LABEL_433;
	case 0x119:
		if (!*a2)
			goto LABEL_433;
		LODWORD(a2) = *(_DWORD*)(*a2 + 4208i64) & 4;
		goto LABEL_28;
	case 0x11B:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1704i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			a2[1]);
		goto LABEL_433;
	case 0x11D:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1712i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12),
			a2[1]);
		goto LABEL_433;
	case 0x11E:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1672i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x11F:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1680i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x120:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 1720i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8));
		goto LABEL_433;
	case 0x121:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 976i64))(a1, *(unsigned int*)(a3 + 4));
		goto LABEL_433;
	case 0x122:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 936i64))(
			a1,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 12));
		goto LABEL_433;
	case 0x123:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 1728i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x124:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 1736i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x125:
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)a1 + 328i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4),
			*(unsigned int*)(a3 + 8),
			*(_DWORD*)(a3 + 12));
		goto LABEL_433;
	case 0x126:
		v66 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 1744i64))(
			a1,
			*a2,
			*(unsigned int*)(a3 + 4));
		goto LABEL_401;
	case 0x127:
		if (*a2 && *(_DWORD*)(a3 + 4) == 2)
			v3 = 1;
		goto LABEL_433;
	default:
		goto LABEL_433;
	}
	while (1)
	{
		v73 = *(_QWORD*)qword_140C65B70;
		v74 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v72 + 56) + 8i64))(*(_QWORD*)(v72 + 56));
		if ((*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD))(v73 + 56))(qword_140C65B70, v74, v70))
			break;
		v72 = *(_QWORD*)(v72 + 24);
		if (!v72)
		{
		LABEL_153:
			v55 = 0;
			goto LABEL_154;
		}
	}
	v55 = 1;
LABEL_154:
	v75 = v71 - 1;
	if (v75)
	{
		v3 = 0;
		if (v75 == 1)
			LOBYTE(v3) = !v55;
	}
	else
	{
	LABEL_188:
		v3 = v55;
	}
LABEL_433:
	if (*(_DWORD*)(a1 + 108) && *(_DWORD*)a3 != 11)
		sub_1404A5080(a1, *(_DWORD*)a3, v3);
	return v3;
}
// 1404A235B: variable 'v19' is possibly undefined
// 1404A23A1: variable 'v23' is possibly undefined
// 1404A23F2: variable 'v27' is possibly undefined
// 1404A2433: variable 'v33' is possibly undefined
// 1404A25E2: variable 'v51' is possibly undefined
// 1404A26F6: variable 'v60' is possibly undefined
// 1404A271F: variable 'v49' is possibly undefined
// 1404A2A9D: variable 'v63' is possibly undefined
// 1404A2C55: variable 'v77' is possibly undefined
// 1404A2CB5: variable 'v83' is possibly undefined
// 1404A3873: variable 'v102' is possibly undefined
// 1404A1CA0: using guessed type __int64 __fastcall sub_1404A1CA0(_QWORD, _QWORD);
// 140B685A0: using guessed type wchar_t aNot[4];
// 140B685A8: using guessed type wchar_t aOr_0[5];
// 140B685B8: using guessed type wchar_t asc_140B685B8[5];
// 140B685C8: using guessed type wchar_t aFail[5];
// 140B68610: using guessed type wchar_t aPass[5];
// 140B68620: using guessed type wchar_t aNestedResultS[23];
// 140B68688: using guessed type wchar_t aAnd_0[6];
// 140B686A0: using guessed type wchar_t aSNestedPrereqI[32];
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C77890: using guessed type __int64 qword_140C77890;

