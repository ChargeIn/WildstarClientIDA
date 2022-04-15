//----- (000000014000B690) ----------------------------------------------------
__int64 __fastcall sub_14000B690(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	int v3; // r13d
	int v4; // eax
	int v5; // edi
	_QWORD* v6; // rdi
	unsigned int v7; // r12d
	int v8; // ebx
	int v9; // r14d
	int v10; // ecx
	int v11; // ebx
	__int64 v12; // rax
	int v13; // ebx
	int* v14; // rax
	int* v15; // rax
	int v16; // eax
	int v17; // ecx
	int v18; // eax
	int v19; // ecx
	int v20; // eax
	int** v21; // rax
	__int64* v22; // rdi
	int v23; // ebx
	int v24; // r14d
	int v25; // ecx
	int v26; // r8d
	int* v27; // rcx
	int v28; // ebx
	int v29; // ebx
	int* v30; // rax
	__int64 v31; // rbx
	int* v32; // rax
	__int64 v33; // rbx
	int v34; // ebx
	int* v35; // rax
	int v36; // ebx
	int* v37; // rax
	int* v38; // rax
	__int64 v39; // rax
	int* v40; // rdx
	__int64 v41; // rcx
	int* v42; // rax
	int* v43; // rax
	__int64 v44; // rdx
	__int64 v45; // rcx
	__int64 v46; // r8
	__int64 v47; // r9
	int* v48; // rax
	int v49; // ebx
	int v50; // ebx
	int v51; // ebx
	int v52; // ebx
	int* v53; // rax
	__int64 v54; // rcx
	int v55; // ebx
	int v56; // ebx
	unsigned __int64 v57; // rbx
	int* v58; // rcx
	int v59; // eax
	int v60; // eax
	int v61; // ebx
	int v62; // ebx
	int v63; // ebx
	int* v64; // rax
	__int64 v65; // rax
	__int64 v66; // rcx
	unsigned int v67; // eax
	int* v68; // rax
	__int64 v69; // rax
	int v70; // ebx
	int* v71; // rax
	__int64 v72; // rax
	int v73; // ebx
	int* v74; // rax
	_QWORD* v75; // rax
	__int64 v76; // rbx
	int* v77; // rax
	u_short v78; // ax
	int v79; // ebx
	int v80; // ebx
	__int64 v81; // rax
	void(__fastcall * **v82)(_QWORD); // rax
	int v83; // ebx
	int v84; // ebx
	int v85; // ebx
	int v86; // ebx
	int* v87; // rax
	int v88; // ebx
	int v89; // ebx
	int v90; // ebx
	int v91; // ebx
	int v92; // ebx
	int v93; // ebx
	int v94; // ebx
	int v95; // ebx
	int v96; // ebx
	int v97; // ebx
	int v98; // ebx
	int v99; // ebx
	int* v100; // rax
	int* v101; // rbx
	void(__fastcall * *v102)(int*); // rax
	int v103; // ebx
	int v104; // ebx
	int v105; // ebx
	int* v106; // rax
	int* v107; // rax
	int* v108; // rax
	__int128* v109; // rax
	__int128 v110; // xmm1
	int v111; // eax
	int v112; // ebx
	int* v113; // rax
	__int128* v114; // rax
	__int128 v115; // xmm1
	int v116; // eax
	int v117; // ebx
	__int128* v118; // rax
	__int128 v119; // xmm1
	int v120; // eax
	int v121; // ebx
	__int128* v122; // rax
	__int128 v123; // xmm1
	int v124; // eax
	int v125; // ebx
	__int128* v126; // rax
	__int128 v127; // xmm1
	int v128; // eax
	int v129; // ebx
	int v130; // eax
	int v131; // eax
	__int128* v132; // rax
	__int128 v133; // xmm1
	int v134; // eax
	int v135; // ebx
	__int128* v136; // rax
	__int128 v137; // xmm1
	int v138; // eax
	int v139; // ebx
	__int128* v140; // rax
	__int128 v141; // xmm1
	int v142; // eax
	int v143; // ebx
	__int128* v144; // rax
	__int128 v145; // xmm1
	int v146; // eax
	int v147; // ebx
	__int128* v148; // rax
	__int128 v149; // xmm1
	int v150; // eax
	int v151; // ebx
	__int128* v152; // rax
	__int128 v153; // xmm1
	int v154; // eax
	int v155; // ebx
	__int128* v156; // rax
	__int128 v157; // xmm1
	int v158; // eax
	int v159; // ebx
	int* v160; // rax
	__int64 v161; // rax
	__int128* v162; // rax
	__int128 v163; // xmm1
	int v164; // eax
	int v165; // ebx
	__int128* v166; // rax
	__int128 v167; // xmm1
	int v168; // eax
	int v169; // ebx
	__int64 result; // rax
	int v171; // ecx
	__int64(__fastcall * *v172)(); // [rsp+30h] [rbp-D0h] BYREF
	__int64 v173; // [rsp+38h] [rbp-C8h]
	LPVOID v174; // [rsp+40h] [rbp-C0h]
	__int64(__fastcall * *v175)(); // [rsp+48h] [rbp-B8h] BYREF
	__int64 v176; // [rsp+50h] [rbp-B0h]
	LPVOID v177; // [rsp+58h] [rbp-A8h]
	__int64(__fastcall * *v178)(); // [rsp+60h] [rbp-A0h] BYREF
	__int128 v179; // [rsp+68h] [rbp-98h]
	__int64(__fastcall * *v180)(); // [rsp+78h] [rbp-88h] BYREF
	__int64 v181; // [rsp+80h] [rbp-80h]
	LPVOID v182; // [rsp+88h] [rbp-78h]
	__int64(__fastcall * *v183)(); // [rsp+90h] [rbp-70h] BYREF
	__int128 v184; // [rsp+98h] [rbp-68h]
	__int64(__fastcall * *v185)(); // [rsp+A8h] [rbp-58h] BYREF
	__int64 v186; // [rsp+B0h] [rbp-50h]
	LPVOID v187; // [rsp+B8h] [rbp-48h]
	__int64(__fastcall * *v188)(); // [rsp+C0h] [rbp-40h] BYREF
	__int64 v189; // [rsp+C8h] [rbp-38h]
	LPVOID Value; // [rsp+D0h] [rbp-30h]
	__int64(__fastcall * *v191)(); // [rsp+D8h] [rbp-28h] BYREF
	__int64 v192; // [rsp+E0h] [rbp-20h]
	LPVOID v193; // [rsp+E8h] [rbp-18h]
	__int64(__fastcall * *v194)(); // [rsp+F0h] [rbp-10h] BYREF
	__int64 v195; // [rsp+F8h] [rbp-8h]
	LPVOID v196; // [rsp+100h] [rbp+0h]
	__int64(__fastcall * *v197)(); // [rsp+108h] [rbp+8h] BYREF
	__int64 v198; // [rsp+110h] [rbp+10h]
	LPVOID v199; // [rsp+118h] [rbp+18h]
	__int64(__fastcall * *v200)(); // [rsp+120h] [rbp+20h] BYREF
	__int64 v201; // [rsp+128h] [rbp+28h]
	LPVOID v202; // [rsp+130h] [rbp+30h]
	__int64(__fastcall * *v203)(); // [rsp+138h] [rbp+38h] BYREF
	__int64 v204; // [rsp+140h] [rbp+40h]
	LPVOID v205; // [rsp+148h] [rbp+48h]
	__int64(__fastcall * *v206)(); // [rsp+150h] [rbp+50h] BYREF
	__int64 v207; // [rsp+158h] [rbp+58h]
	LPVOID v208; // [rsp+160h] [rbp+60h]
	__int64(__fastcall * *v209)(); // [rsp+168h] [rbp+68h] BYREF
	__int64 v210; // [rsp+170h] [rbp+70h]
	LPVOID v211; // [rsp+178h] [rbp+78h]
	__int64(__fastcall * *v212)(); // [rsp+180h] [rbp+80h] BYREF
	__int64 v213; // [rsp+188h] [rbp+88h]
	LPVOID v214; // [rsp+190h] [rbp+90h]
	__int64(__fastcall * *v215)(); // [rsp+198h] [rbp+98h] BYREF
	__int64 v216; // [rsp+1A0h] [rbp+A0h]
	LPVOID v217; // [rsp+1A8h] [rbp+A8h]
	__int64(__fastcall * *v218)(); // [rsp+1B0h] [rbp+B0h] BYREF
	__int64 v219; // [rsp+1B8h] [rbp+B8h]
	LPVOID v220; // [rsp+1C0h] [rbp+C0h]
	__int64(__fastcall * *v221)(); // [rsp+1C8h] [rbp+C8h] BYREF
	__int64 v222; // [rsp+1D0h] [rbp+D0h]
	LPVOID v223; // [rsp+1D8h] [rbp+D8h]
	__int64(__fastcall * *v224)(); // [rsp+1E0h] [rbp+E0h] BYREF
	__int64 v225; // [rsp+1E8h] [rbp+E8h]
	LPVOID v226; // [rsp+1F0h] [rbp+F0h]
	__int64(__fastcall * *v227)(); // [rsp+1F8h] [rbp+F8h] BYREF
	__int64 v228; // [rsp+200h] [rbp+100h]
	LPVOID v229; // [rsp+208h] [rbp+108h]
	__int64(__fastcall * *v230)(); // [rsp+210h] [rbp+110h] BYREF
	__int64 v231; // [rsp+218h] [rbp+118h]
	LPVOID v232; // [rsp+220h] [rbp+120h]
	__int64(__fastcall * *v233)(); // [rsp+228h] [rbp+128h] BYREF
	__int64 v234; // [rsp+230h] [rbp+130h]
	LPVOID v235; // [rsp+238h] [rbp+138h]
	__int64(__fastcall * *v236)(); // [rsp+240h] [rbp+140h] BYREF
	__int64 v237; // [rsp+248h] [rbp+148h]
	LPVOID v238; // [rsp+250h] [rbp+150h]
	__int64(__fastcall * *v239)(); // [rsp+258h] [rbp+158h] BYREF
	__int64 v240; // [rsp+260h] [rbp+160h]
	LPVOID v241; // [rsp+268h] [rbp+168h]
	__int64(__fastcall * *v242)(); // [rsp+270h] [rbp+170h] BYREF
	__int64 v243; // [rsp+278h] [rbp+178h]
	LPVOID v244; // [rsp+280h] [rbp+180h]
	__int64(__fastcall * *v245)(); // [rsp+288h] [rbp+188h] BYREF
	__int64 v246; // [rsp+290h] [rbp+190h]
	LPVOID v247; // [rsp+298h] [rbp+198h]
	__int64(__fastcall * *v248)(); // [rsp+2A0h] [rbp+1A0h] BYREF
	__int64 v249; // [rsp+2A8h] [rbp+1A8h]
	LPVOID v250; // [rsp+2B0h] [rbp+1B0h]
	__int64(__fastcall * *v251)(); // [rsp+2B8h] [rbp+1B8h] BYREF
	__int128 v252; // [rsp+2C0h] [rbp+1C0h]
	__int64(__fastcall * *v253)(); // [rsp+2D0h] [rbp+1D0h] BYREF
	__int128 v254; // [rsp+2D8h] [rbp+1D8h]
	__int64(__fastcall * *v255)(); // [rsp+2E8h] [rbp+1E8h] BYREF
	__int128 v256; // [rsp+2F0h] [rbp+1F0h]
	__int64(__fastcall * *v257)(); // [rsp+300h] [rbp+200h] BYREF
	__int64 v258; // [rsp+308h] [rbp+208h]
	LPVOID v259; // [rsp+310h] [rbp+210h]
	__int64(__fastcall * *v260)(); // [rsp+318h] [rbp+218h] BYREF
	__int128 v261; // [rsp+320h] [rbp+220h]
	__int64(__fastcall * *v262)(); // [rsp+330h] [rbp+230h] BYREF
	__int64 v263; // [rsp+338h] [rbp+238h]
	LPVOID v264; // [rsp+340h] [rbp+240h]
	__int64(__fastcall * *v265)(); // [rsp+348h] [rbp+248h] BYREF
	__int128 v266; // [rsp+350h] [rbp+250h]
	__int64(__fastcall * *v267)(); // [rsp+360h] [rbp+260h] BYREF
	__int64 v268; // [rsp+368h] [rbp+268h]
	LPVOID v269; // [rsp+370h] [rbp+270h]
	__int64(__fastcall * *v270)(); // [rsp+378h] [rbp+278h] BYREF
	__int128 v271; // [rsp+380h] [rbp+280h]
	__int64(__fastcall * *v272)(); // [rsp+390h] [rbp+290h] BYREF
	__int64 v273; // [rsp+398h] [rbp+298h]
	LPVOID v274; // [rsp+3A0h] [rbp+2A0h]
	__int64(__fastcall * *TlsValue)(); // [rsp+3A8h] [rbp+2A8h] BYREF
	__int128 v276; // [rsp+3B0h] [rbp+2B0h]
	__int64(__fastcall * *v277)(); // [rsp+3C0h] [rbp+2C0h] BYREF
	__int64 v278; // [rsp+3C8h] [rbp+2C8h]
	LPVOID v279; // [rsp+3D0h] [rbp+2D0h]
	__int64(__fastcall * *v280)(); // [rsp+3D8h] [rbp+2D8h] BYREF
	__int128 v281; // [rsp+3E0h] [rbp+2E0h]
	__int64(__fastcall * *v282)(); // [rsp+3F0h] [rbp+2F0h] BYREF
	__int64 v283; // [rsp+3F8h] [rbp+2F8h]
	LPVOID v284; // [rsp+400h] [rbp+300h]
	__int64(__fastcall * *v285)(); // [rsp+408h] [rbp+308h] BYREF
	__int128 v286; // [rsp+410h] [rbp+310h]
	__int64(__fastcall * *v287)(); // [rsp+420h] [rbp+320h] BYREF
	__int64 v288; // [rsp+428h] [rbp+328h]
	LPVOID v289; // [rsp+430h] [rbp+330h]
	__int64(__fastcall * *v290)(); // [rsp+438h] [rbp+338h] BYREF
	__int128 v291; // [rsp+440h] [rbp+340h]
	__int64(__fastcall * *v292)(); // [rsp+450h] [rbp+350h] BYREF
	__int64 v293; // [rsp+458h] [rbp+358h]
	LPVOID v294; // [rsp+460h] [rbp+360h]
	__int64(__fastcall * *v295)(); // [rsp+468h] [rbp+368h] BYREF
	__int128 v296; // [rsp+470h] [rbp+370h]
	__int64(__fastcall * *v297)(); // [rsp+480h] [rbp+380h] BYREF
	__int64 v298; // [rsp+488h] [rbp+388h]
	LPVOID v299; // [rsp+490h] [rbp+390h]
	__int64(__fastcall * *v300)(); // [rsp+498h] [rbp+398h] BYREF
	__int128 v301; // [rsp+4A0h] [rbp+3A0h]
	__int64(__fastcall * *v302)(); // [rsp+4B0h] [rbp+3B0h] BYREF
	__int64 v303; // [rsp+4B8h] [rbp+3B8h]
	LPVOID v304; // [rsp+4C0h] [rbp+3C0h]
	__int64(__fastcall * *v305)(); // [rsp+4C8h] [rbp+3C8h] BYREF
	__int128 v306; // [rsp+4D0h] [rbp+3D0h]
	__int64(__fastcall * *v307)(); // [rsp+4E0h] [rbp+3E0h] BYREF
	__int64 v308; // [rsp+4E8h] [rbp+3E8h]
	LPVOID v309; // [rsp+4F0h] [rbp+3F0h]
	__int64(__fastcall * *v310)(); // [rsp+4F8h] [rbp+3F8h] BYREF
	__int128 v311; // [rsp+500h] [rbp+400h]
	__int128 v312; // [rsp+510h] [rbp+410h] BYREF
	LPVOID v313[2]; // [rsp+520h] [rbp+420h]
	__int128 v314; // [rsp+530h] [rbp+430h] BYREF
	LPVOID v315[2]; // [rsp+540h] [rbp+440h]
	__int128 v316; // [rsp+550h] [rbp+450h] BYREF
	LPVOID v317[2]; // [rsp+560h] [rbp+460h]
	__int128 v318; // [rsp+570h] [rbp+470h] BYREF
	LPVOID v319[2]; // [rsp+580h] [rbp+480h]
	__int128 v320; // [rsp+590h] [rbp+490h] BYREF
	LPVOID v321[2]; // [rsp+5A0h] [rbp+4A0h]
	__int128 v322; // [rsp+5B0h] [rbp+4B0h] BYREF
	LPVOID v323[2]; // [rsp+5C0h] [rbp+4C0h]
	__int128 v324; // [rsp+5D0h] [rbp+4D0h] BYREF
	LPVOID v325[2]; // [rsp+5E0h] [rbp+4E0h]
	__int128 v326; // [rsp+5F0h] [rbp+4F0h] BYREF
	LPVOID v327[2]; // [rsp+600h] [rbp+500h]
	__int128 v328; // [rsp+610h] [rbp+510h] BYREF
	LPVOID v329[2]; // [rsp+620h] [rbp+520h]
	__int128 v330; // [rsp+630h] [rbp+530h] BYREF
	LPVOID v331[2]; // [rsp+640h] [rbp+540h]
	__int128 v332; // [rsp+650h] [rbp+550h] BYREF
	LPVOID v333[2]; // [rsp+660h] [rbp+560h]
	__int128 v334; // [rsp+670h] [rbp+570h] BYREF
	LPVOID v335[2]; // [rsp+680h] [rbp+580h]
	__int128 v336; // [rsp+690h] [rbp+590h] BYREF
	LPVOID v337[2]; // [rsp+6A0h] [rbp+5A0h]
	__int128 v338; // [rsp+6B0h] [rbp+5B0h] BYREF
	LPVOID v339[2]; // [rsp+6C0h] [rbp+5C0h]
	__int128 v340; // [rsp+6D0h] [rbp+5D0h] BYREF
	LPVOID v341[2]; // [rsp+6E0h] [rbp+5E0h]
	__int128 v342; // [rsp+6F0h] [rbp+5F0h] BYREF
	LPVOID v343[2]; // [rsp+700h] [rbp+600h]
	__int128 v344; // [rsp+710h] [rbp+610h] BYREF
	LPVOID v345[2]; // [rsp+720h] [rbp+620h]
	__int128 v346; // [rsp+730h] [rbp+630h] BYREF
	LPVOID v347[2]; // [rsp+740h] [rbp+640h]
	__int128 v348; // [rsp+750h] [rbp+650h] BYREF
	LPVOID v349[2]; // [rsp+760h] [rbp+660h]
	__int128 v350; // [rsp+770h] [rbp+670h] BYREF
	LPVOID v351[2]; // [rsp+780h] [rbp+680h]
	__int128 v352; // [rsp+790h] [rbp+690h] BYREF
	LPVOID v353[2]; // [rsp+7A0h] [rbp+6A0h]
	__int128 v354; // [rsp+7B0h] [rbp+6B0h] BYREF
	LPVOID v355[2]; // [rsp+7C0h] [rbp+6C0h]
	__int128 v356; // [rsp+7D0h] [rbp+6D0h] BYREF
	LPVOID v357[2]; // [rsp+7E0h] [rbp+6E0h]
	__int128 v358; // [rsp+7F0h] [rbp+6F0h] BYREF
	LPVOID v359[2]; // [rsp+800h] [rbp+700h]
	__int128 v360; // [rsp+810h] [rbp+710h] BYREF
	LPVOID v361[2]; // [rsp+820h] [rbp+720h]
	__int128 v362; // [rsp+830h] [rbp+730h] BYREF
	LPVOID v363[2]; // [rsp+840h] [rbp+740h]
	__int128 v364; // [rsp+850h] [rbp+750h] BYREF
	LPVOID v365[2]; // [rsp+860h] [rbp+760h]
	__int128 v366; // [rsp+870h] [rbp+770h] BYREF
	LPVOID v367[2]; // [rsp+880h] [rbp+780h]
	__int128 v368; // [rsp+890h] [rbp+790h] BYREF
	LPVOID v369[2]; // [rsp+8A0h] [rbp+7A0h]
	__int128 v370; // [rsp+8B0h] [rbp+7B0h] BYREF
	LPVOID v371[2]; // [rsp+8C0h] [rbp+7C0h]
	__int128 v372; // [rsp+8D0h] [rbp+7D0h] BYREF
	LPVOID v373[2]; // [rsp+8E0h] [rbp+7E0h]
	__int128 v374; // [rsp+8F0h] [rbp+7F0h] BYREF
	LPVOID v375[2]; // [rsp+900h] [rbp+800h]
	__int128 v376; // [rsp+910h] [rbp+810h] BYREF
	LPVOID v377[2]; // [rsp+920h] [rbp+820h]
	__int128 v378; // [rsp+930h] [rbp+830h] BYREF
	LPVOID v379[2]; // [rsp+940h] [rbp+840h]
	__int128 v380; // [rsp+950h] [rbp+850h] BYREF
	LPVOID v381[2]; // [rsp+960h] [rbp+860h]
	__int128 v382; // [rsp+970h] [rbp+870h] BYREF
	LPVOID v383[2]; // [rsp+980h] [rbp+880h]
	int v384; // [rsp+990h] [rbp+890h] BYREF
	int v385; // [rsp+994h] [rbp+894h]
	int v386; // [rsp+998h] [rbp+898h]
	int v387; // [rsp+99Ch] [rbp+89Ch]
	int v388; // [rsp+9A0h] [rbp+8A0h]
	int v389; // [rsp+9A4h] [rbp+8A4h]
	int v390; // [rsp+9A8h] [rbp+8A8h]
	int v391; // [rsp+9ACh] [rbp+8ACh]
	int v392; // [rsp+9B0h] [rbp+8B0h]
	int v393; // [rsp+9B4h] [rbp+8B4h]
	int v394; // [rsp+9B8h] [rbp+8B8h]
	int v395; // [rsp+9BCh] [rbp+8BCh]
	int v396; // [rsp+9C0h] [rbp+8C0h]
	__int64 v397; // [rsp+9C8h] [rbp+8C8h] BYREF
	__int64 v398; // [rsp+9D0h] [rbp+8D0h] BYREF
	__int64 v399; // [rsp+9D8h] [rbp+8D8h] BYREF
	__int64 v400; // [rsp+9E0h] [rbp+8E0h] BYREF
	__int64 v401; // [rsp+9E8h] [rbp+8E8h] BYREF
	__int64 v402; // [rsp+9F0h] [rbp+8F0h] BYREF
	__int64 v403; // [rsp+9F8h] [rbp+8F8h] BYREF
	__int64 v404; // [rsp+A00h] [rbp+900h] BYREF
	__int64 v405; // [rsp+A08h] [rbp+908h] BYREF
	__int64 v406; // [rsp+A10h] [rbp+910h] BYREF
	__int64 v407; // [rsp+A18h] [rbp+918h] BYREF
	__int64 v408; // [rsp+A20h] [rbp+920h] BYREF
	__int64 v409; // [rsp+A28h] [rbp+928h] BYREF
	__int64 v410; // [rsp+A30h] [rbp+930h] BYREF
	__int64 v411; // [rsp+A38h] [rbp+938h] BYREF
	__int64 v412; // [rsp+A40h] [rbp+940h] BYREF
	__int64 v413; // [rsp+A48h] [rbp+948h] BYREF
	__int64 v414; // [rsp+A50h] [rbp+950h] BYREF
	__int64 v415; // [rsp+A58h] [rbp+958h] BYREF
	__int64 v416; // [rsp+A60h] [rbp+960h] BYREF
	__int64 v417; // [rsp+A68h] [rbp+968h] BYREF
	__int64 v418; // [rsp+A70h] [rbp+970h] BYREF
	__int64 v419; // [rsp+A78h] [rbp+978h] BYREF
	__int64 v420; // [rsp+A80h] [rbp+980h] BYREF
	__int64 v421; // [rsp+A88h] [rbp+988h] BYREF
	__int64 v422; // [rsp+A90h] [rbp+990h] BYREF
	__int64 v423; // [rsp+A98h] [rbp+998h] BYREF
	__int64 v424; // [rsp+AA0h] [rbp+9A0h] BYREF
	__int64 v425; // [rsp+AA8h] [rbp+9A8h] BYREF
	__int64 v426; // [rsp+AB0h] [rbp+9B0h] BYREF
	__int64 v427; // [rsp+AB8h] [rbp+9B8h] BYREF
	__int64 v428; // [rsp+AC0h] [rbp+9C0h] BYREF
	__int64 v429; // [rsp+AC8h] [rbp+9C8h] BYREF
	__int64 v430; // [rsp+AD0h] [rbp+9D0h] BYREF
	__int64 v431; // [rsp+AD8h] [rbp+9D8h] BYREF
	__int64 v432; // [rsp+AE0h] [rbp+9E0h] BYREF
	__int64 v433; // [rsp+AE8h] [rbp+9E8h] BYREF
	__int64 v434; // [rsp+AF0h] [rbp+9F0h] BYREF
	__int64 v435; // [rsp+AF8h] [rbp+9F8h] BYREF
	__int64 v436; // [rsp+B00h] [rbp+A00h] BYREF
	__int64 v437; // [rsp+B08h] [rbp+A08h] BYREF
	__int64 v438; // [rsp+B10h] [rbp+A10h] BYREF
	__int64 v439; // [rsp+B18h] [rbp+A18h] BYREF
	__int64 v440; // [rsp+B20h] [rbp+A20h] BYREF
	__int64 v441; // [rsp+B28h] [rbp+A28h] BYREF
	__int64 v442; // [rsp+B30h] [rbp+A30h] BYREF
	__int64 v443; // [rsp+B38h] [rbp+A38h] BYREF
	__int64 v444; // [rsp+B40h] [rbp+A40h] BYREF
	__int64 v445; // [rsp+B48h] [rbp+A48h] BYREF
	__int64 v446; // [rsp+B50h] [rbp+A50h] BYREF
	__int64 v447; // [rsp+B58h] [rbp+A58h] BYREF
	__int64 v448; // [rsp+B60h] [rbp+A60h] BYREF
	char* v449; // [rsp+B68h] [rbp+A68h] BYREF
	int v450; // [rsp+B70h] [rbp+A70h]
	__int64 v451[4]; // [rsp+B80h] [rbp+A80h] BYREF
	__int64 v452[4]; // [rsp+BA0h] [rbp+AA0h] BYREF
	__int64 v453[4]; // [rsp+BC0h] [rbp+AC0h] BYREF
	__int64(__fastcall * *v454)(); // [rsp+BE0h] [rbp+AE0h] BYREF
	__int128 v455; // [rsp+BE8h] [rbp+AE8h]
	__int64 v456[4]; // [rsp+C00h] [rbp+B00h] BYREF
	__int64(__fastcall * *v457)(); // [rsp+C20h] [rbp+B20h] BYREF
	__int128 v458; // [rsp+C28h] [rbp+B28h]
	__int64 v459[4]; // [rsp+C40h] [rbp+B40h] BYREF
	__int64(__fastcall * *v460)(); // [rsp+C60h] [rbp+B60h] BYREF
	__int128 v461; // [rsp+C68h] [rbp+B68h]
	__int64 v462[4]; // [rsp+C80h] [rbp+B80h] BYREF
	__int64(__fastcall * *v463)(); // [rsp+CA0h] [rbp+BA0h] BYREF
	__int128 v464; // [rsp+CA8h] [rbp+BA8h]
	__int64 v465[4]; // [rsp+CC0h] [rbp+BC0h] BYREF
	__int64(__fastcall * *v466)(); // [rsp+CE0h] [rbp+BE0h] BYREF
	__int128 v467; // [rsp+CE8h] [rbp+BE8h]
	__int64 v468[4]; // [rsp+D00h] [rbp+C00h] BYREF
	__int64(__fastcall * *v469)(); // [rsp+D20h] [rbp+C20h] BYREF
	__int128 v470; // [rsp+D28h] [rbp+C28h]
	__int64 v471[4]; // [rsp+D40h] [rbp+C40h] BYREF
	__int64(__fastcall * *v472)(); // [rsp+D60h] [rbp+C60h] BYREF
	__int128 v473; // [rsp+D68h] [rbp+C68h]
	__int64 v474[4]; // [rsp+D80h] [rbp+C80h] BYREF
	__int64(__fastcall * *v475)(); // [rsp+DA0h] [rbp+CA0h] BYREF
	__int128 v476; // [rsp+DA8h] [rbp+CA8h]
	__int64 v477[4]; // [rsp+DC0h] [rbp+CC0h] BYREF
	__int64 v478[4]; // [rsp+DE0h] [rbp+CE0h] BYREF
	__int64 v479[4]; // [rsp+E00h] [rbp+D00h] BYREF
	__int64 v480[4]; // [rsp+E20h] [rbp+D20h] BYREF
	__int64 v481[4]; // [rsp+E40h] [rbp+D40h] BYREF
	__int64 v482[4]; // [rsp+E60h] [rbp+D60h] BYREF
	__int64 v483[4]; // [rsp+E80h] [rbp+D80h] BYREF
	__int64 v484[4]; // [rsp+EA0h] [rbp+DA0h] BYREF
	__int64 v485[4]; // [rsp+EC0h] [rbp+DC0h] BYREF
	__int64 v486[4]; // [rsp+EE0h] [rbp+DE0h] BYREF
	__int64(__fastcall * *v487)(); // [rsp+F00h] [rbp+E00h] BYREF
	__int128 v488; // [rsp+F08h] [rbp+E08h]
	__int64(__fastcall * *v489)(); // [rsp+F20h] [rbp+E20h] BYREF
	__int128 v490; // [rsp+F28h] [rbp+E28h]
	__int64(__fastcall * *v491)(); // [rsp+F40h] [rbp+E40h] BYREF
	__int128 v492; // [rsp+F48h] [rbp+E48h]
	__int64 v493[4]; // [rsp+F60h] [rbp+E60h] BYREF
	__int64(__fastcall * *v494)(); // [rsp+F80h] [rbp+E80h] BYREF
	__int128 v495; // [rsp+F88h] [rbp+E88h]
	__int64 v496[4]; // [rsp+FA0h] [rbp+EA0h] BYREF
	__int64(__fastcall * *v497)(); // [rsp+FC0h] [rbp+EC0h] BYREF
	__int128 v498; // [rsp+FC8h] [rbp+EC8h]
	__int64 v499[4]; // [rsp+FE0h] [rbp+EE0h] BYREF
	__int64 v500[4]; // [rsp+1000h] [rbp+F00h] BYREF
	__int64 v501[4]; // [rsp+1020h] [rbp+F20h] BYREF
	__int64 v502[4]; // [rsp+1040h] [rbp+F40h] BYREF
	__int64 v503[4]; // [rsp+1060h] [rbp+F60h] BYREF
	__int64 v504[4]; // [rsp+1080h] [rbp+F80h] BYREF
	__int64 v505[4]; // [rsp+10A0h] [rbp+FA0h] BYREF
	__int64(__fastcall * *v506)(); // [rsp+10C0h] [rbp+FC0h] BYREF
	__int128 v507; // [rsp+10C8h] [rbp+FC8h]
	__int64 v508[4]; // [rsp+10E0h] [rbp+FE0h] BYREF
	__int64 v509[4]; // [rsp+1100h] [rbp+1000h] BYREF
	__int64 v510[4]; // [rsp+1120h] [rbp+1020h] BYREF
	__int64(__fastcall * *v511)(); // [rsp+1140h] [rbp+1040h] BYREF
	__int128 v512; // [rsp+1148h] [rbp+1048h]
	__int64 v513[4]; // [rsp+1160h] [rbp+1060h] BYREF
	__int64 v514[4]; // [rsp+1180h] [rbp+1080h] BYREF
	__int64 v515[4]; // [rsp+11A0h] [rbp+10A0h] BYREF
	__int64(__fastcall * *v516)(); // [rsp+11C0h] [rbp+10C0h] BYREF
	__int128 v517; // [rsp+11C8h] [rbp+10C8h]
	__int64 v518[4]; // [rsp+11E0h] [rbp+10E0h] BYREF
	int* v519; // [rsp+1200h] [rbp+1100h] BYREF
	__int128 v520[2]; // [rsp+1210h] [rbp+1110h] BYREF
	__int128 v521[2]; // [rsp+1230h] [rbp+1130h] BYREF
	__int128 v522[2]; // [rsp+1250h] [rbp+1150h] BYREF
	__int128 v523[2]; // [rsp+1270h] [rbp+1170h] BYREF
	__int128 v524[2]; // [rsp+1290h] [rbp+1190h] BYREF
	__int128 v525[2]; // [rsp+12B0h] [rbp+11B0h] BYREF
	__int128 v526[2]; // [rsp+12D0h] [rbp+11D0h] BYREF
	__int64 v527[4]; // [rsp+12F0h] [rbp+11F0h] BYREF
	__int128 v528[2]; // [rsp+1310h] [rbp+1210h] BYREF
	__int128 v529[2]; // [rsp+1330h] [rbp+1230h] BYREF
	__int128 v530[2]; // [rsp+1350h] [rbp+1250h] BYREF
	__int64 v531[4]; // [rsp+1370h] [rbp+1270h] BYREF
	__int128 v532[2]; // [rsp+1390h] [rbp+1290h] BYREF
	__int128 v533[2]; // [rsp+13B0h] [rbp+12B0h] BYREF
	__int128 v534[2]; // [rsp+13D0h] [rbp+12D0h] BYREF
	__int64 v535[4]; // [rsp+13F0h] [rbp+12F0h] BYREF
	__int128 v536[2]; // [rsp+1410h] [rbp+1310h] BYREF
	__int128 v537[2]; // [rsp+1430h] [rbp+1330h] BYREF
	__int128 v538[2]; // [rsp+1450h] [rbp+1350h] BYREF
	__int64 v539[4]; // [rsp+1470h] [rbp+1370h] BYREF
	__int128 v540[2]; // [rsp+1490h] [rbp+1390h] BYREF
	__int128 v541[2]; // [rsp+14B0h] [rbp+13B0h] BYREF
	__int128 v542[2]; // [rsp+14D0h] [rbp+13D0h] BYREF
	__int64 v543[4]; // [rsp+14F0h] [rbp+13F0h] BYREF
	__int128 v544[2]; // [rsp+1510h] [rbp+1410h] BYREF
	__int128 v545[2]; // [rsp+1530h] [rbp+1430h] BYREF
	__int128 v546[2]; // [rsp+1550h] [rbp+1450h] BYREF
	__int64 v547[4]; // [rsp+1570h] [rbp+1470h] BYREF
	__int128 v548[2]; // [rsp+1590h] [rbp+1490h] BYREF
	__int128 v549[2]; // [rsp+15B0h] [rbp+14B0h] BYREF
	__int128 v550[2]; // [rsp+15D0h] [rbp+14D0h] BYREF
	__int64 v551[4]; // [rsp+15F0h] [rbp+14F0h] BYREF
	__int128 v552[2]; // [rsp+1610h] [rbp+1510h] BYREF
	__int128 v553[2]; // [rsp+1630h] [rbp+1530h] BYREF
	__int128 v554[2]; // [rsp+1650h] [rbp+1550h] BYREF
	__int64 v555[4]; // [rsp+1670h] [rbp+1570h] BYREF
	__int128 v556[2]; // [rsp+1690h] [rbp+1590h] BYREF
	__int128 v557[2]; // [rsp+16B0h] [rbp+15B0h] BYREF
	__int128 v558[2]; // [rsp+16D0h] [rbp+15D0h] BYREF
	__int64 v559[4]; // [rsp+16F0h] [rbp+15F0h] BYREF
	__int128 v560[2]; // [rsp+1710h] [rbp+1610h] BYREF
	__int128 v561[2]; // [rsp+1730h] [rbp+1630h] BYREF
	__int128 v562[2]; // [rsp+1750h] [rbp+1650h] BYREF
	__int64 v563[4]; // [rsp+1770h] [rbp+1670h] BYREF
	__int128 v564[2]; // [rsp+1790h] [rbp+1690h] BYREF
	__int128 v565[2]; // [rsp+17B0h] [rbp+16B0h] BYREF
	__int128 v566[2]; // [rsp+17D0h] [rbp+16D0h] BYREF
	__int64 v567[4]; // [rsp+17F0h] [rbp+16F0h] BYREF
	__int128 v568[2]; // [rsp+1810h] [rbp+1710h] BYREF
	__int128 v569[2]; // [rsp+1830h] [rbp+1730h] BYREF
	__int128 v570[2]; // [rsp+1850h] [rbp+1750h] BYREF
	__int64 v571[4]; // [rsp+1870h] [rbp+1770h] BYREF
	__int128 v572[2]; // [rsp+1890h] [rbp+1790h] BYREF
	__int128 v573[2]; // [rsp+18B0h] [rbp+17B0h] BYREF
	__int128 v574[2]; // [rsp+18D0h] [rbp+17D0h] BYREF
	__int64 v575[4]; // [rsp+18F0h] [rbp+17F0h] BYREF
	__int128 v576[2]; // [rsp+1910h] [rbp+1810h] BYREF
	__int128 v577[2]; // [rsp+1930h] [rbp+1830h] BYREF
	__int128 v578[2]; // [rsp+1950h] [rbp+1850h] BYREF
	__int64 v579[4]; // [rsp+1970h] [rbp+1870h] BYREF
	__int128 v580[2]; // [rsp+1990h] [rbp+1890h] BYREF
	__int128 v581[2]; // [rsp+19B0h] [rbp+18B0h] BYREF
	__int128 v582[2]; // [rsp+19D0h] [rbp+18D0h] BYREF
	__int128 v583[2]; // [rsp+19F0h] [rbp+18F0h] BYREF
	__int64 v584; // [rsp+1A10h] [rbp+1910h] BYREF
	__int64 v585; // [rsp+1A18h] [rbp+1918h]
	char v586[2]; // [rsp+1A30h] [rbp+1930h] BYREF
	u_short v587; // [rsp+1A32h] [rbp+1932h]
	char v588; // [rsp+1A40h] [rbp+1940h]
	__int128 v589; // [rsp+1A50h] [rbp+1950h]
	int* v590; // [rsp+1A60h] [rbp+1960h]
	char v591; // [rsp+1A68h] [rbp+1968h] BYREF
	__int16 v592; // [rsp+1A7Eh] [rbp+197Eh]

	v2 = qword_140C635F0;
	v3 = a2;
	if (qword_140C886B8)
	{
		v4 = *(_DWORD*)(qword_140C886B8 + 4);
		if (v4 != -1)
			*(_DWORD*)(qword_140C886B8 + 4) = v4 + 1;
	}
	if (*(int*)(v2 + 304) < 1 && (int)a2 >= 1)
	{
		*(_DWORD*)(v2 + 304) = 1;
		v5 = sub_140010820(v2);
		if (v5 < 0)
			goto LABEL_300;
		sub_14022DF60();
		v6 = *(_QWORD**)(v2 + 288);
		v7 = 0;
		v8 = 0;
		v9 = *(_DWORD*)(v2 + 296);
		if (v9 <= 0)
		{
		LABEL_12:
			TlsValue = &off_140B5E648;
			*(_QWORD*)&v276 = 0i64;
			*((_QWORD*)&v276 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v475 = TlsValue;
			v431 = 0x141CD90E0i64;
			v476 = v276;
			v11 = sub_140197770(22, &v431, &v475);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v276 + 1));
			if (v11)
				DebugBreak();
		}
		else
		{
			while (1)
			{
				v10 = *(unsigned __int16*)*v6;
				if ((((v10 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v10 - 150) <= 1)
					&& !(unsigned int)sub_14018E2C0(*v6 + 2i64, L"realmDataCenterId"))
				{
					break;
				}
				++v8;
				++v6;
				if (v8 >= v9)
					goto LABEL_12;
			}
			v7 = sub_1401A4720(v2 + 288, L"realmDataCenterId", 0);
		}
		v12 = sub_14022E1C0(v7);
		*(_QWORD*)(v2 + 5864) = v12;
		if (!v12)
		{
			v253 = &off_140B5E648;
			*(_QWORD*)&v254 = 0i64;
			*((_QWORD*)&v254 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v253);
			v516 = v253;
			v397 = 0x141CD9118i64;
			v517 = v254;
			v13 = sub_140197770(22, &v397, &v516);
			v253 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v254 + 1));
			if (v13)
				DebugBreak();
		}
		v14 = (int*)sub_140018870();
		sub_14001B5B0(v2, v14);
		v15 = (int*)sub_1400189E0();
		sub_14001B4E0(v2, v15);
		v16 = sub_1401A4720(qword_140C635F0 + 288, L"gmode", 2u);
		v17 = 0;
		if (v16 < 2)
			v17 = v16;
		*(_DWORD*)(v2 + 5896) = v17;
		v18 = sub_1401A4720(qword_140C635F0 + 288, L"amode", 2u);
		v19 = 0;
		if (v18 < 2)
			v19 = v18;
		*(_DWORD*)(v2 + 5900) = v19;
		v20 = sub_1401A4720(qword_140C635F0 + 288, L"ncProgramId", 0);
		if (!v20)
			v20 = *(_DWORD*)(*(_QWORD*)(v2 + 5864) + 64i64);
		*(_DWORD*)(v2 + 5904) = v20;
		v21 = sub_140018AA0(v2, &v519);
		sub_14001B410(v2, v21);
		sub_140010240(v2);
	}
	if (*(int*)(v2 + 304) < 2 && v3 >= 2)
	{
		*(_DWORD*)(v2 + 304) = 2;
		v22 = *(__int64**)(v2 + 288);
		v23 = 0;
		v24 = *(_DWORD*)(v2 + 296);
		if (v24 <= 0)
		{
		LABEL_31:
			v26 = 0;
		}
		else
		{
			while (1)
			{
				a2 = *v22;
				v25 = *(unsigned __int16*)*v22;
				if ((((v25 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v25 - 150) <= 1)
					&& !(unsigned int)sub_14018E2C0(a2 + 2, L"NoSound"))
				{
					break;
				}
				++v23;
				++v22;
				if (v23 >= v24)
					goto LABEL_31;
			}
			v26 = 1;
		}
		v5 = sub_140051530(*(_QWORD*)(v2 + 8), a2, v26);
		if (v5 < 0)
		{
			v188 = &off_140B5E648;
			v189 = 0i64;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v188);
			v478[0] = (__int64)v188;
			v478[1] = v189;
			*(_QWORD*)&v318 = &off_140B5E648;
			*((_QWORD*)&v318 + 1) = L"Result";
			v478[2] = (__int64)Value;
			v319[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v318);
			*(_QWORD*)&v318 = &off_140B5E640;
			LODWORD(v319[1]) = v5;
			v414 = 0x141CD9160i64;
			v556[0] = v318;
			v556[1] = *(_OWORD*)v319;
			v28 = sub_1401971E0(&dword_140C89FCC, 22, &v414, v556, v478);
			*(_QWORD*)&v318 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v319[0]);
			v188 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, Value);
			if (v28)
				DebugBreak();
			goto LABEL_300;
		}
		v5 = sub_140333960(v27, v2 + 256);
		if (v5 < 0)
		{
			v282 = &off_140B5E648;
			v283 = 0i64;
			v284 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v282);
			v500[0] = (__int64)v282;
			v500[1] = v283;
			*(_QWORD*)&v350 = &off_140B5E648;
			*((_QWORD*)&v350 + 1) = L"Result";
			v500[2] = (__int64)v284;
			v351[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v350);
			*(_QWORD*)&v350 = &off_140B5E640;
			LODWORD(v351[1]) = v5;
			v412 = 0x141CD9198i64;
			v582[0] = v350;
			v582[1] = *(_OWORD*)v351;
			v29 = sub_1401971E0(&dword_140C89FC8, 22, &v412, v582, v500);
			*(_QWORD*)&v350 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v351[0]);
			v282 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v284);
			if (v29)
				goto LABEL_295;
			goto LABEL_300;
		}
		v5 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65808 + 88i64))(qword_140C65808, v2 + 5936);
		if (v5 < 0)
			goto LABEL_300;
		v5 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65808 + 88i64))(qword_140C65808, v2 + 272);
		if (v5 < 0)
			goto LABEL_300;
		v5 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65808 + 88i64))(qword_140C65808, v2 + 280);
		if (v5 < 0)
			goto LABEL_300;
		sub_14006C290();
		sub_1400A8190();
		if (!qword_140C891F0)
		{
			v30 = sub_14018B280(96i64, 0);
			if (v30)
				qword_140C891F0 = sub_1401A47E0((__int64)v30);
			else
				qword_140C891F0 = 0i64;
		}
		v31 = qword_140C65670;
		v32 = sub_14018B280(464i64, 0);
		if (v32)
			v33 = sub_1402830D0((__int64)v32, v31);
		else
			v33 = 0i64;
		v5 = sub_140283670(v33);
		if (v5 < 0)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v33 + 8i64))(v33);
			v194 = &off_140B5E648;
			v195 = 0i64;
			v196 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v194);
			v480[0] = (__int64)v194;
			v480[1] = v195;
			*(_QWORD*)&v322 = &off_140B5E648;
			*((_QWORD*)&v322 + 1) = L"Result";
			v480[2] = (__int64)v196;
			v323[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v322);
			LODWORD(v323[1]) = v5;
			*(_QWORD*)&v322 = &off_140B5E640;
			v522[1] = *(_OWORD*)v323;
			v415 = 0x141CD91C8i64;
			v522[0] = v322;
			v34 = sub_1401971E0(&dword_140C89FC4, 22, &v415, v522, v480);
			*(_QWORD*)&v322 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v323[0]);
			v194 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v196);
			if (v34)
				DebugBreak();
			goto LABEL_300;
		}
		qword_140C65680 = v33;
		v35 = sub_14018B280(1112i64, 0);
		if (v35)
		{
			*(_QWORD*)v35 = 0i64;
			*((_QWORD*)v35 + 1) = 0i64;
			*((_QWORD*)v35 + 2) = 0i64;
		}
		else
		{
			v35 = 0i64;
		}
		*(_QWORD*)(v2 + 336) = v35;
		v5 = sub_140053410((__int64)v35);
		if (v5 < 0)
		{
			v257 = &off_140B5E648;
			v258 = 0i64;
			v259 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v257);
			v509[0] = (__int64)v257;
			v509[1] = v258;
			*(_QWORD*)&v368 = &off_140B5E648;
			*((_QWORD*)&v368 + 1) = L"Result";
			v509[2] = (__int64)v259;
			v369[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v368);
			*(_QWORD*)&v368 = &off_140B5E640;
			LODWORD(v369[1]) = v5;
			v447 = 0x141CD9200i64;
			v554[0] = v368;
			v554[1] = *(_OWORD*)v369;
			v36 = sub_1401971E0(&dword_140C89FC0, 22, &v447, v554, v509);
			*(_QWORD*)&v368 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v369[0]);
			v257 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v259);
			if (v36)
				goto LABEL_295;
			goto LABEL_300;
		}
		v37 = sub_14018B280(80i64, 0);
		if (v37)
		{
			*(_QWORD*)v37 = off_140B55048;
			v37[2] = 1;
			*(_QWORD*)v37 = off_140B55F20;
			*((_QWORD*)v37 + 9) = 0i64;
			*((_QWORD*)v37 + 2) = 0i64;
			*((_QWORD*)v37 + 3) = 0i64;
			*((_QWORD*)v37 + 8) = 0i64;
		}
		else
		{
			v37 = 0i64;
		}
		*(_QWORD*)(v2 + 5576) = v37;
		v38 = sub_14018B280(528i64, 0);
		if (v38)
			v39 = sub_140003970((__int64)v38);
		else
			v39 = 0i64;
		*(_QWORD*)(v2 + 5584) = v39;
		sub_140003BD0(v39);
		if (!qword_140C7F950)
		{
			v42 = sub_14018B280(96i64, 0);
			if (v42)
				qword_140C7F950 = (__int64)sub_140056080((HMODULE*)v42);
			else
				qword_140C7F950 = 0i64;
		}
		if (!qword_140C63658)
		{
			v43 = sub_14018B280(208i64, 0);
			if (v43)
				qword_140C63658 = sub_1400FCD00((__int64)v43);
			else
				qword_140C63658 = 0i64;
		}
		sub_1400FCDC0(v41, v40);
		sub_140010240(v2);
	}
	if (*(int*)(v2 + 304) >= 3 || v3 < 3)
		goto LABEL_165;
	*(_DWORD*)(v2 + 304) = 3;
	sub_14002CDB0();
	if (qword_140C63848)
	{
		v48 = (int*)qword_140C63848(off_140A6E378, 0i64, qword_140C63858);
	}
	else if (dword_140C645DC)
	{
		v48 = 0i64;
	}
	else if ((int)sub_14024D0A0() >= 0)
	{
		v48 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A00 + 32i64))(
			qword_140C63A00,
			0i64);
	}
	else
	{
		v48 = 0i64;
	}
	v5 = sub_140252320(v45, v44, v46, v47, v48);
	if (v5 < 0)
	{
		v200 = &off_140B5E648;
		v201 = 0i64;
		v202 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v200);
		v482[0] = (__int64)v200;
		v482[1] = v201;
		*(_QWORD*)&v326 = &off_140B5E648;
		*((_QWORD*)&v326 + 1) = L"Result";
		v482[2] = (__int64)v202;
		v327[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v326);
		*(_QWORD*)&v326 = &off_140B5E640;
		LODWORD(v327[1]) = v5;
		v417 = 0x141CD92F0i64;
		v524[0] = v326;
		v524[1] = *(_OWORD*)v327;
		v49 = sub_1401971E0(&dword_140C89FBC, 22, &v417, v524, v482);
		*(_QWORD*)&v326 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v327[0]);
		v200 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v202);
		if (v49)
			goto LABEL_295;
		goto LABEL_300;
	}
	v5 = sub_1402E9FE0();
	if (v5 < 0)
	{
		v297 = &off_140B5E648;
		v298 = 0i64;
		v299 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v297);
		v502[0] = (__int64)v297;
		v502[1] = v298;
		*(_QWORD*)&v356 = &off_140B5E648;
		*((_QWORD*)&v356 + 1) = L"Result";
		v502[2] = (__int64)v299;
		v357[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v356);
		*(_QWORD*)&v356 = &off_140B5E640;
		LODWORD(v357[1]) = v5;
		v433 = 0x141CD9338i64;
		v570[0] = v356;
		v570[1] = *(_OWORD*)v357;
		v50 = sub_1401971E0(&dword_140C89FB8, 22, &v433, v570, v502);
		*(_QWORD*)&v356 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v357[0]);
		v297 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v299);
		if (v50)
			goto LABEL_295;
		goto LABEL_300;
	}
	v5 = sub_14043F790();
	if (v5 < 0)
	{
		v206 = &off_140B5E648;
		v207 = 0i64;
		v208 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v206);
		v484[0] = (__int64)v206;
		v484[1] = v207;
		*(_QWORD*)&v330 = &off_140B5E648;
		*((_QWORD*)&v330 + 1) = L"Result";
		v484[2] = (__int64)v208;
		v331[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v330);
		*(_QWORD*)&v330 = &off_140B5E640;
		LODWORD(v331[1]) = v5;
		v419 = 0x141CD9400i64;
		v526[0] = v330;
		v526[1] = *(_OWORD*)v331;
		v51 = sub_1401971E0(&dword_140C89FB4, 22, &v419, v526, v484);
		*(_QWORD*)&v330 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v331[0]);
		v206 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v208);
		if (v51)
			goto LABEL_295;
		goto LABEL_300;
	}
	v5 = sub_1401DB210();
	if (v5 < 0)
	{
		v262 = &off_140B5E648;
		v263 = 0i64;
		v264 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v262);
		v514[0] = (__int64)v262;
		v514[1] = v263;
		*(_QWORD*)&v376 = &off_140B5E648;
		*((_QWORD*)&v376 + 1) = L"Result";
		v514[2] = (__int64)v264;
		v377[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v376);
		*(_QWORD*)&v376 = &off_140B5E640;
		LODWORD(v377[1]) = v5;
		v441 = 0x141CD9368i64;
		v520[0] = v376;
		v520[1] = *(_OWORD*)v377;
		v52 = sub_1401971E0(&dword_140C89FB0, 22, &v441, v520, v514);
		*(_QWORD*)&v376 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v377[0]);
		v262 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v264);
		if (v52)
			goto LABEL_295;
		goto LABEL_300;
	}
	if (!qword_140C63600)
	{
		v53 = sub_14018B280(96i64, 0);
		if (v53)
			qword_140C63600 = (__int64)sub_14001D320(v53);
		else
			qword_140C63600 = 0i64;
		sub_14001D450(v54);
	}
	v5 = sub_1402C7A70();
	if (v5 < 0)
	{
		v212 = &off_140B5E648;
		v213 = 0i64;
		v214 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v212);
		v452[0] = (__int64)v212;
		v452[1] = v213;
		*(_QWORD*)&v334 = &off_140B5E648;
		*((_QWORD*)&v334 + 1) = L"Result";
		v452[2] = (__int64)v214;
		v335[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v334);
		*(_QWORD*)&v334 = &off_140B5E640;
		LODWORD(v335[1]) = v5;
		v421 = 0x141CD9398i64;
		v528[0] = v334;
		v528[1] = *(_OWORD*)v335;
		v55 = sub_1401971E0(&dword_140C89FAC, 22, &v421, v528, v452);
		*(_QWORD*)&v334 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v335[0]);
		v212 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v214);
		if (v55)
			goto LABEL_295;
		goto LABEL_300;
	}
	v5 = sub_1402D9A20();
	if (v5 < 0)
	{
		v287 = &off_140B5E648;
		v288 = 0i64;
		v289 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v287);
		v453[0] = (__int64)v287;
		v453[1] = v288;
		*(_QWORD*)&v360 = &off_140B5E648;
		*((_QWORD*)&v360 + 1) = L"Result";
		v453[2] = (__int64)v289;
		v361[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v360);
		*(_QWORD*)&v360 = &off_140B5E640;
		LODWORD(v361[1]) = v5;
		v435 = 0x141CD9238i64;
		v578[0] = v360;
		v578[1] = *(_OWORD*)v361;
		v56 = sub_1401971E0(&dword_140C89FA8, 22, &v435, v578, v453);
		*(_QWORD*)&v360 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v361[0]);
		v287 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v289);
		if (v56)
			goto LABEL_295;
		goto LABEL_300;
	}
	v57 = 0i64;
	while (1)
	{
		v58 = *(int**)((char*)&off_140C56310 + v57);
		v384 = *v58;
		v385 = v58[1];
		v59 = v58[2];
		v385 = 0;
		v386 = v59;
		v387 = v58[3];
		v388 = v58[4];
		v389 = v58[5];
		v390 = v58[6];
		v391 = v58[7];
		v392 = v58[8];
		v393 = v58[9];
		v394 = v58[10];
		v395 = v58[11];
		v396 = v58[12];
		if (qword_140C65878)
		{
			v5 = -2147467259;
		LABEL_175:
			v236 = &off_140B5E648;
			v237 = 0i64;
			v238 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v236);
			v479[0] = (__int64)v236;
			v479[1] = v237;
			*(_QWORD*)&v320 = &off_140B5E648;
			*((_QWORD*)&v320 + 1) = L"Result";
			v479[2] = (__int64)v238;
			v321[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v320);
			*(_QWORD*)&v320 = &off_140B5E640;
			LODWORD(v321[1]) = v5;
			v411 = 0x141CD94E0i64;
			v538[0] = v320;
			v538[1] = *(_OWORD*)v321;
			v85 = sub_1401971E0(&dword_140C89FA4, 22, &v411, v538, v479);
			*(_QWORD*)&v320 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v321[0]);
			v236 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v238);
			if (!v85)
				goto LABEL_300;
			goto LABEL_295;
		}
		v60 = sub_14034CB80((__int64)&v384);
		v5 = v60;
		if (v60 != -1609302015)
			break;
		v57 += 8i64;
		if (v57 >= 0x20)
			goto LABEL_175;
	}
	if (v60 < 0)
		goto LABEL_175;
	v5 = sub_140444EB0();
	if (v5 < 0)
	{
		v218 = &off_140B5E648;
		v219 = 0i64;
		v220 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v218);
		v456[0] = (__int64)v218;
		v456[1] = v219;
		*(_QWORD*)&v338 = &off_140B5E648;
		*((_QWORD*)&v338 + 1) = L"Result";
		v456[2] = (__int64)v220;
		v339[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v338);
		*(_QWORD*)&v338 = &off_140B5E640;
		LODWORD(v339[1]) = v5;
		v423 = 0x141CD93C8i64;
		v530[0] = v338;
		v530[1] = *(_OWORD*)v339;
		v61 = sub_1401971E0(&dword_140C89FA0, 22, &v423, v530, v456);
		*(_QWORD*)&v338 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v339[0]);
		v218 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v220);
		if (!v61)
			goto LABEL_300;
		goto LABEL_295;
	}
	v5 = sub_1403E0B60(*(_DWORD*)(qword_140C7AAC0 + 8));
	if (v5 < 0)
	{
		v267 = &off_140B5E648;
		v268 = 0i64;
		v269 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v267);
		v459[0] = (__int64)v267;
		v459[1] = v268;
		*(_QWORD*)&v372 = &off_140B5E648;
		*((_QWORD*)&v372 + 1) = L"Result";
		v459[2] = (__int64)v269;
		v373[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v372);
		*(_QWORD*)&v372 = &off_140B5E640;
		LODWORD(v373[1]) = v5;
		v398 = 0x141CD9510i64;
		v558[0] = v372;
		v558[1] = *(_OWORD*)v373;
		v62 = sub_1401971E0(&dword_140C89F9C, 22, &v398, v558, v459);
		*(_QWORD*)&v372 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v373[0]);
		v267 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v269);
		if (!v62)
			goto LABEL_300;
		goto LABEL_295;
	}
	v5 = sub_1404497B0();
	if (v5 < 0)
	{
		v224 = &off_140B5E648;
		v225 = 0i64;
		v226 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v224);
		v462[0] = (__int64)v224;
		v462[1] = v225;
		*(_QWORD*)&v342 = &off_140B5E648;
		*((_QWORD*)&v342 + 1) = L"Result";
		v462[2] = (__int64)v226;
		v343[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v342);
		*(_QWORD*)&v342 = &off_140B5E640;
		LODWORD(v343[1]) = v5;
		v399 = 0x141CD9558i64;
		v532[0] = v342;
		v532[1] = *(_OWORD*)v343;
		v63 = sub_1401971E0(&dword_140C89F98, 22, &v399, v532, v462);
		*(_QWORD*)&v342 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v343[0]);
		v224 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v226);
		if (!v63)
			goto LABEL_300;
		goto LABEL_295;
	}
	v64 = sub_14018B280(2000i64, 0);
	if (v64)
		v65 = sub_1400E18A0((__int64)v64);
	else
		v65 = 0i64;
	v66 = qword_140C63628;
	*(_QWORD*)(v2 + 328) = v65;
	v67 = sub_1400518A0(v66, 45, 1, 0);
	sub_1400E1F40(*(_QWORD*)(v2 + 328), v67);
	v68 = sub_14018B280(152i64, 0);
	if (v68)
		v69 = sub_14002A220((__int64)v68);
	else
		v69 = 0i64;
	*(_QWORD*)(v2 + 5528) = v69;
	v5 = sub_14002A3D0(v69);
	if (v5 < 0)
	{
		v307 = &off_140B5E648;
		v308 = 0i64;
		v309 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v307);
		v465[0] = (__int64)v307;
		v465[1] = v308;
		*(_QWORD*)&v364 = &off_140B5E648;
		*((_QWORD*)&v364 + 1) = L"Result";
		v465[2] = (__int64)v309;
		v365[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v364);
		*(_QWORD*)&v364 = &off_140B5E640;
		LODWORD(v365[1]) = v5;
		v401 = 0x141CD9588i64;
		v572[0] = v364;
		v572[1] = *(_OWORD*)v365;
		v70 = sub_1401971E0(&dword_140C89F94, 22, &v401, v572, v465);
		*(_QWORD*)&v364 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v365[0]);
		v307 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v309);
		if (!v70)
			goto LABEL_300;
		goto LABEL_295;
	}
	v71 = sub_14018B280(144i64, 0);
	if (v71)
		v72 = sub_140042370((__int64)v71);
	else
		v72 = 0i64;
	*(_QWORD*)(v2 + 5536) = v72;
	v5 = sub_140042520(v72);
	if (v5 < 0)
	{
		v230 = &off_140B5E648;
		v231 = 0i64;
		v232 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v230);
		v468[0] = (__int64)v230;
		v468[1] = v231;
		*(_QWORD*)&v346 = &off_140B5E648;
		*((_QWORD*)&v346 + 1) = L"Result";
		v468[2] = (__int64)v232;
		v347[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v346);
		*(_QWORD*)&v346 = &off_140B5E640;
		LODWORD(v347[1]) = v5;
		v403 = 0x141CD95C8i64;
		v534[0] = v346;
		v534[1] = *(_OWORD*)v347;
		v73 = sub_1401971E0(&dword_140C89F90, 22, &v403, v534, v468);
		*(_QWORD*)&v346 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v347[0]);
		v230 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v232);
		if (!v73)
			goto LABEL_300;
		goto LABEL_295;
	}
	if (!qword_140C65908)
	{
		v74 = sub_14018B280(504i64, 0);
		if (v74)
			qword_140C65908 = sub_14044A710((__int64)v74);
		else
			qword_140C65908 = 0i64;
		sub_14044ACA0();
	}
	v75 = sub_14018F0E0(&v584, *(unsigned __int16**)(v2 + 5872));
	v588 = 0;
	v76 = (__int64)v75;
	v590 = 0i64;
	v589 = 0i64;
	v77 = sub_14018B280(8i64, 0);
	*(_QWORD*)&v589 = v77;
	*((_QWORD*)&v589 + 1) = v77;
	v590 = v77 + 2;
	if (v77)
		*(_BYTE*)v77 = 0;
	sub_140334F90((__int64)v586, v76, 0);
	if (v585)
		sub_14018B900(v585, 0);
	if (ntohs(v587))
	{
	LABEL_148:
		if (!v591)
			sub_140334D90((__int64)v586);
	}
	else
	{
		v78 = htons(0x19C8u);
		v591 = 0;
		v587 = v78;
		v592 = 0;
		sub_140334D90((__int64)v586);
		if (!v591)
		{
			sub_140334D90((__int64)v586);
			goto LABEL_148;
		}
	}
	v449 = &v591;
	v450 = ntohs(v587);
	v5 = sub_1400B0C70();
	if (v5 < 0 || (v5 = sub_1400B1060(*(_DWORD*)(v2 + 5904), v2 + 264, &v449, 1u, *(int**)(v2 + 5912)), v5 < 0))
	{
		v272 = &off_140B5E648;
		v273 = 0i64;
		v274 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v272);
		v477[0] = (__int64)v272;
		v477[1] = v273;
		*(_QWORD*)&v316 = &off_140B5E648;
		*((_QWORD*)&v316 + 1) = L"Result";
		v477[2] = (__int64)v274;
		v317[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v316);
		*(_QWORD*)&v316 = &off_140B5E640;
		LODWORD(v317[1]) = v5;
		v409 = 0x141CD9690i64;
		v583[0] = v316;
		v583[1] = *(_OWORD*)v317;
		v84 = sub_1401971E0(&dword_140C89F8C, 22, &v409, v583, v477);
		*(_QWORD*)&v316 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v317[0]);
		v272 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v274);
		if (v84)
			DebugBreak();
		if ((_QWORD)v589)
			sub_14018B900(v589, 0);
		goto LABEL_300;
	}
	if ((_QWORD)v589)
		sub_14018B900(v589, 0);
	v5 = sub_1404367E0();
	if (v5 < 0)
	{
		v172 = &off_140B5E648;
		v173 = 0i64;
		v174 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v172);
		v471[0] = (__int64)v172;
		v471[1] = v173;
		*(_QWORD*)&v380 = &off_140B5E648;
		*((_QWORD*)&v380 + 1) = L"Result";
		v471[2] = (__int64)v174;
		v381[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v380);
		*(_QWORD*)&v380 = &off_140B5E640;
		LODWORD(v381[1]) = v5;
		v405 = 0x141CD9648i64;
		v560[0] = v380;
		v560[1] = *(_OWORD*)v381;
		v79 = sub_1401971E0(&dword_140C89F88, 22, &v405, v560, v471);
		*(_QWORD*)&v380 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v381[0]);
		v172 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v174);
		if (v79)
			DebugBreak();
		goto LABEL_300;
	}
	v5 = sub_140451E20();
	if (v5 < 0)
	{
		v175 = &off_140B5E648;
		v176 = 0i64;
		v177 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v175);
		v474[0] = (__int64)v175;
		v474[1] = v176;
		*(_QWORD*)&v314 = &off_140B5E648;
		*((_QWORD*)&v314 + 1) = L"Result";
		v474[2] = (__int64)v177;
		v315[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v314);
		*(_QWORD*)&v314 = &off_140B5E640;
		LODWORD(v315[1]) = v5;
		v407 = 0x141CD96E8i64;
		v536[0] = v314;
		v536[1] = *(_OWORD*)v315;
		v80 = sub_1401971E0(&dword_140C89F84, 22, &v407, v536, v474);
		*(_QWORD*)&v314 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v315[0]);
		v175 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v177);
		if (v80)
			DebugBreak();
		goto LABEL_300;
	}
	sub_140010240(v2);
	if (qword_140C63630)
	{
		sub_1400550B0(qword_140C63630);
		if (SteamUserStats())
		{
			if (SteamUser())
			{
				v81 = SteamUser();
				if ((*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)v81 + 8i64))(v81))
				{
					v82 = (void(__fastcall***)(_QWORD))SteamUserStats();
					(**v82)(v82);
				}
			}
		}
	}
