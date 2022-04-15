#include "../winhttp.h"

//----- (0000000140911350) ----------------------------------------------------
__int64 __fastcall sub_140911350(
	unsigned __int16* a1,
	unsigned __int16* a2,
	unsigned __int16* a3,
	int a4,
	int* a5,
	__int64* a6,
	unsigned int a7)
{
	int v7; // edi
	unsigned __int16* v8; // r9
	__int64 v9; // rdx
	unsigned __int16* v10; // rbx
	__int64 result; // rax
	int v12; // eax
	int v13; // r8d
	int v14; // r11d
	unsigned __int16 v15; // dx
	int v16; // r10d
	__int64 v17; // rdi
	unsigned __int16* v18; // r9
	unsigned __int16* v19; // rdx
	__int64 v20; // rax
	unsigned __int16* v21; // rcx
	__int64 v22; // rax
	int v23; // edi
	int v24; // edx
	int v25; // r9d
	int v26; // ecx
	int v27; // edx
	unsigned __int16* v28; // rdi
	unsigned __int16* v29; // rdx
	int v30; // eax
	__int64 v31; // rcx
	int v32; // eax
	int v33; // eax
	__int64 v34; // rax
	int v35; // edx
	int v36; // r9d
	int v37; // ecx
	unsigned __int16* v38; // rdi
	unsigned __int16* v39; // rdx
	__int64 v40; // rcx
	__int64 v41; // rcx
	int v42; // ecx
	int v43; // r8d
	__int64 v44; // rdi
	__int64 v45; // rdi
	__int64 v46; // rax
	__int64 v47; // rax
	__int64 v48; // rdi
	__int64 v49; // rax
	__int64 v50; // rax
	int v51; // ecx
	unsigned __int16* v52; // rcx
	unsigned __int16* v53; // rdi
	int v54; // ecx
	__int64* v55; // rax
	__int64 v56; // rcx
	int* v57; // rax
	_BOOL8 v58; // rax
	unsigned int v59; // edi
	__int64 v60; // rax
	__int64 v61; // rax
	unsigned __int16* v62; // rdi
	__int64 v63; // rax
	unsigned __int16* v64; // rdx
	__int64 v65; // rax
	unsigned __int16* v66; // rcx
	__int64 v67; // rax
	int v68; // r8d
	__int64 v69; // rcx
	int v70; // edi
	unsigned int v71; // eax
	unsigned int v72; // edx
	unsigned __int16* v73; // r9
	unsigned __int16* v74; // rcx
	__int64 v75; // rax
	__int64 v76; // rdi
	unsigned int v77; // eax
	unsigned __int16* v78; // r9
	unsigned __int16* v79; // rcx
	__int64 v80; // rax
	unsigned __int16* v81; // rdi
	unsigned __int16 v82; // cx
	unsigned __int16* v83; // r10
	int v84; // r9d
	__int64 v85; // rax
	int v86; // r8d
	int v87; // ecx
	__int64 v88; // rcx
	_DWORD* v89; // rdi
	unsigned __int64 v90; // rcx
	unsigned __int64 jj; // rcx
	__int64 v92; // rdi
	__int64 v93; // rax
	unsigned __int16* v94; // rcx
	int v95; // edx
	__int64 v96; // rdi
	unsigned __int64 v97; // rcx
	int v98; // edx
	bool v99; // cc
	unsigned __int64 v100; // rcx
	int v101; // edx
	int* v102; // rdi
	unsigned __int16* v103; // rcx
	__int64 v104; // rdx
	int v105; // edi
	__int64 v106; // rdx
	bool v107; // zf
	unsigned __int16 v108; // ax
	int v109; // ecx
	__int16 v110; // ax
	int v111; // eax
	int v112; // edx
	unsigned __int64 v113; // r8
	unsigned __int64 v114; // rax
	__int64 v115; // rcx
	__int64 v116; // rcx
	__int64 v117; // rcx
	__int64 v118; // rcx
	__int64 v119; // rcx
	__int64 v120; // rcx
	unsigned __int64 v121; // rdx
	unsigned int v122; // ecx
	bool v123; // cc
	int v124; // ecx
	int v125; // ecx
	int v126; // ecx
	unsigned int v127; // ecx
	int v128; // r10d
	unsigned __int16* v129; // r9
	__int64 v130; // rax
	int v131; // edi
	int v132; // edx
	unsigned int v133; // eax
	int v134; // eax
	int v135; // ecx
	__int64 v136; // rax
	int v137; // edi
	int v138; // eax
	int v139; // edi
	int v140; // eax
	int v141; // eax
	int v142; // eax
	unsigned __int16* v143; // r11
	unsigned __int16* v144; // r9
	int v145; // r9d
	int v146; // eax
	unsigned int v147; // eax
	int v148; // ecx
	int v149; // r8d
	unsigned int v150; // edi
	unsigned __int64 v151; // rdi
	int v152; // edi
	_WORD* v153; // rdx
	unsigned int v154; // eax
	bool v155; // zf
	int v156; // eax
	int v157; // ecx
	__int64 v158; // rax
	__int64 v159; // rcx
	char v160; // r8
	int v161; // edi
	unsigned int v162; // ecx
	int v163; // edi
	unsigned int v164; // ecx
	unsigned __int16 v165; // ax
	int v166; // edx
	unsigned __int16 v167; // cx
	unsigned __int16 v168; // ax
	unsigned __int16 v169; // ax
	__int64 v170; // rdx
	unsigned __int16* v171; // r9
	int v172; // edi
	unsigned __int16 v173; // ax
	int v174; // edi
	int v175; // ecx
	unsigned __int16 v176; // ax
	int v177; // edi
	unsigned __int16 v178; // ax
	int v179; // edx
	int v180; // r10d
	unsigned __int16* v181; // r9
	int v182; // edi
	int v183; // eax
	__int64 v184; // rax
	int v185; // eax
	__int64 v186; // rdx
	int v187; // r8d
	int v188; // ecx
	int v189; // eax
	__int64 v190; // rcx
	int v191; // r11d
	unsigned __int64 v192; // rax
	unsigned __int64 v193; // rax
	int v194; // r8d
	int v195; // ecx
	int v196; // eax
	unsigned __int16* v197; // rax
	int v198; // eax
	int v199; // ecx
	int v200; // eax
	unsigned __int16* v201; // rax
	__int64 v202; // rdx
	int v203; // edi
	int v204; // eax
	int v205; // edx
	unsigned int v206; // eax
	unsigned __int16* v207; // r9
	int v208; // edi
	int v209; // eax
	__int64 v210; // rax
	__int64 v211; // r8
	int v212; // ecx
	int v213; // r10d
	int v214; // edx
	int v215; // ecx
	int v216; // ecx
	int v217; // eax
	unsigned __int16* v218; // rax
	int v219; // ecx
	int v220; // edx
	int v221; // eax
	int v222; // edx
	int v223; // ecx
	int v224; // ecx
	int v225; // eax
	unsigned __int16* v226; // rax
	int v227; // ecx
	int v228; // edx
	int v229; // eax
	unsigned __int16* v230; // r9
	__int64 v231; // rax
	int v232; // edx
	int v233; // r9d
	int v234; // ecx
	int v235; // r9d
	unsigned __int16* v236; // r8
	unsigned __int64 v237; // rcx
	int v238; // edx
	int* v239; // rdi
	int v240; // r11d
	unsigned __int16* v241; // rdi
	int v242; // ecx
	unsigned __int64 v243; // rdx
	int v244; // edx
	unsigned __int64 v245; // rdi
	unsigned int v246; // ecx
	unsigned int v247; // eax
	int j; // edx
	int v249; // ecx
	int k; // edx
	int v251; // ecx
	int m; // edx
	int v253; // ecx
	int n; // edx
	unsigned int v255; // ecx
	int i; // edx
	__int64 v257; // rcx
	int v258; // edx
	int v259; // edx
	unsigned __int64 v260; // rdi
	int v261; // edx
	int v262; // edx
	unsigned __int64 v263; // rdi
	int v264; // edx
	int v265; // r8d
	unsigned __int64 v266; // rcx
	int v267; // edx
	int* v268; // rdi
	int v269; // ecx
	unsigned __int64 v270; // rdx
	int v271; // eax
	unsigned int v272; // eax
	int v273; // edx
	int v274; // ecx
	int v275; // edx
	int v276; // ecx
	int v277; // edx
	int v278; // ecx
	int ii; // ecx
	int v280; // eax
	int v281; // edx
	int v282; // edx
	int v283; // edx
	int v284; // edx
	int v285; // edx
	int v286; // edx
	unsigned __int16* v287; // r8
	unsigned __int64 v288; // rcx
	int v289; // edx
	int* v290; // rdi
	unsigned __int16* v291; // r8
	unsigned __int64 v292; // rcx
	int v293; // edx
	int* v294; // rdi
	bool v295; // cc
	unsigned __int64 v296; // rcx
	bool v297; // cc
	__int64 v298; // r11
	unsigned __int64 v299; // rdi
	int v300; // ecx
	int v301; // edx
	int v302; // edi
	int v303; // edx
	BOOL v304; // ecx
	int v305; // edi
	unsigned int v306; // edx
	BOOL v307; // ecx
	int v308; // edi
	__int64 v309; // rdx
	int v310; // edi
	__int64 v311; // rdx
	int v312; // edi
	__int64 v313; // rdx
	int v314; // edi
	__int64 v315; // rdx
	int v316; // edi
	__int64 v317; // rdx
	int v318; // edi
	__int64 v319; // rdx
	unsigned __int64 v320; // rcx
	int v321; // edx
	int* v322; // rdi
	__int64 v323; // r11
	bool v324; // cc
	unsigned __int64 v325; // rdx
	int v326; // ecx
	int v327; // ecx
	int v328; // ecx
	int v329; // ecx
	unsigned int v330; // eax
	__int64 v331; // rax
	bool v332; // zf
	int v333; // edx
	unsigned int v334; // eax
	unsigned __int16* v335; // r9
	unsigned __int16* v336; // rdx
	int v337; // r9d
	int v338; // edx
	unsigned int v339; // eax
	int v340; // eax
	unsigned __int16* v341; // rdi
	unsigned int v342; // edi
	bool v343; // zf
	unsigned __int64 v344; // rdi
	bool v345; // zf
	unsigned __int16* v346; // rdi
	int v347; // r8d
	unsigned int v348; // edi
	unsigned __int16* v349; // rax
	unsigned __int64 v350; // rdi
	unsigned int v351; // edi
	unsigned __int16* v352; // rax
	__int64 v353; // rcx
	int v354; // eax
	int v355; // eax
	unsigned __int16* v356; // rax
	int v357; // ecx
	int v358; // eax
	unsigned __int16* v359; // rax
	int v360; // ecx
	int v361; // eax
	unsigned __int16* v362; // rax
	bool v363; // cf
	int v364; // edi
	unsigned __int64 v365; // rcx
	int v366; // r8d
	int v367; // edx
	__int64 v368; // rdx
	unsigned int v369; // eax
	bool v370; // zf
	int v371; // edi
	unsigned __int64 v372; // rcx
	int v373; // edx
	__int64 v374; // rdx
	unsigned int v375; // eax
	bool v376; // zf
	__int64 v377; // rcx
	int v378; // edi
	int* v379; // rdx
	unsigned int v380; // eax
	unsigned __int16* v381; // r9
	unsigned __int16* v382; // rax
	unsigned __int16* v383; // rcx
	__int64 v384; // rax
	unsigned __int16* v385; // rdx
	unsigned int v386; // [rsp+30h] [rbp-D0h]
	unsigned int v387; // [rsp+30h] [rbp-D0h]
	unsigned int v388; // [rsp+30h] [rbp-D0h]
	unsigned int v389; // [rsp+30h] [rbp-D0h]
	unsigned int v390; // [rsp+30h] [rbp-D0h]
	unsigned __int16* v391; // [rsp+40h] [rbp-C0h]
	unsigned __int16* v392; // [rsp+40h] [rbp-C0h]
	unsigned __int16* v393; // [rsp+40h] [rbp-C0h]
	int v394; // [rsp+48h] [rbp-B8h]
	int v395; // [rsp+4Ch] [rbp-B4h]
	int v396; // [rsp+50h] [rbp-B0h]
	int v397; // [rsp+50h] [rbp-B0h]
	int v398; // [rsp+50h] [rbp-B0h]
	int v399; // [rsp+50h] [rbp-B0h]
	int v400; // [rsp+50h] [rbp-B0h]
	int v401; // [rsp+50h] [rbp-B0h]
	int v402; // [rsp+50h] [rbp-B0h]
	int v403; // [rsp+50h] [rbp-B0h]
	int v404; // [rsp+50h] [rbp-B0h]
	int v405; // [rsp+50h] [rbp-B0h]
	int v406; // [rsp+50h] [rbp-B0h]
	int v407; // [rsp+50h] [rbp-B0h]
	int v408; // [rsp+50h] [rbp-B0h]
	unsigned __int16* v409; // [rsp+58h] [rbp-A8h]
	unsigned __int16* v410; // [rsp+58h] [rbp-A8h]
	int v411; // [rsp+58h] [rbp-A8h]
	unsigned __int16* v412; // [rsp+58h] [rbp-A8h]
	_WORD* v413; // [rsp+58h] [rbp-A8h]
	__int64 v414; // [rsp+58h] [rbp-A8h]
	unsigned __int16* v415; // [rsp+58h] [rbp-A8h]
	unsigned __int16* v416; // [rsp+58h] [rbp-A8h]
	unsigned __int16* v417; // [rsp+58h] [rbp-A8h]
	unsigned __int16* v418; // [rsp+58h] [rbp-A8h]
	unsigned __int16* v419; // [rsp+58h] [rbp-A8h]
	unsigned __int16* v420; // [rsp+58h] [rbp-A8h]
	unsigned __int16* v421; // [rsp+58h] [rbp-A8h]
	int v422; // [rsp+58h] [rbp-A8h]
	int v423; // [rsp+60h] [rbp-A0h]
	int v424; // [rsp+60h] [rbp-A0h]
	int v425; // [rsp+60h] [rbp-A0h]
	int v426; // [rsp+60h] [rbp-A0h]
	int v427; // [rsp+60h] [rbp-A0h]
	int v428; // [rsp+60h] [rbp-A0h]
	int v429; // [rsp+60h] [rbp-A0h]
	int v430; // [rsp+64h] [rbp-9Ch]
	BOOL v431; // [rsp+64h] [rbp-9Ch]
	int v432; // [rsp+64h] [rbp-9Ch]
	int v433; // [rsp+64h] [rbp-9Ch]
	unsigned __int16 v435; // [rsp+70h] [rbp-90h]
	int v436; // [rsp+70h] [rbp-90h]
	int v437; // [rsp+70h] [rbp-90h]
	__int64* v438; // [rsp+78h] [rbp-88h]
	int v439; // [rsp+80h] [rbp-80h]
	int v440; // [rsp+80h] [rbp-80h]
	BOOL v441; // [rsp+80h] [rbp-80h]
	int v442; // [rsp+88h] [rbp-78h]
	int v443; // [rsp+88h] [rbp-78h]
	int v444; // [rsp+88h] [rbp-78h]
	int v445; // [rsp+88h] [rbp-78h]
	int v446; // [rsp+88h] [rbp-78h]
	int v447; // [rsp+88h] [rbp-78h]
	int v448; // [rsp+88h] [rbp-78h]
	int v449; // [rsp+88h] [rbp-78h]
	int v450; // [rsp+88h] [rbp-78h]
	int v451; // [rsp+88h] [rbp-78h]
	int v452; // [rsp+88h] [rbp-78h]
	unsigned __int16* v453; // [rsp+88h] [rbp-78h]
	unsigned __int16* v454; // [rsp+88h] [rbp-78h]
	int v455; // [rsp+88h] [rbp-78h]
	int v456; // [rsp+88h] [rbp-78h]
	unsigned __int16* v457; // [rsp+90h] [rbp-70h]
	unsigned __int16* v458; // [rsp+90h] [rbp-70h]
	unsigned __int16* kk; // [rsp+90h] [rbp-70h]
	unsigned __int16* v460; // [rsp+90h] [rbp-70h]
	unsigned __int16* v461; // [rsp+90h] [rbp-70h]
	_BOOL8 v462; // [rsp+90h] [rbp-70h]
	__int64 v463; // [rsp+90h] [rbp-70h]
	unsigned __int16* v464; // [rsp+90h] [rbp-70h]
	__int64 v465; // [rsp+90h] [rbp-70h]
	unsigned __int16* v466; // [rsp+90h] [rbp-70h]
	__int64 v467; // [rsp+98h] [rbp-68h]
	unsigned __int64 v468; // [rsp+98h] [rbp-68h]
	__int64 v469; // [rsp+98h] [rbp-68h]
	unsigned __int16* v470; // [rsp+98h] [rbp-68h]
	__int64 v471; // [rsp+98h] [rbp-68h]
	__int64 v472; // [rsp+A0h] [rbp-60h]
	unsigned __int64 v473; // [rsp+A0h] [rbp-60h]
	unsigned __int16* v474; // [rsp+A0h] [rbp-60h]
	__int64 v475; // [rsp+A0h] [rbp-60h]
	int v476; // [rsp+A8h] [rbp-58h]
	__int64 v477; // [rsp+B0h] [rbp-50h] BYREF
	int v478; // [rsp+B8h] [rbp-48h]
	int* v479; // [rsp+C0h] [rbp-40h]
	int v480; // [rsp+C8h] [rbp-38h]
	unsigned __int16* v481; // [rsp+D0h] [rbp-30h]
	int v482[2]; // [rsp+E0h] [rbp-20h] BYREF
	__int64 v483; // [rsp+E8h] [rbp-18h]
	__int64 v484; // [rsp+F0h] [rbp-10h]
	int v485; // [rsp+F8h] [rbp-8h]
	int v486; // [rsp+FCh] [rbp-4h]
	int v487; // [rsp+100h] [rbp+0h]
	int v488; // [rsp+104h] [rbp+4h]
	int v489; // [rsp+108h] [rbp+8h]
	__int64 v490; // [rsp+110h] [rbp+10h]
	int v491; // [rsp+118h] [rbp+18h]
	int v492; // [rsp+11Ch] [rbp+1Ch]
	__int64 v493; // [rsp+120h] [rbp+20h]
	int v494[2]; // [rsp+130h] [rbp+30h] BYREF
	__int64 v495; // [rsp+138h] [rbp+38h]
	__int64 v496; // [rsp+140h] [rbp+40h]
	int v497; // [rsp+148h] [rbp+48h]
	int v498; // [rsp+14Ch] [rbp+4Ch]
	int v499; // [rsp+150h] [rbp+50h]
	int v500; // [rsp+154h] [rbp+54h]
	int v501; // [rsp+158h] [rbp+58h]
	__int64 v502; // [rsp+160h] [rbp+60h]
	int v503; // [rsp+168h] [rbp+68h]
	int v504; // [rsp+16Ch] [rbp+6Ch]
	__int64 v505; // [rsp+170h] [rbp+70h]
	__int64 v506[2]; // [rsp+180h] [rbp+80h] BYREF
	char v507[128]; // [rsp+190h] [rbp+90h] BYREF

	v7 = a4;
	v394 = a4;
	v8 = a2;
	v391 = a2;
	v9 = (__int64)a6;
	v10 = a1;
	v438 = a6;
	if (!v8)
	{
		if (!a7)
			return sub_140911350((unsigned int)&a7, 0, 0, 0, 0i64, 0i64, 1);
		result = (char*)&a7 - (char*)a1;
		if ((char*)&a7 - (char*)a1 > 0)
			return (unsigned int)((char*)a1 - (char*)&a7);
		return result;
	}
	v12 = *a5;
	v395 = a5[25];
	if (*a5 >= (unsigned int)a5[1])
	{
	LABEL_1909:
		++* a5;
		return 4294967288i64;
	}
LABEL_7:
	v13 = 0;
	*a5 = v12 + 1;
	v14 = 1;
	if (a7 >= a5[2])
		return 4294967275i64;
	if (a5[52] == 2)
	{
		v506[1] = (__int64)v10;
		v506[0] = v9;
		v438 = v506;
		a5[52] = 0;
	}
LABEL_14:
	while (2)
	{
		v15 = *v8;
		v439 = 0;
		v16 = 0;
		v430 = 0;
		v435 = *v8;
		switch (*v8)
		{
		case 0u:
		case 0x98u:
		case 0x99u:
			if (v10 == a3
				&& v15 != 153
				&& !*((_QWORD*)a5 + 29)
				&& (a5[29] || a5[30] && a3 == (unsigned __int16*)(*((_QWORD*)a5 + 19) + 2i64 * a5[51])))
			{
				return 0i64;
			}
			*((_QWORD*)a5 + 22) = v10;
			result = 4294966297i64;
			a5[49] = v7;
			*((_QWORD*)a5 + 21) = a3;
			if (!v15)
				return 1i64;
			return result;
		case 1u:
			goto LABEL_256;
		case 2u:
			if (v10 != (unsigned __int16*)(*((_QWORD*)a5 + 19) + 2i64 * a5[51]))
				return 0i64;
			v391 = ++v8;
			continue;
		case 3u:
			++v8;
			a3 = v10;
			v391 = v8;
			continue;
		case 4u:
		case 5u:
			if (v395)
			{
				if (v10 == *((unsigned __int16**)a5 + 19))
					goto LABEL_326;
				v103 = v10 - 1;
				if ((*(v10 - 1) & 0xFC00) == 0xDC00)
					v103 = v10 - 2;
				if ((unsigned __int64)v103 < *((_QWORD*)a5 + 23))
					*((_QWORD*)a5 + 23) = v103;
				v104 = *v103;
				if ((*v103 & 0xFC00) == 55296)
					v104 = (((v104 & 0x3FF) << 10) | v103[1] & 0x3FF) + 0x10000;
				if ((unsigned int)v104 >= 0x100 || (v105 = 1, (*(_BYTE*)(v104 + *((_QWORD*)a5 + 10)) & 0x10) == 0))
					LABEL_326:
				v105 = 0;
				if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
				{
					if (a5[48])
					{
						if ((unsigned __int64)v10 > *((_QWORD*)a5 + 23))
						{
							a5[31] = 1;
							if (a5[48] > 1)
								return 4294967284i64;
						}
					}
					goto LABEL_350;
				}
				v106 = *v10;
				if ((*v10 & 0xFC00) == 55296)
					v106 = (((v106 & 0x3FF) << 10) | v10[1] & 0x3FF) + 0x10000;
				if ((unsigned int)v106 < 0x100)
				{
					v107 = (*(_BYTE*)(v106 + *((_QWORD*)a5 + 10)) & 0x10) == 0;
					goto LABEL_349;
				}
			}
			else
			{
				if (v10 == *((unsigned __int16**)a5 + 19))
					goto LABEL_341;
				if ((unsigned __int64)v10 <= *((_QWORD*)a5 + 23))
					*((_QWORD*)a5 + 23) = v10 - 1;
				v108 = *(v10 - 1);
				if (v108 > 0xFFu || (v105 = 1, (*(_BYTE*)(v108 + *((_QWORD*)a5 + 10)) & 0x10) == 0))
					LABEL_341:
				v105 = 0;
				if ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
				{
					if (*v10 <= 0xFFu)
					{
						v107 = (*(_BYTE*)(*v10 + *((_QWORD*)a5 + 10)) & 0x10) == 0;
					LABEL_349:
						v109 = 1;
						if (!v107)
							goto LABEL_351;
					}
				}
				else if (a5[48])
				{
					if ((unsigned __int64)v10 > *((_QWORD*)a5 + 23))
					{
						a5[31] = 1;
						if (a5[48] > 1)
							return 4294967284i64;
					}
				}
			}
		LABEL_350:
			v109 = 0;
		LABEL_351:
			v110 = *v8++;
			v107 = v110 == 5;
			v111 = 0;
			v391 = v8;
			if (v107)
				LOBYTE(v111) = v109 == v105;
			else
				LOBYTE(v111) = v109 != v105;
			if (v111)
				return 0i64;
			goto LABEL_13;
		case 6u:
			if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
				goto LABEL_1470;
			v115 = *v10++;
			if (v395 && (v115 & 0xFC00) == 55296)
				v115 = (*v10++ & 0x3FF | ((unsigned __int16)(v115 & 0x3FF) << 10)) + 0x10000;
			if ((unsigned int)v115 >= 0x100)
				goto LABEL_302;
			if ((*(_BYTE*)(v115 + *((_QWORD*)a5 + 10)) & 4) != 0)
				return 0i64;
			v391 = ++v8;
			continue;
		case 7u:
			if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
				goto LABEL_1470;
			v116 = *v10++;
			if (v395 && (v116 & 0xFC00) == 55296)
				v116 = (*v10++ & 0x3FF | ((unsigned __int16)(v116 & 0x3FF) << 10)) + 0x10000;
			if ((unsigned int)v116 > 0xFF || (*(_BYTE*)(v116 + *((_QWORD*)a5 + 10)) & 4) == 0)
				return 0i64;
			v391 = ++v8;
			continue;
		case 8u:
			if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
				goto LABEL_1470;
			v117 = *v10++;
			if (v395 && (v117 & 0xFC00) == 55296)
				v117 = (*v10++ & 0x3FF | ((unsigned __int16)(v117 & 0x3FF) << 10)) + 0x10000;
			if ((unsigned int)v117 >= 0x100)
				goto LABEL_302;
			if ((*(_BYTE*)(v117 + *((_QWORD*)a5 + 10)) & 1) != 0)
				return 0i64;
			v391 = ++v8;
			continue;
		case 9u:
			if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
				goto LABEL_1470;
			v118 = *v10++;
			if (v395 && (v118 & 0xFC00) == 55296)
				v118 = (*v10++ & 0x3FF | ((unsigned __int16)(v118 & 0x3FF) << 10)) + 0x10000;
			if ((unsigned int)v118 > 0xFF || (*(_BYTE*)(v118 + *((_QWORD*)a5 + 10)) & 1) == 0)
				return 0i64;
			v391 = ++v8;
			continue;
		case 0xAu:
			if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
				goto LABEL_1470;
			v119 = *v10++;
			if (v395 && (v119 & 0xFC00) == 55296)
				v119 = (*v10++ & 0x3FF | ((unsigned __int16)(v119 & 0x3FF) << 10)) + 0x10000;
			if ((unsigned int)v119 >= 0x100)
				goto LABEL_302;
			if ((*(_BYTE*)(v119 + *((_QWORD*)a5 + 10)) & 0x10) != 0)
				return 0i64;
			v391 = ++v8;
			continue;
		case 0xBu:
			if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
				goto LABEL_1470;
			v120 = *v10++;
			if (v395 && (v120 & 0xFC00) == 55296)
				v120 = (*v10++ & 0x3FF | ((unsigned __int16)(v120 & 0x3FF) << 10)) + 0x10000;
			if ((unsigned int)v120 > 0xFF || (*(_BYTE*)(v120 + *((_QWORD*)a5 + 10)) & 0x10) == 0)
				return 0i64;
			v391 = ++v8;
			continue;
		case 0xCu:
			v112 = a5[8];
			if (v112)
			{
				v113 = *((_QWORD*)a5 + 20);
				if ((unsigned __int64)v10 < v113)
				{
					if ((unsigned int)sub_1409199E0(v10, v112, v113, a5 + 9, v395))
						return 0i64;
					v8 = v391;
				}
				v13 = 0;
			}
			else if ((unsigned __int64)v10 <= *((_QWORD*)a5 + 20) - 2i64 * a5[9]
				&& *v10 == *((_WORD*)a5 + 28)
				&& (a5[9] == 1 || v10[1] == *((_WORD*)a5 + 29)))
			{
				return 0i64;
			}
			if (!a5[48] || (unsigned __int64)(v10 + 1) < *((_QWORD*)a5 + 20) || a5[8])
			{
				v14 = 1;
			}
			else
			{
				v14 = 1;
				if (a5[9] == 2 && *v10 == *((_WORD*)a5 + 28))
				{
					a5[31] = 1;
					if (a5[48] > 1)
						return 4294967284i64;
				}
			}
		LABEL_374:
			v114 = *((_QWORD*)a5 + 20);
			if ((unsigned __int64)v10 < v114)
			{
				++v10;
				if (v395 && (unsigned __int64)v10 < v114 && (*v10 & 0xFC00) == 0xDC00)
					++v10;
				v391 = ++v8;
				continue;
			}
		LABEL_1470:
			if (!a5[48])
				return 0i64;
			goto LABEL_1471;
		case 0xDu:
			goto LABEL_374;
		case 0xEu:
			if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
				goto LABEL_1470;
			++v10;
			v391 = ++v8;
			continue;
		case 0x11u:
			v121 = *((_QWORD*)a5 + 20);
			if ((unsigned __int64)v10 >= v121)
				goto LABEL_1470;
			v122 = *v10++;
			if (v395 && (v122 & 0xFC00) == 55296)
				v122 = (*v10++ & 0x3FF | ((v122 & 0x3FF) << 10)) + 0x10000;
			if (v122 <= 0xD)
			{
				if (v122 != 13)
				{
					if (v122 == 10)
						goto LABEL_302;
					if (v122 <= 0xA)
						return 0i64;
					v123 = v122 <= 0xC;
					goto LABEL_438;
				}
				if ((unsigned __int64)v10 < v121)
				{
					if (*v10 == 10)
					{
						++v10;
						v391 = ++v8;
						continue;
					}
					goto LABEL_302;
				}
			LABEL_299:
				if (a5[48])
				{
					if ((unsigned __int64)v10 > *((_QWORD*)a5 + 23))
					{
						a5[31] = 1;
						if (a5[48] > 1)
							return 4294967284i64;
					}
				}
			LABEL_302:
				v391 = ++v8;
				continue;
			}
			if (v122 == 133)
				goto LABEL_439;
			v123 = v122 - 8232 <= 1;
		LABEL_438:
			if (!v123)
				return 0i64;
		LABEL_439:
			if (a5[32])
				return 0i64;
			v391 = ++v8;
			continue;
		case 0x12u:
			if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
				goto LABEL_1470;
			v124 = *v10++;
			if (v395 && (v124 & 0xFC00) == 55296)
				v124 = (*v10++ & 0x3FF | ((v124 & 0x3FF) << 10)) + 0x10000;
			if (v124 == 6158
				|| v124 == 9
				|| v124 == 32
				|| v124 == 160
				|| v124 == 5760
				|| (unsigned int)(v124 - 0x2000) <= 0xA
				|| v124 == 8239
				|| v124 == 8287
				|| v124 == 12288)
			{
				return 0i64;
			}
			v391 = ++v8;
			continue;
		case 0x13u:
			if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
				goto LABEL_1470;
			v125 = *v10++;
			if (v395 && (v125 & 0xFC00) == 55296)
				v125 = (*v10++ & 0x3FF | ((v125 & 0x3FF) << 10)) + 0x10000;
			if (v125 == 6158
				|| v125 == 9
				|| v125 == 32
				|| v125 == 160
				|| v125 == 5760
				|| (unsigned int)(v125 - 0x2000) <= 0xA
				|| v125 == 8239
				|| v125 == 8287)
			{
				goto LABEL_302;
			}
			if (v125 != 12288)
				return 0i64;
			v391 = ++v8;
			continue;
		case 0x14u:
			if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
				goto LABEL_1470;
			v126 = *v10++;
			if (v395 && (v126 & 0xFC00) == 55296)
				v126 = (*v10++ & 0x3FF | ((v126 & 0x3FF) << 10)) + 0x10000;
			if ((unsigned int)(v126 - 10) <= 3 || v126 == 133 || (unsigned int)(v126 - 8232) <= 1)
				return 0i64;
			v391 = ++v8;
			continue;
		case 0x15u:
			if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
				goto LABEL_1470;
			v127 = *v10++;
			if (v395 && (v127 & 0xFC00) == 55296)
				v127 = (*v10++ & 0x3FF | ((v127 & 0x3FF) << 10)) + 0x10000;
			if (v127 < 0xA)
				return 0i64;
			if (v127 <= 0xD || v127 == 133)
				goto LABEL_302;
			if (v127 - 8232 > 1)
				return 0i64;
			v391 = ++v8;
			continue;
		case 0x17u:
			goto LABEL_303;
		case 0x18u:
			goto LABEL_298;
		case 0x19u:
			if (a5[23] && v10 == *((unsigned __int16**)a5 + 19))
				return 0i64;
		LABEL_256:
			if (v10 != *((unsigned __int16**)a5 + 19))
				return 0i64;
			v391 = ++v8;
			continue;
		case 0x1Au:
			if (a5[23] && v10 == *((unsigned __int16**)a5 + 19))
				return 0i64;
			v94 = (unsigned __int16*)*((_QWORD*)a5 + 19);
			if (v10 == v94)
				goto LABEL_270;
			if (v10 == *((unsigned __int16**)a5 + 20))
				return 0i64;
			v95 = a5[8];
			if (v95)
			{
				if (v10 <= v94 || !(unsigned int)sub_140919A90((__int64)v10, v95, *((_QWORD*)a5 + 19), a5 + 9, v395))
					return 0i64;
				v13 = 0;
				v8 = v391 + 1;
				v14 = 1;
				++v391;
			}
			else
			{
				v96 = a5[9];
				if (v10 < &v94[v96]
					|| v10[-v96] != *((_WORD*)a5 + 28)
					|| (_DWORD)v96 != 1 && v10[-v96 + 1] != *((_WORD*)a5 + 29))
				{
					return 0i64;
				}
			LABEL_270:
				++v8;
				v14 = 1;
				v391 = v8;
			}
			goto LABEL_13;
		case 0x1Bu:
			if (a5[24])
				return 0i64;
			if (a5[28])
			{
			LABEL_298:
				if ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
					return 0i64;
				goto LABEL_299;
			}
		LABEL_303:
			v100 = *((_QWORD*)a5 + 20);
			if ((unsigned __int64)v10 >= v100)
				goto LABEL_312;
			v101 = a5[8];
			v102 = a5 + 9;
			if (v101)
			{
				if ((unsigned int)sub_1409199E0(v10, v101, *((_QWORD*)a5 + 20), a5 + 9, v395))
				{
					v8 = v391;
					v13 = 0;
					goto LABEL_311;
				}
			}
			else if ((unsigned __int64)v10 <= v100 - 2i64 * *v102
				&& *v10 == *((_WORD*)a5 + 28)
				&& (*v102 == 1 || v10[1] == *((_WORD*)a5 + 29)))
			{
			LABEL_311:
				if (v10 == (unsigned __int16*)(*((_QWORD*)a5 + 20) - 2i64 * *v102))
				{
				LABEL_312:
					v14 = 1;
					if (!a5[48] || (unsigned __int64)v10 <= *((_QWORD*)a5 + 23) || (a5[31] = 1, a5[48] <= 1))
					{
						v391 = ++v8;
						goto LABEL_13;
					}
					return 4294967284i64;
				}
				goto LABEL_282;
			}
			goto LABEL_282;
		case 0x1Cu:
			v97 = *((_QWORD*)a5 + 20);
			if ((unsigned __int64)v10 >= v97)
			{
				if (a5[24])
					return 0i64;
				if (a5[48])
				{
					if ((unsigned __int64)v10 > *((_QWORD*)a5 + 23))
					{
						a5[31] = 1;
						if (a5[48] > 1)
							return 4294967284i64;
					}
				}
			}
			else
			{
				v98 = a5[8];
				if (v98)
				{
					if ((unsigned int)sub_1409199E0(v10, v98, *((_QWORD*)a5 + 20), a5 + 9, v395))
					{
						v13 = 0;
						v8 = v391 + 1;
						v14 = 1;
						++v391;
						continue;
					}
					goto LABEL_282;
				}
				if ((unsigned __int64)v10 > v97 - 2i64 * a5[9]
					|| *v10 != *((_WORD*)a5 + 28)
					|| a5[9] != 1 && v10[1] != *((_WORD*)a5 + 29))
				{
				LABEL_282:
					if (!a5[48]
						|| (unsigned __int64)(v10 + 1) < *((_QWORD*)a5 + 20)
						|| a5[8]
						|| a5[9] != 2
						|| *v10 != *((_WORD*)a5 + 28))
					{
						return 0i64;
					}
					goto LABEL_287;
				}
			}
			++v8;
			v14 = 1;
			v391 = v8;
			continue;
		case 0x1Du:
			if (v395)
			{
				v165 = v8[1];
				++v8;
				v166 = 1;
				if ((v165 & 0xFC00) == 0xD800)
					v166 = 2;
				if (v166 <= (__int64)(*((_QWORD*)a5 + 20) - (_QWORD)v10) >> 1)
				{
					while (1)
					{
						v167 = *v8;
						v168 = *v10;
						++v8;
						--v166;
						++v10;
						v391 = v8;
						if (v167 != v168)
							return 0i64;
						if (v166 <= 0)
							goto LABEL_14;
					}
				}
				if (!a5[48] || (unsigned __int64)v10 < *((_QWORD*)a5 + 20))
					return 0i64;
			LABEL_1471:
				if ((unsigned __int64)v10 <= *((_QWORD*)a5 + 23))
					return 0i64;
				a5[31] = 1;
				goto LABEL_288;
			}
			if ((__int64)((*((_QWORD*)a5 + 20) - (_QWORD)v10) & 0xFFFFFFFFFFFFFFFEui64) < 2)
				goto LABEL_1470;
			v169 = *v10++;
			if (v8[1] != v169)
				return 0i64;
			v8 += 2;
			v391 = v8;
			continue;
		case 0x1Eu:
			if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
				goto LABEL_1470;
			if (v395)
			{
				v170 = v8[1];
				v171 = v8 + 1;
				v172 = 1;
				if ((v170 & 0xFC00) == 55296)
				{
					v172 = 2;
					v170 = (((v170 & 0x3FF) << 10) | v171[1] & 0x3FF) + 0x10000;
				}
				if ((unsigned int)v170 >= 0x80)
				{
					v175 = *v10++;
					if ((v175 & 0xFC00) == 55296)
						v175 = (*v10++ & 0x3FF | ((v175 & 0x3FF) << 10)) + 0x10000;
					v8 = &v171[v172];
					v391 = v8;
					if ((_DWORD)v170 != v175)
						return 0i64;
				}
				else
				{
					v173 = *v10;
					if (*v10 > 0xFFu)
						v174 = v173;
					else
						v174 = *(unsigned __int8*)(*((_QWORD*)a5 + 8) + v173);
					if (*(unsigned __int8*)(*((_QWORD*)a5 + 8) + v170) != v174)
						return 0i64;
					v8 = v171 + 1;
					++v10;
					v391 = v8;
				}
			}
			else
			{
				v176 = v8[1];
				if (v176 > 0xFFu)
					v177 = v176;
				else
					v177 = *(unsigned __int8*)(*((_QWORD*)a5 + 8) + v176);
				v178 = *v10;
				if (*v10 > 0xFFu)
					v179 = v178;
				else
					v179 = *(unsigned __int8*)(*((_QWORD*)a5 + 8) + v178);
				if (v177 != v179)
					return 0i64;
				++v10;
				v8 += 2;
				v391 = v8;
			}
			goto LABEL_13;
		case 0x1Fu:
		case 0x20u:
			if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
				goto LABEL_1470;
			if (!v395)
			{
				v205 = *v10;
				v206 = v8[1];
				++v10;
				if (v206 == v205)
					return 0i64;
				if (v435 == 32)
				{
					if (v206 <= 0xFF)
						v206 = *(unsigned __int8*)(*((_QWORD*)a5 + 9) + v8[1]);
					if (v206 == v205)
						return 0i64;
				}
				v8 += 2;
				v391 = v8;
				continue;
			}
			v202 = v8[1];
			v8 += 2;
			v391 = v8;
			if ((v202 & 0xFC00) == 55296)
			{
				v202 = (((v202 & 0x3FF) << 10) | *v8++ & 0x3FF) + 0x10000;
				v391 = v8;
			}
			v203 = *v10++;
			if ((v203 & 0xFC00) == 55296)
				v203 = (*v10++ & 0x3FF | ((v203 & 0x3FF) << 10)) + 0x10000;
			if (v435 == 31)
			{
				if ((_DWORD)v202 == v203)
					return 0i64;
			}
			else
			{
				if ((unsigned int)v202 > 0x7F)
					v204 = v202;
				else
					v204 = *(unsigned __int8*)(*((_QWORD*)a5 + 9) + v202);
				if ((_DWORD)v202 == v203 || v204 == v203)
					return 0i64;
			}
			goto LABEL_13;
		case 0x21u:
		case 0x22u:
		case 0x23u:
		case 0x24u:
		case 0x25u:
		case 0x26u:
		case 0x2Eu:
		case 0x2Fu:
		case 0x30u:
		case 0x31u:
		case 0x32u:
		case 0x33u:
			v183 = 46;
			if (v15 < 0x2Eu)
				v183 = 33;
			v181 = v8 + 1;
			v184 = (unsigned int)v15 - v183;
			v180 = byte_1409CF300[v184 + 8];
			v182 = byte_1409CF300[v184];
			v430 = v184 & 1;
			if (!byte_1409CF300[v184 + 8])
				v180 = 0x7FFFFFFF;
			goto LABEL_621;
		case 0x27u:
		case 0x28u:
		case 0x34u:
		case 0x35u:
			goto LABEL_610;
		case 0x29u:
		case 0x36u:
			v180 = v8[1];
			v181 = v8 + 2;
			v182 = v180;
		LABEL_621:
			v427 = v180;
			goto LABEL_622;
		case 0x2Au:
		case 0x37u:
			v439 = 1;
			v182 = 0;
			v180 = 0x7FFFFFFF;
			v427 = 0x7FFFFFFF;
			v181 = v8 + 1;
			goto LABEL_622;
		case 0x2Bu:
		case 0x38u:
			v439 = 1;
			v182 = 1;
			v180 = 0x7FFFFFFF;
			v427 = 0x7FFFFFFF;
			v181 = v8 + 1;
			goto LABEL_622;
		case 0x2Cu:
		case 0x39u:
			v439 = 1;
			v182 = 0;
			v180 = 1;
			v427 = 1;
			v181 = v8 + 1;
			goto LABEL_622;
		case 0x2Du:
		case 0x3Au:
			v439 = 1;
		LABEL_610:
			v180 = v8[1];
			v182 = 0;
			v427 = v180;
			if (v15 == 40 || (v430 = 0, v15 == 53))
				v430 = 1;
			v181 = v8 + 2;
		LABEL_622:
			v185 = v395;
			if (v395)
			{
				v186 = *v181;
				v187 = 1;
				v404 = 1;
				v414 = (__int64)v181;
				v448 = *v181;
				if ((*v181 & 0xFC00) == 55296)
				{
					v187 = 2;
					v188 = v181[1] & 0x3FF;
					v404 = 2;
					v189 = (v186 & 0x3FF) << 10;
					v186 = (v189 | (unsigned int)v188) + 0x10000;
					v448 = (v189 | v188) + 0x10000;
				}
				v190 = v187;
				v467 = v187;
				v191 = 2 * v187 + (_DWORD)v181;
				v465 = 2i64 * v187;
				v391 = &v181[(unsigned __int64)v465 / 2];
				if (v187 > 1)
				{
					v449 = 1;
					if (v182 >= 1)
					{
						v192 = -2i64 * v187 + *((_QWORD*)a5 + 20);
						v473 = v192;
						do
						{
							if ((unsigned __int64)v10 > v192
								|| (unsigned int)sub_1407E6AF0((unsigned __int64*)v10, (__int64)v181, 2 * v187))
							{
								goto LABEL_1501;
							}
							v10 = (unsigned __int16*)((char*)v10 + v465);
							v192 = v473;
							v187 = v404;
							v181 = (unsigned __int16*)v414;
							++v449;
						} while (v449 <= v182);
						v190 = v467;
						v191 = (int)v391;
					}
					if (v182 != v427)
					{
						if (v430)
						{
							result = sub_140911350((_DWORD)v10, v191, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
							if ((_DWORD)result)
								return result;
							v353 = v404;
							while (v182 < v427)
							{
								if ((unsigned __int64)v10 > *((_QWORD*)a5 + 20) - 2 * v353
									|| (unsigned int)sub_1407E6AF0((unsigned __int64*)v10, v414, 2 * (int)v353))
								{
									goto LABEL_1501;
								}
								v10 += v404;
								++v182;
								result = sub_140911350(
									(_DWORD)v10,
									(_DWORD)v391,
									(_DWORD)a3,
									v394,
									(__int64)a5,
									(__int64)v438,
									a7 + 1);
								v353 = v404;
								if ((_DWORD)result)
									return result;
							}
							return 0i64;
						}
						v474 = v10;
						if (v182 >= v427)
							goto LABEL_639;
						v193 = -2 * v190 + *((_QWORD*)a5 + 20);
						v468 = v193;
						while ((unsigned __int64)v10 <= v193
							&& !(unsigned int)sub_1407E6AF0((unsigned __int64*)v10, (__int64)v181, 2 * v187))
						{
							v10 = (unsigned __int16*)((char*)v10 + v465);
							v193 = v468;
							v187 = v404;
							v181 = (unsigned __int16*)v414;
							if (++v182 >= v427)
								goto LABEL_639;
						}
						if (a5[48])
						{
							v14 = 1;
							if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20) && (unsigned __int64)v10 > *((_QWORD*)a5 + 23))
							{
								a5[31] = 1;
								if (a5[48] > 1)
									return 4294967284i64;
							}
						}
						else
						{
						LABEL_639:
							v14 = 1;
						}
						if (!v439)
						{
							result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
							if ((_DWORD)result)
								return result;
							while (v10 != v474)
							{
								v10 -= v404;
								result = sub_140911350(
									(_DWORD)v10,
									(_DWORD)v391,
									(_DWORD)a3,
									v394,
									(__int64)a5,
									(__int64)v438,
									a7 + 1);
								if ((_DWORD)result)
									return result;
							}
							return 0i64;
						}
						v8 = v391;
						goto LABEL_12;
					}
					v8 = v391;
					goto LABEL_11;
				}
				v185 = v395;
				v8 = &v181[v187];
			}
			else
			{
				v186 = *v181;
				v8 = v181 + 1;
				v448 = v186;
				v391 = v8;
			}
			if (v435 < 0x2Eu)
			{
				v14 = 1;
				v199 = 1;
				if (v182 < 1)
				{
				LABEL_678:
					v13 = 0;
					if (v182 == v180)
						goto LABEL_13;
					if (v430)
					{
						result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
						if ((_DWORD)result)
							return result;
						while (v182 < v427)
						{
							if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
								goto LABEL_1505;
							v355 = *v10++;
							if (v448 != v355)
								break;
							++v182;
							result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
							if ((_DWORD)result)
								return result;
						}
						return 0i64;
					}
					v201 = v10;
					v416 = v10;
					if (v182 < v180)
					{
						while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
						{
							if ((_DWORD)v186 == *v10)
							{
								++v182;
								++v10;
								if (v182 < v180)
									continue;
							}
							goto LABEL_688;
						}
						if (a5[48])
						{
							if ((unsigned __int64)v10 > *((_QWORD*)a5 + 23))
							{
								a5[31] = 1;
								if (a5[48] > 1)
									return 4294967284i64;
							}
						}
					LABEL_688:
						v201 = v416;
					}
					if (!v439)
					{
						if (v10 >= v201)
						{
							do
								result = sub_140911350(
									(_DWORD)v10--,
									(_DWORD)v391,
									(_DWORD)a3,
									v394,
									(__int64)a5,
									(__int64)v438,
									a7 + 1);
							while (!(_DWORD)result && v10 >= v416);
							return result;
						}
						return 0i64;
					}
					goto LABEL_13;
				}
				while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
				{
					v200 = *v10++;
					if ((_DWORD)v186 != v200)
						return 0i64;
					if (++v199 > v182)
						goto LABEL_678;
				}
			}
			else
			{
				if (v185 && (unsigned int)v186 > 0x7F || (unsigned int)v186 > 0xFF)
					v194 = v186;
				else
					v194 = *(unsigned __int8*)(*((_QWORD*)a5 + 9) + v186);
				v14 = 1;
				v405 = v194;
				v195 = 1;
				if (v182 < 1)
				{
				LABEL_660:
					v8 = v391;
					if (v182 == v180)
						goto LABEL_12;
					if (v430)
					{
						result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
						if ((_DWORD)result)
							return result;
						while (v182 < v427)
						{
							if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
								goto LABEL_1505;
							v354 = *v10;
							if (v448 != v354 && v405 != v354)
								break;
							++v10;
							++v182;
							result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
							if ((_DWORD)result)
								return result;
						}
						return 0i64;
					}
					v197 = v10;
					v415 = v10;
					if (v182 < v180)
					{
						while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
						{
							v198 = *v10;
							if ((_DWORD)v186 == v198 || v194 == v198)
							{
								++v182;
								++v10;
								if (v182 < v180)
									continue;
							}
							goto LABEL_671;
						}
						if (a5[48])
						{
							if ((unsigned __int64)v10 > *((_QWORD*)a5 + 23))
							{
								a5[31] = 1;
								if (a5[48] > 1)
									return 4294967284i64;
							}
						}
					LABEL_671:
						v197 = v415;
					}
					if (!v439)
					{
						if (v10 >= v197)
						{
							do
								result = sub_140911350(
									(_DWORD)v10--,
									(_DWORD)v391,
									(_DWORD)a3,
									v394,
									(__int64)a5,
									(__int64)v438,
									a7 + 1);
							while (!(_DWORD)result && v10 >= v415);
							return result;
						}
						return 0i64;
					}
					goto LABEL_12;
				}
				while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
				{
					v196 = *v10;
					if ((_DWORD)v186 != v196 && v194 != v196)
						return 0i64;
					++v195;
					++v10;
					if (v195 > v182)
						goto LABEL_660;
				}
			}
			if (!a5[48] || (unsigned __int64)v10 <= *((_QWORD*)a5 + 23))
				return 0i64;
			a5[31] = 1;
			v99 = a5[48] <= 1;
			goto LABEL_289;
		case 0x3Bu:
		case 0x3Cu:
		case 0x3Du:
		case 0x3Eu:
		case 0x3Fu:
		case 0x40u:
		case 0x48u:
		case 0x49u:
		case 0x4Au:
		case 0x4Bu:
		case 0x4Cu:
		case 0x4Du:
			v209 = 59;
			if (v15 >= 0x48u)
				v209 = 72;
			v207 = v8 + 1;
			v210 = (unsigned int)v15 - v209;
			v14 = byte_1409CF300[v210 + 8];
			v208 = byte_1409CF300[v210];
			v16 = v210 & 1;
			v430 = v16;
			if (!byte_1409CF300[v210 + 8])
				v14 = 0x7FFFFFFF;
			goto LABEL_728;
		case 0x41u:
		case 0x42u:
		case 0x4Eu:
		case 0x4Fu:
			v14 = v8[1];
			v208 = 0;
			v428 = v14;
			if (v15 == 66 || v15 == 79)
			{
				v16 = 1;
				v207 = v8 + 2;
				v430 = 1;
			}
			else
			{
				v430 = 0;
				v207 = v8 + 2;
			}
			goto LABEL_729;
		case 0x43u:
		case 0x50u:
			v14 = v8[1];
			v207 = v8 + 2;
			v208 = v14;
			goto LABEL_728;
		case 0x44u:
		case 0x51u:
			v439 = 1;
			v208 = 0;
			v14 = 0x7FFFFFFF;
			v428 = 0x7FFFFFFF;
			v207 = v8 + 1;
			goto LABEL_729;
		case 0x45u:
		case 0x52u:
			v439 = 1;
			v208 = 1;
			v14 = 0x7FFFFFFF;
			v428 = 0x7FFFFFFF;
			v207 = v8 + 1;
			goto LABEL_729;
		case 0x46u:
		case 0x53u:
			v439 = 1;
			v208 = 0;
			v207 = v8 + 1;
			goto LABEL_728;
		case 0x47u:
		case 0x54u:
			v439 = 1;
			v14 = v8[1];
			v207 = v8 + 2;
			v208 = 0;
		LABEL_728:
			v428 = v14;
		LABEL_729:
			v211 = *v207;
			v212 = v395;
			v8 = v207 + 1;
			v406 = v211;
			v391 = v8;
			if (v395 && (v211 & 0xFC00) == 55296)
			{
				v212 = v395;
				v211 = (((v211 & 0x3FF) << 10) | *v8++ & 0x3FF) + 0x10000;
				v391 = v8;
				v406 = v211;
			}
			if (v15 >= 0x48u)
			{
				if (v212 && (unsigned int)v211 > 0x7F || (unsigned int)v211 > 0xFF)
				{
					v450 = v211;
					v213 = v211;
				}
				else
				{
					v212 = v395;
					v213 = *(unsigned __int8*)(*((_QWORD*)a5 + 9) + v211);
					v450 = v213;
				}
				if (!v212)
				{
					v216 = 1;
					if (v208 < 1)
						goto LABEL_752;
					while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
					{
						v217 = *v10;
						if ((_DWORD)v211 == v217 || v213 == v217)
							return 0i64;
						++v216;
						++v10;
						if (v216 > v208)
							goto LABEL_752;
					}
				LABEL_1505:
					if (!a5[48] || (unsigned __int64)v10 <= *((_QWORD*)a5 + 23))
						return 0i64;
				LABEL_287:
					a5[31] = 1;
				LABEL_288:
					v99 = a5[48] <= 1;
				LABEL_289:
					if (v99)
						return 0i64;
					return 4294967284i64;
				}
				v214 = 1;
				if (v208 < 1)
					goto LABEL_753;
				do
				{
					if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
						goto LABEL_1505;
					v215 = *v10++;
					if ((v215 & 0xFC00) == 55296)
						v215 = (*v10++ & 0x3FF | ((v215 & 0x3FF) << 10)) + 0x10000;
					if ((_DWORD)v211 == v215 || v213 == v215)
						return 0i64;
					++v214;
				} while (v214 <= v208);
				v8 = v391;
			LABEL_752:
				v212 = v395;
			LABEL_753:
				if (v208 == v14)
					goto LABEL_11;
				if (v430)
				{
					v388 = a7 + 1;
					if (v212)
					{
						result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, v388);
						if ((_DWORD)result)
							return result;
						while (1)
						{
							if (v208 >= v428)
								return 0i64;
							if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
								break;
							v357 = *v10++;
							if ((v357 & 0xFC00) == 55296)
								v357 = (*v10++ & 0x3FF | ((v357 & 0x3FF) << 10)) + 0x10000;
							if (v406 == v357 || v450 == v357)
								return 0i64;
							++v208;
							result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
							if ((_DWORD)result)
								return result;
						}
					}
					else
					{
						result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, v388);
						if ((_DWORD)result)
							return result;
						while (1)
						{
							if (v208 >= v428)
								return 0i64;
							if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
								break;
							v358 = *v10;
							if (v406 == v358 || v450 == v358)
								return 0i64;
							++v10;
							++v208;
							result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
							if ((_DWORD)result)
								return result;
						}
					}
					goto LABEL_1505;
				}
				v218 = v10;
				v417 = v10;
				if (v212)
				{
					if (v208 >= v14)
					{
					LABEL_763:
						v14 = 1;
					LABEL_764:
						if (!v439)
						{
							result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
							if ((_DWORD)result)
								return result;
							while (1)
							{
								v356 = v10--;
								if (v356 == v417)
									break;
								if ((*v10 & 0xFC00) == 0xDC00)
									--v10;
								result = sub_140911350(
									(_DWORD)v10,
									(_DWORD)v391,
									(_DWORD)a3,
									v394,
									(__int64)a5,
									(__int64)v438,
									a7 + 1);
								if ((_DWORD)result)
									return result;
							}
							return 0i64;
						}
						v8 = v391;
						goto LABEL_12;
					}
					while (1)
					{
						v219 = 1;
						if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
							break;
						v220 = *v10;
						if ((*v10 & 0xFC00) == 55296)
						{
							v219 = 2;
							v220 = (((v220 & 0x3FF) << 10) | v10[1] & 0x3FF) + 0x10000;
						}
						if ((_DWORD)v211 != v220 && v213 != v220)
						{
							++v208;
							v10 += v219;
							if (v208 < v14)
								continue;
						}
						goto LABEL_763;
					}
					v14 = 1;
					if (!a5[48])
						goto LABEL_764;
					if ((unsigned __int64)v10 <= *((_QWORD*)a5 + 23))
						goto LABEL_764;
					a5[31] = 1;
					if (a5[48] <= 1)
						goto LABEL_764;
					return 4294967284i64;
				}
				if (v208 >= v14)
					goto LABEL_776;
				do
				{
					if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
					{
						v14 = 1;
						if (!a5[48] || (unsigned __int64)v10 <= *((_QWORD*)a5 + 23) || (a5[31] = 1, a5[48] <= 1))
						{
							v218 = v417;
							goto LABEL_777;
						}
						return 4294967284i64;
					}
					v221 = *v10;
					if ((_DWORD)v211 == v221)
						break;
					if (v213 == v221)
						break;
					++v208;
					++v10;
				} while (v208 < v14);
				v218 = v417;
			LABEL_776:
				v14 = 1;
			LABEL_777:
				if (!v439)
				{
					if (v10 >= v218)
					{
						do
						{
							result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
							if ((_DWORD)result)
								break;
							--v10;
						} while (v10 >= v417);
						return result;
					}
					return 0i64;
				}
			LABEL_12:
				v13 = 0;
			LABEL_13:
				v7 = v394;
				continue;
			}
			if (!v212)
			{
				v224 = 1;
				if (v208 < 1)
					goto LABEL_798;
				while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
				{
					v225 = *v10++;
					if ((_DWORD)v211 == v225)
						return 0i64;
					if (++v224 > v208)
						goto LABEL_798;
				}
				goto LABEL_1505;
			}
			v222 = 1;
			if (v208 >= 1)
			{
				do
				{
					if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
						goto LABEL_1505;
					v223 = *v10++;
					if ((v223 & 0xFC00) == 55296)
						v223 = (*v10++ & 0x3FF | ((v223 & 0x3FF) << 10)) + 0x10000;
					if ((_DWORD)v211 == v223)
						return 0i64;
					++v222;
				} while (v222 <= v208);
				v8 = v391;
			LABEL_798:
				v212 = v395;
			}
			if (v208 == v14)
			{
			LABEL_11:
				v14 = 1;
				goto LABEL_12;
			}
			if (v16)
			{
				v389 = a7 + 1;
				if (v212)
				{
					result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, v389);
					if ((_DWORD)result)
						return result;
					while (1)
					{
						if (v208 >= v428)
							return 0i64;
						if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
							break;
						v360 = *v10++;
						if ((v360 & 0xFC00) == 55296)
							v360 = (*v10++ & 0x3FF | ((v360 & 0x3FF) << 10)) + 0x10000;
						if (v406 == v360)
							return 0i64;
						++v208;
						result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
						if ((_DWORD)result)
							return result;
					}
				}
				else
				{
					result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, v389);
					if ((_DWORD)result)
						return result;
					while (1)
					{
						if (v208 >= v428)
							return 0i64;
						if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
							break;
						v361 = *v10++;
						if (v406 == v361)
							return 0i64;
						++v208;
						result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
						if ((_DWORD)result)
							return result;
					}
				}
				goto LABEL_1505;
			}
			v226 = v10;
			v418 = v10;
			if (v212)
			{
				if (v208 >= v14)
				{
				LABEL_808:
					v14 = 1;
				}
				else
				{
					while (1)
					{
						v227 = 1;
						if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
							break;
						v228 = *v10;
						if ((v228 & 0xFC00) == 55296)
						{
							v227 = 2;
							v228 = (((v228 & 0x3FF) << 10) | v10[1] & 0x3FF) + 0x10000;
						}
						if ((_DWORD)v211 != v228)
						{
							++v208;
							v10 += v227;
							if (v208 < v14)
								continue;
						}
						goto LABEL_808;
					}
					v14 = 1;
					if (a5[48])
					{
						if ((unsigned __int64)v10 > *((_QWORD*)a5 + 23))
						{
							a5[31] = 1;
							if (a5[48] > 1)
								return 4294967284i64;
						}
					}
				}
				if (v439)
				{
					v8 = v391;
					goto LABEL_12;
				}
				result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
				if ((_DWORD)result)
					return result;
				do
				{
					v359 = v10--;
					if (v359 == v418)
						return 0i64;
					if ((*v10 & 0xFC00) == 0xDC00)
						--v10;
					result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
				} while (!(_DWORD)result);
				return result;
			}
			if (v208 >= v14)
				goto LABEL_820;
			do
			{
				if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
				{
					v14 = 1;
					if (!a5[48] || (unsigned __int64)v10 <= *((_QWORD*)a5 + 23) || (a5[31] = 1, a5[48] <= 1))
					{
						v226 = v418;
						goto LABEL_821;
					}
					return 4294967284i64;
				}
				if ((_DWORD)v211 == *v10)
					break;
				++v208;
				++v10;
			} while (v208 < v14);
			v226 = v418;
		LABEL_820:
			v14 = 1;
		LABEL_821:
			if (v439)
				goto LABEL_12;
			if (v10 < v226)
				return 0i64;
			do
			{
				result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
				if ((_DWORD)result)
					break;
				--v10;
			} while (v10 >= v418);
			return result;
		case 0x55u:
		case 0x56u:
		case 0x57u:
		case 0x58u:
		case 0x59u:
		case 0x5Au:
			v230 = v8 + 1;
			v231 = (unsigned int)v15 - 85;
			v16 = byte_1409CF300[v231];
			v229 = byte_1409CF300[v231 + 8];
			v437 = v16;
			if (!v229)
				v229 = 0x7FFFFFFF;
			v430 = ((_BYTE)v15 - 85) & 1;
			goto LABEL_840;
		case 0x5Bu:
		case 0x5Cu:
			v437 = 0;
			v429 = v8[1];
			v430 = v15 == 92;
			v230 = v8 + 2;
			goto LABEL_841;
		case 0x5Du:
			v229 = v8[1];
			v430 = 1;
			v230 = v8 + 2;
			v16 = v229;
			v437 = v229;
			goto LABEL_840;
		case 0x5Eu:
			v437 = 0;
			goto LABEL_833;
		case 0x5Fu:
			v16 = 1;
			v437 = 1;
		LABEL_833:
			v229 = 0x7FFFFFFF;
			v230 = v8 + 1;
			v439 = 1;
			goto LABEL_840;
		case 0x60u:
			v439 = 1;
			v437 = 0;
			v429 = 1;
			v230 = v8 + 1;
			goto LABEL_841;
		case 0x61u:
			v229 = v8[1];
			v230 = v8 + 2;
			v437 = 0;
			v439 = 1;
		LABEL_840:
			v429 = v229;
		LABEL_841:
			v232 = v395;
			v393 = v230;
			v233 = *v230;
			v407 = v233;
			v234 = (_DWORD)v393 + 2;
			v391 = v393 + 1;
			if (v16 <= 0)
				goto LABEL_866;
			if (v395)
			{
				switch (v233)
				{
				case 6:
					for (i = 1; i <= v16; ++i)
					{
						if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
							goto LABEL_1470;
						v257 = *v10++;
						if ((v257 & 0xFC00) == 55296)
							v257 = (*v10++ & 0x3FF | ((unsigned __int16)(v257 & 0x3FF) << 10)) + 0x10000;
						if ((unsigned int)v257 < 0x80 && (*(_BYTE*)(v257 + *((_QWORD*)a5 + 10)) & 4) != 0)
							return 0i64;
					}
					v234 = (int)v391;
					v232 = v395;
					goto LABEL_866;
				case 7:
					v258 = 1;
					while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
					{
						if (*v10 >= 0x80u || (*(_BYTE*)(*v10 + *((_QWORD*)a5 + 10)) & 4) == 0)
							return 0i64;
						++v258;
						++v10;
						if (v258 > v16)
							goto LABEL_864;
					}
					goto LABEL_1470;
				case 8:
					v259 = 1;
					v260 = *((_QWORD*)a5 + 20);
					do
					{
						if ((unsigned __int64)v10 >= v260)
							goto LABEL_1470;
						if (*v10 < 0x80u && (*(_BYTE*)(*v10 + *((_QWORD*)a5 + 10)) & 1) != 0)
							return 0i64;
						if ((unsigned __int64)++v10 < v260 && (*v10 & 0xFC00) == 0xDC00)
							++v10;
						++v259;
					} while (v259 <= v16);
					v234 = (int)v391;
					v232 = v395;
					goto LABEL_866;
				case 9:
					v261 = 1;
					while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
					{
						if (*v10 >= 0x80u || (*(_BYTE*)(*v10 + *((_QWORD*)a5 + 10)) & 1) == 0)
							return 0i64;
						++v261;
						++v10;
						if (v261 > v16)
							goto LABEL_864;
					}
					goto LABEL_1470;
				case 10:
					v262 = 1;
					v263 = *((_QWORD*)a5 + 20);
					do
					{
						if ((unsigned __int64)v10 >= v263)
							goto LABEL_1470;
						if (*v10 < 0x80u && (*(_BYTE*)(*v10 + *((_QWORD*)a5 + 10)) & 0x10) != 0)
							return 0i64;
						if ((unsigned __int64)++v10 < v263 && (*v10 & 0xFC00) == 0xDC00)
							++v10;
						++v262;
					} while (v262 <= v16);
					v234 = (int)v391;
					v232 = v395;
					goto LABEL_866;
				case 11:
					v264 = 1;
					while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
					{
						if (*v10 >= 0x80u || (*(_BYTE*)(*v10 + *((_QWORD*)a5 + 10)) & 0x10) == 0)
							return 0i64;
						++v264;
						++v10;
						if (v264 > v16)
							goto LABEL_864;
					}
					goto LABEL_1470;
				case 12:
					v235 = 1;
					v451 = 1;
					v236 = v10 + 1;
					v419 = v10 + 1;
					while (1)
					{
						v237 = *((_QWORD*)a5 + 20);
						if ((unsigned __int64)v10 >= v237)
							goto LABEL_1470;
						v238 = a5[8];
						v239 = a5 + 9;
						if (v238)
						{
							if ((unsigned int)sub_1409199E0(v10, v238, *((_QWORD*)a5 + 20), a5 + 9, v395))
								return 0i64;
							v236 = v419;
							v235 = v451;
							v16 = v437;
						}
						else if ((unsigned __int64)v10 <= v237 - 2i64 * *v239
							&& *v10 == *((_WORD*)a5 + 28)
							&& (*v239 == 1 || *v236 == *((_WORD*)a5 + 29)))
						{
							return 0i64;
						}
						if (a5[48])
						{
							if ((unsigned __int64)v236 >= *((_QWORD*)a5 + 20)
								&& !a5[8]
								&& *v239 == 2
								&& *v10 == *((_WORD*)a5 + 28))
							{
								a5[31] = 1;
								if (a5[48] > 1)
									return 4294967284i64;
							}
						}
						++v236;
						++v10;
						v419 = v236;
						if ((unsigned __int64)v10 < *((_QWORD*)a5 + 20) && (*v10 & 0xFC00) == 0xDC00)
						{
							++v10;
							v419 = ++v236;
						}
						v451 = ++v235;
						if (v235 > v16)
							goto LABEL_863;
					}
				case 13:
					v242 = 1;
					v243 = *((_QWORD*)a5 + 20);
					while ((unsigned __int64)v10 < v243)
					{
						if ((unsigned __int64)++v10 < v243 && (*v10 & 0xFC00) == 0xDC00)
							++v10;
						if (++v242 > v16)
							goto LABEL_864;
					}
					goto LABEL_1470;
				case 14:
					if ((unsigned __int64)v10 > *((_QWORD*)a5 + 20) - 2i64 * v16)
						return 0i64;
					v10 += v16;
					goto LABEL_865;
				case 17:
					v244 = 1;
					v245 = *((_QWORD*)a5 + 20);
					break;
				case 18:
					for (j = 1; j <= v16; ++j)
					{
						if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
							goto LABEL_1470;
						v249 = *v10++;
						if ((v249 & 0xFC00) == 55296)
							v249 = (*v10++ & 0x3FF | ((v249 & 0x3FF) << 10)) + 0x10000;
						if (v249 == 6158
							|| v249 == 9
							|| v249 == 32
							|| v249 == 160
							|| v249 == 5760
							|| (unsigned int)(v249 - 0x2000) <= 0xA
							|| v249 == 8239
							|| v249 == 8287
							|| v249 == 12288)
						{
							return 0i64;
						}
					}
					v234 = (int)v391;
					v232 = v395;
					goto LABEL_866;
				case 19:
					for (k = 1; k <= v16; ++k)
					{
						if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
							goto LABEL_1470;
						v251 = *v10++;
						if ((v251 & 0xFC00) == 55296)
							v251 = (*v10++ & 0x3FF | ((v251 & 0x3FF) << 10)) + 0x10000;
						if (v251 != 6158
							&& v251 != 9
							&& v251 != 32
							&& v251 != 160
							&& v251 != 5760
							&& (unsigned int)(v251 - 0x2000) > 0xA
							&& v251 != 8239
							&& v251 != 8287
							&& v251 != 12288)
						{
							return 0i64;
						}
					}
					v234 = (int)v391;
					v232 = v395;
					goto LABEL_866;
				case 20:
					for (m = 1; m <= v16; ++m)
					{
						if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
							goto LABEL_1470;
						v253 = *v10++;
						if ((v253 & 0xFC00) == 55296)
							v253 = (*v10++ & 0x3FF | ((v253 & 0x3FF) << 10)) + 0x10000;
						if ((unsigned int)(v253 - 10) <= 3 || v253 == 133 || (unsigned int)(v253 - 8232) <= 1)
							return 0i64;
					}
					v234 = (int)v391;
					v232 = v395;
					goto LABEL_866;
				case 21:
					for (n = 1; n <= v16; ++n)
					{
						if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
							goto LABEL_1470;
						v255 = *v10++;
						if ((v255 & 0xFC00) == 55296)
							v255 = (*v10++ & 0x3FF | ((v255 & 0x3FF) << 10)) + 0x10000;
						if (v255 < 0xA || v255 > 0xD && v255 != 133 && v255 - 8232 > 1)
							return 0i64;
					}
					v234 = (int)v391;
					v232 = v395;
					goto LABEL_866;
				default:
					return 4294967282i64;
				}
				while (1)
				{
					if ((unsigned __int64)v10 >= v245)
						goto LABEL_1470;
					v246 = *v10++;
					if ((v246 & 0xFC00) == 55296)
						v246 = (*v10++ & 0x3FF | ((v246 & 0x3FF) << 10)) + 0x10000;
					if (v246 > 0xD)
						break;
					if (v246 == 13)
					{
						if ((unsigned __int64)v10 < v245 && *v10 == 10)
							++v10;
					}
					else if (v246 != 10)
					{
						v247 = v246 - 11;
					LABEL_892:
						if (v247 > 1)
							return 0i64;
						goto LABEL_893;
					}
				LABEL_894:
					if (++v244 > v16)
					{
						v234 = (int)v391;
						v232 = v395;
						goto LABEL_866;
					}
				}
				if (v246 != 133)
				{
					v247 = v246 - 8232;
					goto LABEL_892;
				}
			LABEL_893:
				if (a5[32])
					return 0i64;
				goto LABEL_894;
			}
			switch (v233)
			{
			case 6:
				v281 = 1;
				while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
				{
					if (*v10 <= 0xFFu && (*(_BYTE*)(*v10 + *((_QWORD*)a5 + 10)) & 4) != 0)
						return 0i64;
					++v281;
					++v10;
					if (v281 > v16)
						goto LABEL_864;
				}
				goto LABEL_1470;
			case 7:
				v282 = 1;
				while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
				{
					if (*v10 > 0xFFu || (*(_BYTE*)(*v10 + *((_QWORD*)a5 + 10)) & 4) == 0)
						return 0i64;
					++v282;
					++v10;
					if (v282 > v16)
						goto LABEL_864;
				}
				goto LABEL_1470;
			case 8:
				v283 = 1;
				while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
				{
					if (*v10 <= 0xFFu && (*(_BYTE*)(*v10 + *((_QWORD*)a5 + 10)) & 1) != 0)
						return 0i64;
					++v283;
					++v10;
					if (v283 > v16)
						goto LABEL_864;
				}
				goto LABEL_1470;
			case 9:
				v284 = 1;
				while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
				{
					if (*v10 > 0xFFu || (*(_BYTE*)(*v10 + *((_QWORD*)a5 + 10)) & 1) == 0)
						return 0i64;
					++v284;
					++v10;
					if (v284 > v16)
						goto LABEL_864;
				}
				goto LABEL_1470;
			case 10:
				v285 = 1;
				while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
				{
					if (*v10 <= 0xFFu && (*(_BYTE*)(*v10 + *((_QWORD*)a5 + 10)) & 0x10) != 0)
						return 0i64;
					++v285;
					++v10;
					if (v285 > v16)
						goto LABEL_864;
				}
				goto LABEL_1470;
			case 11:
				v286 = 1;
				while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
				{
					if (*v10 > 0xFFu || (*(_BYTE*)(*v10 + *((_QWORD*)a5 + 10)) & 0x10) == 0)
						return 0i64;
					++v286;
					++v10;
					if (v286 > v16)
						goto LABEL_864;
				}
				goto LABEL_1470;
			case 12:
				v265 = 1;
				v452 = 1;
				do
				{
					v266 = *((_QWORD*)a5 + 20);
					if ((unsigned __int64)v10 >= v266)
						goto LABEL_1470;
					v267 = a5[8];
					v268 = a5 + 9;
					if (v267)
					{
						if ((unsigned int)sub_1409199E0(v10, v267, *((_QWORD*)a5 + 20), a5 + 9, 0))
							return 0i64;
						v265 = v452;
						v16 = v437;
					}
					else if ((unsigned __int64)v10 <= v266 - 2i64 * *v268
						&& *v10 == *((_WORD*)a5 + 28)
						&& (*v268 == 1 || v10[1] == *((_WORD*)a5 + 29)))
					{
						return 0i64;
					}
					if (a5[48])
					{
						if ((unsigned __int64)(v10 + 1) >= *((_QWORD*)a5 + 20)
							&& !a5[8]
							&& *v268 == 2
							&& *v10 == *((_WORD*)a5 + 28))
						{
							a5[31] = 1;
							if (a5[48] > 1)
								return 4294967284i64;
						}
					}
					++v265;
					++v10;
					v452 = v265;
				} while (v265 <= v16);
			LABEL_863:
				v233 = v407;
				goto LABEL_864;
			case 13:
			case 14:
				if ((unsigned __int64)v10 > *((_QWORD*)a5 + 20) - 2i64 * v16)
					goto LABEL_1470;
				v10 += v16;
				goto LABEL_865;
			case 17:
				v269 = 1;
				v270 = *((_QWORD*)a5 + 20);
				while (1)
				{
					if ((unsigned __int64)v10 >= v270)
						goto LABEL_1470;
					v271 = *v10++;
					if (v271 > 13)
						break;
					if (v271 == 13)
					{
						if ((unsigned __int64)v10 < v270 && *v10 == 10)
							++v10;
					}
					else if (v271 != 10)
					{
						v272 = v271 - 11;
					LABEL_1020:
						if (v272 > 1)
							return 0i64;
						goto LABEL_1021;
					}
				LABEL_1022:
					if (++v269 > v16)
						goto LABEL_864;
				}
				if (v271 != 133)
				{
					v272 = v271 - 8232;
					goto LABEL_1020;
				}
			LABEL_1021:
				if (a5[32])
					return 0i64;
				goto LABEL_1022;
			case 18:
				v273 = 1;
				while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
				{
					v274 = *v10++;
					if (v274 == 6158
						|| v274 == 9
						|| v274 == 32
						|| v274 == 160
						|| v274 == 5760
						|| (unsigned int)(v274 - 0x2000) <= 0xA
						|| v274 == 8239
						|| v274 == 8287
						|| v274 == 12288)
					{
						return 0i64;
					}
					if (++v273 > v16)
						goto LABEL_864;
				}
				goto LABEL_1470;
			case 19:
				v275 = 1;
				while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
				{
					v276 = *v10++;
					if (v276 != 6158
						&& v276 != 9
						&& v276 != 32
						&& v276 != 160
						&& v276 != 5760
						&& (unsigned int)(v276 - 0x2000) > 0xA
						&& v276 != 8239
						&& v276 != 8287
						&& v276 != 12288)
					{
						return 0i64;
					}
					if (++v275 > v16)
						goto LABEL_864;
				}
				goto LABEL_1470;
			case 20:
				v277 = 1;
				while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
				{
					v278 = *v10++;
					if ((unsigned int)(v278 - 10) <= 3 || v278 == 133 || (unsigned int)(v278 - 8232) <= 1)
						return 0i64;
					if (++v277 > v16)
						goto LABEL_864;
				}
				goto LABEL_1470;
			case 21:
				for (ii = 1; ii <= v16; ++ii)
				{
					if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
						goto LABEL_1470;
					v280 = *v10++;
					if (v280 < 10 || v280 > 13 && v280 != 133 && (unsigned int)(v280 - 8232) > 1)
						return 0i64;
				}
			LABEL_864:
				v232 = v395;
			LABEL_865:
				v234 = (int)v391;
			LABEL_866:
				v240 = v429;
				v7 = v394;
				if (v16 == v429)
				{
				LABEL_186:
					v8 = v391;
					v14 = 1;
					v13 = 0;
					continue;
				}
				if (!v430)
				{
					v241 = v10;
					v420 = v10;
					if (v232)
					{
						switch (v233)
						{
						case 6:
							if (v16 >= v429)
								goto LABEL_1123;
							while (1)
							{
								v308 = 1;
								if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
									goto LABEL_1209;
								v309 = *v10;
								if ((*v10 & 0xFC00) == 55296)
								{
									v308 = 2;
									v309 = (((v309 & 0x3FF) << 10) | v10[1] & 0x3FF) + 0x10000;
								}
								if ((unsigned int)v309 >= 0x100 || (*(_BYTE*)(v309 + *((_QWORD*)a5 + 10)) & 4) == 0)
								{
									++v16;
									v10 += v308;
									if (v16 < v429)
										continue;
								}
								goto LABEL_1122;
							}
						case 7:
							if (v16 >= v429)
								goto LABEL_1123;
							while (1)
							{
								v310 = 1;
								if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
									goto LABEL_1209;
								v311 = *v10;
								if ((*v10 & 0xFC00) == 55296)
								{
									v310 = 2;
									v311 = (((v311 & 0x3FF) << 10) | v10[1] & 0x3FF) + 0x10000;
								}
								if ((unsigned int)v311 < 0x100 && (*(_BYTE*)(v311 + *((_QWORD*)a5 + 10)) & 4) != 0)
								{
									++v16;
									v10 += v310;
									if (v16 < v429)
										continue;
								}
								goto LABEL_1122;
							}
						case 8:
							if (v16 >= v429)
								goto LABEL_1123;
							while (1)
							{
								v312 = 1;
								if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
									goto LABEL_1209;
								v313 = *v10;
								if ((*v10 & 0xFC00) == 55296)
								{
									v312 = 2;
									v313 = (((v313 & 0x3FF) << 10) | v10[1] & 0x3FF) + 0x10000;
								}
								if ((unsigned int)v313 >= 0x100 || (*(_BYTE*)(v313 + *((_QWORD*)a5 + 10)) & 1) == 0)
								{
									++v16;
									v10 += v312;
									if (v16 < v429)
										continue;
								}
								goto LABEL_1122;
							}
						case 9:
							if (v16 >= v429)
								goto LABEL_1123;
							while (1)
							{
								v314 = 1;
								if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
									goto LABEL_1209;
								v315 = *v10;
								if ((*v10 & 0xFC00) == 55296)
								{
									v314 = 2;
									v315 = (((v315 & 0x3FF) << 10) | v10[1] & 0x3FF) + 0x10000;
								}
								if ((unsigned int)v315 < 0x100 && (*(_BYTE*)(v315 + *((_QWORD*)a5 + 10)) & 1) != 0)
								{
									++v16;
									v10 += v314;
									if (v16 < v429)
										continue;
								}
								goto LABEL_1122;
							}
						case 10:
							if (v16 >= v429)
								goto LABEL_1123;
							while (1)
							{
								v316 = 1;
								if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
									goto LABEL_1209;
								v317 = *v10;
								if ((*v10 & 0xFC00) == 55296)
								{
									v316 = 2;
									v317 = (((v317 & 0x3FF) << 10) | v10[1] & 0x3FF) + 0x10000;
								}
								if ((unsigned int)v317 >= 0x100 || (*(_BYTE*)(v317 + *((_QWORD*)a5 + 10)) & 0x10) == 0)
								{
									++v16;
									v10 += v316;
									if (v16 < v429)
										continue;
								}
								goto LABEL_1122;
							}
						case 11:
							if (v16 >= v429)
								goto LABEL_1123;
							while (1)
							{
								v318 = 1;
								if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
									break;
								v319 = *v10;
								if ((*v10 & 0xFC00) == 55296)
								{
									v318 = 2;
									v319 = (((v319 & 0x3FF) << 10) | v10[1] & 0x3FF) + 0x10000;
								}
								if ((unsigned int)v319 < 0x100 && (*(_BYTE*)(v319 + *((_QWORD*)a5 + 10)) & 0x10) != 0)
								{
									++v16;
									v10 += v318;
									if (v16 < v429)
										continue;
								}
								goto LABEL_1122;
							}
							if (!a5[48] || (unsigned __int64)v10 <= *((_QWORD*)a5 + 23))
								goto LABEL_1122;
							a5[31] = 1;
							v295 = a5[48] <= 1;
							v14 = 1;
							goto LABEL_1149;
						case 12:
							if (v429 == 0x7FFFFFFF)
							{
								v291 = v10 + 1;
								v454 = v10 + 1;
								while (1)
								{
									v292 = *((_QWORD*)a5 + 20);
									if ((unsigned __int64)v10 >= v292)
										goto LABEL_1146;
									v293 = a5[8];
									v294 = a5 + 9;
									if (v293)
									{
										if ((unsigned int)sub_1409199E0(v10, v293, *((_QWORD*)a5 + 20), a5 + 9, v395))
											goto LABEL_1122;
										v291 = v454;
										v16 = v437;
										v240 = v429;
									}
									else if ((unsigned __int64)v10 <= v292 - 2i64 * *v294
										&& *v10 == *((_WORD*)a5 + 28)
										&& (*v294 == 1 || *v291 == *((_WORD*)a5 + 29)))
									{
										goto LABEL_1122;
									}
									if (a5[48])
									{
										if ((unsigned __int64)v291 >= *((_QWORD*)a5 + 20)
											&& !a5[8]
											&& *v294 == 2
											&& *v10 == *((_WORD*)a5 + 28))
										{
											a5[31] = 1;
											if (a5[48] > 1)
												return 4294967284i64;
										}
									}
									++v291;
									++v10;
									v454 = v291;
									if ((unsigned __int64)v10 < *((_QWORD*)a5 + 20) && (*v10 & 0xFC00) == 0xDC00)
									{
										++v10;
										v454 = ++v291;
									}
									v437 = ++v16;
									if (v16 >= v240)
										goto LABEL_1122;
								}
							}
							if (v16 < v429)
							{
								v287 = v10 + 1;
								v453 = v10 + 1;
								while (1)
								{
									v288 = *((_QWORD*)a5 + 20);
									if ((unsigned __int64)v10 >= v288)
										break;
									v289 = a5[8];
									v290 = a5 + 9;
									if (v289)
									{
										if ((unsigned int)sub_1409199E0(v10, v289, *((_QWORD*)a5 + 20), a5 + 9, v395))
											goto LABEL_1122;
										v287 = v453;
										v16 = v437;
										v240 = v429;
									}
									else if ((unsigned __int64)v10 <= v288 - 2i64 * *v290
										&& *v10 == *((_WORD*)a5 + 28)
										&& (*v290 == 1 || *v287 == *((_WORD*)a5 + 29)))
									{
										goto LABEL_1122;
									}
									if (a5[48])
									{
										if ((unsigned __int64)v287 >= *((_QWORD*)a5 + 20)
											&& !a5[8]
											&& *v290 == 2
											&& *v10 == *((_WORD*)a5 + 28))
										{
											a5[31] = 1;
											if (a5[48] > 1)
												return 4294967284i64;
										}
									}
									++v287;
									++v10;
									v453 = v287;
									if ((unsigned __int64)v10 < *((_QWORD*)a5 + 20) && (*v10 & 0xFC00) == 0xDC00)
									{
										++v10;
										v453 = ++v287;
									}
									v437 = ++v16;
									if (v16 >= v240)
										goto LABEL_1122;
								}
							LABEL_1146:
								v14 = 1;
								if (a5[48] && (unsigned __int64)v10 > *((_QWORD*)a5 + 23))
								{
									a5[31] = 1;
									v295 = a5[48] <= 1;
								LABEL_1149:
									if (!v295)
										return 4294967284i64;
								}
							LABEL_1150:
								v241 = v420;
							LABEL_1124:
								if (v439)
								{
									v8 = v391;
									goto LABEL_12;
								}
								result = sub_140911350(
									(_DWORD)v10,
									(_DWORD)v391,
									(_DWORD)a3,
									v394,
									(__int64)a5,
									(__int64)v438,
									a7 + 1);
								if ((_DWORD)result)
									return result;
								do
								{
									v362 = v10--;
									if (v362 == v241)
										return 0i64;
									if ((*v10 & 0xFC00) == 0xDC00)
										--v10;
									if (v407 == 17 && v10 > v241 && *v10 == 10 && *(v10 - 1) == 13)
										--v10;
									result = sub_140911350(
										(_DWORD)v10,
										(_DWORD)v391,
										(_DWORD)a3,
										v394,
										(__int64)a5,
										(__int64)v438,
										a7 + 1);
								} while (!(_DWORD)result);
								return result;
							}
							goto LABEL_1123;
						case 13:
							if (v429 == 0x7FFFFFFF)
							{
								v10 = (unsigned __int16*)*((_QWORD*)a5 + 20);
							}
							else
							{
								if (v16 >= v429)
								{
								LABEL_1123:
									v14 = 1;
									goto LABEL_1124;
								}
								v296 = *((_QWORD*)a5 + 20);
								while ((unsigned __int64)v10 < v296)
								{
									if ((unsigned __int64)++v10 < v296 && (*v10 & 0xFC00) == 0xDC00)
										++v10;
									if (++v16 >= v429)
										goto LABEL_1123;
								}
							}
							v14 = 1;
							if (!a5[48])
								goto LABEL_1124;
							v297 = (unsigned __int64)v10 <= *((_QWORD*)a5 + 23);
							goto LABEL_1163;
						case 14:
							v298 = (unsigned int)(v429 - v16);
							if ((unsigned int)v298 > (unsigned int)((__int64)(*((_QWORD*)a5 + 20) - (_QWORD)v10) >> 1))
							{
								v10 = (unsigned __int16*)*((_QWORD*)a5 + 20);
								v14 = 1;
								if (!a5[48])
									goto LABEL_1124;
								v297 = *((_QWORD*)a5 + 20) <= *((_QWORD*)a5 + 23);
							LABEL_1163:
								if (!v297)
								{
									a5[31] = 1;
									if (a5[48] > 1)
										return 4294967284i64;
								}
								goto LABEL_1124;
							}
							v10 += v298;
							goto LABEL_1123;
						case 17:
							if (v16 >= v429)
								goto LABEL_1123;
							v299 = *((_QWORD*)a5 + 20);
							while (1)
							{
								v300 = 1;
								if ((unsigned __int64)v10 >= v299)
									break;
								v301 = *v10;
								if ((v301 & 0xFC00) == 55296)
								{
									v300 = 2;
									v301 = (((v301 & 0x3FF) << 10) | v10[1] & 0x3FF) + 0x10000;
								}
								if (v301 == 13)
								{
									if ((unsigned __int64)++v10 >= v299)
										goto LABEL_1122;
									if (*v10 == 10)
										++v10;
								}
								else
								{
									if (v301 != 10
										&& (a5[32] || (unsigned int)(v301 - 11) > 1 && v301 != 133 && (unsigned int)(v301 - 8232) > 1))
									{
										goto LABEL_1122;
									}
									v10 += v300;
								}
								if (++v16 >= v429)
									goto LABEL_1122;
							}
							v14 = 1;
							if (!a5[48] || (unsigned __int64)v10 <= *((_QWORD*)a5 + 23))
								goto LABEL_1150;
							a5[31] = 1;
							if (a5[48] > 1)
								return 4294967284i64;
							v241 = v420;
							goto LABEL_1124;
						case 18:
						case 19:
							if (v16 >= v429)
								goto LABEL_1123;
							while (1)
							{
								v302 = 1;
								if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
									goto LABEL_1209;
								v303 = *v10;
								if ((v303 & 0xFC00) == 55296)
								{
									v302 = 2;
									v303 = (((v303 & 0x3FF) << 10) | v10[1] & 0x3FF) + 0x10000;
								}
								v304 = v303 == 6158
									|| v303 == 9
									|| v303 == 32
									|| v303 == 160
									|| v303 == 5760
									|| (unsigned int)(v303 - 0x2000) <= 0xA
									|| v303 == 8239
									|| v303 == 8287
									|| v303 == 12288;
								if (v304 != (v233 == 18))
								{
									++v16;
									v10 += v302;
									if (v16 < v429)
										continue;
								}
								goto LABEL_1122;
							}
						case 20:
						case 21:
							if (v16 >= v429)
								goto LABEL_1123;
							while (1)
							{
								v305 = 1;
								if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
									break;
								v306 = *v10;
								if ((v306 & 0xFC00) == 55296)
								{
									v305 = 2;
									v306 = (((v306 & 0x3FF) << 10) | v10[1] & 0x3FF) + 0x10000;
								}
								v307 = v306 >= 0xA && (v306 <= 0xD || v306 == 133 || v306 - 8232 <= 1);
								if (v307 != (v233 == 20))
								{
									++v16;
									v10 += v305;
									if (v16 < v429)
										continue;
								}
								goto LABEL_1122;
							}
						LABEL_1209:
							if (a5[48] && (unsigned __int64)v10 > *((_QWORD*)a5 + 23))
							{
								a5[31] = 1;
								v14 = 1;
								if (a5[48] > 1)
									return 4294967284i64;
								v241 = v420;
								goto LABEL_1124;
							}
						LABEL_1122:
							v241 = v420;
							goto LABEL_1123;
						default:
							return 4294967282i64;
						}
					}
					switch (v233)
					{
					case 6:
						if (v16 >= v429)
							goto LABEL_1295;
						while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
						{
							if (*v10 > 0xFFu || (*(_BYTE*)(*v10 + *((_QWORD*)a5 + 10)) & 4) == 0)
							{
								++v16;
								++v10;
								if (v16 < v429)
									continue;
							}
							goto LABEL_1295;
						}
						goto LABEL_1321;
					case 7:
						if (v16 >= v429)
							goto LABEL_1295;
						while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
						{
							if (*v10 <= 0xFFu && (*(_BYTE*)(*v10 + *((_QWORD*)a5 + 10)) & 4) != 0)
							{
								++v16;
								++v10;
								if (v16 < v429)
									continue;
							}
							goto LABEL_1295;
						}
						goto LABEL_1321;
					case 8:
						if (v16 >= v429)
							goto LABEL_1295;
						while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
						{
							if (*v10 > 0xFFu || (*(_BYTE*)(*v10 + *((_QWORD*)a5 + 10)) & 1) == 0)
							{
								++v16;
								++v10;
								if (v16 < v429)
									continue;
							}
							goto LABEL_1295;
						}
						goto LABEL_1321;
					case 9:
						if (v16 >= v429)
							goto LABEL_1295;
						while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
						{
							if (*v10 <= 0xFFu && (*(_BYTE*)(*v10 + *((_QWORD*)a5 + 10)) & 1) != 0)
							{
								++v16;
								++v10;
								if (v16 < v429)
									continue;
							}
							goto LABEL_1295;
						}
						goto LABEL_1321;
					case 10:
						if (v16 >= v429)
							goto LABEL_1295;
						while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
						{
							if (*v10 > 0xFFu || (*(_BYTE*)(*v10 + *((_QWORD*)a5 + 10)) & 0x10) == 0)
							{
								++v16;
								++v10;
								if (v16 < v429)
									continue;
							}
							goto LABEL_1295;
						}
						goto LABEL_1321;
					case 11:
						if (v16 >= v429)
							goto LABEL_1295;
						while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
						{
							if (*v10 <= 0xFFu && (*(_BYTE*)(*v10 + *((_QWORD*)a5 + 10)) & 0x10) != 0)
							{
								++v16;
								++v10;
								if (v16 < v429)
									continue;
							}
							goto LABEL_1295;
						}
						if (!a5[48])
							goto LABEL_1295;
						v14 = 1;
						goto LABEL_1322;
					case 12:
						if (v16 >= v429)
							goto LABEL_1295;
						while (1)
						{
							v320 = *((_QWORD*)a5 + 20);
							if ((unsigned __int64)v10 >= v320)
								break;
							v321 = a5[8];
							v322 = a5 + 9;
							if (v321)
							{
								if ((unsigned int)sub_1409199E0(v10, v321, *((_QWORD*)a5 + 20), a5 + 9, 0))
									goto LABEL_1294;
								v16 = v437;
								v240 = v429;
							}
							else if ((unsigned __int64)v10 <= v320 - 2i64 * *v322
								&& *v10 == *((_WORD*)a5 + 28)
								&& (*v322 == 1 || v10[1] == *((_WORD*)a5 + 29)))
							{
							LABEL_1294:
								v241 = v420;
								goto LABEL_1295;
							}
							if (a5[48])
							{
								if ((unsigned __int64)(v10 + 1) >= *((_QWORD*)a5 + 20)
									&& !a5[8]
									&& *v322 == 2
									&& *v10 == *((_WORD*)a5 + 28))
								{
									a5[31] = 1;
									if (a5[48] > 1)
										return 4294967284i64;
								}
							}
							++v16;
							++v10;
							v437 = v16;
							if (v16 >= v240)
								goto LABEL_1294;
						}
						v14 = 1;
						if (a5[48])
						{
							if ((unsigned __int64)v10 > *((_QWORD*)a5 + 23))
							{
								a5[31] = 1;
								if (a5[48] > 1)
									return 4294967284i64;
							}
						}
						v241 = v420;
						goto LABEL_1296;
					case 13:
					case 14:
						v323 = (unsigned int)(v429 - v16);
						if ((unsigned int)v323 <= (unsigned int)((__int64)(*((_QWORD*)a5 + 20) - (_QWORD)v10) >> 1))
						{
							v10 += v323;
						LABEL_1295:
							v14 = 1;
						}
						else
						{
							v10 = (unsigned __int16*)*((_QWORD*)a5 + 20);
							v14 = 1;
							if (a5[48])
							{
								v324 = *((_QWORD*)a5 + 20) <= *((_QWORD*)a5 + 23);
							LABEL_1323:
								if (!v324)
								{
									a5[31] = 1;
									if (a5[48] > 1)
										return 4294967284i64;
								}
							}
						}
					LABEL_1296:
						if (v439)
						{
							v8 = v391;
							goto LABEL_12;
						}
						if (v10 < v241)
							return 0i64;
						while (1)
						{
							result = sub_140911350(
								(_DWORD)v10,
								(_DWORD)v391,
								(_DWORD)a3,
								v394,
								(__int64)a5,
								(__int64)v438,
								a7 + 1);
							if ((_DWORD)result)
								return result;
							--v10;
							if (v407 != 17)
								goto LABEL_1683;
							v363 = v10 < v241;
							if (v10 > v241)
								break;
						LABEL_1684:
							if (v363)
								return 0i64;
						}
						if (*v10 == 10 && *(v10 - 1) == 13)
							--v10;
					LABEL_1683:
						v363 = v10 < v241;
						goto LABEL_1684;
					case 17:
						if (v16 >= v429)
							goto LABEL_1295;
						v325 = *((_QWORD*)a5 + 20);
						break;
					case 18:
						if (v16 >= v429)
							goto LABEL_1295;
						while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
						{
							v327 = *v10;
							if (v327 != 6158
								&& v327 != 9
								&& v327 != 32
								&& v327 != 160
								&& v327 != 5760
								&& (unsigned int)(v327 - 0x2000) > 0xA
								&& v327 != 8239
								&& v327 != 8287
								&& v327 != 12288)
							{
								++v16;
								++v10;
								if (v16 < v429)
									continue;
							}
							goto LABEL_1295;
						}
						goto LABEL_1321;
					case 19:
						if (v16 >= v429)
							goto LABEL_1295;
						while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
						{
							v328 = *v10;
							if (v328 == 6158
								|| v328 == 9
								|| v328 == 32
								|| v328 == 160
								|| v328 == 5760
								|| (unsigned int)(v328 - 0x2000) <= 0xA
								|| v328 == 8239
								|| v328 == 8287
								|| v328 == 12288)
							{
								++v16;
								++v10;
								if (v16 < v429)
									continue;
							}
							goto LABEL_1295;
						}
						goto LABEL_1321;
					case 20:
						if (v16 >= v429)
							goto LABEL_1295;
						while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
						{
							v329 = *v10;
							if ((unsigned int)(v329 - 10) > 3 && v329 != 133 && (unsigned int)(v329 - 8232) > 1)
							{
								++v16;
								++v10;
								if (v16 < v429)
									continue;
							}
							goto LABEL_1295;
						}
						goto LABEL_1321;
					case 21:
						if (v16 >= v429)
							goto LABEL_1295;
						while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
						{
							v330 = *v10;
							if (v330 >= 0xA && (*v10 <= 0xDu || v330 == 133 || v330 - 8232 <= 1))
							{
								++v16;
								++v10;
								if (v16 < v429)
									continue;
							}
							goto LABEL_1295;
						}
					LABEL_1321:
						v14 = 1;
						if (!a5[48])
							goto LABEL_1296;
					LABEL_1322:
						v324 = (unsigned __int64)v10 <= *((_QWORD*)a5 + 23);
						goto LABEL_1323;
					default:
						return 4294967282i64;
					}
					while (1)
					{
						if ((unsigned __int64)v10 >= v325)
							goto LABEL_1321;
						v326 = *v10;
						if (v326 == 13)
						{
							if ((unsigned __int64)++v10 >= v325)
								goto LABEL_1295;
							if (*v10 != 10)
								goto LABEL_1319;
						}
						else if (v326 != 10
							&& (a5[32] || (unsigned int)(v326 - 11) > 1 && v326 != 133 && (unsigned int)(v326 - 8232) > 1))
						{
							goto LABEL_1295;
						}
						++v10;
					LABEL_1319:
						if (++v16 >= v429)
							goto LABEL_1295;
					}
				}
				v390 = a7 + 1;
				if (v232)
				{
					result = sub_140911350((_DWORD)v10, v234, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, v390);
					if ((_DWORD)result)
						return result;
					v364 = v437;
					while (1)
					{
						if (v364 >= v429)
							return 0i64;
						v365 = *((_QWORD*)a5 + 20);
						if ((unsigned __int64)v10 >= v365)
							goto LABEL_1505;
						v366 = v407;
						if (v407 == 12)
						{
							v367 = a5[8];
							if (v367)
							{
								if ((unsigned int)sub_1409199E0(v10, v367, *((_QWORD*)a5 + 20), a5 + 9, v395))
									return 0i64;
								v366 = 12;
							}
							else if ((unsigned __int64)v10 <= v365 - 2i64 * a5[9]
								&& *v10 == *((_WORD*)a5 + 28)
								&& (a5[9] == 1 || v10[1] == *((_WORD*)a5 + 29)))
							{
								return 0i64;
							}
						}
						v368 = *v10++;
						if ((v368 & 0xFC00) == 55296)
							v368 = (*v10++ & 0x3FF | ((unsigned __int16)(v368 & 0x3FF) << 10)) + 0x10000;
						switch (v366)
						{
						case 6:
							if ((unsigned int)v368 < 0x100 && (*(_BYTE*)(v368 + *((_QWORD*)a5 + 10)) & 4) != 0)
								return 0i64;
							goto LABEL_1765;
						case 7:
							if ((unsigned int)v368 >= 0x100)
								return 0i64;
							v370 = (*(_BYTE*)(v368 + *((_QWORD*)a5 + 10)) & 4) == 0;
							goto LABEL_1764;
						case 8:
							if ((unsigned int)v368 < 0x100 && (*(_BYTE*)(v368 + *((_QWORD*)a5 + 10)) & 1) != 0)
								return 0i64;
							goto LABEL_1765;
						case 9:
							if ((unsigned int)v368 >= 0x100)
								return 0i64;
							v370 = (*(_BYTE*)(v368 + *((_QWORD*)a5 + 10)) & 1) == 0;
							goto LABEL_1764;
						case 10:
							if ((unsigned int)v368 < 0x100 && (*(_BYTE*)(v368 + *((_QWORD*)a5 + 10)) & 0x10) != 0)
								return 0i64;
							goto LABEL_1765;
						case 11:
							if ((unsigned int)v368 >= 0x100)
								return 0i64;
							v370 = (*(_BYTE*)(v368 + *((_QWORD*)a5 + 10)) & 0x10) == 0;
							goto LABEL_1764;
						case 12:
							if (a5[48])
							{
								if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20)
									&& !a5[8]
									&& a5[9] == 2
									&& (_DWORD)v368 == *((unsigned __int16*)a5 + 28))
								{
									a5[31] = 1;
									if (a5[48] > 1)
										return 4294967284i64;
								}
							}
							goto LABEL_1765;
						case 13:
						case 14:
							goto LABEL_1765;
						case 17:
							if ((unsigned int)v368 > 0xD)
							{
								if ((_DWORD)v368 != 133)
								{
									v369 = v368 - 8232;
									goto LABEL_1718;
								}
							LABEL_1719:
								if (a5[32])
									return 0i64;
								goto LABEL_1765;
							}
							if ((_DWORD)v368 == 13)
							{
								if ((unsigned __int64)v10 < *((_QWORD*)a5 + 20) && *v10 == 10)
									++v10;
								goto LABEL_1765;
							}
							if ((_DWORD)v368 != 10)
							{
								v369 = v368 - 11;
							LABEL_1718:
								if (v369 > 1)
									return 0i64;
								goto LABEL_1719;
							}
						LABEL_1765:
							++v364;
							result = sub_140911350(
								(_DWORD)v10,
								(_DWORD)v391,
								(_DWORD)a3,
								v394,
								(__int64)a5,
								(__int64)v438,
								a7 + 1);
							if ((_DWORD)result)
								return result;
							break;
						case 18:
							if ((_DWORD)v368 == 6158
								|| (_DWORD)v368 == 9
								|| (_DWORD)v368 == 32
								|| (_DWORD)v368 == 160
								|| (_DWORD)v368 == 5760
								|| (unsigned int)(v368 - 0x2000) <= 0xA
								|| (_DWORD)v368 == 8239
								|| (_DWORD)v368 == 8287)
							{
								return 0i64;
							}
							v370 = (_DWORD)v368 == 12288;
						LABEL_1764:
							if (!v370)
								goto LABEL_1765;
							return 0i64;
						case 19:
							if ((_DWORD)v368 != 12288
								&& (_DWORD)v368 != 8287
								&& (_DWORD)v368 != 8239
								&& (unsigned int)(v368 - 0x2000) > 0xA
								&& (_DWORD)v368 != 6158
								&& (_DWORD)v368 != 5760
								&& (_DWORD)v368 != 160
								&& (_DWORD)v368 != 32
								&& (_DWORD)v368 != 9)
							{
								return 0i64;
							}
							goto LABEL_1765;
						case 20:
							if ((unsigned int)(v368 - 10) <= 3 || (_DWORD)v368 == 133 || (unsigned int)(v368 - 8232) <= 1)
								return 0i64;
							goto LABEL_1765;
						case 21:
							if ((unsigned int)v368 < 0xA
								|| (unsigned int)v368 > 0xD && (_DWORD)v368 != 133 && (unsigned int)(v368 - 8232) > 1)
							{
								return 0i64;
							}
							goto LABEL_1765;
						default:
							return 4294967282i64;
						}
					}
				}
				result = sub_140911350((_DWORD)v10, v234, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, v390);
				if ((_DWORD)result)
					return result;
				v371 = v437;
				break;
			default:
				return 4294967282i64;
			}
			while (1)
			{
				if (v371 >= v429)
					return 0i64;
				v372 = *((_QWORD*)a5 + 20);
				if ((unsigned __int64)v10 >= v372)
					goto LABEL_1505;
				if (v407 == 12)
				{
					v373 = a5[8];
					if (v373)
					{
						if ((unsigned int)sub_1409199E0(v10, v373, *((_QWORD*)a5 + 20), a5 + 9, 0))
							return 0i64;
					}
					else if ((unsigned __int64)v10 <= v372 - 2i64 * a5[9]
						&& *v10 == *((_WORD*)a5 + 28)
						&& (a5[9] == 1 || v10[1] == *((_WORD*)a5 + 29)))
					{
						return 0i64;
					}
				}
				v374 = *v10++;
				switch (v407)
				{
				case 6:
					if ((unsigned int)v374 <= 0xFF && (*(_BYTE*)(v374 + *((_QWORD*)a5 + 10)) & 4) != 0)
						return 0i64;
					goto LABEL_1843;
				case 7:
					if ((unsigned int)v374 > 0xFF)
						return 0i64;
					v376 = (*(_BYTE*)(v374 + *((_QWORD*)a5 + 10)) & 4) == 0;
					goto LABEL_1842;
				case 8:
					if ((unsigned int)v374 <= 0xFF && (*(_BYTE*)(v374 + *((_QWORD*)a5 + 10)) & 1) != 0)
						return 0i64;
					goto LABEL_1843;
				case 9:
					if ((unsigned int)v374 > 0xFF)
						return 0i64;
					v376 = (*(_BYTE*)(v374 + *((_QWORD*)a5 + 10)) & 1) == 0;
					goto LABEL_1842;
				case 10:
					if ((unsigned int)v374 <= 0xFF && (*(_BYTE*)(v374 + *((_QWORD*)a5 + 10)) & 0x10) != 0)
						return 0i64;
					goto LABEL_1843;
				case 11:
					if ((unsigned int)v374 > 0xFF)
						return 0i64;
					v376 = (*(_BYTE*)(v374 + *((_QWORD*)a5 + 10)) & 0x10) == 0;
					goto LABEL_1842;
				case 12:
					if (a5[48])
					{
						if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20)
							&& !a5[8]
							&& a5[9] == 2
							&& (_DWORD)v374 == *((unsigned __int16*)a5 + 28))
						{
							a5[31] = 1;
							if (a5[48] > 1)
								return 4294967284i64;
						}
					}
					goto LABEL_1843;
				case 13:
				case 14:
					goto LABEL_1843;
				case 17:
					if ((unsigned int)v374 > 0xD)
					{
						if ((_DWORD)v374 != 133)
						{
							v375 = v374 - 8232;
							goto LABEL_1796;
						}
					LABEL_1797:
						if (a5[32])
							return 0i64;
						goto LABEL_1843;
					}
					if ((_DWORD)v374 == 13)
					{
						if ((unsigned __int64)v10 < *((_QWORD*)a5 + 20) && *v10 == 10)
							++v10;
						goto LABEL_1843;
					}
					if ((_DWORD)v374 != 10)
					{
						v375 = v374 - 11;
					LABEL_1796:
						if (v375 > 1)
							return 0i64;
						goto LABEL_1797;
					}
				LABEL_1843:
					++v371;
					result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
					if ((_DWORD)result)
						return result;
					break;
				case 18:
					if ((_DWORD)v374 == 6158
						|| (_DWORD)v374 == 9
						|| (_DWORD)v374 == 32
						|| (_DWORD)v374 == 160
						|| (_DWORD)v374 == 5760
						|| (unsigned int)(v374 - 0x2000) <= 0xA
						|| (_DWORD)v374 == 8239
						|| (_DWORD)v374 == 8287)
					{
						return 0i64;
					}
					v376 = (_DWORD)v374 == 12288;
				LABEL_1842:
					if (!v376)
						goto LABEL_1843;
					return 0i64;
				case 19:
					if ((_DWORD)v374 != 12288
						&& (_DWORD)v374 != 8287
						&& (_DWORD)v374 != 8239
						&& (unsigned int)(v374 - 0x2000) > 0xA
						&& (_DWORD)v374 != 6158
						&& (_DWORD)v374 != 5760
						&& (_DWORD)v374 != 160
						&& (_DWORD)v374 != 32
						&& (_DWORD)v374 != 9)
					{
						return 0i64;
					}
					goto LABEL_1843;
				case 20:
					if ((unsigned int)(v374 - 10) <= 3 || (_DWORD)v374 == 133 || (unsigned int)(v374 - 8232) <= 1)
						return 0i64;
					goto LABEL_1843;
				case 21:
					if ((unsigned int)v374 < 0xA
						|| (unsigned int)v374 > 0xD && (_DWORD)v374 != 133 && (unsigned int)(v374 - 8232) > 1)
					{
						return 0i64;
					}
					goto LABEL_1843;
				default:
					return 4294967282i64;
				}
			}
		case 0x6Au:
		case 0x6Bu:
			v142 = v8[17];
			v143 = v8 + 1;
			v144 = v8 + 17;
			v464 = v143;
			v391 = v144;
			if (v142 < 98)
				goto LABEL_522;
			if (v142 <= 103)
			{
				v147 = v142 - 98;
				v391 = v144 + 1;
				v145 = byte_1409CF300[v147];
				v430 = v147 & 1;
				v402 = v145;
				v425 = byte_1409CF300[v147 + 8];
				if (!byte_1409CF300[v147 + 8])
					v425 = 0x7FFFFFFF;
			}
			else
			{
				if (v142 > 105)
				{
				LABEL_522:
					v425 = 1;
					v145 = 1;
				}
				else
				{
					v145 = v144[1];
					v430 = v142 == 105;
					v146 = v391[2];
					if (!v391[2])
						v146 = 0x7FFFFFFF;
					v391 += 3;
					v425 = v146;
				}
				v402 = v145;
			}
			v148 = v395;
			v149 = 1;
			if (v395)
			{
				if (v145 >= 1)
				{
					while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
					{
						v150 = *v10++;
						if ((v150 & 0xFC00) == 55296)
							v150 = (*v10++ & 0x3FF | ((v150 & 0x3FF) << 10)) + 0x10000;
						if (v150 <= 0xFF)
						{
							if (((unsigned __int8)(1 << (v150 & 7)) & *((_BYTE*)v143 + ((unsigned __int64)v150 >> 3))) == 0)
								return 0i64;
							v15 = v435;
						}
						else if (v15 == 106)
						{
							return 0i64;
						}
						if (++v149 > v145)
							goto LABEL_544;
					}
					goto LABEL_1505;
				}
			}
			else if (v145 >= 1)
			{
				do
				{
					if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
						goto LABEL_1505;
					v151 = *v10++;
					if ((unsigned int)v151 <= 0xFF)
					{
						if (((unsigned __int8)(1 << (v151 & 7)) & *((_BYTE*)v143 + (v151 >> 3))) == 0)
							return 0i64;
						v15 = v435;
					}
					else if (v15 == 106)
					{
						return 0i64;
					}
					++v149;
				} while (v149 <= v145);
			LABEL_544:
				v148 = v395;
			}
			v152 = v425;
			if (v145 == v425)
			{
				v8 = v391;
				v13 = 0;
				v14 = 1;
				goto LABEL_13;
			}
			if (!v430)
			{
				v346 = v10;
				v421 = v10;
				if (v148)
				{
					if (v145 < v425)
					{
						while (1)
						{
							v347 = 1;
							if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
								break;
							v348 = *v10;
							if ((v348 & 0xFC00) == 55296)
							{
								v347 = 2;
								v348 = (((v348 & 0x3FF) << 10) | v10[1] & 0x3FF) + 0x10000;
							}
							if (v348 <= 0xFF)
							{
								if (((unsigned __int8)(1 << (v348 & 7)) & *((_BYTE*)v143 + ((unsigned __int64)v348 >> 3))) == 0)
									goto LABEL_1545;
								v15 = v435;
							}
							else if (v15 == 106)
							{
								goto LABEL_1545;
							}
							++v145;
							v10 += v347;
							if (v145 >= v425)
								goto LABEL_1545;
						}
						if (a5[48])
						{
							if ((unsigned __int64)v10 > *((_QWORD*)a5 + 23))
							{
								a5[31] = 1;
								if (a5[48] > 1)
									return 4294967284i64;
							}
						}
					LABEL_1545:
						v346 = v421;
					}
					result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
					if ((_DWORD)result)
						return result;
					do
					{
						v349 = v10--;
						if (v349 == v346)
							return 0i64;
						if ((*v10 & 0xFC00) == 0xDC00)
							--v10;
						result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
					} while (!(_DWORD)result);
					return result;
				}
				if (v145 < v425)
				{
					while ((unsigned __int64)v10 < *((_QWORD*)a5 + 20))
					{
						v350 = *v10;
						if ((unsigned int)v350 <= 0xFF)
						{
							if (((unsigned __int8)(1 << (v350 & 7)) & *((_BYTE*)v143 + (v350 >> 3))) == 0)
								goto LABEL_1564;
							v15 = v435;
						}
						else if (v15 == 106)
						{
							goto LABEL_1564;
						}
						++v145;
						++v10;
						if (v145 >= v425)
							goto LABEL_1564;
					}
					if (a5[48])
					{
						if ((unsigned __int64)v10 > *((_QWORD*)a5 + 23))
						{
							a5[31] = 1;
							if (a5[48] > 1)
								return 4294967284i64;
						}
					}
				LABEL_1564:
					v346 = v421;
					if (v10 < v421)
						return 0i64;
				}
				do
				{
					result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
					if ((_DWORD)result)
						break;
					--v10;
				} while (v10 >= v346);
				return result;
			}
			v387 = a7 + 1;
			if (v148)
			{
				result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, v387);
				if ((_DWORD)result)
					return result;
				while (1)
				{
					if (v402 >= v152)
						return 0i64;
					if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
						break;
					v342 = *v10++;
					if ((v342 & 0xFC00) == 55296)
						v342 = (*v10++ & 0x3FF | ((v342 & 0x3FF) << 10)) + 0x10000;
					if (v342 <= 0xFF)
						v343 = ((unsigned __int8)(1 << (v342 & 7)) & *((_BYTE*)v464 + ((unsigned __int64)v342 >> 3))) == 0;
					else
						v343 = v435 == 106;
					if (v343)
						return 0i64;
					++v402;
					result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
					if ((_DWORD)result)
						return result;
					v152 = v425;
				}
			}
			else
			{
				result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, v387);
				if ((_DWORD)result)
					return result;
				while (1)
				{
					if (v402 >= v152)
						return 0i64;
					if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
						break;
					v344 = *v10++;
					if ((unsigned int)v344 <= 0xFF)
						v345 = ((unsigned __int8)(1 << (v344 & 7)) & *((_BYTE*)v464 + (v344 >> 3))) == 0;
					else
						v345 = v435 == 106;
					if (v345)
						return 0i64;
					++v402;
					result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
					if ((_DWORD)result)
						return result;
					v152 = v425;
				}
			}
			goto LABEL_1505;
		case 0x6Cu:
			v153 = v8 + 2;
			v8 += v8[1];
			v413 = v153;
			v154 = *v8;
			v391 = v8;
			if (v154 < 0x62)
				goto LABEL_555;
			if (*v8 <= 0x67u)
			{
				v158 = v154 - 98;
				++v8;
				v159 = (unsigned int)v158;
				v160 = v158;
				v156 = byte_1409CF300[v158];
				v391 = v8;
				v430 = v160 & 1;
				v403 = v156;
				v426 = byte_1409CF300[v159 + 8];
				if (!byte_1409CF300[v159 + 8])
					v426 = 0x7FFFFFFF;
			}
			else
			{
				v155 = v154 == 105;
				if (*v8 > 0x69u)
				{
				LABEL_555:
					v426 = 1;
					v156 = 1;
				}
				else
				{
					v156 = v8[1];
					v430 = v155;
					v157 = v8[2];
					if (!v8[2])
						v157 = 0x7FFFFFFF;
					v8 += 3;
					v391 = v8;
					v426 = v157;
				}
				v403 = v156;
			}
			v161 = 1;
			if (v156 < 1)
				goto LABEL_565;
			do
			{
				if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
					goto LABEL_1505;
				v162 = *v10++;
				if (v395 && (v162 & 0xFC00) == 55296)
					v162 = (*v10++ & 0x3FF | ((v162 & 0x3FF) << 10)) + 0x10000;
				if (!(unsigned int)sub_140933C10(v162, v153, v395))
					return 0i64;
				v153 = v413;
				++v161;
			} while (v161 <= v403);
			v8 = v391;
			v14 = 1;
		LABEL_565:
			v163 = v403;
			if (v403 == v426)
				goto LABEL_12;
			if (!v430)
			{
				v470 = v10;
				if (v403 >= v426)
					goto LABEL_1579;
				while (1)
				{
					v456 = 1;
					if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
						break;
					v351 = *v10;
					if (v395 && (v351 & 0xFC00) == 55296)
					{
						v456 = 2;
						v351 = (((v351 & 0x3FF) << 10) | v10[1] & 0x3FF) + 0x10000;
					}
					if ((unsigned int)sub_140933C10(v351, v153, v395))
					{
						v153 = v413;
						v10 += v456;
						if (++v403 < v426)
							continue;
					}
					goto LABEL_1579;
				}
				if (!a5[48] || (unsigned __int64)v10 <= *((_QWORD*)a5 + 23) || (a5[31] = 1, a5[48] <= 1))
				{
				LABEL_1579:
					result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
					if ((_DWORD)result)
						return result;
					do
					{
						v352 = v10--;
						if (v352 == v470)
							return 0i64;
						if (v395 && (*v10 & 0xFC00) == 0xDC00)
							--v10;
						result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
					} while (!(_DWORD)result);
					return result;
				}
				return 4294967284i64;
			}
			result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
			if ((_DWORD)result)
				return result;
			while (1)
			{
				if (v163 >= v426)
					return 0i64;
				if ((unsigned __int64)v10 >= *((_QWORD*)a5 + 20))
					break;
				v164 = *v10++;
				if (v395 && (v164 & 0xFC00) == 55296)
					v164 = (*v10++ & 0x3FF | ((v164 & 0x3FF) << 10)) + 0x10000;
				if (!(unsigned int)sub_140933C10(v164, v413, v395))
					return 0i64;
				++v163;
				result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
				if ((_DWORD)result)
					return result;
			}
			goto LABEL_1505;
		case 0x6Du:
		case 0x6Eu:
			LOBYTE(v13) = v15 == 110;
			v128 = 2 * v8[1];
			v129 = v8 + 2;
			v433 = v13;
			v436 = v128;
			v391 = v129;
			if (v128 >= v7 || (v130 = *((_QWORD*)a5 + 2), v131 = *(_DWORD*)(v130 + 4i64 * v128), v131 < 0))
				v132 = (a5[26] != 0) - 1;
			else
				v132 = *(_DWORD*)(v130 + 4i64 * v128 + 4) - v131;
			v133 = *v129;
			v401 = v132;
			if (v133 < 0x62)
				goto LABEL_512;
			if (*v129 <= 0x67u)
			{
				v136 = v133 - 98;
				v8 = v129 + 1;
				v441 = v136 & 1;
				v135 = byte_1409CF300[(unsigned int)v136 + 8];
				v134 = byte_1409CF300[v136];
				if (!v135)
					v135 = 0x7FFFFFFF;
			}
			else
			{
				if (*v129 > 0x69u)
				{
				LABEL_512:
					v141 = sub_140918870(v128, (char*)v10, v132, a5, v13);
					if (v141 >= 0)
					{
						v8 = v391;
						v13 = 0;
						v10 += v141;
						v14 = 1;
						goto LABEL_13;
					}
					if (v141 == -2)
						v10 = (unsigned __int16*)*((_QWORD*)a5 + 20);
				LABEL_1501:
					if (!a5[48]
						|| (unsigned __int64)v10 < *((_QWORD*)a5 + 20)
						|| (unsigned __int64)v10 <= *((_QWORD*)a5 + 23))
					{
						return 0i64;
					}
					goto LABEL_287;
				}
				v107 = v133 == 105;
				v134 = v129[1];
				v441 = v107;
				v135 = v129[2];
				if (!v129[2])
					v135 = 0x7FFFFFFF;
				v8 = v129 + 3;
			}
			v7 = v394;
			v424 = v135;
			v447 = v134;
			v391 = v8;
			if (!v132 || v132 < 0 && !v134)
			{
			LABEL_123:
				v13 = 0;
				continue;
			}
			v137 = 1;
			if (v134 < 1)
				goto LABEL_505;
			do
			{
				v138 = sub_140918870(v128, (char*)v10, v132, a5, v13);
				if (v138 < 0)
				{
					if (v138 == -2)
						v10 = (unsigned __int16*)*((_QWORD*)a5 + 20);
					if (!a5[48]
						|| (unsigned __int64)v10 < *((_QWORD*)a5 + 20)
						|| (unsigned __int64)v10 <= *((_QWORD*)a5 + 23))
					{
						return 0i64;
					}
					goto LABEL_287;
				}
				v132 = v401;
				v128 = v436;
				v13 = v433;
				++v137;
				v10 += v138;
			} while (v137 <= v447);
			v8 = v391;
			v14 = 1;
		LABEL_505:
			v139 = v447;
			if (v447 == v424)
				goto LABEL_12;
			if (!v441)
			{
				v466 = v10;
				if (v447 >= v424)
				{
					v341 = v10;
				}
				else
				{
					while (1)
					{
						v340 = sub_140918870(v128, (char*)v10, v132, a5, v13);
						if (v340 < 0)
							break;
						v132 = v401;
						v128 = v436;
						v13 = v433;
						++v139;
						v10 += v340;
						if (v139 >= v424)
							goto LABEL_1493;
					}
					if (v340 == -2)
					{
						if (a5[48])
						{
							if (*((_QWORD*)a5 + 20) > *((_QWORD*)a5 + 23))
							{
								a5[31] = 1;
								if (a5[48] > 1)
									return 4294967284i64;
							}
						}
					}
				LABEL_1493:
					v341 = v466;
					if (v10 < v466)
						return 0i64;
				}
				do
				{
					result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
					if ((_DWORD)result)
						return result;
					v10 -= v401;
				} while (v10 >= v341);
				return 0i64;
			}
			result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
			if ((_DWORD)result)
				return result;
			while (1)
			{
				if (v139 >= v424)
					return 0i64;
				v140 = sub_140918870(v436, (char*)v10, v401, a5, v433);
				if (v140 < 0)
					break;
				++v139;
				v10 += v140;
				result = sub_140911350((_DWORD)v10, (_DWORD)v391, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
				if ((_DWORD)result)
					return result;
			}
			if (v140 == -2)
				v10 = (unsigned __int16*)*((_QWORD*)a5 + 20);
			if (!a5[48] || (unsigned __int64)v10 < *((_QWORD*)a5 + 20) || (unsigned __int64)v10 <= *((_QWORD*)a5 + 23))
				return 0i64;
			goto LABEL_287;
		case 0x6Fu:
			v52 = (unsigned __int16*)*((_QWORD*)a5 + 18);
			v53 = &v52[v8[1]];
			v107 = v53 == v52;
			v54 = 0;
			v410 = v53;
			if (!v107)
				v54 = v53[2];
			v55 = (__int64*)*((_QWORD*)a5 + 29);
			if (!v55)
				goto LABEL_161;
			do
			{
				if (v54 == *((_DWORD*)v55 + 2) && v10 == (unsigned __int16*)v55[4])
					return 4294967270i64;
				v55 = (__int64*)*v55;
			} while (v55);
		LABEL_161:
			v478 = v54;
			v481 = v10;
			v477 = *((_QWORD*)a5 + 29);
			*((_QWORD*)a5 + 29) = &v477;
			v56 = a5[6];
			v391 = v8 + 2;
			v480 = v56;
			if ((int)v56 > 30)
			{
				v57 = (int*)off_140C1B1E0(4 * v56);
				v479 = v57;
				if (!v57)
					return 4294967290i64;
				LODWORD(v56) = v480;
			}
			else
			{
				v57 = (int*)v507;
				v479 = (int*)v507;
			}
			sub_1407DB590(v57, *((int**)a5 + 2), 4i64 * (int)v56);
			v58 = *v53 >= 0x82u;
			v462 = v58;
			while (2)
			{
				if (v58)
					a5[52] = 2;
				v59 = sub_140911350(
					(_DWORD)v10,
					(unsigned int)v53 + 2 * byte_1409CFAA0[*v53],
					(_DWORD)a3,
					v394,
					(__int64)a5,
					(__int64)v438,
					a7 + 1);
				sub_1407DB590(*((int**)a5 + 2), v479, 4i64 * v480);
				*((_QWORD*)a5 + 29) = v477;
				if (v59 == 1 || v59 == -999)
				{
					if (v479 != (int*)v507)
						off_140C1B1E8(v479);
					v10 = (unsigned __int16*)*((_QWORD*)a5 + 22);
					v8 = v391;
					v13 = 0;
					a3 = (unsigned __int16*)*((_QWORD*)a5 + 21);
					v14 = 1;
					goto LABEL_13;
				}
				if (!v59 || v59 == -992 || v59 == -998)
				{
					*((_QWORD*)a5 + 29) = &v477;
					v60 = v410[1];
					v107 = v410[v60] == 113;
					v53 = &v410[v60];
					v410 = v53;
					if (v107)
					{
						v58 = v462;
						continue;
					}
					*((_QWORD*)a5 + 29) = v477;
					if (v479 != (int*)v507)
						off_140C1B1E8(v479);
					return 0i64;
				}
				break;
			}
			if (v479 != (int*)v507)
			{
				off_140C1B1E8(v479);
				return v59;
			}
			return v59;
		case 0x70u:
			if (!qword_140C63530)
				goto LABEL_154;
			v494[0] = 2;
			v494[1] = v8[1];
			v495 = *((_QWORD*)a5 + 2);
			v496 = *((_QWORD*)a5 + 19);
			v497 = (__int64)(*((_QWORD*)a5 + 20) - *((_QWORD*)a5 + 19)) >> 1;
			v498 = ((__int64)a3 - *((_QWORD*)a5 + 19)) >> 1;
			v499 = ((__int64)v10 - *((_QWORD*)a5 + 19)) >> 1;
			v503 = v8[2];
			v504 = v8[3];
			v500 = v394 / 2;
			v501 = a5[50];
			v502 = *((_QWORD*)a5 + 30);
			v505 = *((_QWORD*)a5 + 32);
			result = qword_140C63530(v494);
			if ((int)result > 0)
				return 0i64;
			if ((int)result < 0)
				return result;
			v8 = v391;
			v13 = 0;
		LABEL_154:
			v8 += 4;
			v14 = 1;
			v391 = v8;
			goto LABEL_13;
		case 0x71u:
			do
			{
				v61 = v8[1];
				v107 = v8[v61] == 113;
				v8 += v61;
			} while (v107);
			v391 = v8;
			continue;
		case 0x72u:
		case 0x73u:
		case 0x74u:
		case 0x75u:
			v81 = &v8[-v8[1]];
			v82 = *v81;
			v412 = v81;
			if (*v81 >= 0x82u || v82 == 123)
			{
				v83 = (unsigned __int16*)v438[1];
				v438 = (__int64*)*v438;
			}
			else
			{
				v83 = 0i64;
			}
			if ((unsigned __int16)(v82 - 119) <= 3u || v82 == 124)
			{
				*((_QWORD*)a5 + 22) = v10;
				a5[49] = v394;
				*((_QWORD*)a5 + 21) = a3;
				return 1i64;
			}
			if ((unsigned __int16)(v82 - 127) > 1u && (unsigned __int16)(v82 - 132) > 1u)
				goto LABEL_241;
			v84 = v81[2];
			v85 = *((_QWORD*)a5 + 29);
			v86 = 2 * v84;
			if (v85 && *(_DWORD*)(v85 + 8) == v84)
			{
				*((_QWORD*)a5 + 22) = v10;
				*((_QWORD*)a5 + 21) = a3;
				return 1i64;
			}
			a5[50] = v84;
			if (v86 < a5[7])
			{
				if (v86 > v394)
				{
					v88 = *((_QWORD*)a5 + 2);
					v89 = (_DWORD*)(v88 + 4i64 * v394);
					v90 = v88 + 4i64 * v86;
					if ((unsigned __int64)v89 < v90)
					{
						for (jj = ((v90 - (unsigned __int64)v89 - 1) >> 2) + 1; jj; --jj)
							*v89++ = -1;
					}
				}
				v92 = 4i64 * v86;
				v93 = (unsigned int)(a5[6] - v84);
				v8 = v391;
				*(_DWORD*)(v92 + *((_QWORD*)a5 + 2)) = *(_DWORD*)(*((_QWORD*)a5 + 2) + 4 * v93);
				*(_DWORD*)(*((_QWORD*)a5 + 2) + v92 + 4) = ((__int64)v10 - *((_QWORD*)a5 + 19)) >> 1;
				v87 = v394;
				v81 = v412;
				if (v394 <= v86)
				{
					v87 = v86 + 2;
					v394 = v86 + 2;
				}
				v13 = 0;
			}
			else
			{
				v8 = v391;
				a5[22] = 1;
				v13 = 0;
			LABEL_241:
				v87 = v394;
			}
			if (*v8 == 114 || v10 == v83)
			{
				if (*v81 != 123)
				{
					v8 += 2;
					v391 = v8;
					goto LABEL_13;
				}
				v338 = (_DWORD)v8 + 4;
				v337 = v87;
			LABEL_1466:
				v339 = a7 + 1;
			LABEL_1467:
				result = sub_140911350((_DWORD)v10, v338, (_DWORD)a3, v337, (__int64)a5, (__int64)v438, v339);
				if (!(_DWORD)result)
				{
					*((_QWORD*)a5 + 33) = v81;
					return 4294966300i64;
				}
				return result;
			}
			if (*v8 == 117)
			{
				*((_QWORD*)a5 + 22) = v10;
				result = 4294966299i64;
				a5[49] = v87;
				return result;
			}
			if (*v8 != 116)
			{
				result = sub_140911350((_DWORD)v10, (_DWORD)v81, (_DWORD)a3, v87, (__int64)a5, (__int64)v438, a7 + 1);
				if ((_DWORD)result == -996)
					v332 = *((_QWORD*)a5 + 33) == (_QWORD)v81;
				else
					v332 = (_DWORD)result == 0;
				if (!v332)
					return result;
				if (*v81 != 123)
				{
					v8 = v391 + 2;
					goto LABEL_1435;
				}
				v337 = v394;
				v339 = a7 + 1;
				v338 = (_DWORD)v391 + 4;
				goto LABEL_1467;
			}
			result = sub_140911350((_DWORD)v10, (int)v8 + 4, (_DWORD)a3, v87, (__int64)a5, (__int64)v438, a7 + 1);
			if ((_DWORD)result)
				return result;
			if (*v81 == 123)
			{
				v337 = v394;
				v338 = (int)v81;
				goto LABEL_1466;
			}
			if (*v81 >= 0x82u)
				return sub_140911350((_DWORD)v10, (_DWORD)v81, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
			v8 = v81;
			goto LABEL_1435;
		case 0x76u:
			if (v395)
			{
				v51 = v8[1];
				if (v8[1])
				{
					do
					{
						--v10;
						--v51;
						if ((unsigned __int64)v10 < *((_QWORD*)a5 + 19))
							return 0i64;
						if ((*v10 & 0xFC00) == 0xDC00)
							--v10;
					} while (v51 > 0);
				}
			}
			else
			{
				v10 -= v8[1];
				if ((unsigned __int64)v10 < *((_QWORD*)a5 + 19))
					return 0i64;
			}
			if ((unsigned __int64)v10 < *((_QWORD*)a5 + 23))
				*((_QWORD*)a5 + 23) = v10;
			v8 += 2;
			v391 = v8;
			continue;
		case 0x77u:
		case 0x79u:
			v45 = *((_QWORD*)a5 + 31);
			if (a5[52] == 1)
			{
				v443 = 1;
				a5[52] = 0;
			}
			else
			{
				v443 = 0;
			}
			while (1)
			{
				result = sub_140911350((_DWORD)v10, (int)v8 + 4, (_DWORD)a3, v394, (__int64)a5, 0i64, a7 + 1);
				if ((_DWORD)result == 1 || (_DWORD)result == -999)
					break;
				*((_QWORD*)a5 + 31) = v45;
				if ((_DWORD)result == -998)
					return 0i64;
				if ((_DWORD)result && (_DWORD)result != -992)
					return result;
				v46 = v391[1];
				v107 = v391[v46] == 113;
				v8 = &v391[v46];
				v391 = v8;
				if (!v107)
					goto LABEL_119;
			}
			v8 = v391;
			a3 = (unsigned __int16*)*((_QWORD*)a5 + 21);
		LABEL_119:
			if (*v8 == 114)
				return 0i64;
			if (v443)
				return 1i64;
			do
			{
				v47 = v8[1];
				v107 = v8[v47] == 113;
				v8 += v47;
			} while (v107);
			v7 = a5[49];
			v8 += 2;
			v14 = 1;
			v394 = v7;
			v391 = v8;
			goto LABEL_123;
		case 0x78u:
		case 0x7Au:
			v48 = *((_QWORD*)a5 + 31);
			if (a5[52] == 1)
			{
				v444 = 1;
				a5[52] = 0;
			}
			else
			{
				v444 = 0;
			}
			while (1)
			{
				result = sub_140911350((_DWORD)v10, (int)v8 + 4, (_DWORD)a3, v394, (__int64)a5, 0i64, a7 + 1);
				*((_QWORD*)a5 + 31) = v48;
				if ((_DWORD)result == 1 || (_DWORD)result == -999)
					return 0i64;
				if ((unsigned int)(result + 995) <= 1 || (_DWORD)result == -998)
					break;
				if ((_DWORD)result && (_DWORD)result != -992)
					return result;
				v49 = v391[1];
				v107 = v391[v49] == 113;
				v8 = &v391[v49];
				v391 = v8;
				if (!v107)
					goto LABEL_137;
			}
			v8 = v391;
			do
			{
				v50 = v8[1];
				v107 = v8[v50] == 113;
				v8 += v50;
			} while (v107);
		LABEL_137:
			if (!v444)
			{
				v8 += 2;
				v13 = 0;
				v14 = 1;
				v391 = v8;
				goto LABEL_13;
			}
			return 1i64;
		case 0x7Bu:
		case 0x7Du:
		case 0x82u:
			goto LABEL_1430;
		case 0x7Cu:
			v17 = *((_QWORD*)a5 + 31);
			v457 = v8;
			v409 = v10;
			while (1)
			{
				result = sub_140911350((_DWORD)v10, (int)v8 + 4, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
				if ((_DWORD)result == 1)
					break;
				if ((_DWORD)result == -992)
				{
					v18 = v391;
					v19 = &v391[v391[1]];
					if (*((_QWORD*)a5 + 21) >= (unsigned __int64)v19 || *v391 != 113 && *v19 != 113)
						return result;
				}
				else
				{
					if ((_DWORD)result)
						return result;
					v18 = v391;
				}
				v20 = v18[1];
				*((_QWORD*)a5 + 31) = v17;
				v107 = v18[v20] == 113;
				v8 = &v18[v20];
				v391 = v8;
				if (!v107)
				{
					LODWORD(v21) = (_DWORD)a3;
					goto LABEL_28;
				}
			}
			v21 = (unsigned __int16*)*((_QWORD*)a5 + 21);
			v8 = v391;
			a3 = v21;
		LABEL_28:
			if (*v8 != 124 && *v8 != 113)
				return 0i64;
			do
			{
				v22 = v8[1];
				v107 = v8[v22] == 113;
				v8 += v22;
			} while (v107);
			v7 = a5[49];
			v10 = (unsigned __int16*)*((_QWORD*)a5 + 22);
			v394 = v7;
			v392 = v8;
			if (*v8 == 114 || v10 == v409)
				goto LABEL_33;
			v386 = a7 + 1;
			if (*v8 == 116)
			{
				result = sub_140911350((_DWORD)v10, (int)v8 + 4, (_DWORD)v21, v7, (__int64)a5, (__int64)v438, v386);
				if ((_DWORD)result)
					return result;
				v8 = v457;
			}
			else
			{
				result = sub_140911350((_DWORD)v10, (_DWORD)v457, (_DWORD)v21, v7, (__int64)a5, (__int64)v438, v386);
				if ((_DWORD)result)
					return result;
				v8 = v392 + 2;
			}
			goto LABEL_1435;
		case 0x7Eu:
		case 0x83u:
			goto LABEL_212;
		case 0x7Fu:
		case 0x84u:
			v333 = v8[2];
			v455 = v333;
			if (2 * v333 >= a5[7])
			{
				while (1)
				{
					v15 = v435;
				LABEL_1430:
					if (v15 >= 0x82u || v15 == 123)
					{
						a5[52] = 2;
					}
					else if (!a5[33] && v8[v8[1]] != 113)
					{
						v8 += byte_1409CFAA0[*v8];
						goto LABEL_1435;
					}
					v469 = *((_QWORD*)a5 + 31);
					v334 = sub_140911350(
						(_DWORD)v10,
						(unsigned int)v8 + 2 * byte_1409CFAA0[*v8],
						(_DWORD)a3,
						v7,
						(__int64)a5,
						(__int64)v438,
						a7 + 1);
					v59 = v334;
					if (v334 == -992)
					{
						v335 = v391;
						v336 = &v391[v391[1]];
						if (*((_QWORD*)a5 + 21) >= (unsigned __int64)v336 || *v391 != 113 && *v336 != 113)
							return v59;
					}
					else
					{
						if (v334)
						{
							if (v334 == -996)
							{
								v383 = v391;
								if (*v391 != 123)
								{
									if (*v391 == 113)
									{
										do
										{
											v384 = v383[1];
											v107 = v383[v384] == 113;
											v383 += v384;
										} while (v107);
									}
									v383 -= v383[1];
								}
								if (*((unsigned __int16**)a5 + 33) == v383)
									return 0;
							}
							return v59;
						}
						v335 = v391;
					}
					v8 = &v335[v335[1]];
					*((_QWORD*)a5 + 31) = v469;
					v391 = v8;
					if (*v8 != 113)
						return 0i64;
					v7 = v394;
				}
			}
			v377 = *((_QWORD*)a5 + 2);
			v475 = 8i64 * v333;
			v476 = *(_DWORD*)(v475 + v377 + 4);
			v422 = *(_DWORD*)(v475 + v377);
			v378 = a5[50];
			v379 = (int*)(v377 + 4i64 * (unsigned int)(a5[6] - v333));
			v408 = *v379;
			v471 = *((_QWORD*)a5 + 31);
			*v379 = ((__int64)v10 - *((_QWORD*)a5 + 19)) >> 1;
			do
			{
				if (v435 >= 0x82u)
					a5[52] = 2;
				v380 = sub_140911350(
					(_DWORD)v10,
					(unsigned int)v8 + 2 * byte_1409CFAA0[*v8],
					(_DWORD)a3,
					v394,
					(__int64)a5,
					(__int64)v438,
					a7 + 1);
				v72 = v380;
				if (v380 == -996)
					break;
				if (v380 == -992)
				{
					v381 = v391;
					v382 = &v391[v391[1]];
					if (*((_QWORD*)a5 + 21) >= (unsigned __int64)v382 || *v391 != 113 && *v382 != 113)
						return v72;
					v72 = 0;
				}
				else
				{
					if (v380)
						return v72;
					v381 = v391;
				}
				a5[50] = v378;
				v8 = &v381[v381[1]];
				*((_QWORD*)a5 + 31) = v471;
				v391 = v8;
			} while (*v8 == 113);
			*(_DWORD*)(v475 + *((_QWORD*)a5 + 2)) = v422;
			*(_DWORD*)(*((_QWORD*)a5 + 2) + v475 + 4) = v476;
			*(_DWORD*)(*((_QWORD*)a5 + 2) + 4i64 * (unsigned int)(a5[6] - v455)) = v408;
			return v72;
		case 0x80u:
		case 0x85u:
			v396 = 0;
			goto LABEL_192;
		case 0x81u:
		case 0x86u:
			v442 = v8[1];
			if (v8[2] != 112)
				goto LABEL_42;
			if (!qword_140C63530)
				goto LABEL_41;
			v482[0] = 2;
			v482[1] = v8[3];
			v483 = *((_QWORD*)a5 + 2);
			v484 = *((_QWORD*)a5 + 19);
			v485 = (__int64)(*((_QWORD*)a5 + 20) - *((_QWORD*)a5 + 19)) >> 1;
			v486 = ((__int64)a3 - *((_QWORD*)a5 + 19)) >> 1;
			v487 = ((__int64)v10 - *((_QWORD*)a5 + 19)) >> 1;
			v491 = v8[4];
			v492 = v8[5];
			v488 = v394 / 2;
			v489 = a5[50];
			v490 = *((_QWORD*)a5 + 30);
			v493 = *((_QWORD*)a5 + 32);
			result = qword_140C63530(v482);
			if ((int)result > 0)
				return 0i64;
			if ((int)result < 0)
				return result;
			v8 = v391;
			v13 = 0;
		LABEL_41:
			v8 += 4;
			v391 = v8;
		LABEL_42:
			v23 = v8[2];
			if ((unsigned int)(v23 - 137) <= 1)
			{
				v34 = *((_QWORD*)a5 + 29);
				if (!v34)
				{
					v8 += v8[1];
					goto LABEL_75;
				}
				v35 = v8[3];
				if (v35 != 0xFFFF && v35 != *(_DWORD*)(v34 + 8))
				{
					if (v23 == 138)
					{
						v36 = a5[10];
						v37 = 0;
						v38 = (unsigned __int16*)*((_QWORD*)a5 + 6);
						v399 = 0;
						if (v36 > 0)
						{
							do
							{
								if (*v38 == v35)
									break;
								++v37;
								v38 += a5[11];
							} while (v37 < v36);
							v399 = v37;
						}
						if (v37 < v36)
						{
							v39 = v38;
							if ((unsigned __int64)v38 > *((_QWORD*)a5 + 6))
							{
								v40 = (__int64)(v38 + 1);
								do
								{
									v460 = &v39[-a5[11]];
									if ((unsigned int)sub_1409198E0(v40, v460 + 1))
										break;
									v39 = v460;
									v431 = *v460 == *(_DWORD*)(*((_QWORD*)a5 + 29) + 8i64);
									if (*v460 == *(_DWORD*)(*((_QWORD*)a5 + 29) + 8i64))
									{
									LABEL_102:
										v13 = v431;
										v8 = v391;
									LABEL_73:
										v33 = 2;
									LABEL_74:
										v8 += v33;
										if (v13)
											goto LABEL_1414;
									LABEL_75:
										v7 = v394;
										goto LABEL_76;
									}
									v40 = (__int64)(v38 + 1);
								} while ((unsigned __int64)v460 > *((_QWORD*)a5 + 6));
								v13 = 0;
								v37 = v399;
							}
							v400 = v37 + 1;
							if (v37 + 1 < a5[10])
							{
								v41 = (__int64)(v38 + 1);
								v461 = v38 + 1;
								do
								{
									v38 += a5[11];
									if ((unsigned int)sub_1409198E0(v41, v38 + 1))
										break;
									v431 = *v38 == *(_DWORD*)(*((_QWORD*)a5 + 29) + 8i64);
									if (*v38 == *(_DWORD*)(*((_QWORD*)a5 + 29) + 8i64))
										goto LABEL_102;
									v41 = (__int64)v461;
									++v400;
								} while (v400 < a5[10]);
							LABEL_99:
								v13 = 0;
							}
						}
					LABEL_100:
						v8 = v391;
					}
				LABEL_101:
					v33 = v8[1];
					goto LABEL_74;
				}
			LABEL_72:
				v13 = 1;
				goto LABEL_73;
			}
			if ((unsigned int)(v23 - 135) <= 1)
			{
				v24 = 2 * v8[3];
				if (v24 >= v394 || *(int*)(*((_QWORD*)a5 + 2) + 4i64 * v24) < 0)
				{
					if (v23 == 136)
					{
						v25 = a5[10];
						v26 = 0;
						v27 = v24 >> 1;
						v397 = 0;
						v28 = (unsigned __int16*)*((_QWORD*)a5 + 6);
						if (v25 > 0)
						{
							do
							{
								if (*v28 == v27)
									break;
								++v26;
								v28 += a5[11];
							} while (v26 < v25);
							v397 = v26;
						}
						if (v26 < v25)
						{
							v29 = v28;
							if ((unsigned __int64)v28 > *((_QWORD*)a5 + 6))
							{
								do
								{
									v458 = &v29[-a5[11]];
									if ((unsigned int)sub_1409198E0((__int64)(v28 + 1), v458 + 1))
										break;
									v29 = v458;
									v30 = 2 * *v458;
									if (v30 < v394 && *(int*)(*((_QWORD*)a5 + 2) + 4i64 * v30) >= 0)
									{
									LABEL_71:
										v8 = v391;
										goto LABEL_72;
									}
								} while ((unsigned __int64)v458 > *((_QWORD*)a5 + 6));
								v26 = v397;
								v13 = 0;
							}
							v398 = v26 + 1;
							if (v26 + 1 < a5[10])
							{
								v31 = (__int64)(v28 + 1);
								for (kk = v28 + 1; ; v31 = (__int64)kk)
								{
									v28 += a5[11];
									if ((unsigned int)sub_1409198E0(v31, v28 + 1))
										break;
									v32 = 2 * *v28;
									if (v32 < v394 && *(int*)(*((_QWORD*)a5 + 2) + 4i64 * v32) >= 0)
										goto LABEL_71;
									if (++v398 >= a5[10])
										goto LABEL_99;
								}
								goto LABEL_99;
							}
						}
						goto LABEL_100;
					}
					goto LABEL_101;
				}
				goto LABEL_72;
			}
			v107 = v23 == 139;
			v7 = v394;
			if (v107)
			{
				v8 += v8[1];
			}
			else
			{
				a5[52] = 1;
				result = sub_140911350((_DWORD)v10, (int)v8 + 4, (_DWORD)a3, v394, (__int64)a5, 0i64, a7 + 1);
				if ((_DWORD)result == 1)
				{
					if (a5[49] > v394)
						v7 = a5[49];
					v394 = v7;
					v8 = &v391[v391[3] + 2];
					if (*v8 == 113)
					{
						do
						{
							v331 = v8[1];
							v107 = v8[v331] == 113;
							v8 += v331;
						} while (v107);
					}
					goto LABEL_1414;
				}
				if ((_DWORD)result && (_DWORD)result != -992)
					return result;
				v8 = &v391[v442];
			}
		LABEL_76:
			if (*v8 != 113)
			{
			LABEL_33:
				v8 += 2;
				v14 = 1;
				v13 = 0;
				v391 = v8;
				continue;
			}
		LABEL_1414:
			if (v435 == 134)
			{
				a5[52] = 2;
				return sub_140911350((_DWORD)v10, (int)v8 + 4, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
			}
			v8 += 2;
		LABEL_1435:
			v391 = v8;
			v395 = a5[25];
			v12 = *a5;
			if (*a5 >= (unsigned int)a5[1])
				goto LABEL_1909;
			v7 = v394;
			v9 = (__int64)v438;
			goto LABEL_7;
		case 0x8Cu:
			v62 = v8 + 1;
			result = sub_140911350((_DWORD)v10, (int)v8 + 2, (_DWORD)a3, v394, (__int64)a5, (__int64)v438, a7 + 1);
			if ((_DWORD)result)
				return result;
			do
			{
				v63 = v62[1];
				v107 = v62[v63] == 113;
				v62 += v63;
			} while (v107);
			v8 = v62 + 2;
			v13 = 0;
			v391 = v62 + 2;
			v14 = 1;
			goto LABEL_13;
		case 0x8Du:
			v391 = v8 + 1;
			v64 = v8 + 1;
			do
			{
				v65 = v64[1];
				v107 = v64[v65] == 113;
				v64 += v65;
			} while (v107);
			result = sub_140911350((_DWORD)v10, (int)v64 + 4, (_DWORD)a3, v7, (__int64)a5, (__int64)v438, a7 + 1);
			if (!(_DWORD)result)
				goto LABEL_186;
			return result;
		case 0x8Eu:
			v15 = v8[1];
			v391 = ++v8;
			v435 = v15;
			v396 = 1;
			if (v15 != 128 && v15 != 133)
				goto LABEL_213;
		LABEL_192:
			v68 = v8[2];
			v445 = v68;
			if (2 * v68 < a5[7])
			{
				v423 = 0;
				v472 = 8i64 * v68;
				v463 = ((__int64)v8 - *((_QWORD*)a5 + 18)) >> 1;
				v69 = *((_QWORD*)a5 + 2);
				v440 = *(_DWORD*)(v472 + v69 + 4);
				v432 = *(_DWORD*)(v472 + v69);
				v411 = *(_DWORD*)(v69 + 4i64 * (unsigned int)(a5[6] - v68));
				while (1)
				{
					v70 = a5[50];
					while (1)
					{
						*(_DWORD*)(*((_QWORD*)a5 + 2) + 4i64 * (unsigned int)(a5[6] - v68)) = ((__int64)v10
							- *((_QWORD*)a5 + 19)) >> 1;
						if (v435 >= 0x82u)
							a5[52] = 2;
						v71 = sub_140911350(
							(_DWORD)v10,
							(unsigned int)v8 + 2 * byte_1409CFAA0[*v8],
							(_DWORD)a3,
							v394,
							(__int64)a5,
							(__int64)v438,
							a7 + 1);
						v72 = v71;
						if (v71 == -997)
							break;
						if (v71 == -992)
						{
							v73 = v391;
							v74 = &v391[v391[1]];
							if (*((_QWORD*)a5 + 21) >= (unsigned __int64)v74 || *v391 != 113 && *v74 != 113)
								return v72;
						}
						else
						{
							if (v71)
								return v72;
							v73 = v391;
						}
						v68 = v445;
						a5[50] = v70;
						v75 = v73[1];
						v107 = v73[v75] == 113;
						v8 = &v73[v75];
						v391 = v8;
						if (!v107)
						{
							if (!v423)
							{
								*(_DWORD*)(v472 + *((_QWORD*)a5 + 2)) = v432;
								*(_DWORD*)(*((_QWORD*)a5 + 2) + v472 + 4) = v440;
								*(_DWORD*)(*((_QWORD*)a5 + 2) + 4i64 * (unsigned int)(a5[6] - v445)) = v411;
							}
							if (!v396 && !v423)
								return 0i64;
							goto LABEL_211;
						}
					}
					v10 = (unsigned __int16*)*((_QWORD*)a5 + 22);
					v68 = v445;
					v394 = a5[49];
					v8 = (unsigned __int16*)(*((_QWORD*)a5 + 18) + 2i64 * (int)v463);
					v423 = 1;
					v391 = v8;
				}
			}
		LABEL_212:
			v396 = 0;
		LABEL_213:
			v446 = 0;
			v76 = ((__int64)v8 - *((_QWORD*)a5 + 18)) >> 1;
			while (1)
			{
				while (1)
				{
					if (v15 >= 0x82u)
						a5[52] = 2;
					v77 = sub_140911350(
						(_DWORD)v10,
						(unsigned int)v8 + 2 * byte_1409CFAA0[*v8],
						(_DWORD)a3,
						v394,
						(__int64)a5,
						(__int64)v438,
						a7 + 1);
					v72 = v77;
					if (v77 != -997)
						break;
					v10 = (unsigned __int16*)*((_QWORD*)a5 + 22);
					v15 = v435;
					v394 = a5[49];
					v8 = (unsigned __int16*)(*((_QWORD*)a5 + 18) + 2i64 * (int)v76);
					v446 = 1;
					v391 = v8;
				}
				if (v77 == -992)
				{
					v78 = v391;
					v79 = &v391[v391[1]];
					if (*((_QWORD*)a5 + 21) >= (unsigned __int64)v79 || *v391 != 113 && *v79 != 113)
						return v72;
				}
				else
				{
					if (v77)
						return v72;
					v78 = v391;
				}
				v80 = v78[1];
				v15 = v435;
				v107 = v78[v80] == 113;
				v8 = &v78[v80];
				v391 = v8;
				if (!v107)
				{
					if (!v446)
					{
						if (!v396)
							return 0i64;
						v8 += 2;
						v14 = 1;
						v13 = 0;
						v391 = v8;
						goto LABEL_13;
					}
				LABEL_211:
					v8 += 2;
					v13 = 0;
					v14 = 1;
					v391 = v8;
					goto LABEL_13;
				}
			}
		case 0x8Fu:
			*((_QWORD*)a5 + 32) = v8 + 2;
			*((_QWORD*)a5 + 31) = 0i64;
			LODWORD(result) = sub_140911350(
				(_DWORD)v10,
				(unsigned int)v8 + 2 * (v8[1] + byte_1409CFAA0[*v8]),
				(_DWORD)a3,
				v394,
				(__int64)a5,
				(__int64)v438,
				a7 + 1);
			v59 = result;
			if (((_DWORD)result == 1 || (_DWORD)result == -999) && !*((_QWORD*)a5 + 31))
			{
				result = (unsigned int)result;
				*((_QWORD*)a5 + 31) = v391 + 2;
				return result;
			}
			if ((_DWORD)result != -993 || (unsigned int)sub_1409198E0((__int64)(v391 + 2), *((unsigned __int16**)a5 + 21)))
				return v59;
			*((_QWORD*)a5 + 21) = v10;
			return 4294966302i64;
		case 0x90u:
			result = sub_140911350(
				(_DWORD)v10,
				(unsigned int)v8 + 2 * byte_1409CFAA0[*v8],
				(_DWORD)a3,
				v7,
				(__int64)a5,
				(__int64)v438,
				a7 + 1);
			goto LABEL_1878;
		case 0x91u:
			*((_QWORD*)a5 + 32) = v8 + 2;
			*((_QWORD*)a5 + 31) = 0i64;
			result = sub_140911350(
				(_DWORD)v10,
				(unsigned int)v8 + 2 * (v8[1] + byte_1409CFAA0[*v8]),
				(_DWORD)a3,
				v394,
				(__int64)a5,
				(__int64)v438,
				a7 + 1);
			if (((_DWORD)result == 1 || (_DWORD)result == -999) && !*((_QWORD*)a5 + 31))
				*((_QWORD*)a5 + 31) = v391 + 2;
		LABEL_1878:
			if (!(_DWORD)result || (_DWORD)result == -992)
				return 4294966301i64;
			return result;
		case 0x92u:
			result = sub_140911350(
				(_DWORD)v10,
				(unsigned int)v8 + 2 * byte_1409CFAA0[*v8],
				(_DWORD)a3,
				v7,
				(__int64)a5,
				(__int64)v438,
				a7 + 1);
			if (!(_DWORD)result || (_DWORD)result == -995 || (_DWORD)result == -992)
			{
				*((_QWORD*)a5 + 21) = v10;
				return 4294966302i64;
			}
			return result;
		case 0x93u:
			if (a5[34])
			{
				v8 += byte_1409CFAA0[v15] + v8[1];
				v391 = v8;
				continue;
			}
			result = sub_140911350(
				(_DWORD)v10,
				(unsigned int)v8 + 2 * (v8[1] + byte_1409CFAA0[*v8]),
				(_DWORD)a3,
				v394,
				(__int64)a5,
				(__int64)v438,
				a7 + 1);
			if (!(_DWORD)result || (_DWORD)result == -995 || (_DWORD)result == -992)
			{
				*((_QWORD*)a5 + 21) = v391 + 2;
				return 4294966303i64;
			}
			return result;
		case 0x94u:
			result = sub_140911350(
				(_DWORD)v10,
				(unsigned int)v8 + 2 * byte_1409CFAA0[*v8],
				(_DWORD)a3,
				v7,
				(__int64)a5,
				(__int64)v438,
				a7 + 1);
			if (!(_DWORD)result)
			{
				*((_QWORD*)a5 + 21) = v391;
				return 4294966304i64;
			}
			return result;
		case 0x95u:
			*((_QWORD*)a5 + 32) = v8 + 2;
			*((_QWORD*)a5 + 31) = 0i64;
			result = sub_140911350(
				(_DWORD)v10,
				(unsigned int)v8 + 2 * (v8[1] + byte_1409CFAA0[*v8]),
				(_DWORD)a3,
				v394,
				(__int64)a5,
				(__int64)v438,
				a7 + 1);
			if ((_DWORD)result == 1 || (_DWORD)result == -999)
			{
				v385 = v391;
				if (!*((_QWORD*)a5 + 31))
					*((_QWORD*)a5 + 31) = v391 + 2;
			}
			else
			{
				v385 = v391;
			}
			if (!(_DWORD)result)
			{
				*((_QWORD*)a5 + 21) = v385;
				return 4294966304i64;
			}
			return result;
		case 0x96u:
			result = sub_140911350(
				(_DWORD)v10,
				(unsigned int)v8 + 2 * byte_1409CFAA0[*v8],
				(_DWORD)a3,
				v7,
				(__int64)a5,
				(__int64)v438,
				a7 + 1);
			if (!(_DWORD)result || (unsigned int)(result + 995) <= 3)
				return 4294966298i64;
			return result;
		case 0x97u:
			return 0i64;
		case 0x9Au:
			v42 = v8[1];
			a5[50] = v42;
			v43 = 2 * v42;
			if (2 * v42 < a5[7])
			{
				v44 = 4i64 * v43;
				*(_DWORD*)(v44 + *((_QWORD*)a5 + 2)) = *(_DWORD*)(*((_QWORD*)a5 + 2) + 4i64 * (unsigned int)(a5[6] - v42));
				*(_DWORD*)(*((_QWORD*)a5 + 2) + v44 + 4) = ((__int64)v10 - *((_QWORD*)a5 + 19)) >> 1;
				v7 = v394;
				if (v394 <= v43)
				{
					v7 = v43 + 2;
					v394 = v43 + 2;
				}
				v8 += 2;
				v13 = 0;
				v391 = v8;
			}
			else
			{
				v8 += 2;
				a5[22] = 1;
				v13 = 0;
				v391 = v8;
			}
			continue;
		case 0x9Bu:
			v66 = v8 + 1;
			do
			{
				v67 = v66[1];
				v107 = v66[v67] == 113;
				v66 += v67;
			} while (v107);
			v8 = v66 + 2;
			v391 = v66 + 2;
			continue;
		default:
			return 4294967291i64;
		}
	}
}
// 140913F5D: conditional instruction was optimized away because edx.4<80u
// 14091470B: conditional instruction was optimized away because r10d.4>=1
// 140914888: conditional instruction was optimized away because r10d.4>=1
// 1409148F8: conditional instruction was optimized away because r10d.4>=1
// 1409149AB: conditional instruction was optimized away because r10d.4>=1
// 140914A7C: conditional instruction was optimized away because r10d.4>=1
// 140914B38: conditional instruction was optimized away because r10d.4>=1
// 140914BC8: conditional instruction was optimized away because r10d.4>=1
// 140914C56: conditional instruction was optimized away because r10d.4>=1
// 140914CCF: conditional instruction was optimized away because r10d.4>=1
// 140914D22: conditional instruction was optimized away because r10d.4>=1
// 140914D97: conditional instruction was optimized away because r10d.4>=1
// 140914DE6: conditional instruction was optimized away because r10d.4>=1
// 140914E5A: conditional instruction was optimized away because r10d.4>=1
// 140914EC4: conditional instruction was optimized away because r10d.4>=1
// 140914FC8: conditional instruction was optimized away because r10d.4>=1
// 14091503E: conditional instruction was optimized away because r10d.4>=1
// 1409150DC: conditional instruction was optimized away because r10d.4>=1
// 14091515C: conditional instruction was optimized away because r10d.4>=1
// 1409151BB: conditional instruction was optimized away because r10d.4>=1
// 140915218: conditional instruction was optimized away because r10d.4>=1
// 140915263: conditional instruction was optimized away because r10d.4>=1
// 1409152B2: conditional instruction was optimized away because r10d.4>=1
// 1409152FE: conditional instruction was optimized away because r10d.4>=1
// 140915352: conditional instruction was optimized away because r10d.4>=1
// 14091539E: conditional instruction was optimized away because r10d.4>=1
// 14091386A: conditional instruction was optimized away because edx.4 is in (1..2)
// 14091553E: conditional instruction was optimized away because r10d.4 is in (<10000u|>=FFFFFF80u)
// 1409CFAA0: using guessed type unsigned __int8 byte_1409CFAA0[93];
// 140C1B1E0: using guessed type __int64 (__fastcall *off_140C1B1E0)(_QWORD);
// 140C1B1E8: using guessed type __int64 (__fastcall *off_140C1B1E8)(_QWORD);
// 140C63530: using guessed type __int64 (__fastcall *qword_140C63530)(_QWORD);

