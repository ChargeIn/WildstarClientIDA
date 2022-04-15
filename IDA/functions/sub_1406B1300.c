//----- (00000001406B1300) ----------------------------------------------------
_QWORD* __fastcall sub_1406B1300(_QWORD* a1, int a2, int a3, int* a4, char a5)
{
	_QWORD* v7; // rbx
	__int64 v8; // rdi
	int* v9; // rcx
	int* v10; // r15
	__int64 v11; // rax
	bool v12; // zf
	__int64 v13; // r14
	__int64 v14; // rax
	int* v15; // r14
	__int64 v16; // r12
	WCHAR** v17; // rbx
	unsigned int v18; // esi
	int v19; // r14d
	__int64 v20; // r13
	__int64 v21; // r12
	int* v22; // rbx
	int* v23; // rax
	_QWORD* v24; // r15
	int* v25; // rsi
	__int64 v26; // rax
	__int64 v27; // r14
	int* v28; // rax
	int* v29; // rax
	__int64 v30; // r8
	_QWORD* v31; // r15
	int* v32; // rsi
	__int64 v33; // rax
	__int64 v34; // r14
	int* v35; // rax
	int* v36; // rax
	__int64 v37; // r8
	_QWORD* v38; // r15
	int* v39; // rsi
	__int64 v40; // rax
	__int64 v41; // r14
	int* v42; // rax
	int* v43; // rax
	__int64 v44; // r8
	_QWORD* v45; // r15
	int* v46; // rsi
	__int64 v47; // rax
	__int64 v48; // r14
	int* v49; // rax
	__int64 v50; // rcx
	WCHAR** v51; // rbx
	unsigned int v52; // esi
	int v53; // r14d
	__int64 v54; // r12
	__int64 v55; // r13
	int* v56; // rbx
	int* v57; // rax
	_QWORD* v58; // r15
	int* v59; // rsi
	__int64 v60; // rax
	__int64 v61; // r14
	int* v62; // rax
	int* v63; // rax
	__int64 v64; // r8
	_QWORD* v65; // r15
	int* v66; // rsi
	__int64 v67; // rax
	__int64 v68; // r14
	int* v69; // rax
	int* v70; // rax
	__int64 v71; // r8
	_QWORD* v72; // r15
	int* v73; // rsi
	__int64 v74; // rax
	__int64 v75; // r14
	int* v76; // rax
	int* v77; // rax
	__int64 v78; // r8
	_QWORD* v79; // r15
	int* v80; // rsi
	__int64 v81; // rax
	__int64 v82; // r14
	int* v83; // rax
	WCHAR** v84; // rbx
	unsigned int v85; // esi
	__int64 v86; // r12
	__int64 v87; // r13
	int* v88; // rbx
	int* v89; // rax
	_QWORD* v90; // r15
	int* v91; // rsi
	__int64 v92; // rax
	__int64 v93; // r14
	int* v94; // rax
	int* v95; // rax
	__int64 v96; // r8
	_QWORD* v97; // r15
	int* v98; // rsi
	__int64 v99; // rax
	__int64 v100; // r14
	int* v101; // rax
	int* v102; // rax
	__int64 v103; // r8
	_QWORD* v104; // r15
	int* v105; // rsi
	__int64 v106; // rax
	__int64 v107; // r14
	int* v108; // rax
	int* v109; // rax
	__int64 v110; // r8
	_QWORD* v111; // r15
	int* v112; // rsi
	__int64 v113; // rax
	__int64 v114; // r14
	int* v115; // rax
	__int64 v116; // rbx
	unsigned int v117; // esi
	__int64 v118; // r12
	int* v119; // rbx
	int* v120; // rax
	_QWORD* v121; // r15
	int* v122; // rsi
	__int64 v123; // rax
	__int64 v124; // r14
	int* v125; // rax
	int* v126; // rax
	__int64 v127; // r8
	_QWORD* v128; // r15
	int* v129; // rsi
	__int64 v130; // rax
	__int64 v131; // r14
	int* v132; // rax
	WCHAR** v133; // rbx
	unsigned int v134; // esi
	__int64 v135; // r12
	__int64 v136; // r13
	int* v137; // rbx
	int* v138; // rax
	_QWORD* v139; // r15
	int* v140; // rsi
	__int64 v141; // rax
	__int64 v142; // r14
	int* v143; // rax
	int* v144; // rax
	__int64 v145; // r8
	_QWORD* v146; // r15
	int* v147; // rsi
	__int64 v148; // rax
	__int64 v149; // r14
	int* v150; // rax
	int* v151; // rax
	__int64 v152; // r8
	_QWORD* v153; // r15
	int* v154; // rsi
	__int64 v155; // rax
	__int64 v156; // r14
	int* v157; // rax
	WCHAR** v158; // rbx
	unsigned int v159; // esi
	__int64 v160; // r14
	__int64 v161; // r15
	int* v162; // rbx
	int* v163; // rax
	_QWORD* v164; // rbx
	__int64 v165; // rax
	int* v166; // rax
	__int64 v167; // r8
	_QWORD* v168; // rbx
	__int64 v169; // rax
	int* v170; // rax
	__int64 v171; // r8
	_QWORD* v172; // rbx
	unsigned int v173; // esi
	int* v174; // rbx
	int* v175; // rax
	_QWORD* v176; // rbx
	__int64 v177; // rsi
	unsigned __int64 v178; // r13
	unsigned int v179; // eax
	int* v180; // rax
	int* v181; // rax
	int* v182; // r14
	__int64 v183; // rsi
	int* v184; // rax
	int* v185; // rbx
	unsigned __int64 v186; // rsi
	unsigned int v187; // r12d
	__int64 v188; // rax
	unsigned int v189; // r14d
	int* v190; // rax
	_QWORD* v191; // rax
	int* v192; // rsi
	int* v193; // rax
	_QWORD* v194; // rax
	int* v195; // r15
	int* v196; // r14
	__int64 v197; // rsi
	int* v198; // rax
	unsigned __int64 v199; // rsi
	int* v200; // rax
	_QWORD* v201; // rsi
	__int64 v202; // rsi
	unsigned __int64 v203; // r13
	__int64 v204; // rax
	WCHAR* v205; // rcx
	int* v206; // rax
	_QWORD* v207; // rbx
	__int64 v208; // rax
	__int64 v209; // rcx
	int* v210; // rax
	_QWORD* v211; // rbx
	__int64 v212; // rax
	unsigned int v213; // eax
	unsigned int v214; // ebx
	__int64 v215; // rdx
	_QWORD* v216; // rbx
	unsigned int v217; // r12d
	unsigned int v218; // r15d
	__int64 v219; // rax
	unsigned int v220; // r14d
	__int64 v221; // rax
	__int64 v222; // rdx
	_QWORD* v223; // rsi
	__int64 v224; // rcx
	int* v225; // rax
	_QWORD* v226; // rsi
	__int64 v227; // rax
	__int64 v228; // rax
	__int64 v229; // rdx
	_QWORD* v230; // rsi
	int* v231; // r15
	int* v232; // r14
	__int64 v233; // rsi
	int* v234; // rax
	unsigned __int64 v235; // rsi
	int* v236; // rax
	_QWORD* v237; // rsi
	__int64 v238; // rax
	__int64* v239; // rcx
	int* v240; // rax
	__int64 v241; // rax
	unsigned int v243; // [rsp+4Ch] [rbp-BCh]
	unsigned int v244; // [rsp+4Ch] [rbp-BCh]
	unsigned int v245; // [rsp+4Ch] [rbp-BCh]
	__int64 v246; // [rsp+50h] [rbp-B8h] BYREF
	WCHAR** v247; // [rsp+58h] [rbp-B0h]
	__int64 v248; // [rsp+60h] [rbp-A8h]
	__int64 v249; // [rsp+70h] [rbp-98h] BYREF
	int* v250; // [rsp+78h] [rbp-90h]
	int* v251; // [rsp+80h] [rbp-88h]
	__int64 v252; // [rsp+88h] [rbp-80h]
	char v253[8]; // [rsp+90h] [rbp-78h] BYREF
	int* v254; // [rsp+98h] [rbp-70h]
	int* v255; // [rsp+A0h] [rbp-68h]
	__int64 v256; // [rsp+A8h] [rbp-60h]
	_QWORD* v257; // [rsp+B0h] [rbp-58h]
	char v258[8]; // [rsp+B8h] [rbp-50h] BYREF
	int* v259; // [rsp+C0h] [rbp-48h]
	int* v260; // [rsp+C8h] [rbp-40h]
	__int64 v261; // [rsp+D0h] [rbp-38h]
	char v262[8]; // [rsp+D8h] [rbp-30h] BYREF
	int* v263; // [rsp+E0h] [rbp-28h]
	int* v264; // [rsp+E8h] [rbp-20h]
	__int64 v265; // [rsp+F0h] [rbp-18h]
	char v266[8]; // [rsp+F8h] [rbp-10h] BYREF
	int* v267; // [rsp+100h] [rbp-8h]
	int* v268; // [rsp+108h] [rbp+0h]
	__int64 v269; // [rsp+110h] [rbp+8h]
	char v270[8]; // [rsp+118h] [rbp+10h] BYREF
	int* v271; // [rsp+120h] [rbp+18h]
	int* v272; // [rsp+128h] [rbp+20h]
	__int64 v273; // [rsp+130h] [rbp+28h]
	char v274[8]; // [rsp+138h] [rbp+30h] BYREF
	int* v275; // [rsp+140h] [rbp+38h]
	int* v276; // [rsp+148h] [rbp+40h]
	__int64 v277; // [rsp+150h] [rbp+48h]
	char v278[8]; // [rsp+158h] [rbp+50h] BYREF
	int* v279; // [rsp+160h] [rbp+58h]
	int* v280; // [rsp+168h] [rbp+60h]
	__int64 v281; // [rsp+170h] [rbp+68h]
	char v282[8]; // [rsp+178h] [rbp+70h] BYREF
	int* v283; // [rsp+180h] [rbp+78h]
	int* v284; // [rsp+188h] [rbp+80h]
	__int64 v285; // [rsp+190h] [rbp+88h]
	char v286[8]; // [rsp+198h] [rbp+90h] BYREF
	int* v287; // [rsp+1A0h] [rbp+98h]
	int* v288; // [rsp+1A8h] [rbp+A0h]
	__int64 v289; // [rsp+1B0h] [rbp+A8h]
	char v290[8]; // [rsp+1B8h] [rbp+B0h] BYREF
	int* v291; // [rsp+1C0h] [rbp+B8h]
	int* v292; // [rsp+1C8h] [rbp+C0h]
	__int64 v293; // [rsp+1D0h] [rbp+C8h]
	char v294[8]; // [rsp+1D8h] [rbp+D0h] BYREF
	int* v295; // [rsp+1E0h] [rbp+D8h]
	int* v296; // [rsp+1E8h] [rbp+E0h]
	__int64 v297; // [rsp+1F0h] [rbp+E8h]
	char v298[8]; // [rsp+1F8h] [rbp+F0h] BYREF
	int* v299; // [rsp+200h] [rbp+F8h]
	int* v300; // [rsp+208h] [rbp+100h]
	__int64 v301; // [rsp+210h] [rbp+108h]
	char v302[8]; // [rsp+218h] [rbp+110h] BYREF
	int* v303; // [rsp+220h] [rbp+118h]
	int* v304; // [rsp+228h] [rbp+120h]
	__int64 v305; // [rsp+230h] [rbp+128h]
	char v306[8]; // [rsp+238h] [rbp+130h] BYREF
	int* v307; // [rsp+240h] [rbp+138h]
	int* v308; // [rsp+248h] [rbp+140h]
	__int64 v309; // [rsp+250h] [rbp+148h]
	char v310[8]; // [rsp+258h] [rbp+150h] BYREF
	int* v311; // [rsp+260h] [rbp+158h]
	int* v312; // [rsp+268h] [rbp+160h]
	__int64 v313; // [rsp+270h] [rbp+168h]
	char v314[8]; // [rsp+278h] [rbp+170h] BYREF
	int* v315; // [rsp+280h] [rbp+178h]
	int* v316; // [rsp+288h] [rbp+180h]
	__int64 v317; // [rsp+290h] [rbp+188h]
	__int64 v318; // [rsp+298h] [rbp+190h] BYREF
	__int64 v319; // [rsp+2A0h] [rbp+198h]
	__int64 v320; // [rsp+2A8h] [rbp+1A0h]
	__int64 v321; // [rsp+2B0h] [rbp+1A8h]
	__int64 v322; // [rsp+2B8h] [rbp+1B0h] BYREF
	__int64 v323; // [rsp+2C0h] [rbp+1B8h]
	__int64 v324; // [rsp+2C8h] [rbp+1C0h]
	__int64 v325; // [rsp+2D0h] [rbp+1C8h]
	__int64 v326; // [rsp+2D8h] [rbp+1D0h] BYREF
	__int64 v327; // [rsp+2E0h] [rbp+1D8h]
	__int64 v328; // [rsp+2E8h] [rbp+1E0h]
	__int64 v329; // [rsp+2F0h] [rbp+1E8h]
	__int64 v330[2]; // [rsp+2F8h] [rbp+1F0h] BYREF
	__int64 v331; // [rsp+308h] [rbp+200h] BYREF
	__int64 v332; // [rsp+310h] [rbp+208h]
	__int64 v333; // [rsp+318h] [rbp+210h]
	__int64 v334; // [rsp+320h] [rbp+218h]
	__int64 v335; // [rsp+328h] [rbp+220h] BYREF
	__int64 v336; // [rsp+330h] [rbp+228h]
	__int64 v337; // [rsp+338h] [rbp+230h]
	__int64 v338; // [rsp+340h] [rbp+238h]
	__int64 v339; // [rsp+348h] [rbp+240h] BYREF
	__int64 v340; // [rsp+350h] [rbp+248h]
	__int64 v341; // [rsp+358h] [rbp+250h]
	__int64 v342; // [rsp+360h] [rbp+258h]
	__int64 v343; // [rsp+368h] [rbp+260h] BYREF
	__int64 v344; // [rsp+370h] [rbp+268h]
	__int64 v345; // [rsp+378h] [rbp+270h]
	__int64 v346; // [rsp+380h] [rbp+278h]
	__int64 v347; // [rsp+388h] [rbp+280h] BYREF
	__int64 v348; // [rsp+390h] [rbp+288h]
	__int64 v349; // [rsp+398h] [rbp+290h]
	__int64 v350; // [rsp+3A0h] [rbp+298h]
	__int64 v351[2]; // [rsp+3A8h] [rbp+2A0h] BYREF
	__int64 v352; // [rsp+3B8h] [rbp+2B0h] BYREF
	__int64 v353; // [rsp+3C0h] [rbp+2B8h]
	__int64 v354; // [rsp+3C8h] [rbp+2C0h]
	__int64 v355; // [rsp+3D0h] [rbp+2C8h]
	__int64 v356; // [rsp+3D8h] [rbp+2D0h] BYREF
	__int64 v357; // [rsp+3E0h] [rbp+2D8h]
	__int64 v358; // [rsp+3E8h] [rbp+2E0h]
	__int64 v359; // [rsp+3F0h] [rbp+2E8h]
	__int64 v360; // [rsp+3F8h] [rbp+2F0h] BYREF
	__int64 v361; // [rsp+400h] [rbp+2F8h]
	__int64 v362; // [rsp+408h] [rbp+300h]
	__int64 v363; // [rsp+410h] [rbp+308h]
	__int64 v364; // [rsp+418h] [rbp+310h] BYREF
	__int64 v365; // [rsp+420h] [rbp+318h]
	__int64 v366; // [rsp+428h] [rbp+320h]
	__int64 v367; // [rsp+430h] [rbp+328h]
	__int64 v368[24]; // [rsp+438h] [rbp+330h] BYREF
	__int128 v369; // [rsp+4F8h] [rbp+3F0h]
	int* v370; // [rsp+508h] [rbp+400h]
	__int64 v371[24]; // [rsp+518h] [rbp+410h] BYREF
	int* v372; // [rsp+5D8h] [rbp+4D0h]
	int* v373; // [rsp+5E0h] [rbp+4D8h]
	int* v374; // [rsp+5E8h] [rbp+4E0h]
	__int64 v375[12]; // [rsp+5F8h] [rbp+4F0h] BYREF

	v7 = a1;
	v257 = a1;
	if (a4 && *(_WORD*)a4)
	{
		sub_1400B7090((__int64)v368, a3);
		v8 = 0i64;
		v370 = 0i64;
		v369 = 0i64;
		v368[0] = (__int64)off_140B69230;
		v9 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v369 = v9;
		*((_QWORD*)&v369 + 1) = v9;
		v370 = v9 + 4;
		if (v9)
			*(_WORD*)v9 = 0;
		v10 = 0i64;
		v250 = 0i64;
		v252 = 0i64;
		v11 = 0i64;
		do
			v12 = *((_WORD*)&unk_1409F69E4 + ++v11) == 0;
		while (!v12);
		v13 = (2 * v11) >> 1;
		if ((unsigned __int64)(v13 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v10 = sub_14018B280(2 * (v13 + 1), 0);
			v250 = v10;
			v252 = (__int64)v10 + 2 * v13 + 2;
		}
		sub_1407DB590(v10, (int*)&unk_1409F69E4, 2 * v13);
		v251 = (int*)((char*)v10 + 2 * v13);
		if (v251)
			*((_WORD*)v10 + v13) = 0;
		v14 = 0i64;
		v15 = 0i64;
		v254 = 0i64;
		v256 = 0i64;
		if (*(_WORD*)a4)
		{
			do
				++v14;
			while (*((_WORD*)a4 + v14));
		}
		v16 = (2 * v14) >> 1;
		if ((unsigned __int64)(v16 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v15 = sub_14018B280(2 * (v16 + 1), 0);
			v254 = v15;
			v256 = (__int64)v15 + 2 * v16 + 2;
		}
		sub_1407DB590(v15, a4, 2 * v16);
		v255 = (int*)((char*)v15 + 2 * v16);
		if (v255)
			*((_WORD*)v15 + v16) = 0;
		sub_14018F570((__int64)&v246, (__int64)v253, (__int64)&v249, 34, 92);
		if (v15)
			sub_14018B900((__int64)v15, 0);
		if (v10)
			sub_14018B900((__int64)v10, 0);
		switch (a2)
		{
		case 1:
		case 2:
		case 3:
		case 28:
		case 29:
			v17 = v247;
			if ((unsigned __int64)((v248 - (__int64)v247) >> 5) >= 5)
			{
				sub_14018E8F0(v247[1]);
				v18 = sub_14018E820(v17[5]);
				v19 = sub_14018E820(v17[9]);
				v243 = v19;
				v20 = sub_14018E8F0(v17[13]);
				v21 = sub_14018E8F0(v17[17]);
				v22 = sub_14018B280(88i64, 0);
				if (v22)
				{
					v23 = sub_1400B5DF0(qword_140C658F0, v18, 0i64);
					v24 = (_QWORD*)sub_1404DC4F0((__int64)v22, (__int64)v23, v19);
				}
				else
				{
					v24 = 0i64;
				}
				v25 = 0i64;
				v263 = 0i64;
				v264 = 0i64;
				v265 = 0i64;
				v26 = 0i64;
				do
					v12 = aItem_11[++v26] == 0;
				while (!v12);
				v27 = (2 * v26) >> 1;
				if ((unsigned __int64)(v27 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v25 = sub_14018B280(2 * (v27 + 1), 0);
					v263 = v25;
					v264 = v25;
					v265 = (__int64)v25 + 2 * v27 + 2;
				}
				sub_1407DB590(v25, (int*)L"item", 2 * v27);
				v28 = (int*)((char*)v25 + 2 * v27);
				v264 = v28;
				if (v28)
					*(_WORD*)v28 = 0;
				sub_1400B7480((__int64)v368, v24);
				(*(void(__fastcall**)(_QWORD*, char*))(*v24 + 72i64))(v24, v262);
				if (v263)
					sub_14018B900((__int64)v263, 0);
				v29 = sub_14018B280(88i64, 0);
				if (v29)
					v31 = sub_1404DD880(v29, v20, v30, a5);
				else
					v31 = 0i64;
				v32 = 0i64;
				v267 = 0i64;
				v268 = 0i64;
				v269 = 0i64;
				v33 = 0i64;
				do
					v12 = aPrice[++v33] == 0;
				while (!v12);
				v34 = (2 * v33) >> 1;
				if ((unsigned __int64)(v34 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v32 = sub_14018B280(2 * (v34 + 1), 0);
					v267 = v32;
					v268 = v32;
					v269 = (__int64)v32 + 2 * v34 + 2;
				}
				sub_1407DB590(v32, (int*)L"price", 2 * v34);
				v35 = (int*)((char*)v32 + 2 * v34);
				v268 = v35;
				if (v35)
					*(_WORD*)v35 = 0;
				sub_1400B7480((__int64)v368, v31);
				(*(void(__fastcall**)(_QWORD*, char*))(*v31 + 72i64))(v31, v266);
				if (v267)
					sub_14018B900((__int64)v267, 0);
				v36 = sub_14018B280(88i64, 0);
				if (v36)
					v38 = sub_1404DD880(v36, v21, v37, a5);
				else
					v38 = 0i64;
				v39 = 0i64;
				v315 = 0i64;
				v316 = 0i64;
				v317 = 0i64;
				v40 = 0i64;
				do
					v12 = aReserveprice[++v40] == 0;
				while (!v12);
				v41 = (2 * v40) >> 1;
				if ((unsigned __int64)(v41 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v39 = sub_14018B280(2 * (v41 + 1), 0);
					v315 = v39;
					v316 = v39;
					v317 = (__int64)v39 + 2 * v41 + 2;
				}
				sub_1407DB590(v39, (int*)L"reservePrice", 2 * v41);
				v42 = (int*)((char*)v39 + 2 * v41);
				v316 = v42;
				if (v42)
					*(_WORD*)v42 = 0;
				sub_1400B7480((__int64)v368, v38);
				(*(void(__fastcall**)(_QWORD*, char*))(*v38 + 72i64))(v38, v314);
				if (v315)
					sub_14018B900((__int64)v315, 0);
				v43 = sub_14018B280(88i64, 0);
				if (v43)
					v45 = sub_1404DD880(v43, v20 * v243, v44, a5);
				else
					v45 = 0i64;
				v46 = 0i64;
				v295 = 0i64;
				v296 = 0i64;
				v297 = 0i64;
				v47 = 0i64;
				do
					v12 = aTotal_2[++v47] == 0;
				while (!v12);
				v48 = (2 * v47) >> 1;
				if ((unsigned __int64)(v48 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v46 = sub_14018B280(2 * (v48 + 1), 0);
					v295 = v46;
					v296 = v46;
					v297 = (__int64)v46 + 2 * v48 + 2;
				}
				sub_1407DB590(v46, (int*)L"total", 2 * v48);
				v49 = (int*)((char*)v46 + 2 * v48);
				v296 = v49;
				if (v49)
					*(_WORD*)v49 = 0;
				sub_1400B7480((__int64)v368, v45);
				(*(void(__fastcall**)(_QWORD*, char*))(*v45 + 72i64))(v45, v294);
				v50 = (__int64)v295;
				goto LABEL_297;
			}
			break;
		case 4:
			v84 = v247;
			if ((unsigned __int64)((v248 - (__int64)v247) >> 5) >= 4)
			{
				sub_14018E8F0(v247[1]);
				v85 = sub_14018E820(v84[5]);
				v86 = sub_14018E8F0(v84[9]);
				v87 = sub_14018E8F0(v84[13]);
				v88 = sub_14018B280(88i64, 0);
				if (v88)
				{
					v89 = sub_1400B5DF0(qword_140C658F0, v85, 0i64);
					v90 = (_QWORD*)sub_1404DC4F0((__int64)v88, (__int64)v89, 1);
				}
				else
				{
					v90 = 0i64;
				}
				v91 = 0i64;
				v271 = 0i64;
				v272 = 0i64;
				v273 = 0i64;
				v92 = 0i64;
				do
					v12 = aItem_13[++v92] == 0;
				while (!v12);
				v93 = (2 * v92) >> 1;
				if ((unsigned __int64)(v93 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v91 = sub_14018B280(2 * (v93 + 1), 0);
					v271 = v91;
					v272 = v91;
					v273 = (__int64)v91 + 2 * v93 + 2;
				}
				sub_1407DB590(v91, (int*)L"item", 2 * v93);
				v94 = (int*)((char*)v91 + 2 * v93);
				v272 = v94;
				if (v94)
					*(_WORD*)v94 = 0;
				sub_1400B7480((__int64)v368, v90);
				(*(void(__fastcall**)(_QWORD*, char*))(*v90 + 72i64))(v90, v270);
				if (v271)
					sub_14018B900((__int64)v271, 0);
				v95 = sub_14018B280(88i64, 0);
				if (v95)
					v97 = sub_1404DD880(v95, v86, v96, a5);
				else
					v97 = 0i64;
				v98 = 0i64;
				v275 = 0i64;
				v276 = 0i64;
				v277 = 0i64;
				v99 = 0i64;
				do
					v12 = aBid[++v99] == 0;
				while (!v12);
				v100 = (2 * v99) >> 1;
				if ((unsigned __int64)(v100 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v98 = sub_14018B280(2 * (v100 + 1), 0);
					v275 = v98;
					v276 = v98;
					v277 = (__int64)v98 + 2 * v100 + 2;
				}
				sub_1407DB590(v98, (int*)L"bid", 2 * v100);
				v101 = (int*)((char*)v98 + 2 * v100);
				v276 = v101;
				if (v101)
					*(_WORD*)v101 = 0;
				sub_1400B7480((__int64)v368, v97);
				(*(void(__fastcall**)(_QWORD*, char*))(*v97 + 72i64))(v97, v274);
				if (v275)
					sub_14018B900((__int64)v275, 0);
				v102 = sub_14018B280(88i64, 0);
				if (v102)
					v104 = sub_1404DD880(v102, v87, v103, a5);
				else
					v104 = 0i64;
				v105 = 0i64;
				v283 = 0i64;
				v284 = 0i64;
				v285 = 0i64;
				v106 = 0i64;
				do
					v12 = aRake_0[++v106] == 0;
				while (!v12);
				v107 = (2 * v106) >> 1;
				if ((unsigned __int64)(v107 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v105 = sub_14018B280(2 * (v107 + 1), 0);
					v283 = v105;
					v284 = v105;
					v285 = (__int64)v105 + 2 * v107 + 2;
				}
				sub_1407DB590(v105, (int*)L"rake", 2 * v107);
				v108 = (int*)((char*)v105 + 2 * v107);
				v284 = v108;
				if (v108)
					*(_WORD*)v108 = 0;
				sub_1400B7480((__int64)v368, v104);
				(*(void(__fastcall**)(_QWORD*, char*))(*v104 + 72i64))(v104, v282);
				if (v283)
					sub_14018B900((__int64)v283, 0);
				v109 = sub_14018B280(88i64, 0);
				if (v109)
					v111 = sub_1404DD880(v109, v86 - v87, v110, a5);
				else
					v111 = 0i64;
				v112 = 0i64;
				v291 = 0i64;
				v292 = 0i64;
				v293 = 0i64;
				v113 = 0i64;
				do
					v12 = aTotal_4[++v113] == 0;
				while (!v12);
				v114 = (2 * v113) >> 1;
				if ((unsigned __int64)(v114 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v112 = sub_14018B280(2 * (v114 + 1), 0);
					v291 = v112;
					v292 = v112;
					v293 = (__int64)v112 + 2 * v114 + 2;
				}
				sub_1407DB590(v112, (int*)L"total", 2 * v114);
				v115 = (int*)((char*)v112 + 2 * v114);
				v292 = v115;
				if (v115)
					*(_WORD*)v115 = 0;
				sub_1400B7480((__int64)v368, v111);
				(*(void(__fastcall**)(_QWORD*, char*))(*v111 + 72i64))(v111, v290);
				v50 = (__int64)v291;
				goto LABEL_297;
			}
			break;
		case 5:
			v116 = (__int64)v247;
			if ((unsigned __int64)((v248 - (__int64)v247) >> 5) >= 3)
			{
				sub_14018E8F0(v247[1]);
				v117 = sub_14018E820(*(WCHAR**)(v116 + 40));
				v118 = sub_14018E8F0(*(WCHAR**)(v116 + 72));
				v119 = sub_14018B280(88i64, 0);
				if (v119)
				{
					v120 = sub_1400B5DF0(qword_140C658F0, v117, 0i64);
					v121 = (_QWORD*)sub_1404DC4F0((__int64)v119, (__int64)v120, 1);
				}
				else
				{
					v121 = 0i64;
				}
				v122 = 0i64;
				v259 = 0i64;
				v260 = 0i64;
				v261 = 0i64;
				v123 = 0i64;
				do
					v12 = aItem_14[++v123] == 0;
				while (!v12);
				v124 = (2 * v123) >> 1;
				if ((unsigned __int64)(v124 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v122 = sub_14018B280(2 * (v124 + 1), 0);
					v259 = v122;
					v260 = v122;
					v261 = (__int64)v122 + 2 * v124 + 2;
				}
				sub_1407DB590(v122, (int*)L"item", 2 * v124);
				v125 = (int*)((char*)v122 + 2 * v124);
				v260 = v125;
				if (v125)
					*(_WORD*)v125 = 0;
				sub_1400B7480((__int64)v368, v121);
				(*(void(__fastcall**)(_QWORD*, char*))(*v121 + 72i64))(v121, v258);
				if (v259)
					sub_14018B900((__int64)v259, 0);
				v126 = sub_14018B280(88i64, 0);
				if (v126)
					v128 = sub_1404DD880(v126, v118, v127, a5);
				else
					v128 = 0i64;
				v129 = 0i64;
				v299 = 0i64;
				v300 = 0i64;
				v301 = 0i64;
				v130 = 0i64;
				do
					v12 = aBid_0[++v130] == 0;
				while (!v12);
				v131 = (2 * v130) >> 1;
				if ((unsigned __int64)(v131 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v129 = sub_14018B280(2 * (v131 + 1), 0);
					v299 = v129;
					v300 = v129;
					v301 = (__int64)v129 + 2 * v131 + 2;
				}
				sub_1407DB590(v129, (int*)L"bid", 2 * v131);
				v132 = (int*)((char*)v129 + 2 * v131);
				v300 = v132;
				if (v132)
					*(_WORD*)v132 = 0;
				sub_1400B7480((__int64)v368, v128);
				(*(void(__fastcall**)(_QWORD*, char*))(*v128 + 72i64))(v128, v298);
				v50 = (__int64)v299;
				goto LABEL_297;
			}
			break;
		case 6:
			v133 = v247;
			if ((unsigned __int64)((v248 - (__int64)v247) >> 5) >= 4)
			{
				sub_14018E8F0(v247[1]);
				v134 = sub_14018E820(v133[5]);
				v135 = sub_14018E8F0(v133[9]);
				v136 = sub_14018E8F0(v133[13]);
				v137 = sub_14018B280(88i64, 0);
				if (v137)
				{
					v138 = sub_1400B5DF0(qword_140C658F0, v134, 0i64);
					v139 = (_QWORD*)sub_1404DC4F0((__int64)v137, (__int64)v138, 1);
				}
				else
				{
					v139 = 0i64;
				}
				v140 = 0i64;
				v307 = 0i64;
				v308 = 0i64;
				v309 = 0i64;
				v141 = 0i64;
				do
					v12 = aItem_15[++v141] == 0;
				while (!v12);
				v142 = (2 * v141) >> 1;
				if ((unsigned __int64)(v142 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v140 = sub_14018B280(2 * (v142 + 1), 0);
					v307 = v140;
					v308 = v140;
					v309 = (__int64)v140 + 2 * v142 + 2;
				}
				sub_1407DB590(v140, (int*)L"item", 2 * v142);
				v143 = (int*)((char*)v140 + 2 * v142);
				v308 = v143;
				if (v143)
					*(_WORD*)v143 = 0;
				sub_1400B7480((__int64)v368, v139);
				(*(void(__fastcall**)(_QWORD*, char*))(*v139 + 72i64))(v139, v306);
				if (v307)
					sub_14018B900((__int64)v307, 0);
				v144 = sub_14018B280(88i64, 0);
				if (v144)
					v146 = sub_1404DD880(v144, v135, v145, a5);
				else
					v146 = 0i64;
				v147 = 0i64;
				v254 = 0i64;
				v255 = 0i64;
				v256 = 0i64;
				v148 = 0i64;
				do
					v12 = aOldbid[++v148] == 0;
				while (!v12);
				v149 = (2 * v148) >> 1;
				if ((unsigned __int64)(v149 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v147 = sub_14018B280(2 * (v149 + 1), 0);
					v254 = v147;
					v255 = v147;
					v256 = (__int64)v147 + 2 * v149 + 2;
				}
				sub_1407DB590(v147, (int*)L"oldBid", 2 * v149);
				v150 = (int*)((char*)v147 + 2 * v149);
				v255 = v150;
				if (v150)
					*(_WORD*)v150 = 0;
				sub_1400B7480((__int64)v368, v146);
				(*(void(__fastcall**)(_QWORD*, char*))(*v146 + 72i64))(v146, v253);
				if (v254)
					sub_14018B900((__int64)v254, 0);
				v151 = sub_14018B280(88i64, 0);
				if (v151)
					v153 = sub_1404DD880(v151, v136, v152, a5);
				else
					v153 = 0i64;
				v154 = 0i64;
				v250 = 0i64;
				v251 = 0i64;
				v252 = 0i64;
				v155 = 0i64;
				do
					v12 = aNewbid[++v155] == 0;
				while (!v12);
				v156 = (2 * v155) >> 1;
				if ((unsigned __int64)(v156 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v154 = sub_14018B280(2 * (v156 + 1), 0);
					v250 = v154;
					v251 = v154;
					v252 = (__int64)v154 + 2 * v156 + 2;
				}
				sub_1407DB590(v154, (int*)L"newBid", 2 * v156);
				v157 = (int*)((char*)v154 + 2 * v156);
				v251 = v157;
				if (v157)
					*(_WORD*)v157 = 0;
				sub_1400B7480((__int64)v368, v153);
				(*(void(__fastcall**)(_QWORD*, __int64*))(*v153 + 72i64))(v153, &v249);
				v50 = (__int64)v250;
				goto LABEL_297;
			}
			break;
		case 7:
		case 8:
			v158 = v247;
			if ((unsigned __int64)((v248 - (__int64)v247) >> 5) >= 4)
			{
				sub_14018E8F0(v247[1]);
				v159 = sub_14018E820(v158[5]);
				v160 = sub_14018E8F0(v158[9]);
				v161 = sub_14018E8F0(v158[13]);
				v162 = sub_14018B280(88i64, 0);
				if (v162)
				{
					v163 = sub_1400B5DF0(qword_140C658F0, v159, 0i64);
					v164 = (_QWORD*)sub_1404DC4F0((__int64)v162, (__int64)v163, 1);
				}
				else
				{
					v164 = 0i64;
				}
				v319 = 0i64;
				v320 = 0i64;
				v321 = 0i64;
				v165 = 0i64;
				do
					v12 = aItem_16[++v165] == 0;
				while (!v12);
				sub_14001C1B0(&v318, (int*)L"item", (__int64)&aItem_16[v165]);
				sub_1400B7480((__int64)v368, v164);
				(*(void(__fastcall**)(_QWORD*, __int64*))(*v164 + 72i64))(v164, &v318);
				if (v319)
					sub_14018B900(v319, 0);
				v166 = sub_14018B280(88i64, 0);
				if (v166)
					v168 = sub_1404DD880(v166, v160, v167, a5);
				else
					v168 = 0i64;
				v365 = 0i64;
				v366 = 0i64;
				v367 = 0i64;
				v169 = 0i64;
				do
					v12 = aMinbid[++v169] == 0;
				while (!v12);
				sub_14001C1B0(&v364, (int*)L"minBid", (__int64)&aMinbid[v169]);
				sub_1400B7480((__int64)v368, v168);
				(*(void(__fastcall**)(_QWORD*, __int64*))(*v168 + 72i64))(v168, &v364);
				if (v365)
					sub_14018B900(v365, 0);
				v170 = sub_14018B280(88i64, 0);
				if (v170)
					v172 = sub_1404DD880(v170, v161, v171, a5);
				else
					v172 = 0i64;
				v336 = 0i64;
				v337 = 0i64;
				v338 = 0i64;
				do
					v12 = aBuyout[++v8] == 0;
				while (!v12);
				sub_14001C1B0(&v335, (int*)L"buyout", (__int64)&aBuyout[v8]);
				sub_1400B7480((__int64)v368, v172);
				(*(void(__fastcall**)(_QWORD*, __int64*))(*v172 + 72i64))(v172, &v335);
				v50 = v336;
				goto LABEL_297;
			}
			break;
		case 27:
			v51 = v247;
			if ((unsigned __int64)((v248 - (__int64)v247) >> 5) >= 5)
			{
				sub_14018E8F0(v247[1]);
				v52 = sub_14018E820(v51[5]);
				v53 = sub_14018E820(v51[9]);
				v244 = v53;
				v54 = sub_14018E8F0(v51[13]);
				v55 = sub_14018E8F0(v51[17]);
				v56 = sub_14018B280(88i64, 0);
				if (v56)
				{
					v57 = sub_1400B5DF0(qword_140C658F0, v52, 0i64);
					v58 = (_QWORD*)sub_1404DC4F0((__int64)v56, (__int64)v57, v53);
				}
				else
				{
					v58 = 0i64;
				}
				v59 = 0i64;
				v279 = 0i64;
				v280 = 0i64;
				v281 = 0i64;
				v60 = 0i64;
				do
					v12 = aItem_12[++v60] == 0;
				while (!v12);
				v61 = (2 * v60) >> 1;
				if ((unsigned __int64)(v61 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v59 = sub_14018B280(2 * (v61 + 1), 0);
					v279 = v59;
					v280 = v59;
					v281 = (__int64)v59 + 2 * v61 + 2;
				}
				sub_1407DB590(v59, (int*)L"item", 2 * v61);
				v62 = (int*)((char*)v59 + 2 * v61);
				v280 = v62;
				if (v62)
					*(_WORD*)v62 = 0;
				sub_1400B7480((__int64)v368, v58);
				(*(void(__fastcall**)(_QWORD*, char*))(*v58 + 72i64))(v58, v278);
				if (v279)
					sub_14018B900((__int64)v279, 0);
				v63 = sub_14018B280(88i64, 0);
				if (v63)
					v65 = sub_1404DD880(v63, v54, v64, a5);
				else
					v65 = 0i64;
				v66 = 0i64;
				v311 = 0i64;
				v312 = 0i64;
				v313 = 0i64;
				v67 = 0i64;
				do
					v12 = aPrice_0[++v67] == 0;
				while (!v12);
				v68 = (2 * v67) >> 1;
				if ((unsigned __int64)(v68 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v66 = sub_14018B280(2 * (v68 + 1), 0);
					v311 = v66;
					v312 = v66;
					v313 = (__int64)v66 + 2 * v68 + 2;
				}
				sub_1407DB590(v66, (int*)L"price", 2 * v68);
				v69 = (int*)((char*)v66 + 2 * v68);
				v312 = v69;
				if (v69)
					*(_WORD*)v69 = 0;
				sub_1400B7480((__int64)v368, v65);
				(*(void(__fastcall**)(_QWORD*, char*))(*v65 + 72i64))(v65, v310);
				if (v311)
					sub_14018B900((__int64)v311, 0);
				v70 = sub_14018B280(88i64, 0);
				if (v70)
					v72 = sub_1404DD880(v70, v55, v71, a5);
				else
					v72 = 0i64;
				v73 = 0i64;
				v287 = 0i64;
				v288 = 0i64;
				v289 = 0i64;
				v74 = 0i64;
				do
					v12 = aRake[++v74] == 0;
				while (!v12);
				v75 = (2 * v74) >> 1;
				if ((unsigned __int64)(v75 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v73 = sub_14018B280(2 * (v75 + 1), 0);
					v287 = v73;
					v288 = v73;
					v289 = (__int64)v73 + 2 * v75 + 2;
				}
				sub_1407DB590(v73, (int*)L"rake", 2 * v75);
				v76 = (int*)((char*)v73 + 2 * v75);
				v288 = v76;
				if (v76)
					*(_WORD*)v76 = 0;
				sub_1400B7480((__int64)v368, v72);
				(*(void(__fastcall**)(_QWORD*, char*))(*v72 + 72i64))(v72, v286);
				if (v287)
					sub_14018B900((__int64)v287, 0);
				v77 = sub_14018B280(88i64, 0);
				if (v77)
					v79 = sub_1404DD880(v77, v54 * v244 - v55, v78, a5);
				else
					v79 = 0i64;
				v80 = 0i64;
				v303 = 0i64;
				v304 = 0i64;
				v305 = 0i64;
				v81 = 0i64;
				do
					v12 = aTotal_3[++v81] == 0;
				while (!v12);
				v82 = (2 * v81) >> 1;
				if ((unsigned __int64)(v82 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v80 = sub_14018B280(2 * (v82 + 1), 0);
					v303 = v80;
					v304 = v80;
					v305 = (__int64)v80 + 2 * v82 + 2;
				}
				sub_1407DB590(v80, (int*)L"total", 2 * v82);
				v83 = (int*)((char*)v80 + 2 * v82);
				v304 = v83;
				if (v83)
					*(_WORD*)v83 = 0;
				sub_1400B7480((__int64)v368, v79);
				(*(void(__fastcall**)(_QWORD*, char*))(*v79 + 72i64))(v79, v302);
				v50 = (__int64)v303;
				goto LABEL_297;
			}
			break;
		case 61:
		case 69:
			if ((v248 - (__int64)v247) >> 5)
			{
				v173 = sub_14018E820(v247[1]);
				v174 = sub_14018B280(88i64, 0);
				if (v174)
				{
					v175 = sub_1400B5DF0(qword_140C658F0, v173, 0i64);
					v176 = (_QWORD*)sub_1404DC4F0((__int64)v174, (__int64)v175, 1);
				}
				else
				{
					v176 = 0i64;
				}
				v357 = 0i64;
				v358 = 0i64;
				v359 = 0i64;
				do
					v12 = aItem_17[++v8] == 0;
				while (!v12);
				sub_14001C1B0(&v356, (int*)L"item", (__int64)&aItem_17[v8]);
				sub_1400B7480((__int64)v368, v176);
				(*(void(__fastcall**)(_QWORD*, __int64*))(*v176 + 72i64))(v176, &v356);
				v50 = v357;
				goto LABEL_297;
			}
			break;
		case 70:
		case 71:
			v177 = (__int64)v247;
			v178 = (v248 - (__int64)v247) >> 5;
			if (v178)
			{
				v179 = sub_14018E820(v247[1]);
				v180 = sub_1400B5DF0(qword_140C658F0, v179, 0i64);
				sub_1404DC4F0((__int64)v375, (__int64)v180, 1);
				v181 = (int*)(*(__int64(__fastcall**)(__int64*, const wchar_t*, _QWORD, _QWORD))(v375[0] + 56))(
					v375,
					L"name",
					0i64,
					0i64);
				v182 = v181;
				if (v181)
				{
					v183 = 0i64;
					if (*(_WORD*)v181)
					{
						do
							++v183;
						while (*((_WORD*)v181 + v183));
					}
					v184 = sub_14018B280(2 * v183 + 18, 0);
					if (v184)
					{
						*(_QWORD*)v184 = off_140B55060;
						*((_QWORD*)v184 + 1) = v183;
					}
					else
					{
						v184 = 0i64;
					}
					v185 = v184 + 4;
					v186 = 2 * v183;
					sub_1407DB590(v184 + 4, v182, v186);
					*(_WORD*)((char*)v185 + v186) = 0;
					v177 = (__int64)v247;
				}
				else
				{
					v185 = 0i64;
				}
				v187 = 1;
				if (v178 > 1)
				{
					v188 = 1i64;
					do
					{
						v189 = sub_14018E820(*(WCHAR**)(32 * v188 + v177 + 8));
						if (v189)
						{
							sub_1404DDF50(v371, 735642);
							v190 = sub_14018B280(96i64, 0);
							if (v190)
								v191 = (_QWORD*)sub_1404DDB40((__int64)v190, v185);
							else
								v191 = 0i64;
							sub_1400B7480((__int64)v371, v191);
							v192 = sub_14018B280(88i64, 0);
							if (v192)
							{
								v193 = sub_1400B5DF0(qword_140C658F0, v189, 0i64);
								v194 = (_QWORD*)sub_1404DC4F0((__int64)v192, (__int64)v193, 1);
							}
							else
							{
								v194 = 0i64;
							}
							sub_1400B7480((__int64)v371, v194);
							v195 = v185;
							v196 = *(int**)(sub_1400B7660(v371) + 8);
							if (v196)
							{
								v197 = 0i64;
								if (*(_WORD*)v196)
								{
									do
										++v197;
									while (*((_WORD*)v196 + v197));
								}
								v198 = sub_14018B280(2 * v197 + 18, 0);
								if (v198)
								{
									*((_QWORD*)v198 + 1) = v197;
									*(_QWORD*)v198 = off_140B55060;
								}
								else
								{
									v198 = 0i64;
								}
								v185 = v198 + 4;
								v199 = 2 * v197;
								sub_1407DB590(v198 + 4, v196, v199);
								*(_WORD*)((char*)v185 + v199) = 0;
							}
							else
							{
								v185 = 0i64;
							}
							if (v195)
								(*(void(__fastcall**)(int*))(*((_QWORD*)v195 - 2) + 8i64))(v195 - 4);
							if (v372)
								sub_14018B900((__int64)v372, 0);
							sub_1400B7390(v371);
							v177 = (__int64)v247;
						}
						v188 = ++v187;
					} while (v187 < v178);
				}
				v200 = sub_14018B280(96i64, 0);
				if (v200)
					v201 = (_QWORD*)sub_1404DDB40((__int64)v200, v185);
				else
					v201 = 0i64;
				v344 = 0i64;
				v345 = 0i64;
				v346 = 0i64;
				do
					v12 = aItems_1[++v8] == 0;
				while (!v12);
				sub_14001C1B0(&v343, (int*)L"items", (__int64)&aItems_1[v8]);
				sub_1400B7480((__int64)v368, v201);
				(*(void(__fastcall**)(_QWORD*, __int64*))(*v201 + 72i64))(v201, &v343);
				if (v344)
					sub_14018B900(v344, 0);
				sub_1400B6470(v375);
				goto LABEL_337;
			}
			break;
		case 95:
		case 96:
			v202 = (__int64)v247;
			v203 = (v248 - (__int64)v247) >> 5;
			if (v203 >= 3)
			{
				v204 = sub_14018E8F0(v247[1]);
				v205 = *(WCHAR**)(v202 + 40);
				v351[1] = v204;
				LODWORD(v351[0]) = sub_14018E820(v205);
				v330[1] = (__int64)sub_14062A080;
				v330[0] = qword_140C65898 + 27592;
				if ((unsigned int)sub_1403F82F0(qword_140C65898, 0, v351, v375, 0x21u, v330, 0i64))
				{
					v206 = sub_14018B280(96i64, 0);
					if (v206)
						v207 = (_QWORD*)sub_1404DDB40((__int64)v206, (int*)v375);
					else
						v207 = 0i64;
					v361 = 0i64;
					v362 = 0i64;
					v363 = 0i64;
					v208 = 0i64;
					do
						v12 = aGifter[++v208] == 0;
					while (!v12);
					sub_14001C1B0(&v360, (int*)L"gifter", (__int64)&aGifter[v208]);
					sub_1400B7480((__int64)v368, v207);
					(*(void(__fastcall**)(_QWORD*, __int64*))(*v207 + 72i64))(v207, &v360);
					v209 = v361;
				}
				else
				{
					v210 = sub_14018B280(96i64, 0);
					if (v210)
						v211 = (_QWORD*)sub_1404DDAF0((__int64)v210, 108);
					else
						v211 = 0i64;
					v323 = 0i64;
					v324 = 0i64;
					v325 = 0i64;
					v212 = 0i64;
					do
						v12 = aGifter_0[++v212] == 0;
					while (!v12);
					sub_14001C1B0(&v322, (int*)L"gifter", (__int64)&aGifter_0[v212]);
					sub_1400B7480((__int64)v368, v211);
					(*(void(__fastcall**)(_QWORD*, __int64*))(*v211 + 72i64))(v211, &v322);
					v209 = v323;
				}
				if (v209)
					sub_14018B900(v209, 0);
				v213 = sub_14018E820(*(WCHAR**)(v202 + 72));
				if (v203 == 3)
				{
					v214 = v213;
					v327 = 0i64;
					v328 = 0i64;
					v329 = 0i64;
					do
						v12 = aPurchase[++v8] == 0;
					while (!v12);
					sub_14001C1B0(&v326, (int*)L"purchase", (__int64)&aPurchase[v8]);
					v216 = (_QWORD*)sub_1404DC5E0(v214, v215, a5);
					sub_1400B7480((__int64)v368, v216);
					(*(void(__fastcall**)(_QWORD*, __int64*))(*v216 + 72i64))(v216, &v326);
					v50 = v327;
				LABEL_297:
					if (v50)
						sub_14018B900(v50, 0);
				}
				else
				{
					v217 = 3;
					v218 = v213;
					v245 = v213;
					v185 = 0i64;
					v219 = 3i64;
					do
					{
						v220 = sub_14018E820(*(WCHAR**)(32 * v219 + v202 + 8));
						sub_1404DDF50(v371, 757102);
						if (v217 == 3)
						{
							v332 = 0i64;
							v333 = 0i64;
							v334 = 0i64;
							v221 = 0i64;
							do
								v12 = aExisting[++v221] == 0;
							while (!v12);
							sub_14001C1B0(&v331, (int*)L"existing", (__int64)&aExisting[v221]);
							v223 = (_QWORD*)sub_1404DC5E0(v218, v222, a5);
							sub_1400B7480((__int64)v371, v223);
							(*(void(__fastcall**)(_QWORD*, __int64*))(*v223 + 72i64))(v223, &v331);
							v224 = v332;
						}
						else
						{
							v225 = sub_14018B280(96i64, 0);
							if (v225)
								v226 = (_QWORD*)sub_1404DDB40((__int64)v225, v185);
							else
								v226 = 0i64;
							v340 = 0i64;
							v341 = 0i64;
							v342 = 0i64;
							v227 = 0i64;
							do
								v12 = aExisting_0[++v227] == 0;
							while (!v12);
							sub_14001C1B0(&v339, (int*)L"existing", (__int64)&aExisting_0[v227]);
							sub_1400B7480((__int64)v371, v226);
							(*(void(__fastcall**)(_QWORD*, __int64*))(*v226 + 72i64))(v226, &v339);
							v224 = v340;
						}
						if (v224)
							sub_14018B900(v224, 0);
						v348 = 0i64;
						v349 = 0i64;
						v350 = 0i64;
						v228 = 0i64;
						do
							v12 = aNew[++v228] == 0;
						while (!v12);
						sub_14001C1B0(&v347, (int*)L"new", (__int64)&aNew[v228]);
						v230 = (_QWORD*)sub_1404DC5E0(v220, v229, a5);
						sub_1400B7480((__int64)v371, v230);
						(*(void(__fastcall**)(_QWORD*, __int64*))(*v230 + 72i64))(v230, &v347);
						if (v348)
							sub_14018B900(v348, 0);
						v231 = v185;
						v232 = *(int**)(sub_1400B7660(v371) + 8);
						if (v232)
						{
							v233 = 0i64;
							if (*(_WORD*)v232)
							{
								do
									++v233;
								while (*((_WORD*)v232 + v233));
							}
							v234 = sub_14018B280(2 * v233 + 18, 0);
							if (v234)
							{
								*((_QWORD*)v234 + 1) = v233;
								*(_QWORD*)v234 = off_140B55060;
							}
							else
							{
								v234 = 0i64;
							}
							v185 = v234 + 4;
							v235 = 2 * v233;
							sub_1407DB590(v234 + 4, v232, v235);
							*(_WORD*)((char*)v185 + v235) = 0;
						}
						else
						{
							v185 = 0i64;
						}
						if (v231)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v231 - 2) + 8i64))(v231 - 4);
						if (v372)
							sub_14018B900((__int64)v372, 0);
						sub_1400B7390(v371);
						v202 = (__int64)v247;
						v218 = v245;
						v219 = ++v217;
					} while (v217 < v203);
					v236 = sub_14018B280(96i64, 0);
					if (v236)
						v237 = (_QWORD*)sub_1404DDB40((__int64)v236, v185);
					else
						v237 = 0i64;
					v353 = 0i64;
					v354 = 0i64;
					v355 = 0i64;
					do
						v12 = aPurchase_0[++v8] == 0;
					while (!v12);
					sub_14001C1B0(&v352, (int*)L"purchase", (__int64)&aPurchase_0[v8]);
					sub_1400B7480((__int64)v368, v237);
					(*(void(__fastcall**)(_QWORD*, __int64*))(*v237 + 72i64))(v237, &v352);
					if (v353)
						sub_14018B900(v353, 0);
				LABEL_337:
					if (v185)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v185 - 2) + 8i64))(v185 - 4);
				}
			}
			break;
		default:
			break;
		}
		v238 = sub_1400B7660(v368);
		v7 = v257;
		if (a5)
			sub_14018EFA0(v257, (__int64)L"<Doc><P>%s</P></Doc>", *(_QWORD*)(v238 + 8));
		else
			sub_14001C250(v257, v238);
		sub_14002C630((__int64)&v246);
		if ((_QWORD)v369)
			sub_14018B900(v369, 0);
		v239 = v368;
	}
	else
	{
		sub_1400B7090((__int64)v371, a3);
		v372 = 0i64;
		v371[0] = (__int64)off_140B69230;
		v373 = 0i64;
		v374 = 0i64;
		v240 = sub_14018B280(16i64, 0);
		v372 = v240;
		v373 = v240;
		v374 = v240 + 4;
		if (v240)
			*(_WORD*)v240 = 0;
		v241 = (*(__int64(__fastcall**)(__int64*))(v371[0] + 176))(v371);
		v7[1] = 0i64;
		v7[2] = 0i64;
		v7[3] = 0i64;
		sub_14001C1B0(v7, *(int**)(v241 + 8), *(_QWORD*)(v241 + 16));
		if (v372)
			sub_14018B900((__int64)v372, 0);
		v239 = v371;
	}
	sub_1400B7390(v239);
	return v7;
}
// 1406B2EEC: conditional instruction was optimized away because r13.8>=4u
// 1406B1697: variable 'v30' is possibly undefined
// 1406B1777: variable 'v37' is possibly undefined
// 1406B1878: variable 'v44' is possibly undefined
// 1406B1AB7: variable 'v64' is possibly undefined
// 1406B1BB9: variable 'v71' is possibly undefined
// 1406B1CC1: variable 'v78' is possibly undefined
// 1406B1EE7: variable 'v96' is possibly undefined
// 1406B1FC7: variable 'v103' is possibly undefined
// 1406B20B6: variable 'v110' is possibly undefined
// 1406B22D9: variable 'v127' is possibly undefined
// 1406B2529: variable 'v145' is possibly undefined
// 1406B2601: variable 'v152' is possibly undefined
// 1406B27DB: variable 'v167' is possibly undefined
// 1406B2876: variable 'v171' is possibly undefined
// 1406B2E96: variable 'v215' is possibly undefined
// 1406B2F77: variable 'v222' is possibly undefined
// 1406B3087: variable 'v229' is possibly undefined
// 140A13CE0: using guessed type wchar_t aName_32[5];
// 140B36C38: using guessed type wchar_t aBid_0[4];
// 140B36C40: using guessed type wchar_t aItem_15[5];
// 140B36C50: using guessed type wchar_t aTotal_4[6];
// 140B36C60: using guessed type wchar_t aItem_14[5];
// 140B36C70: using guessed type wchar_t aBid[4];
// 140B36C78: using guessed type wchar_t aRake_0[5];
// 140B36C88: using guessed type wchar_t aTotal_3[6];
// 140B36C98: using guessed type wchar_t aItem_13[5];
// 140B36CA8: using guessed type wchar_t aPrice_0[6];
// 140B36CB8: using guessed type wchar_t aRake[5];
// 140B36CC8: using guessed type wchar_t aTotal_2[6];
// 140B36CD8: using guessed type wchar_t aItem_12[5];
// 140B36CE8: using guessed type wchar_t aPrice[6];
// 140B36CF8: using guessed type wchar_t aReserveprice[13];
// 140B36D18: using guessed type wchar_t aItem_11[5];
// 140B36D28: using guessed type wchar_t aDocPSPDoc[21];
// 140B36D68: using guessed type wchar_t aNew[4];
// 140B36D70: using guessed type wchar_t aPurchase_0[9];
// 140B36D88: using guessed type wchar_t aExisting[9];
// 140B36DA0: using guessed type wchar_t aExisting_0[9];
// 140B36DB8: using guessed type wchar_t aGifter_0[7];
// 140B36DC8: using guessed type wchar_t aPurchase[9];
// 140B36DE0: using guessed type wchar_t aItems_1[6];
// 140B36DF0: using guessed type wchar_t aGifter[7];
// 140B36E00: using guessed type wchar_t aBuyout[7];
// 140B36E10: using guessed type wchar_t aItem_17[5];
// 140B36E20: using guessed type wchar_t aItem_16[5];
// 140B36E30: using guessed type wchar_t aMinbid[7];
// 140B36E40: using guessed type wchar_t aOldbid[7];
// 140B36E50: using guessed type wchar_t aNewbid[7];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 1406B1300: using guessed type char var_608[8];
// 1406B1300: using guessed type char var_5C0[8];
// 1406B1300: using guessed type char var_5A0[8];
// 1406B1300: using guessed type char var_420[8];
// 1406B1300: using guessed type char var_4C0[8];
// 1406B1300: using guessed type char var_540[8];
// 1406B1300: using guessed type char var_440[8];
// 1406B1300: using guessed type char var_500[8];
// 1406B1300: using guessed type char var_480[8];
// 1406B1300: using guessed type char var_580[8];
// 1406B1300: using guessed type char var_560[8];
// 1406B1300: using guessed type char var_520[8];
// 1406B1300: using guessed type char var_4E0[8];
// 1406B1300: using guessed type char var_5E0[8];
// 1406B1300: using guessed type char var_4A0[8];
// 1406B1300: using guessed type char var_460[8];