LABEL_165:
	if (*(int*)(v2 + 304) >= 4 || v3 < 4)
		goto LABEL_299;
	*(_DWORD*)(v2 + 304) = 4;
	v5 = sub_140454130();
	if (v5 >= 0)
	{
		v5 = sub_140482B70();
		if (v5 < 0)
		{
			v242 = &off_140B5E648;
			v243 = 0i64;
			v244 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v242);
			v483[0] = (__int64)v242;
			v483[1] = v243;
			*(_QWORD*)&v328 = &off_140B5E648;
			*((_QWORD*)&v328 + 1) = L"Result";
			v483[2] = (__int64)v244;
			v329[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v328);
			*(_QWORD*)&v328 = &off_140B5E640;
			LODWORD(v329[1]) = v5;
			v418 = 0x141CD9750i64;
			v540[0] = v328;
			v540[1] = *(_OWORD*)v329;
			v86 = sub_1401971E0(&dword_140C89F7C, 22, &v418, v540, v483);
			*(_QWORD*)&v328 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v329[0]);
			v242 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v244);
			if (!v86)
				goto LABEL_300;
		LABEL_295:
			DebugBreak();
			goto LABEL_300;
		}
		if (!qword_140C65920)
		{
			v87 = sub_14018B280(16i64, 0);
			if (v87)
			{
				*v87 = 0;
				qword_140C65920 = (__int64)v87;
				*((_QWORD*)v87 + 1) = 0i64;
			}
			else
			{
				qword_140C65920 = 0i64;
			}
		}
		v5 = sub_1404873E0();
		if (v5 < 0)
		{
			v277 = &off_140B5E648;
			v278 = 0i64;
			v279 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v277);
			v485[0] = (__int64)v277;
			v485[1] = v278;
			*(_QWORD*)&v332 = &off_140B5E648;
			*((_QWORD*)&v332 + 1) = L"Result";
			v485[2] = (__int64)v279;
			v333[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v332);
			*(_QWORD*)&v332 = &off_140B5E640;
			LODWORD(v333[1]) = v5;
			v420 = 0x141CD9800i64;
			v574[0] = v332;
			v574[1] = *(_OWORD*)v333;
			v88 = sub_1401971E0(&dword_140C89F78, 22, &v420, v574, v485);
			*(_QWORD*)&v332 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v333[0]);
			v277 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v279);
			if (!v88)
				goto LABEL_300;
			goto LABEL_295;
		}
		v5 = sub_140489910();
		if (v5 < 0)
		{
			v248 = &off_140B5E648;
			v249 = 0i64;
			v250 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v248);
			v451[0] = (__int64)v248;
			v451[1] = v249;
			*(_QWORD*)&v336 = &off_140B5E648;
			*((_QWORD*)&v336 + 1) = L"Result";
			v451[2] = (__int64)v250;
			v337[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v336);
			*(_QWORD*)&v336 = &off_140B5E640;
			LODWORD(v337[1]) = v5;
			v422 = 0x141CD9850i64;
			v542[0] = v336;
			v542[1] = *(_OWORD*)v337;
			v89 = sub_1401971E0(&dword_140C89F74, 22, &v422, v542, v451);
			*(_QWORD*)&v336 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v337[0]);
			v248 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v250);
			if (!v89)
				goto LABEL_300;
			goto LABEL_295;
		}
		v5 = sub_14048B8F0();
		if (v5 < 0)
		{
			v302 = &off_140B5E648;
			v303 = 0i64;
			v304 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v302);
			v493[0] = (__int64)v302;
			v493[1] = v303;
			*(_QWORD*)&v340 = &off_140B5E648;
			*((_QWORD*)&v340 + 1) = L"Result";
			v493[2] = (__int64)v304;
			v341[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v340);
			*(_QWORD*)&v340 = &off_140B5E640;
			LODWORD(v341[1]) = v5;
			v424 = 0x141CD98A0i64;
			v564[0] = v340;
			v564[1] = *(_OWORD*)v341;
			v90 = sub_1401971E0(&dword_140C89F70, 22, &v424, v564, v493);
			*(_QWORD*)&v340 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v341[0]);
			v302 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v304);
			if (!v90)
				goto LABEL_300;
			goto LABEL_295;
		}
		v5 = sub_14048BEF0();
		if (v5 < 0)
		{
			v180 = &off_140B5E648;
			v181 = 0i64;
			v182 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v180);
			v496[0] = (__int64)v180;
			v496[1] = v181;
			*(_QWORD*)&v344 = &off_140B5E648;
			*((_QWORD*)&v344 + 1) = L"Result";
			v496[2] = (__int64)v182;
			v345[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v344);
			*(_QWORD*)&v344 = &off_140B5E640;
			LODWORD(v345[1]) = v5;
			v426 = 0x141CD98D0i64;
			v544[0] = v344;
			v544[1] = *(_OWORD*)v345;
			v91 = sub_1401971E0(&dword_140C89F6C, 22, &v426, v544, v496);
			*(_QWORD*)&v344 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v345[0]);
			v180 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v182);
			if (v91)
				DebugBreak();
			goto LABEL_300;
		}
		v5 = sub_14048C540();
		if (v5 < 0)
		{
			v185 = &off_140B5E648;
			v186 = 0i64;
			v187 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v185);
			v499[0] = (__int64)v185;
			v499[1] = v186;
			*(_QWORD*)&v348 = &off_140B5E648;
			*((_QWORD*)&v348 + 1) = L"Result";
			v499[2] = (__int64)v187;
			v349[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v348);
			*(_QWORD*)&v348 = &off_140B5E640;
			LODWORD(v349[1]) = v5;
			v428 = 0x141CD97C8i64;
			v580[0] = v348;
			v580[1] = *(_OWORD*)v349;
			v92 = sub_1401971E0(&dword_140C89F68, 22, &v428, v580, v499);
			*(_QWORD*)&v348 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v349[0]);
			v185 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v187);
			if (v92)
				DebugBreak();
			goto LABEL_300;
		}
		v5 = sub_14048C810();
		if (v5 < 0)
		{
			v191 = &off_140B5E648;
			v192 = 0i64;
			v193 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v191);
			v501[0] = (__int64)v191;
			v501[1] = v192;
			*(_QWORD*)&v354 = &off_140B5E648;
			*((_QWORD*)&v354 + 1) = L"Result";
			v501[2] = (__int64)v193;
			v355[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v354);
			*(_QWORD*)&v354 = &off_140B5E640;
			LODWORD(v355[1]) = v5;
			v430 = 0x141CD9900i64;
			v546[0] = v354;
			v546[1] = *(_OWORD*)v355;
			v93 = sub_1401971E0(&dword_140C89F64, 22, &v430, v546, v501);
			*(_QWORD*)&v354 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v355[0]);
			v191 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v193);
			if (v93)
				DebugBreak();
			goto LABEL_300;
		}
		v5 = sub_140491F60();
		if (v5 < 0)
		{
			v197 = &off_140B5E648;
			v198 = 0i64;
			v199 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v197);
			v503[0] = (__int64)v197;
			v503[1] = v198;
			*(_QWORD*)&v358 = &off_140B5E648;
			*((_QWORD*)&v358 + 1) = L"Result";
			v503[2] = (__int64)v199;
			v359[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v358);
			*(_QWORD*)&v358 = &off_140B5E640;
			LODWORD(v359[1]) = v5;
			v432 = 0x141CD9950i64;
			v566[0] = v358;
			v566[1] = *(_OWORD*)v359;
			v94 = sub_1401971E0(&dword_140C89F60, 22, &v432, v566, v503);
			*(_QWORD*)&v358 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v359[0]);
			v197 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v199);
			if (!v94)
				goto LABEL_300;
			goto LABEL_295;
		}
		v5 = sub_140496660();
		if (v5 < 0)
		{
			v203 = &off_140B5E648;
			v204 = 0i64;
			v205 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v203);
			v505[0] = (__int64)v203;
			v505[1] = v204;
			*(_QWORD*)&v362 = &off_140B5E648;
			*((_QWORD*)&v362 + 1) = L"Result";
			v505[2] = (__int64)v205;
			v363[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v362);
			*(_QWORD*)&v362 = &off_140B5E640;
			LODWORD(v363[1]) = v5;
			v434 = 0x141CD9988i64;
			v548[0] = v362;
			v548[1] = *(_OWORD*)v363;
			v95 = sub_1401971E0(&dword_140C89F5C, 22, &v434, v548, v505);
			*(_QWORD*)&v362 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v363[0]);
			v203 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v205);
			if (!v95)
				goto LABEL_300;
			goto LABEL_295;
		}
		v5 = sub_140499570();
		if (v5 < 0)
		{
			v209 = &off_140B5E648;
			v210 = 0i64;
			v211 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v209);
			v508[0] = (__int64)v209;
			v508[1] = v210;
			*(_QWORD*)&v366 = &off_140B5E648;
			*((_QWORD*)&v366 + 1) = L"Result";
			v508[2] = (__int64)v211;
			v367[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v366);
			*(_QWORD*)&v366 = &off_140B5E640;
			LODWORD(v367[1]) = v5;
			v436 = 0x141CD99C0i64;
			v576[0] = v366;
			v576[1] = *(_OWORD*)v367;
			v96 = sub_1401971E0(&dword_140C89F58, 22, &v436, v576, v508);
			*(_QWORD*)&v366 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v367[0]);
			v209 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v211);
			if (!v96)
				goto LABEL_300;
			goto LABEL_295;
		}
		v5 = sub_14049BE30();
		if (v5 < 0)
		{
			v215 = &off_140B5E648;
			v216 = 0i64;
			v217 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v215);
			v510[0] = (__int64)v215;
			v510[1] = v216;
			*(_QWORD*)&v370 = &off_140B5E648;
			*((_QWORD*)&v370 + 1) = L"Result";
			v510[2] = (__int64)v217;
			v371[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v370);
			*(_QWORD*)&v370 = &off_140B5E640;
			LODWORD(v371[1]) = v5;
			v438 = 0x141CD9A00i64;
			v550[0] = v370;
			v550[1] = *(_OWORD*)v371;
			v97 = sub_1401971E0(&dword_140C89F54, 22, &v438, v550, v510);
			*(_QWORD*)&v370 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v371[0]);
			v215 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v217);
			if (!v97)
				goto LABEL_300;
			goto LABEL_295;
		}
		v5 = sub_1404A59A0();
		if (v5 < 0)
		{
			v221 = &off_140B5E648;
			v222 = 0i64;
			v223 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v221);
			v513[0] = (__int64)v221;
			v513[1] = v222;
			*(_QWORD*)&v374 = &off_140B5E648;
			*((_QWORD*)&v374 + 1) = L"Result";
			v513[2] = (__int64)v223;
			v375[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v374);
			*(_QWORD*)&v374 = &off_140B5E640;
			LODWORD(v375[1]) = v5;
			v440 = 0x141CD9A40i64;
			v568[0] = v374;
			v568[1] = *(_OWORD*)v375;
			v98 = sub_1401971E0(&dword_140C89F50, 22, &v440, v568, v513);
			*(_QWORD*)&v374 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v375[0]);
			v221 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v223);
			if (!v98)
				goto LABEL_300;
			goto LABEL_295;
		}
		v5 = sub_1404A69A0();
		if (v5 < 0)
		{
			v227 = &off_140B5E648;
			v228 = 0i64;
			v229 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v227);
			v515[0] = (__int64)v227;
			v515[1] = v228;
			*(_QWORD*)&v378 = &off_140B5E648;
			*((_QWORD*)&v378 + 1) = L"Result";
			v515[2] = (__int64)v229;
			v379[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v378);
			*(_QWORD*)&v378 = &off_140B5E640;
			LODWORD(v379[1]) = v5;
			v442 = 0x141CD9A70i64;
			v552[0] = v378;
			v552[1] = *(_OWORD*)v379;
			v99 = sub_1401971E0(&dword_140C89F4C, 22, &v442, v552, v515);
			*(_QWORD*)&v378 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v379[0]);
			v227 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v229);
			if (!v99)
				goto LABEL_300;
			goto LABEL_295;
		}
		if (!qword_140C659B8)
		{
			v100 = sub_14018B280(72i64, 0);
			v101 = v100;
			if (v100)
			{
				sub_1404AA930(v100);
				*(_QWORD*)v101 = off_140B68730;
			}
			else
			{
				v101 = 0i64;
			}
			v102 = *(void(__fastcall***)(int*))v101;
			qword_140C659B8 = (__int64)v101;
			(*v102)(v101);
		}
		v5 = sub_1404AAB00();
		if (v5 < 0)
		{
			v233 = &off_140B5E648;
			v234 = 0i64;
			v235 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v233);
			v518[0] = (__int64)v233;
			v518[1] = v234;
			*(_QWORD*)&v382 = &off_140B5E648;
			*((_QWORD*)&v382 + 1) = L"Result";
			v518[2] = (__int64)v235;
			v383[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v382);
			*(_QWORD*)&v382 = &off_140B5E640;
			LODWORD(v383[1]) = v5;
			v444 = 0x141CD9AD8i64;
			v581[0] = v382;
			v581[1] = *(_OWORD*)v383;
			v103 = sub_1401971E0(&dword_140C89F48, 22, &v444, v581, v518);
			*(_QWORD*)&v382 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v383[0]);
			v233 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v235);
			if (!v103)
				goto LABEL_300;
			goto LABEL_295;
		}
		v5 = sub_1404AAF00();
		if (v5 < 0)
		{
			v239 = &off_140B5E648;
			v240 = 0i64;
			v241 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v239);
			v486[0] = (__int64)v239;
			v486[1] = v240;
			*(_QWORD*)&v352 = &off_140B5E648;
			*((_QWORD*)&v352 + 1) = L"Result";
			v486[2] = (__int64)v241;
			v353[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v352);
			*(_QWORD*)&v352 = &off_140B5E640;
			LODWORD(v353[1]) = v5;
			v446 = 0x141CD9B10i64;
			v521[0] = v352;
			v521[1] = *(_OWORD*)v353;
			v104 = sub_1401971E0(&dword_140C89F44, 22, &v446, v521, v486);
			*(_QWORD*)&v352 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v353[0]);
			v239 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v241);
			if (!v104)
				goto LABEL_300;
			goto LABEL_295;
		}
		v5 = sub_1404ABBF0();
		if (v5 < 0)
		{
			v245 = &off_140B5E648;
			v246 = 0i64;
			v247 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v245);
			v504[0] = (__int64)v245;
			v504[1] = v246;
			*(_QWORD*)&v312 = &off_140B5E648;
			*((_QWORD*)&v312 + 1) = L"Result";
			v504[2] = (__int64)v247;
			v313[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v312);
			*(_QWORD*)&v312 = &off_140B5E640;
			LODWORD(v313[1]) = v5;
			v448 = 0x141CD9B58i64;
			v523[0] = v312;
			v523[1] = *(_OWORD*)v313;
			v105 = sub_1401971E0(&dword_140C89F40, 22, &v448, v523, v504);
			*(_QWORD*)&v312 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v313[0]);
			v245 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v247);
			if (!v105)
				goto LABEL_300;
			goto LABEL_295;
		}
		if (!qword_140C658D8)
		{
			v106 = sub_14018B280(104i64, 0);
			if (v106)
				qword_140C658D8 = (__int64)sub_140436FB0(v106);
			else
				qword_140C658D8 = 0i64;
		}
		if (!qword_140C659D8)
		{
			v107 = sub_14018B280(160i64, 0);
			if (v107)
				qword_140C659D8 = (__int64)sub_1404AF8C0(v107);
			else
				qword_140C659D8 = 0i64;
		}
		if (!qword_140C659E0)
		{
			v108 = sub_14018B280(32i64, 0);
			if (v108)
			{
				*((_QWORD*)v108 + 1) = 0i64;
				*((_QWORD*)v108 + 2) = 0i64;
				*((_QWORD*)v108 + 3) = 0i64;
				qword_140C659E0 = (__int64)v108;
			}
			else
			{
				qword_140C659E0 = 0i64;
			}
		}
		v5 = sub_1404B42D0();
		if (v5 < 0)
		{
			v251 = &off_140B5E648;
			*(_QWORD*)&v252 = 0i64;
			*((_QWORD*)&v252 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v251);
			v454 = v251;
			v455 = v252;
			v109 = (__int128*)sub_140190940(v527, v5);
			v525[0] = *v109;
			v110 = v109[1];
			v413 = 0x141CD9C40i64;
			v525[1] = v110;
			v111 = sub_1401971E0(&dword_140C89F3C, 22, &v413, v525, &v454);
			v527[0] = (__int64)&off_140B5E648;
			v112 = v111;
			TlsSetValue(dwTlsIndex, (LPVOID)v527[2]);
			v251 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v252 + 1));
			if (!v112)
				goto LABEL_300;
			goto LABEL_295;
		}
		if (!qword_140C659F0)
		{
			v113 = sub_14018B280(848i64, 0);
			if (v113)
				qword_140C659F0 = sub_1404B5300((__int64)v113);
			else
				qword_140C659F0 = 0i64;
		}
		v5 = sub_1404C8830();
		if (v5 < 0)
		{
			v255 = &off_140B5E648;
			*(_QWORD*)&v256 = 0i64;
			*((_QWORD*)&v256 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v255);
			v487 = v255;
			v488 = v256;
			v114 = (__int128*)sub_140190940(v531, v5);
			v529[0] = *v114;
			v115 = v114[1];
			v445 = 0x141CD9CB0i64;
			v529[1] = v115;
			v116 = sub_1401971E0(&dword_140C89F38, 22, &v445, v529, &v487);
			v531[0] = (__int64)&off_140B5E648;
			v117 = v116;
			TlsSetValue(dwTlsIndex, (LPVOID)v531[2]);
			v255 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v256 + 1));
			if (!v117)
				goto LABEL_300;
			goto LABEL_295;
		}
		v5 = sub_1404CBAF0();
		if (v5 < 0)
		{
			v260 = &off_140B5E648;
			*(_QWORD*)&v261 = 0i64;
			*((_QWORD*)&v261 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v260);
			v457 = v260;
			v458 = v261;
			v118 = (__int128*)sub_140190940(v535, v5);
			v533[0] = *v118;
			v119 = v118[1];
			v400 = 0x141CD9CE8i64;
			v533[1] = v119;
			v120 = sub_1401971E0(&dword_140C89F34, 22, &v400, v533, &v457);
			v535[0] = (__int64)&off_140B5E648;
			v121 = v120;
			TlsSetValue(dwTlsIndex, (LPVOID)v535[2]);
			v260 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v261 + 1));
			if (!v121)
				goto LABEL_300;
			goto LABEL_295;
		}
		v5 = sub_1404CC1F0();
		if (v5 < 0)
		{
			v265 = &off_140B5E648;
			*(_QWORD*)&v266 = 0i64;
			*((_QWORD*)&v266 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v265);
			v489 = v265;
			v490 = v266;
			v122 = (__int128*)sub_140190940(v539, v5);
			v537[0] = *v122;
			v123 = v122[1];
			v425 = 0x141CD9D30i64;
			v537[1] = v123;
			v124 = sub_1401971E0(&dword_140C89F30, 22, &v425, v537, &v489);
			v539[0] = (__int64)&off_140B5E648;
			v125 = v124;
			TlsSetValue(dwTlsIndex, (LPVOID)v539[2]);
			v265 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v266 + 1));
			if (!v125)
				goto LABEL_300;
			goto LABEL_295;
		}
		v5 = sub_1404CCAA0();
		if (v5 < 0)
		{
			v270 = &off_140B5E648;
			*(_QWORD*)&v271 = 0i64;
			*((_QWORD*)&v271 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v270);
			v460 = v270;
			v461 = v271;
			v126 = (__int128*)sub_140190940(v543, v5);
			v541[0] = *v126;
			v127 = v126[1];
			v402 = 0x141CD9D78i64;
			v541[1] = v127;
			v128 = sub_1401971E0(&dword_140C89F2C, 22, &v402, v541, &v460);
			v543[0] = (__int64)&off_140B5E648;
			v129 = v128;
			TlsSetValue(dwTlsIndex, (LPVOID)v543[2]);
			v270 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v271 + 1));
			if (!v129)
				goto LABEL_300;
			goto LABEL_295;
		}
		v5 = 0;
		v130 = sub_140619660();
		if (v130 < 0)
			v5 = v130;
		v131 = sub_1406197F0();
		if (v131 < 0)
			v5 = v131;
		if (v5 < 0)
		{
			v178 = &off_140B5E648;
			*(_QWORD*)&v179 = 0i64;
			*((_QWORD*)&v179 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v178);
			v491 = v178;
			v492 = v179;
			v132 = (__int128*)sub_140190940(v547, v5);
			v545[0] = *v132;
			v133 = v132[1];
			v437 = 0x141CD9DB0i64;
			v545[1] = v133;
			v134 = sub_1401971E0(&dword_140C89F28, 22, &v437, v545, &v491);
			v547[0] = (__int64)&off_140B5E648;
			v135 = v134;
			TlsSetValue(dwTlsIndex, (LPVOID)v547[2]);
			v178 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v179 + 1));
			if (v135)
				DebugBreak();
			goto LABEL_300;
		}
		v5 = sub_1404CE4E0();
		if (v5 < 0)
		{
			v280 = &off_140B5E648;
			*(_QWORD*)&v281 = 0i64;
			*((_QWORD*)&v281 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v280);
			v463 = v280;
			v464 = v281;
			v136 = (__int128*)sub_140190940(v551, v5);
			v549[0] = *v136;
			v137 = v136[1];
			v404 = 0x141CD9DF8i64;
			v549[1] = v137;
			v138 = sub_1401971E0(&dword_140C89F24, 22, &v404, v549, &v463);
			v551[0] = (__int64)&off_140B5E648;
			v139 = v138;
			TlsSetValue(dwTlsIndex, (LPVOID)v551[2]);
			v280 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v281 + 1));
			if (!v139)
				goto LABEL_300;
			goto LABEL_295;
		}
		v5 = sub_1404CEB40();
		if (v5 < 0)
		{
			v285 = &off_140B5E648;
			*(_QWORD*)&v286 = 0i64;
			*((_QWORD*)&v286 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v285);
			v511 = v285;
			v512 = v286;
			v140 = (__int128*)sub_140190940(v555, v5);
			v553[0] = *v140;
			v141 = v140[1];
			v427 = 0x141CD9E30i64;
			v553[1] = v141;
			v142 = sub_1401971E0(&dword_140C89F20, 22, &v427, v553, &v511);
			v555[0] = (__int64)&off_140B5E648;
			v143 = v142;
			TlsSetValue(dwTlsIndex, (LPVOID)v555[2]);
			v285 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v286 + 1));
			if (!v143)
				goto LABEL_300;
			goto LABEL_295;
		}
		v5 = sub_1404CF650();
		if (v5 < 0)
		{
			v290 = &off_140B5E648;
			*(_QWORD*)&v291 = 0i64;
			*((_QWORD*)&v291 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v290);
			v466 = v290;
			v467 = v291;
			v144 = (__int128*)sub_140190940(v559, v5);
			v557[0] = *v144;
			v145 = v144[1];
			v406 = 0x141CD9E70i64;
			v557[1] = v145;
			v146 = sub_1401971E0(&dword_140C89F1C, 22, &v406, v557, &v466);
			v559[0] = (__int64)&off_140B5E648;
			v147 = v146;
			TlsSetValue(dwTlsIndex, (LPVOID)v559[2]);
			v290 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v291 + 1));
			if (!v147)
				goto LABEL_300;
			goto LABEL_295;
		}
		v5 = sub_1404D0230();
		if (v5 < 0)
		{
			v295 = &off_140B5E648;
			*(_QWORD*)&v296 = 0i64;
			*((_QWORD*)&v296 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v295);
			v494 = v295;
			v495 = v296;
			v148 = (__int128*)sub_140190940(v563, v5);
			v561[0] = *v148;
			v149 = v148[1];
			v443 = 0x141CD9F00i64;
			v561[1] = v149;
			v150 = sub_1401971E0(&dword_140C89F18, 22, &v443, v561, &v494);
			v563[0] = (__int64)&off_140B5E648;
			v151 = v150;
			TlsSetValue(dwTlsIndex, (LPVOID)v563[2]);
			v295 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v296 + 1));
			if (!v151)
				goto LABEL_300;
			goto LABEL_295;
		}
		v5 = sub_1404D0FF0();
		if (v5 < 0)
		{
			v300 = &off_140B5E648;
			*(_QWORD*)&v301 = 0i64;
			*((_QWORD*)&v301 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v300);
			v469 = v300;
			v470 = v301;
			v152 = (__int128*)sub_140190940(v567, v5);
			v565[0] = *v152;
			v153 = v152[1];
			v408 = 0x141CD9F70i64;
			v565[1] = v153;
			v154 = sub_1401971E0(&dword_140C89F14, 22, &v408, v565, &v469);
			v567[0] = (__int64)&off_140B5E648;
			v155 = v154;
			TlsSetValue(dwTlsIndex, (LPVOID)v567[2]);
			v300 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v301 + 1));
			if (!v155)
				goto LABEL_300;
			goto LABEL_295;
		}
		v5 = sub_1404D38B0();
		if (v5 < 0)
		{
			v305 = &off_140B5E648;
			*(_QWORD*)&v306 = 0i64;
			*((_QWORD*)&v306 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v305);
			v506 = v305;
			v507 = v306;
			v156 = (__int128*)sub_140190940(v571, v5);
			v569[0] = *v156;
			v157 = v156[1];
			v429 = 0x141CD9FD0i64;
			v569[1] = v157;
			v158 = sub_1401971E0(&dword_140C89F10, 22, &v429, v569, &v506);
			v571[0] = (__int64)&off_140B5E648;
			v159 = v158;
			TlsSetValue(dwTlsIndex, (LPVOID)v571[2]);
			v305 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v306 + 1));
			if (!v159)
				goto LABEL_300;
			goto LABEL_295;
		}
		v160 = sub_14018B280(1008i64, 0);
		if (v160)
			v161 = sub_1404D56B0((__int64)v160);
		else
			v161 = 0i64;
		*(_QWORD*)(v2 + 5544) = v161;
		v5 = sub_1404D61B0(v161);
		if (v5 < 0)
		{
			v310 = &off_140B5E648;
			*(_QWORD*)&v311 = 0i64;
			*((_QWORD*)&v311 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v310);
			v472 = v310;
			v473 = v311;
			v162 = (__int128*)sub_140190940(v575, v5);
			v573[0] = *v162;
			v163 = v162[1];
			v410 = 0x141CD9EC8i64;
			v573[1] = v163;
			v164 = sub_1401971E0(&dword_140C89F0C, 22, &v410, v573, &v472);
			v575[0] = (__int64)&off_140B5E648;
			v165 = v164;
			TlsSetValue(dwTlsIndex, (LPVOID)v575[2]);
			v310 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v311 + 1));
			if (v165)
				goto LABEL_295;
			goto LABEL_300;
		}
		qword_140C65A48 = *(_QWORD*)(v2 + 5544);
		v5 = sub_1404D6C40();
		if (v5 < 0)
		{
			v183 = &off_140B5E648;
			*(_QWORD*)&v184 = 0i64;
			*((_QWORD*)&v184 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v183);
			v497 = v183;
			v498 = v184;
			v166 = (__int128*)sub_140190940(v579, v5);
			v577[0] = *v166;
			v167 = v166[1];
			v439 = 0x141CDA060i64;
			v577[1] = v167;
			v168 = sub_1401971E0(&dword_140C89F08, 22, &v439, v577, &v497);
			v579[0] = (__int64)&off_140B5E648;
			v169 = v168;
			TlsSetValue(dwTlsIndex, (LPVOID)v579[2]);
			v183 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v184 + 1));
			if (v169)
				DebugBreak();
			goto LABEL_300;
		}
	LABEL_299:
		v5 = 0;
		goto LABEL_300;
	}
	v292 = &off_140B5E648;
	v293 = 0i64;
	v294 = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v292);
	v481[0] = (__int64)v292;
	v481[1] = v293;
	*(_QWORD*)&v324 = &off_140B5E648;
	*((_QWORD*)&v324 + 1) = L"Result";
	v481[2] = (__int64)v294;
	v325[0] = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v324);
	*(_QWORD*)&v324 = &off_140B5E640;
	LODWORD(v325[1]) = v5;
	v416 = 0x141CD9728i64;
	v562[0] = v324;
	v562[1] = *(_OWORD*)v325;
	v83 = sub_1401971E0(&dword_140C89F80, 22, &v416, v562, v481);
	*(_QWORD*)&v324 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, v325[0]);
	v292 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, v294);
	if (v83)
		goto LABEL_295;
