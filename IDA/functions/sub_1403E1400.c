//----- (00000001403E1400) ----------------------------------------------------
__int64 __fastcall sub_1403E1400(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	int v4; // ecx
	__int64 v5; // r14
	__int64 v6; // rax
	int v7; // ecx
	int* v8; // rax
	int* v9; // rax
	int* v10; // rax
	int* v11; // rax
	int* v12; // rax
	int* v13; // rax
	int* v14; // rax
	int* v15; // rax
	int* v16; // rax
	int* v17; // rax
	int v18; // ecx
	_QWORD* v19; // rax
	int* v20; // rax
	int* v21; // rax
	int* v22; // rax
	int* v23; // rax
	unsigned __int64 v24; // rdx
	int v25; // eax
	__int64 v26; // rbp
	int* v27; // rax
	int* v28; // rax
	int* v29; // rax
	int* v30; // rax
	int* v31; // rax
	int* v32; // rax
	int* v33; // rax
	int* v34; // rax
	int* v35; // rax
	int* v36; // rax
	unsigned __int64 v37; // rdx
	int* v38; // rax
	int* v39; // rax
	unsigned __int64 v40; // rdx
	__int64 v41; // rax
	int* v42; // rax
	int* v43; // rax
	_QWORD* v44; // rsi
	int v45; // r15d
	int** v46; // rdi
	int* v47; // rax
	int v48; // xmm0_4
	int* v49; // rax
	int* v50; // rax
	int* v51; // rax
	int* v52; // rax
	int* v53; // rax
	int* v54; // rax
	int* v55; // rax
	int* v56; // rax
	int* v57; // rax
	int* v58; // rax
	int* v59; // rax
	int* v60; // rax
	int* v61; // rax
	__int64 v62; // rax
	unsigned int v63; // esi
	__int64 v64; // rax
	unsigned int v65; // eax
	int v66; // edi
	int v67; // eax
	int* v68; // rdx
	int v69; // ecx
	int v70; // ecx
	int v71; // ecx
	int v72; // ecx
	int v73; // eax
	int* v74; // rax
	int* v75; // rax
	int v76; // ecx
	int v77; // eax
	int v78; // eax
	_DWORD* v79; // rdx
	_QWORD* v80; // rdi
	_QWORD* v81; // rax
	__int64 v82; // rcx
	char* v83; // rdx
	_DWORD* v84; // r8
	void* v85; // rdi
	int* v86; // rax
	__int64 v87; // rax
	int* v88; // rax
	_QWORD* v89; // rax
	int* v90; // rax
	__int64 v91; // rcx
	__int64 v92; // rax
	__int64 result; // rax
	__int64 v94; // [rsp+20h] [rbp-58h]
	int v95; // [rsp+80h] [rbp+8h] BYREF

	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_DWORD*)(a1 + 56) = 0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_DWORD*)(a1 + 40) = 0;
	*(_QWORD*)a1 = off_140B66880;
	*(_QWORD*)(a1 + 72) = &off_140B66900;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_DWORD*)(a1 + 96) = 0;
	*(_DWORD*)(a1 + 100) = 1000;
	*(_DWORD*)(a1 + 104) = 5000;
	*(_DWORD*)(a1 + 108) = -1;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 152) = 0i64;
	v2 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 136) = v2;
	*(_QWORD*)(a1 + 144) = v2;
	*(_QWORD*)(a1 + 152) = v2 + 4;
	if (v2)
		*(_WORD*)v2 = 0;
	sub_1403FAA60(a1 + 160);
	*(_QWORD*)(a1 + 1392) = 0i64;
	*(_QWORD*)(a1 + 1384) = 0i64;
	v3 = a1 + 1400;
	v4 = 11;
	do
	{
		--v4;
		v3 += 72i64;
		*(_QWORD*)(v3 - 72) = 0i64;
		*(_QWORD*)(v3 - 64) = 0i64;
		*(_QWORD*)(v3 - 56) = 0i64;
		*(_QWORD*)(v3 - 48) = 0i64;
		*(_QWORD*)(v3 - 40) = 0i64;
		*(_QWORD*)(v3 - 32) = 0i64;
		*(_QWORD*)(v3 - 24) = 0i64;
		*(_DWORD*)(v3 - 16) = -1;
		*(_QWORD*)(v3 - 8) = 0i64;
	} while (v4 >= 0);
	v5 = 4i64;
	v6 = a1 + 2264;
	v7 = 4;
	do
	{
		--v7;
		v6 += 72i64;
		*(_QWORD*)(v6 - 72) = 0i64;
		*(_QWORD*)(v6 - 64) = 0i64;
		*(_QWORD*)(v6 - 56) = 0i64;
		*(_QWORD*)(v6 - 48) = 0i64;
		*(_QWORD*)(v6 - 40) = 0i64;
		*(_QWORD*)(v6 - 32) = 0i64;
		*(_QWORD*)(v6 - 24) = 0i64;
		*(_DWORD*)(v6 - 16) = -1;
		*(_QWORD*)(v6 - 8) = 0i64;
	} while (v7 >= 0);
	*(_QWORD*)(a1 + 2648) = 0i64;
	*(_QWORD*)(a1 + 2656) = 0i64;
	*(_QWORD*)(a1 + 2672) = 0i64;
	*(_QWORD*)(a1 + 2680) = 0i64;
	*(_DWORD*)(a1 + 2632) = 1414420037;
	*(_DWORD*)(a1 + 2700) = 0;
	*(_QWORD*)(a1 + 2712) = 0i64;
	*(_QWORD*)(a1 + 2704) = 0i64;
	v8 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 2736) = 0i64;
	*(_QWORD*)(a1 + 2728) = v8;
	*(_BYTE*)v8 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 2728) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 2728) + 16i64) = *(_QWORD*)(a1 + 2728);
	*(_QWORD*)(*(_QWORD*)(a1 + 2728) + 24i64) = *(_QWORD*)(a1 + 2728);
	v9 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 5224) = 0i64;
	*(_QWORD*)(a1 + 5216) = v9;
	*(_BYTE*)v9 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 5216) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 5216) + 16i64) = *(_QWORD*)(a1 + 5216);
	*(_QWORD*)(*(_QWORD*)(a1 + 5216) + 24i64) = *(_QWORD*)(a1 + 5216);
	v10 = sub_14018B280(56i64, 0);
	*(_QWORD*)(a1 + 5256) = 0i64;
	*(_QWORD*)(a1 + 5248) = v10;
	*(_BYTE*)v10 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 5248) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 5248) + 16i64) = *(_QWORD*)(a1 + 5248);
	*(_QWORD*)(*(_QWORD*)(a1 + 5248) + 24i64) = *(_QWORD*)(a1 + 5248);
	*(_QWORD*)(a1 + 5296) = 0i64;
	*(_QWORD*)(a1 + 5304) = 0i64;
	*(_QWORD*)(a1 + 5320) = 0i64;
	*(_QWORD*)(a1 + 5328) = 0i64;
	*(_DWORD*)(a1 + 5280) = 1414420037;
	*(_DWORD*)(a1 + 5348) = 0;
	*(_QWORD*)(a1 + 5376) = 0i64;
	*(_QWORD*)(a1 + 5384) = 0i64;
	*(_QWORD*)(a1 + 5400) = 0i64;
	*(_QWORD*)(a1 + 5408) = 0i64;
	*(_DWORD*)(a1 + 5360) = 1414420037;
	*(_DWORD*)(a1 + 5428) = 0;
	*(_QWORD*)(a1 + 5448) = 0i64;
	*(_QWORD*)(a1 + 5456) = 0i64;
	*(_QWORD*)(a1 + 5472) = 0i64;
	*(_QWORD*)(a1 + 5480) = 0i64;
	*(_DWORD*)(a1 + 5432) = 1414420037;
	*(_DWORD*)(a1 + 5500) = 0;
	v11 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 5520) = 0i64;
	*(_QWORD*)(a1 + 5512) = v11;
	*(_BYTE*)v11 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 5512) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 5512) + 16i64) = *(_QWORD*)(a1 + 5512);
	*(_QWORD*)(*(_QWORD*)(a1 + 5512) + 24i64) = *(_QWORD*)(a1 + 5512);
	v12 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 5552) = 0i64;
	*(_QWORD*)(a1 + 5544) = v12;
	*(_BYTE*)v12 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 5544) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 5544) + 16i64) = *(_QWORD*)(a1 + 5544);
	*(_QWORD*)(*(_QWORD*)(a1 + 5544) + 24i64) = *(_QWORD*)(a1 + 5544);
	v13 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 5584) = 0i64;
	*(_QWORD*)(a1 + 5576) = v13;
	*(_BYTE*)v13 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 5576) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 5576) + 16i64) = *(_QWORD*)(a1 + 5576);
	*(_QWORD*)(*(_QWORD*)(a1 + 5576) + 24i64) = *(_QWORD*)(a1 + 5576);
	*(_QWORD*)(a1 + 5600) = 0i64;
	*(_QWORD*)(a1 + 5608) = 0i64;
	sub_1405E48C0(a1 + 5784);
	v14 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 7072) = 0i64;
	*(_QWORD*)(a1 + 7064) = v14;
	*(_BYTE*)v14 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 7064) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 7064) + 16i64) = *(_QWORD*)(a1 + 7064);
	*(_QWORD*)(*(_QWORD*)(a1 + 7064) + 24i64) = *(_QWORD*)(a1 + 7064);
	v15 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 7104) = 0i64;
	*(_QWORD*)(a1 + 7096) = v15;
	*(_BYTE*)v15 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 7096) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 7096) + 16i64) = *(_QWORD*)(a1 + 7096);
	*(_QWORD*)(*(_QWORD*)(a1 + 7096) + 24i64) = *(_QWORD*)(a1 + 7096);
	v16 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 7136) = 0i64;
	*(_QWORD*)(a1 + 7128) = v16;
	*(_BYTE*)v16 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 7128) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 7128) + 16i64) = *(_QWORD*)(a1 + 7128);
	*(_QWORD*)(*(_QWORD*)(a1 + 7128) + 24i64) = *(_QWORD*)(a1 + 7128);
	v17 = sub_14018B280(72i64, 0);
	*(_QWORD*)(a1 + 7176) = 0i64;
	*(_QWORD*)(a1 + 7168) = v17;
	*(_BYTE*)v17 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 7168) + 8i64) = 0i64;
	v18 = 62;
	*(_QWORD*)(*(_QWORD*)(a1 + 7168) + 16i64) = *(_QWORD*)(a1 + 7168);
	*(_QWORD*)(*(_QWORD*)(a1 + 7168) + 24i64) = *(_QWORD*)(a1 + 7168);
	v19 = (_QWORD*)(a1 + 7376);
	do
	{
		--v18;
		*(v19 - 1) = 0i64;
		*v19 = 0i64;
		v19[1] = 0i64;
		v19 += 36;
	} while (v18 >= 0);
	*(_QWORD*)(a1 + 25344) = &off_140B66870;
	v20 = sub_14018B280(80i64, 0);
	*(_QWORD*)(a1 + 25368) = 0i64;
	*(_QWORD*)(a1 + 25360) = v20;
	*(_BYTE*)v20 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 25360) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 25360) + 16i64) = *(_QWORD*)(a1 + 25360);
	*(_QWORD*)(*(_QWORD*)(a1 + 25360) + 24i64) = *(_QWORD*)(a1 + 25360);
	*(_QWORD*)(a1 + 25344) = &off_140B66868;
	*(_QWORD*)(a1 + 25400) = 0i64;
	*(_QWORD*)(a1 + 25392) = 0i64;
	*(_QWORD*)(a1 + 25408) = 0i64;
	*(_QWORD*)(a1 + 25416) = 0i64;
	*(_QWORD*)(a1 + 25432) = 0i64;
	*(_QWORD*)(a1 + 25456) = 0i64;
	*(_QWORD*)(a1 + 25448) = 0i64;
	*(_QWORD*)(a1 + 25480) = 0i64;
	*(_QWORD*)(a1 + 25488) = 0i64;
	*(_QWORD*)(a1 + 25496) = 0i64;
	*(_QWORD*)(a1 + 25504) = 0i64;
	*(_DWORD*)(a1 + 25512) = 0;
	*(_QWORD*)(a1 + 25536) = 0i64;
	*(_QWORD*)(a1 + 25544) = 0i64;
	*(_QWORD*)(a1 + 25560) = 0i64;
	*(_QWORD*)(a1 + 25568) = 0i64;
	*(_DWORD*)(a1 + 25520) = 1414420037;
	*(_DWORD*)(a1 + 25588) = 0;
	*(_QWORD*)(a1 + 25592) = 0i64;
	*(_QWORD*)(a1 + 25616) = 0i64;
	*(_QWORD*)(a1 + 25624) = 0i64;
	*(_QWORD*)(a1 + 25672) = 0i64;
	*(_QWORD*)(a1 + 25680) = 0i64;
	*(_QWORD*)(a1 + 25696) = 0i64;
	*(_QWORD*)(a1 + 25704) = 0i64;
	*(_DWORD*)(a1 + 25656) = 1414420037;
	*(_DWORD*)(a1 + 25724) = 0;
	*(_QWORD*)(a1 + 25848) = 0i64;
	*(_QWORD*)(a1 + 25856) = 0i64;
	*(_QWORD*)(a1 + 25936) = 0i64;
	*(_QWORD*)(a1 + 25944) = 0i64;
	*(_QWORD*)(a1 + 25952) = 0i64;
	*(_QWORD*)(a1 + 25960) = 0i64;
	*(_QWORD*)(a1 + 25968) = 0i64;
	*(_QWORD*)(a1 + 25976) = 0i64;
	*(_QWORD*)(a1 + 25984) = 0i64;
	*(_QWORD*)(a1 + 25992) = 0i64;
	*(_QWORD*)(a1 + 26000) = 0i64;
	*(_DWORD*)(a1 + 26008) = 0;
	*(_DWORD*)(a1 + 26024) = 0;
	*(_DWORD*)(a1 + 26028) = 1;
	*(_DWORD*)(a1 + 26080) = 0;
	*(_DWORD*)(a1 + 26084) = 254;
	*(_QWORD*)(a1 + 26096) = 0i64;
	*(_QWORD*)(a1 + 25840) = off_140B6FAE0;
	*(_OWORD*)(a1 + 26112) = xmmword_140C78450;
	*(_OWORD*)(a1 + 26128) = 0i64;
	*(_OWORD*)(a1 + 26144) = xmmword_140B7B240;
	*(_DWORD*)(a1 + 26184) = 11;
	*(_QWORD*)(a1 + 26216) = 0i64;
	*(_QWORD*)(a1 + 26224) = 0i64;
	*(_QWORD*)(a1 + 26240) = 0i64;
	*(_QWORD*)(a1 + 26248) = 0i64;
	*(_DWORD*)(a1 + 26200) = 1414420037;
	*(_DWORD*)(a1 + 26268) = 0;
	*(_DWORD*)(a1 + 26280) = 300;
	*(_DWORD*)(a1 + 26284) = -1;
	v21 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 26312) = v21;
	*(_QWORD*)(a1 + 26320) = 0i64;
	*(_BYTE*)v21 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 26312) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 26312) + 16i64) = *(_QWORD*)(a1 + 26312);
	*(_QWORD*)(*(_QWORD*)(a1 + 26312) + 24i64) = *(_QWORD*)(a1 + 26312);
	*(_QWORD*)(a1 + 26352) = 0i64;
	*(_QWORD*)(a1 + 26344) = 0i64;
	v22 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 26376) = 0i64;
	*(_QWORD*)(a1 + 26368) = v22;
	*(_BYTE*)v22 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 26368) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 26368) + 16i64) = *(_QWORD*)(a1 + 26368);
	*(_QWORD*)(*(_QWORD*)(a1 + 26368) + 24i64) = *(_QWORD*)(a1 + 26368);
	*(_QWORD*)(a1 + 26432) = 0i64;
	*(_QWORD*)(a1 + 26424) = 0i64;
	*(_QWORD*)(a1 + 26464) = 0i64;
	*(_QWORD*)(a1 + 26488) = 0i64;
	*(_QWORD*)(a1 + 26496) = 0i64;
	*(_QWORD*)(a1 + 26512) = 0i64;
	*(_QWORD*)(a1 + 26520) = 0i64;
	*(_DWORD*)(a1 + 26472) = 1414420037;
	*(_DWORD*)(a1 + 26540) = 0;
	v23 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 26568) = 0i64;
	*(_QWORD*)(a1 + 26560) = v23;
	*(_BYTE*)v23 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 26560) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 26560) + 16i64) = *(_QWORD*)(a1 + 26560);
	*(_QWORD*)(*(_QWORD*)(a1 + 26560) + 24i64) = *(_QWORD*)(a1 + 26560);
	*(_QWORD*)(a1 + 26600) = 0i64;
	*(_QWORD*)(a1 + 26608) = 0i64;
	*(_QWORD*)(a1 + 26616) = 0i64;
	*(_QWORD*)(a1 + 26624) = 0i64;
	sub_1403FB7C0((_QWORD*)(a1 + 26584), v24);
	*(_QWORD*)(a1 + 26632) = 0i64;
	*(_QWORD*)(a1 + 26640) = 0i64;
	*(_QWORD*)(a1 + 26648) = 0i64;
	sub_1405DD5A0(a1 + 26680);
	v25 = dword_140C636A8;
	*(_DWORD*)(a1 + 27596) = dword_140C4AA08;
	*(_DWORD*)(a1 + 27592) = 0;
	*(_DWORD*)(a1 + 27604) = 0;
	*(_DWORD*)(a1 + 27608) = 51000;
	*(_DWORD*)(a1 + 27612) = 51;
	*(_DWORD*)(a1 + 27616) = 1000;
	*(_DWORD*)(a1 + 27600) = v25 - 51000;
	*(_QWORD*)(a1 + 27632) = 0i64;
	*(_QWORD*)(a1 + 27624) = 0i64;
	*(_QWORD*)(a1 + 27640) = 0i64;
	*(_QWORD*)(a1 + 27656) = 0i64;
	*(_QWORD*)(a1 + 27648) = 0i64;
	*(_QWORD*)(a1 + 27696) = 0i64;
	*(_QWORD*)(a1 + 27704) = 0i64;
	*(_QWORD*)(a1 + 27712) = 0i64;
	*(_QWORD*)(a1 + 27720) = 0i64;
	*(_QWORD*)(a1 + 27728) = 0i64;
	*(_QWORD*)(a1 + 27736) = 0i64;
	*(_DWORD*)(a1 + 27744) = 0;
	*(_QWORD*)(a1 + 27752) = 0i64;
	*(_QWORD*)(a1 + 27776) = 0i64;
	*(_QWORD*)(a1 + 27784) = 0i64;
	*(_QWORD*)(a1 + 27800) = 0i64;
	*(_QWORD*)(a1 + 27808) = 0i64;
	*(_DWORD*)(a1 + 27760) = 1414420037;
	*(_DWORD*)(a1 + 27828) = 0;
	*(_QWORD*)(a1 + 27664) = 0i64;
	*(_QWORD*)(a1 + 27672) = 0i64;
	*(_QWORD*)(a1 + 27680) = 0i64;
	*(_QWORD*)(a1 + 27688) = 0i64;
	*(_QWORD*)(a1 + 27832) = 0i64;
	*(_QWORD*)(a1 + 27840) = 0i64;
	*(_QWORD*)(a1 + 27848) = 0i64;
	*(_QWORD*)(a1 + 27856) = 0i64;
	*(_QWORD*)(a1 + 27864) = 0i64;
	*(_QWORD*)(a1 + 27872) = 0i64;
	*(_DWORD*)(a1 + 27896) = 300;
	*(_DWORD*)(a1 + 27900) = -1;
	*(_QWORD*)(a1 + 27880) = 0i64;
	*(_DWORD*)(a1 + 27888) = 0;
	*(_DWORD*)(a1 + 27892) = 6;
	*(_DWORD*)(a1 + 27896) = 300;
	*(_DWORD*)(a1 + 27900) = -1;
	v26 = 9i64;
	*(_DWORD*)(a1 + 27904) = 9;
	v27 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 27960) = 0i64;
	*(_QWORD*)(a1 + 27952) = v27;
	*(_BYTE*)v27 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 27952) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 27952) + 16i64) = *(_QWORD*)(a1 + 27952);
	*(_QWORD*)(*(_QWORD*)(a1 + 27952) + 24i64) = *(_QWORD*)(a1 + 27952);
	sub_1403FB600((_QWORD*)(a1 + 27976));
	*(_QWORD*)(a1 + 28016) = 0i64;
	v28 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 28072) = 0i64;
	*(_QWORD*)(a1 + 28064) = v28;
	*(_BYTE*)v28 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 28064) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 28064) + 16i64) = *(_QWORD*)(a1 + 28064);
	*(_QWORD*)(*(_QWORD*)(a1 + 28064) + 24i64) = *(_QWORD*)(a1 + 28064);
	v29 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 28104) = 0i64;
	*(_QWORD*)(a1 + 28096) = v29;
	*(_BYTE*)v29 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 28096) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 28096) + 16i64) = *(_QWORD*)(a1 + 28096);
	*(_QWORD*)(*(_QWORD*)(a1 + 28096) + 24i64) = *(_QWORD*)(a1 + 28096);
	*(_QWORD*)(a1 + 28280) = 0i64;
	*(_QWORD*)(a1 + 28272) = 0i64;
	*(_QWORD*)(a1 + 28296) = 0i64;
	*(_QWORD*)(a1 + 28288) = 0i64;
	*(_QWORD*)(a1 + 28312) = 0i64;
	*(_QWORD*)(a1 + 28304) = 0i64;
	*(_QWORD*)(a1 + 28328) = 0i64;
	*(_QWORD*)(a1 + 28320) = 0i64;
	*(_QWORD*)(a1 + 28344) = 0i64;
	*(_QWORD*)(a1 + 28336) = 0i64;
	v30 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 28360) = v30;
	*(_QWORD*)(a1 + 28368) = 0i64;
	*(_BYTE*)v30 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 28360) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 28360) + 16i64) = *(_QWORD*)(a1 + 28360);
	*(_QWORD*)(*(_QWORD*)(a1 + 28360) + 24i64) = *(_QWORD*)(a1 + 28360);
	v31 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 28408) = 0i64;
	*(_QWORD*)(a1 + 28400) = v31;
	*(_BYTE*)v31 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 28400) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 28400) + 16i64) = *(_QWORD*)(a1 + 28400);
	*(_QWORD*)(*(_QWORD*)(a1 + 28400) + 24i64) = *(_QWORD*)(a1 + 28400);
	sub_1403FB670((_QWORD*)(a1 + 28424));
	*(_QWORD*)(a1 + 28464) = 0i64;
	*(_QWORD*)(a1 + 28472) = 0i64;
	*(_QWORD*)(a1 + 28480) = 0i64;
	*(_QWORD*)(a1 + 28488) = 0i64;
	*(_QWORD*)(a1 + 28496) = 0i64;
	v32 = sub_14018B280(56i64, 0);
	*(_QWORD*)(a1 + 28520) = 0i64;
	*(_QWORD*)(a1 + 28512) = v32;
	*(_BYTE*)v32 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 28512) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 28512) + 16i64) = *(_QWORD*)(a1 + 28512);
	*(_QWORD*)(*(_QWORD*)(a1 + 28512) + 24i64) = *(_QWORD*)(a1 + 28512);
	v33 = sub_14018B280(56i64, 0);
	*(_QWORD*)(a1 + 28552) = 0i64;
	*(_QWORD*)(a1 + 28544) = v33;
	*(_BYTE*)v33 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 28544) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 28544) + 16i64) = *(_QWORD*)(a1 + 28544);
	*(_QWORD*)(*(_QWORD*)(a1 + 28544) + 24i64) = *(_QWORD*)(a1 + 28544);
	v34 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 28592) = 0i64;
	*(_QWORD*)(a1 + 28584) = v34;
	*(_BYTE*)v34 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 28584) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 28584) + 16i64) = *(_QWORD*)(a1 + 28584);
	*(_QWORD*)(*(_QWORD*)(a1 + 28584) + 24i64) = *(_QWORD*)(a1 + 28584);
	*(_QWORD*)(a1 + 28736) = 0i64;
	*(_QWORD*)(a1 + 28744) = 0i64;
	*(_QWORD*)(a1 + 28760) = 0i64;
	*(_QWORD*)(a1 + 28768) = 0i64;
	*(_DWORD*)(a1 + 28720) = 1414420037;
	*(_DWORD*)(a1 + 28788) = 0;
	*(_QWORD*)(a1 + 28808) = 0i64;
	*(_DWORD*)(a1 + 28816) = 0;
	*(_QWORD*)(a1 + 28824) = 0i64;
	*(_DWORD*)(a1 + 28848) = 0;
	*(_DWORD*)(a1 + 28852) = -1;
	*(_QWORD*)(a1 + 28856) = 0i64;
	*(_DWORD*)(a1 + 28864) = 0;
	*(_QWORD*)(a1 + 28908) = 0i64;
	*(_BYTE*)(a1 + 28916) = 0;
	*(_DWORD*)(a1 + 28920) = 300;
	*(_QWORD*)(a1 + 28924) = -1i64;
	*(_DWORD*)(a1 + 28932) = -1;
	*(_DWORD*)(a1 + 28940) = 1065353216;
	*(_DWORD*)(a1 + 28976) = 0;
	*(_QWORD*)(a1 + 28984) = 0i64;
	*(_QWORD*)(a1 + 28992) = 0i64;
	v35 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 29032) = 0i64;
	*(_QWORD*)(a1 + 29024) = v35;
	*(_BYTE*)v35 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 29024) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 29024) + 16i64) = *(_QWORD*)(a1 + 29024);
	*(_QWORD*)(*(_QWORD*)(a1 + 29024) + 24i64) = *(_QWORD*)(a1 + 29024);
	*(_QWORD*)(a1 + 29048) = 0i64;
	*(_QWORD*)(a1 + 29088) = 0i64;
	*(_QWORD*)(a1 + 29096) = 0i64;
	*(_QWORD*)(a1 + 29104) = 0i64;
	*(_QWORD*)(a1 + 29112) = 0i64;
	*(_QWORD*)(a1 + 29120) = 0i64;
	*(_QWORD*)(a1 + 29128) = 0i64;
	*(_DWORD*)(a1 + 29136) = 0;
	*(_QWORD*)(a1 + 29240) = 0i64;
	v36 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 29312) = 0i64;
	*(_QWORD*)(a1 + 29304) = v36;
	*(_BYTE*)v36 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 29304) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 29304) + 16i64) = *(_QWORD*)(a1 + 29304);
	*(_QWORD*)(*(_QWORD*)(a1 + 29304) + 24i64) = *(_QWORD*)(a1 + 29304);
	*(_QWORD*)(a1 + 29344) = 0i64;
	*(_QWORD*)(a1 + 29352) = 0i64;
	*(_QWORD*)(a1 + 29360) = 0i64;
	*(_QWORD*)(a1 + 29368) = 0i64;
	sub_1403FB7C0((_QWORD*)(a1 + 29328), v37);
	*(_QWORD*)(a1 + 29416) = 0i64;
	v38 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 29464) = 0i64;
	*(_QWORD*)(a1 + 29456) = v38;
	*(_BYTE*)v38 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 29456) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 29456) + 16i64) = *(_QWORD*)(a1 + 29456);
	*(_QWORD*)(*(_QWORD*)(a1 + 29456) + 24i64) = *(_QWORD*)(a1 + 29456);
	*(_QWORD*)(a1 + 29488) = 0i64;
	*(_QWORD*)(a1 + 29496) = 0i64;
	*(_QWORD*)(a1 + 29568) = 0i64;
	*(_QWORD*)(a1 + 29576) = 0i64;
	*(_QWORD*)(a1 + 29592) = 0i64;
	*(_QWORD*)(a1 + 29600) = 0i64;
	*(_DWORD*)(a1 + 29552) = 1414420037;
	*(_DWORD*)(a1 + 29620) = 0;
	*(_QWORD*)(a1 + 29632) = 0i64;
	v39 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 29664) = 0i64;
	*(_QWORD*)(a1 + 29656) = v39;
	*(_BYTE*)v39 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 29656) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 29656) + 16i64) = *(_QWORD*)(a1 + 29656);
	*(_QWORD*)(*(_QWORD*)(a1 + 29656) + 24i64) = *(_QWORD*)(a1 + 29656);
	LODWORD(v39) = dword_140C636A8;
	*(_DWORD*)(a1 + 29712) = dword_140C636A8;
	*(_QWORD*)(a1 + 29704) = off_140B54E00;
	*(_QWORD*)(a1 + 29728) = 0i64;
	*(_DWORD*)(a1 + 29720) = 0;
	*(_BYTE*)(a1 + 29724) = 0;
	*(_DWORD*)(a1 + 29744) = (_DWORD)v39;
	*(_QWORD*)(a1 + 29736) = off_140B54E00;
	*(_QWORD*)(a1 + 29760) = 0i64;
	*(_DWORD*)(a1 + 29752) = 0;
	*(_BYTE*)(a1 + 29756) = 0;
	*(_DWORD*)(a1 + 29952) = 0;
	*(_QWORD*)(a1 + 29960) = 0i64;
	*(_QWORD*)(a1 + 29992) = 0i64;
	*(_QWORD*)(a1 + 29984) = 0i64;
	*(_QWORD*)(a1 + 30008) = 0i64;
	*(_QWORD*)(a1 + 30000) = 0i64;
	*(_QWORD*)(a1 + 30016) = 0i64;
	*(_QWORD*)(a1 + 30048) = 0i64;
	*(_QWORD*)(a1 + 30056) = 0i64;
	*(_QWORD*)(a1 + 30064) = 0i64;
	*(_QWORD*)(a1 + 30072) = 0i64;
	sub_1403FB7C0((_QWORD*)(a1 + 30032), v40);
	*(_QWORD*)(a1 + 30232) = 0i64;
	*(_QWORD*)(a1 + 30240) = 0i64;
	*(_QWORD*)(a1 + 30256) = 0i64;
	*(_QWORD*)(a1 + 30264) = 0i64;
	*(_DWORD*)(a1 + 30216) = 1414420037;
	*(_DWORD*)(a1 + 30284) = 0;
	*(_QWORD*)(a1 + 30304) = 0i64;
	*(_QWORD*)(a1 + 30312) = 0i64;
	*(_QWORD*)(a1 + 30328) = 0i64;
	*(_QWORD*)(a1 + 30336) = 0i64;
	*(_DWORD*)(a1 + 30288) = 1414420037;
	*(_DWORD*)(a1 + 30356) = 0;
	*(_QWORD*)(a1 + 30376) = 0i64;
	*(_QWORD*)(a1 + 30384) = 0i64;
	*(_QWORD*)(a1 + 30400) = 0i64;
	*(_QWORD*)(a1 + 30408) = 0i64;
	*(_DWORD*)(a1 + 30360) = 1414420037;
	*(_DWORD*)(a1 + 30428) = 0;
	*(_QWORD*)(a1 + 30448) = 0i64;
	*(_QWORD*)(a1 + 30456) = 0i64;
	*(_QWORD*)(a1 + 30472) = 0i64;
	*(_QWORD*)(a1 + 30480) = 0i64;
	*(_DWORD*)(a1 + 30432) = 1414420037;
	*(_DWORD*)(a1 + 30500) = 0;
	*(_QWORD*)(a1 + 30520) = 0i64;
	*(_QWORD*)(a1 + 30528) = 0i64;
	*(_QWORD*)(a1 + 30544) = 0i64;
	*(_QWORD*)(a1 + 30552) = 0i64;
	v41 = qword_140C635F0;
	*(_DWORD*)(a1 + 30504) = 1414420037;
	*(_DWORD*)(a1 + 30572) = 0;
	*(_QWORD*)(a1 + 30592) = 0i64;
	*(_QWORD*)(a1 + 30600) = 0i64;
	*(_QWORD*)(a1 + 30616) = 0i64;
	*(_QWORD*)(a1 + 30624) = 0i64;
	*(_DWORD*)(a1 + 30576) = 1414420037;
	*(_DWORD*)(a1 + 30644) = 0;
	*(_QWORD*)(a1 + 30664) = 0i64;
	*(_QWORD*)(a1 + 30672) = 0i64;
	*(_QWORD*)(a1 + 30688) = 0i64;
	*(_QWORD*)(a1 + 30696) = 0i64;
	*(_DWORD*)(a1 + 30648) = 1414420037;
	*(_DWORD*)(a1 + 30716) = 0;
	*(_QWORD*)(a1 + 30736) = 0i64;
	*(_QWORD*)(a1 + 30744) = 0i64;
	*(_QWORD*)(a1 + 30760) = 0i64;
	*(_QWORD*)(a1 + 30768) = 0i64;
	*(_DWORD*)(a1 + 30720) = 1414420037;
	*(_DWORD*)(a1 + 30788) = 0;
	*(_QWORD*)(a1 + 30808) = 0i64;
	*(_QWORD*)(a1 + 30816) = 0i64;
	*(_QWORD*)(a1 + 30832) = 0i64;
	*(_QWORD*)(a1 + 30840) = 0i64;
	*(_DWORD*)(a1 + 30792) = 1414420037;
	*(_DWORD*)(a1 + 30860) = 0;
	*(_QWORD*)(a1 + 30880) = 0i64;
	*(_QWORD*)(a1 + 30888) = 0i64;
	*(_QWORD*)(a1 + 30904) = 0i64;
	*(_QWORD*)(a1 + 30912) = 0i64;
	*(_DWORD*)(a1 + 30864) = 1414420037;
	*(_DWORD*)(a1 + 30932) = 0;
	*(_QWORD*)(a1 + 31008) = v41 + 5816;
	sub_1401095E0(a1 + 31024);
	sub_14062D1C0((__int64*)(a1 + 31080));
	*(_QWORD*)(a1 + 31256) = 0i64;
	sub_1403FB6F0((_QWORD*)(a1 + 31264));
	*(_QWORD*)(a1 + 31312) = 0i64;
	*(_QWORD*)(a1 + 31304) = 0i64;
	*(_QWORD*)(a1 + 31328) = 0i64;
	*(_QWORD*)(a1 + 31320) = 0i64;
	*(_QWORD*)(a1 + 31344) = 0i64;
	*(_QWORD*)(a1 + 31336) = 0i64;
	*(_QWORD*)(a1 + 31360) = 0i64;
	*(_QWORD*)(a1 + 31352) = 0i64;
	*(_QWORD*)(a1 + 31376) = 0i64;
	*(_QWORD*)(a1 + 31368) = 0i64;
	sub_14062DC90(a1 + 31304, 1ui64);
	v42 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 31432) = 0i64;
	*(_QWORD*)(a1 + 31424) = v42;
	*(_BYTE*)v42 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 31424) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 31424) + 16i64) = *(_QWORD*)(a1 + 31424);
	*(_QWORD*)(*(_QWORD*)(a1 + 31424) + 24i64) = *(_QWORD*)(a1 + 31424);
	*(_QWORD*)(a1 + 31464) = 0i64;
	*(_QWORD*)(a1 + 31472) = 0i64;
	*(_QWORD*)(a1 + 31488) = 0i64;
	*(_QWORD*)(a1 + 31496) = 0i64;
	*(_DWORD*)(a1 + 31448) = 1414420037;
	*(_DWORD*)(a1 + 31516) = 0;
	*(_QWORD*)(a1 + 31520) = 0i64;
	v43 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 31536) = v43;
	*(_QWORD*)(a1 + 31544) = 0i64;
	*(_BYTE*)v43 = 0;
	v44 = (_QWORD*)(a1 + 31664);
	v45 = 2;
	*(_QWORD*)(*(_QWORD*)(a1 + 31536) + 8i64) = 0i64;
	v46 = (int**)(a1 + 31696);
	*(_QWORD*)(*(_QWORD*)(a1 + 31536) + 16i64) = *(_QWORD*)(a1 + 31536);
	*(_QWORD*)(*(_QWORD*)(a1 + 31536) + 24i64) = *(_QWORD*)(a1 + 31536);
	do
	{
		*(v46 - 1) = 0i64;
		*v46 = 0i64;
		v46[1] = 0i64;
		v47 = sub_14018B280(16i64, 0);
		*(v46 - 1) = v47;
		*v46 = v47;
		v46[1] = v47 + 4;
		if (v47)
			*(_WORD*)v47 = 0;
		v48 = dword_140C63664;
		*v44 = 0i64;
		*((_DWORD*)v46 - 5) = 1065353216;
		*((_DWORD*)v46 - 6) = v48;
		v46 += 6;
		v44 += 6;
		--v45;
	} while (v45 >= 0);
	*(_QWORD*)(a1 + 31816) = 0i64;
	*(_QWORD*)(a1 + 31824) = 0i64;
	*(_QWORD*)(a1 + 31832) = 0i64;
	v49 = sub_14018B280(176i64, 0);
	*(_QWORD*)(a1 + 31848) = v49;
	*(_QWORD*)v49 = v49;
	*(_QWORD*)(*(_QWORD*)(a1 + 31848) + 8i64) = *(_QWORD*)(a1 + 31848);
	v50 = sub_14018B280(176i64, 0);
	*(_QWORD*)(a1 + 31864) = v50;
	*(_QWORD*)v50 = v50;
	*(_QWORD*)(*(_QWORD*)(a1 + 31864) + 8i64) = *(_QWORD*)(a1 + 31864);
	v51 = sub_14018B280(176i64, 0);
	*(_QWORD*)(a1 + 31880) = v51;
	*(_QWORD*)v51 = v51;
	*(_QWORD*)(*(_QWORD*)(a1 + 31880) + 8i64) = *(_QWORD*)(a1 + 31880);
	v52 = sub_14018B280(128i64, 0);
	*(_QWORD*)(a1 + 31896) = v52;
	*(_QWORD*)v52 = v52;
	*(_QWORD*)(*(_QWORD*)(a1 + 31896) + 8i64) = *(_QWORD*)(a1 + 31896);
	v53 = sub_14018B280(80i64, 0);
	*(_QWORD*)(a1 + 31912) = v53;
	*(_QWORD*)v53 = v53;
	*(_QWORD*)(*(_QWORD*)(a1 + 31912) + 8i64) = *(_QWORD*)(a1 + 31912);
	*(_QWORD*)(a1 + 31928) = 0i64;
	*(_QWORD*)(a1 + 31936) = 0i64;
	*(_QWORD*)(a1 + 31944) = 0i64;
	v54 = sub_14018B280(56i64, 0);
	*(_QWORD*)(a1 + 31960) = v54;
	*(_QWORD*)(a1 + 31968) = 0i64;
	*(_BYTE*)v54 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 31960) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 31960) + 16i64) = *(_QWORD*)(a1 + 31960);
	*(_QWORD*)(*(_QWORD*)(a1 + 31960) + 24i64) = *(_QWORD*)(a1 + 31960);
	v55 = sub_14018B280(56i64, 0);
	*(_QWORD*)(a1 + 32000) = 0i64;
	*(_QWORD*)(a1 + 31992) = v55;
	*(_BYTE*)v55 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 31992) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 31992) + 16i64) = *(_QWORD*)(a1 + 31992);
	*(_QWORD*)(*(_QWORD*)(a1 + 31992) + 24i64) = *(_QWORD*)(a1 + 31992);
	v56 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 32032) = 0i64;
	*(_QWORD*)(a1 + 32024) = v56;
	*(_BYTE*)v56 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 32024) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 32024) + 16i64) = *(_QWORD*)(a1 + 32024);
	*(_QWORD*)(*(_QWORD*)(a1 + 32024) + 24i64) = *(_QWORD*)(a1 + 32024);
	v57 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 32056) = v57;
	*(_QWORD*)(a1 + 32064) = 0i64;
	*(_BYTE*)v57 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 32056) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 32056) + 16i64) = *(_QWORD*)(a1 + 32056);
	*(_QWORD*)(*(_QWORD*)(a1 + 32056) + 24i64) = *(_QWORD*)(a1 + 32056);
	v58 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 32096) = 0i64;
	*(_QWORD*)(a1 + 32088) = v58;
	*(_BYTE*)v58 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 32088) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 32088) + 16i64) = *(_QWORD*)(a1 + 32088);
	*(_QWORD*)(*(_QWORD*)(a1 + 32088) + 24i64) = *(_QWORD*)(a1 + 32088);
	v59 = sub_14018B280(128i64, 0);
	*(_QWORD*)(a1 + 32160) = v59;
	*(_QWORD*)v59 = v59;
	*(_QWORD*)(*(_QWORD*)(a1 + 32160) + 8i64) = *(_QWORD*)(a1 + 32160);
	*(_QWORD*)(a1 + 32192) = 0i64;
	*(_QWORD*)(a1 + 32200) = 0i64;
	*(_QWORD*)(a1 + 32208) = 0i64;
	*(_QWORD*)(a1 + 32216) = 0i64;
	*(_QWORD*)(a1 + 32224) = 0i64;
	*(_QWORD*)(a1 + 32248) = 0i64;
	*(_QWORD*)(a1 + 32256) = 0i64;
	*(_QWORD*)(a1 + 32272) = 0i64;
	*(_QWORD*)(a1 + 32280) = 0i64;
	*(_DWORD*)(a1 + 32232) = 1414420037;
	*(_DWORD*)(a1 + 32300) = 0;
	*(_QWORD*)(a1 + 32312) = 0i64;
	*(_QWORD*)(a1 + 32304) = 0i64;
	*(_QWORD*)(a1 + 32328) = 0i64;
	*(_QWORD*)(a1 + 32320) = 0i64;
	*(_QWORD*)(a1 + 32344) = 0i64;
	*(_QWORD*)(a1 + 32336) = 0i64;
	v60 = sub_14018B280(56i64, 0);
	*(_QWORD*)(a1 + 32376) = 0i64;
	*(_QWORD*)(a1 + 32368) = v60;
	*(_BYTE*)v60 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 32368) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 32368) + 16i64) = *(_QWORD*)(a1 + 32368);
	*(_QWORD*)(*(_QWORD*)(a1 + 32368) + 24i64) = *(_QWORD*)(a1 + 32368);
	v61 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 32408) = 0i64;
	*(_QWORD*)(a1 + 32400) = v61;
	*(_BYTE*)v61 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 32400) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 32400) + 16i64) = *(_QWORD*)(a1 + 32400);
	*(_QWORD*)(*(_QWORD*)(a1 + 32400) + 24i64) = *(_QWORD*)(a1 + 32400);
	sub_140028FC0(a1 + 32424);
	*(_QWORD*)(a1 + 32456) = 0i64;
	sub_1400B6000((_QWORD*)(a1 + 32560), 0i64);
	*(_QWORD*)(a1 + 32608) = 0i64;
	*(_QWORD*)(a1 + 32600) = 0i64;
	*(_QWORD*)(a1 + 32640) = 0i64;
	*(_QWORD*)(a1 + 32648) = 0i64;
	*(_QWORD*)(a1 + 32656) = 0i64;
	*(_QWORD*)(a1 + 32680) = 0i64;
	*(_QWORD*)(a1 + 32688) = 0i64;
	*(_QWORD*)(a1 + 32704) = 0i64;
	*(_QWORD*)(a1 + 32712) = 0i64;
	*(_DWORD*)(a1 + 32664) = 1414420037;
	*(_DWORD*)(a1 + 32732) = 0;
	*(_QWORD*)(a1 + 32752) = 0i64;
	*(_QWORD*)(a1 + 32744) = 0i64;
	v62 = sub_140200220(0x947u);
	if (v62)
		v63 = *(_DWORD*)(v62 + 8);
	else
		v63 = 0;
	v64 = sub_140200220(0x947u);
	if (v64)
		v65 = *(_DWORD*)(v64 + 4);
	else
		v65 = 0;
	*(_DWORD*)(a1 + 0x8000) = v65;
	*(_DWORD*)(a1 + 32764) = 0;
	v66 = dword_140C636A8;
	qword_140C65898 = a1;
	*(_DWORD*)(a1 + 32760) = dword_140C636A8 - v65;
	if (!v63)
		v63 = 1;
	*(_DWORD*)(a1 + 32772) = v63;
	v67 = v65 / v63;
	v68 = (int*)qword_140C63750;
	if (!v67)
		v67 = 1;
	*(_DWORD*)(a1 + 32776) = v67;
	*(_QWORD*)(a1 + 32792) = 0i64;
	*(_QWORD*)(a1 + 32784) = 0i64;
	*(_DWORD*)(a1 + 31564) = v66;
	*(_DWORD*)(a1 + 31560) = 0;
	*(_QWORD*)(a1 + 31016) = 0i64;
	*(_QWORD*)(a1 + 29248) = 0i64;
	*(_QWORD*)(a1 + 29256) = 0i64;
	*(_QWORD*)(a1 + 29264) = 0i64;
	*(_QWORD*)(a1 + 28608) = 0i64;
	*(_QWORD*)(a1 + 28616) = 0i64;
	*(_QWORD*)(a1 + 28624) = 0i64;
	*(_QWORD*)(a1 + 28632) = 0i64;
	*(_QWORD*)(a1 + 28640) = 0i64;
	*(_OWORD*)(a1 + 29280) = 0i64;
	*(_DWORD*)(a1 + 29392) = v66;
	*(_QWORD*)(a1 + 29376) = 0i64;
	*(_DWORD*)(a1 + 29384) = 1000;
	*(_DWORD*)(a1 + 29388) = 1118620877;
	*(_DWORD*)(a1 + 29396) = 0;
	*(_DWORD*)(a1 + 29424) = dword_140C449E0;
	v69 = dword_140C46480;
	if (*v68 < dword_140C46480)
		v69 = *v68;
	*(_DWORD*)(a1 + 29428) = *((_DWORD*)&xmmword_140C46490 + v69);
	v70 = dword_140C464E0;
	if (*v68 < dword_140C464E0)
		v70 = *v68;
	*(_DWORD*)(a1 + 29432) = dword_140C464F0[v70];
	v71 = dword_140C46540;
	if (*v68 < dword_140C46540)
		v71 = *v68;
	*(_DWORD*)(a1 + 29436) = dword_140C46550[v71];
	v72 = dword_140C465D0;
	if (*v68 < dword_140C465D0)
		v72 = *v68;
	v73 = *((_DWORD*)&xmmword_140C465E0 + v72);
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_DWORD*)(a1 + 29440) = v73;
	sub_1403B55E0((_QWORD*)a1);
	*(_DWORD*)(a1 + 1372) = 0;
	*(_DWORD*)(a1 + 2624) = -1;
	sub_1407E4830((int*)(a1 + 5624), 0i64, 0x78ui64);
	*(_QWORD*)(a1 + 28140) = 0i64;
	*(_QWORD*)(a1 + 28256) = 0i64;
	*(_DWORD*)(a1 + 28264) = 0;
	sub_1407E4830((int*)(a1 + 28148), 0i64, 0x6Cui64);
	*(_QWORD*)(a1 + 25744) = 0i64;
	*(_QWORD*)(a1 + 25736) = 0i64;
	*(_DWORD*)(a1 + 25728) = 0;
	*(_DWORD*)(a1 + 25796) = 0;
	*(_QWORD*)(a1 + 25804) = 0i64;
	*(_QWORD*)(a1 + 25812) = qword_140C77760;
	*(_DWORD*)(a1 + 25824) = 0;
	*(_DWORD*)(a1 + 26176) = 0;
	*(_DWORD*)(a1 + 26180) = 101;
	*(_DWORD*)(a1 + 5752) = 0;
	*(_QWORD*)(a1 + 5760) = 0i64;
	*(_QWORD*)(a1 + 5744) = 0i64;
	*(_DWORD*)(a1 + 5780) = 0;
	*(_QWORD*)(a1 + 26656) = 0i64;
	*(_QWORD*)(a1 + 28840) = 0i64;
	*(_QWORD*)(a1 + 26664) = 0i64;
	*(_DWORD*)(a1 + 26672) = 0;
	*(_DWORD*)(a1 + 7040) = 0;
	*(_DWORD*)(a1 + 28136) = 0;
	*(_DWORD*)(a1 + 25384) = 0;
	*(_QWORD*)(a1 + 28384) = 0i64;
	*(_DWORD*)(a1 + 6976) = 0;
	*(_QWORD*)(a1 + 6984) = 0i64;
	*(_QWORD*)(a1 + 6992) = 0i64;
	*(_QWORD*)(a1 + 7000) = 0i64;
	*(_QWORD*)(a1 + 7008) = 0i64;
	sub_140008410(a1 + 7056);
	*(_QWORD*)(a1 + 7152) = 0i64;
	*(_DWORD*)(a1 + 1368) = 1;
	*(_QWORD*)(a1 + 28048) = 0i64;
	*(_DWORD*)(a1 + 29056) = 0;
	*(_DWORD*)(a1 + 28120) = 0;
	*(_DWORD*)(a1 + 28124) = -1;
	*(_QWORD*)(a1 + 28128) = 0i64;
	*(_DWORD*)(a1 + 1376) = 0;
	*(_DWORD*)(a1 + 26444) = 1;
	*(_QWORD*)(a1 + 26448) = 1i64;
	*(_DWORD*)(a1 + 26456) = 0;
	*(_QWORD*)(a1 + 28832) = 0i64;
	*(_DWORD*)(a1 + 29008) = 0;
	sub_1403A1510(a1);
	sub_1405B3270();
	*(_QWORD*)(a1 + 29680) = 0i64;
	*(_QWORD*)(a1 + 31568) = 0i64;
	*(_QWORD*)(a1 + 31576) = 0i64;
	*(_QWORD*)(a1 + 31584) = 0i64;
	*(_QWORD*)(a1 + 31592) = 0i64;
	*(_QWORD*)(a1 + 31600) = 0i64;
	*(_QWORD*)(a1 + 31608) = 0i64;
	*(_BYTE*)(a1 + 29480) = 0;
	*(_DWORD*)(a1 + 29484) = 0;
	*(_QWORD*)(a1 + 31616) = 0i64;
	*(_QWORD*)(a1 + 31624) = 0i64;
	*(_QWORD*)(a1 + 31632) = 0i64;
	*(_QWORD*)(a1 + 31640) = 0i64;
	*(_QWORD*)(a1 + 25832) = 0i64;
	*(_QWORD*)(a1 + 26160) = 0i64;
	*(_QWORD*)(a1 + 26168) = 0i64;
	*(_QWORD*)(a1 + 29504) = 0i64;
	*(_QWORD*)(a1 + 29512) = 0i64;
	*(_QWORD*)(a1 + 29520) = 0i64;
	*(_QWORD*)(a1 + 29536) = 0i64;
	*(_QWORD*)(a1 + 29544) = 0i64;
	*(_QWORD*)(a1 + 29528) = 0i64;
	*(_DWORD*)(a1 + 30080) = 0;
	*(_QWORD*)(a1 + 30088) = 0i64;
	*(_DWORD*)(a1 + 30160) = 0;
	*(_QWORD*)(a1 + 29272) = 0i64;
	*(_QWORD*)(a1 + 28792) = 0i64;
	*(_QWORD*)(a1 + 28800) = 0i64;
	*(_QWORD*)(a1 + 25600) = 0i64;
	*(_DWORD*)(a1 + 25608) = 0;
	*(_DWORD*)(a1 + 25632) = 0;
	*(_DWORD*)(a1 + 25636) = 2;
	*(_DWORD*)(a1 + 25644) = 0;
	*(_QWORD*)(a1 + 26392) = 0i64;
	*(_DWORD*)(a1 + 31648) = 0;
	sub_1403C2C10(a1);
	sub_1403C2CA0(a1);
	*(_DWORD*)(a1 + 28568) = 0;
	LODWORD(v94) = 0;
	*(_OWORD*)(a1 + 30128) = 0i64;
	*(_OWORD*)(a1 + 30144) = 0i64;
	*(_QWORD*)(a1 + 31072) = 0i64;
	*(_QWORD*)(a1 + 28608) = 0i64;
	*(_QWORD*)(a1 + 28616) = 0i64;
	*(_QWORD*)(a1 + 28624) = 0i64;
	*(_QWORD*)(a1 + 28632) = 0i64;
	*(_QWORD*)(a1 + 28640) = 0i64;
	*(_DWORD*)(a1 + 29388) = 1065353216;
	*(_DWORD*)(a1 + 29384) = 86400;
	*(_QWORD*)(a1 + 26404) = 0i64;
	*(_DWORD*)(a1 + 26400) = 0;
	*(_DWORD*)(a1 + 26440) = 0;
	*(_DWORD*)(a1 + 31384) = 0;
	*(_QWORD*)(a1 + 31392) = 0i64;
	*(_QWORD*)(a1 + 31400) = 0i64;
	*(_QWORD*)(a1 + 29928) = 0i64;
	*(_QWORD*)(a1 + 29936) = 0i64;
	*(_DWORD*)(a1 + 29944) = 0;
	*(_QWORD*)(a1 + 29952) = v94;
	*(_QWORD*)(a1 + 29960) = 0i64;
	*(_QWORD*)(a1 + 29968) = 0i64;
	*(_DWORD*)(a1 + 26336) = 0;
	*(_DWORD*)(a1 + 26340) = -1;
	*(_DWORD*)(a1 + 29224) = 0;
	*(_DWORD*)(a1 + 29228) = 1;
	*(_DWORD*)(a1 + 26544) = 0;
	*(_QWORD*)(a1 + 29400) = 0i64;
	*(_QWORD*)(a1 + 29408) = 0i64;
	*(_QWORD*)(a1 + 29064) = 0i64;
	*(_DWORD*)(a1 + 29072) = 0;
	*(_QWORD*)(a1 + 32112) = 0i64;
	*(_QWORD*)(a1 + 32120) = 0i64;
	if (!qword_140C7DC90)
	{
		v74 = sub_14018B280(40i64, 0);
		if (v74)
			qword_140C7DC90 = (__int64)sub_14077C430(v74);
		else
			qword_140C7DC90 = 0i64;
	}
	sub_140558C90(&qword_140C7DCD0, 0xBui64);
	v75 = (int*)qword_140C63750;
	*(_QWORD*)(a1 + 29688) = 0i64;
	*(_DWORD*)(a1 + 32128) = 0;
	*(_QWORD*)(a1 + 30172) = 0i64;
	*(_QWORD*)(a1 + 30180) = 0i64;
	*(_QWORD*)(a1 + 30188) = 0i64;
	*(_QWORD*)(a1 + 30196) = 0i64;
	*(_QWORD*)(a1 + 30204) = 0i64;
	*(_QWORD*)(a1 + 30936) = 0i64;
	*(_QWORD*)(a1 + 30944) = 0i64;
	*(_QWORD*)(a1 + 30952) = 0i64;
	*(_QWORD*)(a1 + 30960) = 0i64;
	*(_DWORD*)(a1 + 30968) = 0;
	v76 = *v75;
	v77 = dword_140C450F0;
	v95 = 0;
	if (v76 < dword_140C450F0)
		v77 = v76;
	*(_DWORD*)(a1 + 31000) = byte_140C45100[v77];
	*(_QWORD*)(a1 + 30972) = 0i64;
	*(_QWORD*)(a1 + 30980) = 0i64;
	*(_QWORD*)(a1 + 30988) = 0i64;
	*(_DWORD*)(a1 + 30096) = 3;
	*(_DWORD*)(a1 + 5272) = 9;
	*(_DWORD*)(a1 + 5276) = 9;
	*(_QWORD*)(a1 + 5352) = 0i64;
	*(_DWORD*)(a1 + 29696) = 0;
	*(_DWORD*)(a1 + 29768) = 0;
	*(_DWORD*)(a1 + 29776) = 0;
	*(_DWORD*)(a1 + 29816) = 500;
	*(_DWORD*)(a1 + 29820) = 500;
	*(_DWORD*)(a1 + 29824) = 500;
	(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)(a1 + 29704) + 8i64))(a1 + 29704, &v95);
	if (*(float*)(a1 + 29728) != 0.0 || (float)0.0 != *(float*)(a1 + 29732))
	{
		v78 = dword_140C636A8;
		*(_QWORD*)(a1 + 29728) = 0i64;
		*(_DWORD*)(a1 + 29720) = 0;
		*(_DWORD*)(a1 + 29712) = v78;
	}
	*(_QWORD*)(a1 + 29832) = 0i64;
	*(_QWORD*)(a1 + 29840) = 0i64;
	v79 = (_DWORD*)(a1 + 5192);
	*(_DWORD*)(a1 + 29848) = 0;
	v80 = (_QWORD*)(a1 + 2752);
	do
	{
		v81 = v80;
		v82 = 6i64;
		do
		{
			*v81 = 0i64;
			v81[1] = 0i64;
			v81[2] = 0i64;
			v81 += 8;
			*(v81 - 5) = 0i64;
			*(v81 - 4) = 0i64;
			*(v81 - 3) = 0i64;
			*(v81 - 2) = 0i64;
			*(v81 - 1) = 0i64;
			--v82;
		} while (v82);
		*v79++ = 0;
		v80 += 48;
		--v5;
	} while (v5);
	v83 = (char*)(a1 + 4328);
	v84 = (_DWORD*)(a1 + 4288);
	do
	{
		v85 = v83;
		*v84 = 0;
		v83 += 96;
		++v84;
		memset(v85, 0, 0x60ui64);
		--v26;
	} while (v26);
	*(_QWORD*)(a1 + 29852) = 0i64;
	*(_QWORD*)(a1 + 29860) = 0i64;
	*(_OWORD*)(a1 + 29888) = 0i64;
	*(_QWORD*)(a1 + 29904) = 0i64;
	*(_QWORD*)(a1 + 29880) = 0i64;
	*(_QWORD*)(a1 + 29872) = 0i64;
	*(_QWORD*)(a1 + 29624) = 0i64;
	*(_QWORD*)(a1 + 31144) = 0i64;
	*(_QWORD*)(a1 + 31152) = 0i64;
	*(_QWORD*)(a1 + 31192) = 176i64;
	*(_QWORD*)(a1 + 31208) = 0i64;
	*(_DWORD*)(a1 + 31216) = 0;
	*(_DWORD*)(a1 + 31160) = 0;
	*(_DWORD*)(a1 + 31136) = 0;
	*(_DWORD*)(a1 + 31188) = -1;
	*(_DWORD*)(a1 + 31184) = 0;
	*(_OWORD*)(a1 + 31168) = 0i64;
	*(_QWORD*)(a1 + 31200) = 0i64;
	v86 = sub_14018B280(792i64, 0);
	if (v86)
		v87 = sub_1405CBAE0((__int64)v86);
	else
		v87 = 0i64;
	*(_QWORD*)(a1 + 29080) = v87;
	v88 = sub_14018B280(128i64, 0);
	if (v88)
		v89 = sub_1405FDE20(v88);
	else
		v89 = 0i64;
	*(_QWORD*)(a1 + 32144) = v89;
	*(_QWORD*)(a1 + 25440) = 0i64;
	*(_DWORD*)(a1 + 25424) = 0;
	*(_DWORD*)(a1 + 25464) = 0;
	*(_DWORD*)(a1 + 25468) = 1;
	*(_DWORD*)(a1 + 25472) = 2;
	*(_DWORD*)(a1 + 25476) = 3;
	*(_DWORD*)(a1 + 25752) = dword_140C45DC8;
	*(_DWORD*)(a1 + 25756) = dword_140C45DCC;
	v90 = sub_14018B280(144i64, 0);
	if (v90)
	{
		*((_QWORD*)v90 + 3) = 0i64;
		*((_QWORD*)v90 + 2) = 0i64;
		*((_QWORD*)v90 + 5) = 0i64;
		*((_QWORD*)v90 + 4) = 0i64;
		v91 = 0i64;
		*((_QWORD*)v90 + 7) = 0i64;
		*((_QWORD*)v90 + 8) = 0i64;
		*((_QWORD*)v90 + 9) = 0i64;
		*((_QWORD*)v90 + 10) = 0i64;
		v90[12] = 0;
		v90[32] = 0x80000000;
		*(_QWORD*)v90 = 0i64;
		*((_QWORD*)v90 + 1) = 0i64;
	}
	else
	{
		v90 = 0i64;
	}
	*(_QWORD*)(a1 + 32352) = v90;
	v92 = qword_140C635F0;
	*(_DWORD*)(a1 + 32168) = 0;
	*(_DWORD*)(a1 + 30024) = 18;
	*(_QWORD*)(a1 + 32616) = 0i64;
	*(_DWORD*)(a1 + 32136) = 0;
	*(_QWORD*)(a1 + 32624) = 0i64;
	*(_BYTE*)(a1 + 7020) = 0;
	*(_QWORD*)(a1 + 7044) = 0i64;
	*(_DWORD*)(a1 + 32632) = 0;
	sub_1400167A0(v91, *(_DWORD*)(v92 + 5760), *(int**)(v92 + 5752));
	*(_DWORD*)(a1 + 5616) = 2139095039;
	*(_OWORD*)(a1 + 32480) = 0i64;
	*(_QWORD*)(a1 + 32496) = 0i64;
	*(_QWORD*)(a1 + 32504) = 0i64;
	result = a1;
	*(_OWORD*)(a1 + 32512) = 0i64;
	*(_QWORD*)(a1 + 32528) = 0i64;
	*(_QWORD*)(a1 + 32536) = 0i64;
	*(_QWORD*)(a1 + 32544) = 10i64;
	*(_DWORD*)(a1 + 32552) = 0;
	*(_QWORD*)(a1 + 32736) = 0i64;
	*(_DWORD*)(a1 + 25640) = 0;
	return result;
}
// 1403E1BFE: variable 'v24' is possibly undefined
// 1403E2166: variable 'v37' is possibly undefined
// 1403E22BF: variable 'v40' is possibly undefined
// 1403E2E56: variable 'v94' is possibly undefined
// 1403E3289: variable 'v91' is possibly undefined
// 140B54E00: using guessed type __int64 (__fastcall *off_140B54E00[27])();
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B66868: using guessed type __int64 (__fastcall *off_140B66868)();
// 140B66870: using guessed type void (__fastcall __noreturn *off_140B66870)();
// 140B66880: using guessed type __int64 (__fastcall *off_140B66880[9])();
// 140B66900: using guessed type __int64 (__fastcall *off_140B66900)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int64, __int64, __int64, __int64, __int64, __int64, __int64);
// 140B6FAE0: using guessed type __int64 (__fastcall *off_140B6FAE0[17])();
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C449E0: using guessed type int dword_140C449E0;
// 140C450F0: using guessed type int dword_140C450F0;
// 140C45100: using guessed type unsigned __int8[24];
// 140C45DC8: using guessed type int dword_140C45DC8;
// 140C45DCC: using guessed type int dword_140C45DCC;
// 140C46480: using guessed type int dword_140C46480;
// 140C46490: using guessed type __int128 xmmword_140C46490;
// 140C464E0: using guessed type int dword_140C464E0;
// 140C464F0: using guessed type int dword_140C464F0[];
// 140C46540: using guessed type int dword_140C46540;
// 140C46550: using guessed type int dword_140C46550[];
// 140C465D0: using guessed type int dword_140C465D0;
// 140C465E0: using guessed type __int128 xmmword_140C465E0;
// 140C4AA08: using guessed type int dword_140C4AA08;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63664: using guessed type int dword_140C63664;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C77760: using guessed type __int64 qword_140C77760;
// 140C78450: using guessed type __int128 xmmword_140C78450;
// 140C7DC90: using guessed type __int64 qword_140C7DC90;
// 140C7DCD0: using guessed type __int64 qword_140C7DCD0;