LABEL_300:
	result = (unsigned int)v5;
	if (qword_140C886B8)
	{
		v171 = *(_DWORD*)(qword_140C886B8 + 4);
		if (v171)
			*(_DWORD*)(qword_140C886B8 + 4) = v171 - 1;
	}
	return result;
}
// 14000BA88: variable 'a2' is possibly undefined
// 14000BC0A: variable 'v27' is possibly undefined
// 14000C1EB: variable 'v41' is possibly undefined
// 14000C1EB: variable 'v40' is possibly undefined
// 14000C26E: variable 'v45' is possibly undefined
// 14000C26E: variable 'v44' is possibly undefined
// 14000C26E: variable 'v46' is possibly undefined
// 14000C26E: variable 'v47' is possibly undefined
// 14000C7E9: variable 'v54' is possibly undefined
// 140959C60: using guessed type __int64 SteamUser(void);
// 140959C88: using guessed type __int64 SteamUserStats(void);
// 1409DEA50: using guessed type wchar_t aRealmdatacente[18];
// 1409DEA78: using guessed type wchar_t aRealmdatacente_0[18];
// 1409DEB10: using guessed type wchar_t aNosound[8];
// 1409E09F8: using guessed type wchar_t aNcprogramid[12];
// 1409E0A80: using guessed type wchar_t aGmode[6];
// 1409E0A90: using guessed type wchar_t aAmode[6];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140A6E378: using guessed type wchar_t *off_140A6E378[2];
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B55F20: using guessed type __int64 (__fastcall *off_140B55F20[18])();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B68730: using guessed type __int64 (__fastcall *off_140B68730[4])();
// 140C56310: using guessed type void *off_140C56310;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63600: using guessed type __int64 qword_140C63600;
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C63630: using guessed type __int64 qword_140C63630;
// 140C63658: using guessed type __int64 qword_140C63658;
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A00: using guessed type __int64 qword_140C63A00;
// 140C645DC: using guessed type int dword_140C645DC;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C65808: using guessed type __int64 qword_140C65808;
// 140C65878: using guessed type __int64 qword_140C65878;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C65908: using guessed type __int64 qword_140C65908;
// 140C65920: using guessed type __int64 qword_140C65920;
// 140C659B8: using guessed type __int64 qword_140C659B8;
// 140C659D8: using guessed type __int64 qword_140C659D8;
// 140C659E0: using guessed type __int64 qword_140C659E0;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C65A48: using guessed type __int64 qword_140C65A48;
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;
// 140C7F950: using guessed type __int64 qword_140C7F950;
// 140C886B8: using guessed type __int64 qword_140C886B8;
// 140C891F0: using guessed type __int64 qword_140C891F0;
// 140C89F08: using guessed type _DWORD dword_140C89F08;
// 140C89F0C: using guessed type _DWORD dword_140C89F0C;
// 140C89F10: using guessed type _DWORD dword_140C89F10;
// 140C89F14: using guessed type _DWORD dword_140C89F14;
// 140C89F18: using guessed type _DWORD dword_140C89F18;
// 140C89F1C: using guessed type _DWORD dword_140C89F1C;
// 140C89F20: using guessed type _DWORD dword_140C89F20;
// 140C89F24: using guessed type _DWORD dword_140C89F24;
// 140C89F28: using guessed type _DWORD dword_140C89F28;
// 140C89F2C: using guessed type _DWORD dword_140C89F2C;
// 140C89F30: using guessed type _DWORD dword_140C89F30;
// 140C89F34: using guessed type _DWORD dword_140C89F34;
// 140C89F38: using guessed type _DWORD dword_140C89F38;
// 140C89F3C: using guessed type _DWORD dword_140C89F3C;
// 140C89F40: using guessed type _DWORD dword_140C89F40;
// 140C89F44: using guessed type _DWORD dword_140C89F44;
// 140C89F48: using guessed type _DWORD dword_140C89F48;
// 140C89F4C: using guessed type _DWORD dword_140C89F4C;
// 140C89F50: using guessed type _DWORD dword_140C89F50;
// 140C89F54: using guessed type _DWORD dword_140C89F54;
// 140C89F58: using guessed type _DWORD dword_140C89F58;
// 140C89F5C: using guessed type _DWORD dword_140C89F5C;
// 140C89F60: using guessed type _DWORD dword_140C89F60;
// 140C89F64: using guessed type _DWORD dword_140C89F64;
// 140C89F68: using guessed type _DWORD dword_140C89F68;
// 140C89F6C: using guessed type _DWORD dword_140C89F6C;
// 140C89F70: using guessed type _DWORD dword_140C89F70;
// 140C89F74: using guessed type _DWORD dword_140C89F74;
// 140C89F78: using guessed type _DWORD dword_140C89F78;
// 140C89F7C: using guessed type _DWORD dword_140C89F7C;
// 140C89F80: using guessed type _DWORD dword_140C89F80;
// 140C89F84: using guessed type _DWORD dword_140C89F84;
// 140C89F88: using guessed type _DWORD dword_140C89F88;
// 140C89F8C: using guessed type _DWORD dword_140C89F8C;
// 140C89F90: using guessed type _DWORD dword_140C89F90;
// 140C89F94: using guessed type _DWORD dword_140C89F94;
// 140C89F98: using guessed type _DWORD dword_140C89F98;
// 140C89F9C: using guessed type _DWORD dword_140C89F9C;
// 140C89FA0: using guessed type _DWORD dword_140C89FA0;
// 140C89FA4: using guessed type _DWORD dword_140C89FA4;
// 140C89FA8: using guessed type _DWORD dword_140C89FA8;
// 140C89FAC: using guessed type _DWORD dword_140C89FAC;
// 140C89FB0: using guessed type _DWORD dword_140C89FB0;
// 140C89FB4: using guessed type _DWORD dword_140C89FB4;
// 140C89FB8: using guessed type _DWORD dword_140C89FB8;
// 140C89FBC: using guessed type _DWORD dword_140C89FBC;
// 140C89FC0: using guessed type _DWORD dword_140C89FC0;
// 140C89FC4: using guessed type _DWORD dword_140C89FC4;
// 140C89FC8: using guessed type _DWORD dword_140C89FC8;
// 140C89FCC: using guessed type _DWORD dword_140C89FCC;

