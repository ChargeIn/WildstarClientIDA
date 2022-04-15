#include "../winhttp.h"

//----- (00000001400F6B10) ----------------------------------------------------
__int64 __fastcall sub_1400F6B10(__int64 a1, wchar_t* a2, __int64 a3, __int64 a4, char a5, int a6)
{
	int v7; // ebx
	__int64 v9; // rax
	__int64 v10; // rax
	int* v11; // rdi
	int* v12; // r12
	__int64 v13; // rax
	__int64 v14; // rbx
	unsigned __int64 v15; // rbx
	char* v16; // r14
	__int64 v17; // rax
	__int64 v18; // rax
	int* v19; // rdi
	int* v20; // r9
	__int64 v21; // rax
	__int64 v22; // rbx
	unsigned __int64 v23; // rbx
	__int64 v24; // rdi
	unsigned __int64 i; // rbx
	wchar_t* v26; // rdx
	__int64 v27; // rax
	wchar_t* v28; // rax
	__int64 v29; // rax
	__int64 v30; // r15
	_WORD* v31; // rax
	unsigned __int64 v32; // rdx
	__int64 v33; // rcx
	__int64 v34; // rax
	unsigned __int64 v35; // rdx
	__int64 v36; // rcx
	__int64 v37; // rax
	_WORD* v38; // rax
	__int64 v39; // rax
	__int64 v40; // rax
	__m128i* v41; // r12
	__int64 v42; // rax
	__int64 v43; // rax
	__int64 v44; // rsi
	unsigned __int16* v45; // r8
	__int64 v46; // rcx
	__int64 v47; // rbx
	__int64* v48; // rax
	__int64 v49; // r15
	__int64 v50; // rbx
	unsigned __int64 v51; // r9
	unsigned __int64 j; // r8
	__int64 v53; // r14
	__int64 v54; // rax
	wchar_t* v55; // rax
	__int64 v56; // r13
	__int64 v57; // rsi
	__int64 v58; // rax
	__int64 v59; // rdi
	__int64 v60; // rax
	int* v61; // rbx
	__int64 v62; // rax
	__int64 v63; // rax
	void* v64; // r8
	__int64 v65; // rax
	_WORD* v66; // rax
	__int64 v67; // rax
	_WORD* v68; // rax
	__int64 v69; // rax
	int* v70; // rax
	__int64 v71; // rax
	__int64 v72; // rcx
	unsigned __int64 k; // rbx
	wchar_t* v74; // rdx
	__int64 v75; // rax
	wchar_t* v76; // rax
	__int64 v77; // rax
	__int64 v78; // r13
	unsigned __int16* v79; // rax
	__int64 v80; // rbx
	__int64 v81; // r15
	__int64 v82; // rax
	__int64 v83; // rbx
	__int64 v84; // rax
	__int64 v85; // rax
	_WORD* v86; // rax
	int v87; // eax
	__int64 v88; // r12
	unsigned int* v89; // rbx
	unsigned int v90; // eax
	__int64 v91; // rdx
	__int64 v92; // rcx
	int v93; // r8d
	__int64 v94; // rax
	_WORD* v95; // rax
	float v96; // xmm6_4
	int* v97; // rax
	__int64 v98; // rax
	__int64 v99; // rax
	__int64 v100; // rax
	__int64 v101; // rax
	int* v102; // rdi
	int* v103; // rsi
	__int64 v104; // rax
	__int64 v105; // rbx
	unsigned __int64 v106; // rbx
	__int64 v107; // rax
	__int64 v108; // rcx
	WCHAR* v109; // rax
	int* v110; // rbx
	unsigned __int64 v111; // r13
	unsigned int* v112; // rdi
	__int64 v113; // rax
	__int64 v114; // rdx
	__int64 v115; // rcx
	int v116; // r8d
	__int64 v117; // rax
	WCHAR* v118; // rax
	__int64 v119; // rcx
	int* v120; // r14
	int* v121; // rbx
	__int64 v122; // rax
	int* v123; // rdi
	int* v124; // rax
	__int64 v125; // rax
	int* v126; // rsi
	__int64 v127; // rax
	__int64 v128; // rax
	_WORD* v129; // rax
	__int64 v130; // rax
	_WORD* v131; // rax
	__int64 v132; // rax
	int* v133; // rdi
	__int64 v134; // rax
	int* v135; // rsi
	__int64 v136; // rbx
	unsigned __int64 v137; // rbx
	char* v138; // rdi
	int v139; // r13d
	wchar_t** v140; // rbx
	__int64 v141; // rdi
	int m; // r11d
	char* v143; // rax
	unsigned __int64 v144; // rcx
	unsigned __int64 v145; // rdx
	signed __int64 v146; // r10
	__int64 v147; // rax
	__int64(__fastcall * **v148)(_QWORD, _QWORD, __int64, __int64, int, int); // r14
	__int64 n; // rbx
	__int64 v150; // rax
	__int64 v151; // rax
	__int64 v152; // r15
	_BYTE* v153; // rsi
	__int64 v154; // r12
	__int64 v155; // r14
	__int64 v156; // rdi
	const wchar_t* v157; // rbx
	wchar_t* v158; // rax
	wchar_t v159; // cx
	int v160; // r8d
	bool v161; // zf
	unsigned __int16* v162; // rax
	int* v163; // rdi
	unsigned __int64 v164; // rax
	const wchar_t* v165; // rbx
	wchar_t* v166; // rax
	wchar_t v167; // cx
	int v168; // r8d
	bool v169; // zf
	int* v170; // rbx
	unsigned __int16* v171; // rax
	unsigned __int64 v172; // r15
	int v173; // r13d
	int* v174; // rax
	__int64* v175; // rax
	int* v176; // rax
	unsigned __int64 v177; // r12
	int* v178; // rax
	__int64* v179; // rdx
	int* v180; // rax
	__int64 v181; // r14
	__int64 v182; // r13
	__int64 v183; // r12
	__int64 v184; // rdi
	const wchar_t* v185; // rbx
	wchar_t* v186; // rax
	wchar_t v187; // cx
	int v188; // r8d
	bool v189; // zf
	wchar_t* v190; // rax
	unsigned int* v191; // rbx
	__int64 v192; // r8
	__int64 v193; // rdx
	__int64 v194; // rcx
	int v195; // r9d
	__int64 v196; // rdi
	unsigned __int64 ii; // rbx
	wchar_t* v198; // rdx
	__int64 v199; // rax
	wchar_t* v200; // rax
	__int64 v201; // rdi
	const wchar_t* v202; // rbx
	wchar_t* v203; // rax
	wchar_t v204; // cx
	int v205; // r8d
	bool v206; // zf
	__int64 v207; // rax
	int* v208; // rdi
	__int64 v209; // rax
	int* v210; // rsi
	unsigned __int64 v211; // r8
	unsigned __int64 v212; // rbx
	unsigned __int64 v213; // rbx
	__int64 v214; // rdx
	char* v215; // rdi
	int* v216; // rbx
	_QWORD* v217; // rax
	__int64 v218; // rdx
	__int64 v219; // rdx
	__int64 v220; // rdx
	unsigned int* v221; // rbx
	__int64 v222; // r8
	__int64 v223; // rdx
	__int64 v224; // rcx
	int v225; // r9d
	__int64 v226; // rax
	_WORD* v227; // rax
	int v228; // r14d
	__int64 v229; // rsi
	__int64 v230; // rax
	int* v231; // rax
	int* v232; // rdi
	int v233; // ebx
	__int64 v234; // rax
	__int64 v235; // rax
	__int64 v236; // rax
	_WORD* v237; // rax
	__int64 v238; // rax
	int* v239; // rdx
	__int64 v240; // rax
	__int64 v241; // rax
	_WORD* v242; // rax
	__int64 v243; // rcx
	_QWORD* v244; // rcx
	__int64 v245; // rax
	unsigned int v246; // r13d
	int v247; // ebx
	int v248; // [rsp+20h] [rbp-E0h]
	bool v249; // [rsp+40h] [rbp-C0h] BYREF
	unsigned __int64 v250; // [rsp+48h] [rbp-B8h] BYREF
	unsigned int v251; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v252; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v253; // [rsp+60h] [rbp-A0h] BYREF
	float v254; // [rsp+68h] [rbp-98h] BYREF
	unsigned int v255; // [rsp+6Ch] [rbp-94h] BYREF
	int v256; // [rsp+70h] [rbp-90h] BYREF
	__int64 v257; // [rsp+78h] [rbp-88h] BYREF
	int v258; // [rsp+80h] [rbp-80h] BYREF
	int v259; // [rsp+84h] [rbp-7Ch] BYREF
	int v260; // [rsp+88h] [rbp-78h] BYREF
	__int64 v261; // [rsp+90h] [rbp-70h]
	int v262; // [rsp+98h] [rbp-68h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+A0h] [rbp-60h] BYREF
	__int128 v264; // [rsp+A8h] [rbp-58h]
	float v265; // [rsp+B8h] [rbp-48h] BYREF
	int v266; // [rsp+BCh] [rbp-44h] BYREF
	__int64 v267; // [rsp+C0h] [rbp-40h]
	wchar_t* v268; // [rsp+C8h] [rbp-38h]
	int* v269; // [rsp+D0h] [rbp-30h]
	int* v270; // [rsp+D8h] [rbp-28h]
	__int64 v271; // [rsp+E0h] [rbp-20h]
	__int64(__fastcall * *v272)(); // [rsp+F0h] [rbp-10h] BYREF
	__int128 v273; // [rsp+F8h] [rbp-8h]
	int* v274; // [rsp+110h] [rbp+10h] BYREF
	int* v275; // [rsp+118h] [rbp+18h] BYREF
	_BYTE* v276; // [rsp+120h] [rbp+20h] BYREF
	int** v277; // [rsp+128h] [rbp+28h]
	__int64 v278; // [rsp+130h] [rbp+30h] BYREF
	int* v279; // [rsp+138h] [rbp+38h] BYREF
	__int64 v280; // [rsp+140h] [rbp+40h] BYREF
	unsigned __int8 v281; // [rsp+150h] [rbp+50h] BYREF
	bool v282; // [rsp+151h] [rbp+51h] BYREF
	char v283[8]; // [rsp+158h] [rbp+58h] BYREF
	__int64 v284; // [rsp+160h] [rbp+60h]
	unsigned int v285; // [rsp+178h] [rbp+78h] BYREF
	unsigned int v286; // [rsp+17Ch] [rbp+7Ch] BYREF
	__int128 v287; // [rsp+180h] [rbp+80h]
	__int128 v288; // [rsp+190h] [rbp+90h]
	__int128 v289; // [rsp+1A0h] [rbp+A0h]
	__int64 v290; // [rsp+1B0h] [rbp+B0h]
	__int64 v291; // [rsp+1B8h] [rbp+B8h]
	__int64 v292; // [rsp+1C0h] [rbp+C0h]
	__int64 v293; // [rsp+1C8h] [rbp+C8h]
	int v294; // [rsp+1D0h] [rbp+D0h]
	float v295; // [rsp+1E0h] [rbp+E0h] BYREF
	int v296[3]; // [rsp+1E4h] [rbp+E4h] BYREF
	__int64 v297; // [rsp+1F0h] [rbp+F0h]
	__int64 v298; // [rsp+1F8h] [rbp+F8h]
	__int64 v299; // [rsp+200h] [rbp+100h]
	__int64 v300; // [rsp+208h] [rbp+108h] BYREF
	char* v301; // [rsp+210h] [rbp+110h]
	char* v302; // [rsp+218h] [rbp+118h]
	int v303; // [rsp+228h] [rbp+128h]
	__int128 v304[3]; // [rsp+230h] [rbp+130h] BYREF
	__int64 v305; // [rsp+260h] [rbp+160h]
	__int64 v306; // [rsp+268h] [rbp+168h]
	__int64 v307; // [rsp+270h] [rbp+170h]
	__int64 v308; // [rsp+278h] [rbp+178h]
	int v309; // [rsp+280h] [rbp+180h]

	LODWORD(v250) = 0;
	v267 = a4;
	v261 = a3;
	v268 = a2;
	v253 = a1;
	if (!*(_QWORD*)(a1 + 8))
	{
		*(_QWORD*)&v264 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v264 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v272 = TlsValue;
		v257 = 0x141D13730i64;
		v273 = v264;
		v7 = sub_1401971E0(&dword_140C8A0F8, 13, &v257, &v272);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v264 + 1));
		if (v7)
			DebugBreak();
		return 0i64;
	}
	v9 = sub_1401A6B80(a4, L"Class");
	if (v9)
		v10 = sub_1401A4F40(v9 + 32);
	else
		v10 = 0i64;
	v11 = (int*)&unk_1409D4514;
	v12 = 0i64;
	if (v10)
		v11 = (int*)v10;
	v13 = 0i64;
	v270 = 0i64;
	if (*(_WORD*)v11)
	{
		do
			++v13;
		while (*((_WORD*)v11 + v13));
	}
	v14 = (2 * v13) >> 1;
	if ((unsigned __int64)(v14 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v12 = sub_14018B280(2 * (v14 + 1), 0);
		v270 = v12;
	}
	v15 = 2 * v14;
	sub_1407DB590(v12, v11, v15);
	v16 = (char*)v12 + v15;
	if ((int*)((char*)v12 + v15))
		*(_WORD*)v16 = 0;
	v17 = sub_1401A6B80(a4, L"Name");
	if (v17)
		v18 = sub_1401A4F40(v17 + 32);
	else
		v18 = 0i64;
	v19 = (int*)&unk_1409D452C;
	v20 = 0i64;
	if (v18)
		v19 = (int*)v18;
	v269 = 0i64;
	v21 = 0i64;
	if (*(_WORD*)v19)
	{
		do
			++v21;
		while (*((_WORD*)v19 + v21));
	}
	v22 = (2 * v21) >> 1;
	if ((unsigned __int64)(v22 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v20 = sub_14018B280(2 * (v22 + 1), 0);
		v269 = v20;
	}
	v23 = 2 * v22;
	sub_1407DB590(v20, v19, v23);
	if ((int*)((char*)v269 + v23))
		*(_WORD*)((char*)v269 + v23) = 0;
	v24 = 0i64;
	for (i = 0i64; i < 0x25; ++i)
	{
		v26 = off_140C3C8B0[i];
		v249 = 0;
		v27 = sub_1401A6B80(a4, v26);
		if (v27)
		{
			v28 = (wchar_t*)sub_1401A4F40(v27 + 32);
			sub_1401A52E0(v28, &v249);
			if (v249)
				v24 |= 1i64 << i;
		}
	}
	v262 = 0;
	v29 = sub_1401A6B80(a4, L"SwallowMouseClicks");
	v30 = v253;
	if (v29)
	{
		v31 = (_WORD*)sub_1401A4F40(v29 + 32);
		if ((unsigned int)sub_1407DF428(v31, (__int64)L"%d", &v262) == 1)
		{
			if (v262)
				goto LABEL_55;
			v32 = 0i64;
			do
				++v32;
			while (aWindow_3[v32]);
			if ((v16 - (char*)v12) >> 1 != v32)
				goto LABEL_55;
			v33 = 0i64;
			if (v32)
			{
				while (*((_WORD*)v12 + v33) == aWindow_3[v33])
				{
					if (++v33 >= v32)
						goto LABEL_54;
				}
				goto LABEL_55;
			}
		LABEL_54:
			v24 |= 0x4000ui64;
			goto LABEL_55;
		}
	}
	v34 = sub_1401A6B80(a4, L"IgnoreMouse");
	if (v34 && sub_1401A4F40(v34 + 32))
		goto LABEL_55;
	v35 = 0i64;
	do
		++v35;
	while (aWindow_4[v35]);
	if ((v16 - (char*)v12) >> 1 != v35)
		goto LABEL_55;
	v36 = 0i64;
	if (!v35)
	{
	LABEL_53:
		if (!a5)
			goto LABEL_55;
		goto LABEL_54;
	}
	while (*((_WORD*)v12 + v36) == aWindow_4[v36])
	{
		if (++v36 >= v35)
			goto LABEL_53;
	}
LABEL_55:
	v259 = 0;
	v37 = sub_1401A6B80(a4, L"AntiImmersive");
	if (v37)
	{
		v38 = (_WORD*)sub_1401A4F40(v37 + 32);
		if ((unsigned int)sub_1407DF428(v38, (__int64)L"%d", &v259) == 1 && v259 == 1)
			v24 |= 0x20000ui64;
	}
	v39 = sub_1401A6B80(a4, L"Sprite");
	if (v39)
		v40 = sub_1401A4F40(v39 + 32);
	else
		v40 = 0i64;
	v41 = (__m128i*) & unk_1409D4594;
	if (v40)
		v41 = (__m128i*)v40;
	v42 = sub_1401A6B80(a4, L"Template");
	if (v42)
		v43 = sub_1401A4F40(v42 + 32);
	else
		v43 = 0i64;
	v44 = *(_QWORD*)(v30 + 8);
	v45 = (unsigned __int16*)&unk_1409D45AC;
	v46 = *(_QWORD*)(v44 + 368);
	if (v43)
		v45 = (unsigned __int16*)v43;
	v47 = *(_QWORD*)(v46 + 24);
	v48 = sub_14010E2E0(*(_QWORD**)(v46 + 16), v47, v45);
	if (v48 != (__int64*)v47 && (v49 = *v48) != 0)
	{
		v50 = v261;
	}
	else
	{
		v50 = v261;
		if (!v261 || (v49 = *(_QWORD*)(v261 + 48)) == 0)
			v49 = *(_QWORD*)(v44 + 2928);
	}
	v51 = 0i64;
	do
		++v51;
	while (aItemslotwindow[v51]);
	if ((v16 - (char*)v270) >> 1 == v51)
	{
		for (j = 0i64; j < v51; ++j)
		{
			if (*((_WORD*)v270 + j) != aItemslotwindow[j])
				break;
		}
	}
	v53 = v267;
	v54 = sub_1401A6B80(v267, L"Class");
	if (v54)
		v55 = (wchar_t*)sub_1401A4F40(v54 + 32);
	else
		v55 = 0i64;
	v56 = v253;
	v57 = sub_1400F86D0(v253, v55, v50, v49, v24, v53, a6);
	v252 = v57;
	if (!v57)
	{
		if (!*(_BYTE*)(*(_QWORD*)(v56 + 8) + 2825i64))
		{
			TlsValue = &off_140B5E648;
			*(_QWORD*)&v264 = 0i64;
			*((_QWORD*)&v264 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v272 = TlsValue;
			v257 = 0x141D13888i64;
			v273 = v264;
			v247 = sub_140196F30(&dword_140C8A0F4, 13, &v257, &v272);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v264 + 1));
			if (v247)
				DebugBreak();
		}
		v81 = 0i64;
		goto LABEL_394;
	}
	v58 = sub_1401A6B80(v53, L"Subclass");
	if (v58)
	{
		v60 = sub_1401A4F40(v58 + 32);
		v59 = 0i64;
	}
	else
	{
		v59 = 0i64;
		v60 = 0i64;
	}
	v61 = (int*)&unk_1409D45CC;
	if (v60)
		v61 = (int*)v60;
	v62 = sub_1401A6B80(v53, L"SubclassParam");
	if (v62)
		v63 = sub_1401A4F40(v62 + 32);
	else
		v63 = 0i64;
	v64 = &unk_1409D4674;
	if (v63)
		v64 = (void*)v63;
	sub_1400C6FF0((_QWORD*)v57, v61, (__int64)v64);
	if (*(_BYTE*)(*(_QWORD*)(v57 + 32) + 2825i64))
		*(_QWORD*)(v57 + 840) = v53;
	sub_1400D2C30(v57, v269);
	v258 = 1;
	v65 = sub_1401A6B80(v53, L"Visible");
	if (v65)
	{
		v66 = (_WORD*)sub_1401A4F40(v65 + 32);
		if ((unsigned int)sub_1407DF428(v66, (__int64)L"%d", &v258) == 1
			&& !v258
			&& !*(_BYTE*)(*(_QWORD*)(v56 + 8) + 2825i64))
		{
			sub_1400D42F0(v57, 0, 1, 4.0);
		}
	}
	v266 = 0;
	v67 = sub_1401A6B80(v53, L"HideInEditor");
	if (v67)
	{
		v68 = (_WORD*)sub_1401A4F40(v67 + 32);
		if ((unsigned int)sub_1407DF428(v68, (__int64)L"%d", &v266) == 1
			&& v266
			&& *(_BYTE*)(*(_QWORD*)(v56 + 8) + 2825i64))
		{
			sub_1400D42F0(v57, 0, 0, 4.0);
		}
	}
	v69 = sub_1401A6B80(v53, L"Font");
	if (v69)
		v70 = (int*)sub_1401A4F40(v69 + 32);
	else
		v70 = 0i64;
	v71 = sub_1400E58C0(*(_QWORD*)(v57 + 32), v70);
	v72 = *(_QWORD*)(v57 + 688);
	*(_QWORD*)(v57 + 696) = v71;
	if (v72)
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v72 + 40i64))(v72, *(_QWORD*)(v71 + 96));
	for (k = 0i64; k < 6; ++k)
	{
		v74 = off_140A197A0[k];
		v249 = 0;
		v75 = sub_1401A6B80(v53, v74);
		if (v75)
		{
			v76 = (wchar_t*)sub_1401A4F40(v75 + 32);
			sub_1401A52E0(v76, &v249);
			if (v249)
				v59 |= 1i64 << k;
		}
	}
	*(_DWORD*)(v57 + 704) = v59;
	v77 = sub_1401A6B80(v53, L"WindowSoundTemplate");
	v78 = v253;
	if (v77 && (v79 = (unsigned __int16*)sub_1401A4F40(v77 + 32)) != 0i64)
	{
		v80 = *(_QWORD*)v57;
		v81 = v57;
		v82 = sub_14010DC00(*(_QWORD*)(*(_QWORD*)(v78 + 8) + 368i64), v79);
		(*(void(__fastcall**)(__int64, __int64))(v80 + 24))(v57, v82);
	}
	else if (v49)
	{
		v83 = *(_QWORD*)v57;
		v84 = sub_14010DC00(*(_QWORD*)(*(_QWORD*)(v78 + 8) + 368i64), *(unsigned __int16**)(v49 + 56));
		v81 = v57;
		(*(void(__fastcall**)(__int64, __int64))(v83 + 24))(v57, v84);
	}
	else
	{
		v81 = v57;
	}
	v256 = 0;
	v85 = sub_1401A6B80(v53, L"NewControlDepth");
	if (v85)
	{
		v86 = (_WORD*)sub_1401A4F40(v85 + 32);
		sub_1407DF428(v86, (__int64)L"%d", &v256);
	}
	v87 = v256;
	if (v256 < 0)
		v87 = 0;
	*(_DWORD*)(v81 + 672) = v87;
	v256 = v87;
	if (v41->m128i_i16[0])
		sub_1400D2D60(v81, v41);
	v88 = v53;
	sub_1400F66F0(&v255, v53, &word_140A31B38, 0xFFFFFFFF);
	v89 = (unsigned int*)(v81 + 712);
	if ((unsigned int*)(v81 + 712) != &v255)
	{
		sub_1401429A0(qword_140C63678, *v89);
		v90 = v255;
		*v89 = v255;
		if ((unsigned __int64)v90 < *(_QWORD*)(qword_140C63678 + 48))
		{
			v91 = *(_QWORD*)(qword_140C63678 + 40);
			v92 = 32i64 * v90;
			v93 = *(_DWORD*)(v92 + v91 + 16);
			if ((unsigned int)(v93 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v92 + v91 + 16) = v93 + 1;
		}
	}
	v254 = 1.0;
	v94 = sub_1401A6B80(v53, L"BGOpacity");
	if (v94)
	{
		v95 = (_WORD*)sub_1401A4F40(v94 + 32);
		if ((unsigned int)sub_1407DF428(v95, (__int64)L"%f", &v254) == 1)
		{
			sub_1400CAA30(v81, v254, -1.0);
			v96 = v254;
			if (!*(_QWORD*)(v81 + 608) && v254 < 1.0)
			{
				v97 = sub_14018B280(112i64, 0);
				if (v97)
					v98 = sub_1400C5690((__int64)v97);
				else
					v98 = 0i64;
				*(_QWORD*)(v81 + 608) = v98;
			}
			v99 = *(_QWORD*)(v81 + 608);
			if (v99)
				*(float*)(v99 + 32) = v96;
		}
	}
	v100 = sub_1401A6B80(v53, L"Text");
	if (v100)
		v101 = sub_1401A4F40(v100 + 32);
	else
		v101 = 0i64;
	v102 = (int*)&unk_1409D4564;
	v103 = 0i64;
	if (v101)
		v102 = (int*)v101;
	v104 = 0i64;
	if (*(_WORD*)v102)
	{
		do
			++v104;
		while (*((_WORD*)v102 + v104));
	}
	v105 = (2 * v104) >> 1;
	if ((unsigned __int64)(v105 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v103 = sub_14018B280(2 * (v105 + 1), 0);
	v106 = 2 * v105;
	sub_1407DB590(v103, v102, v106);
	if ((int*)((char*)v103 + v106))
		*(_WORD*)((char*)v103 + v106) = 0;
	v107 = sub_1401A6B80(v53, L"TextId");
	if (v107)
		v109 = (WCHAR*)sub_1401A4F40(v107 + 32);
	else
		v109 = 0i64;
	sub_1400E2630(v108, &v272, v109, v103);
	v110 = (int*)v273;
	v257 = v273;
	if (v103)
		sub_14018B900((__int64)v103, 0);
	(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v81 + 80i64))(v81, v110);
	sub_1400F66F0(&v251, v53, &word_140A31AB8, 0xFFFFFFFF);
	v111 = v251;
	v112 = (unsigned int*)(v81 + 708);
	if ((unsigned int*)(v81 + 708) != &v251)
	{
		sub_1401429A0(qword_140C63678, *v112);
		v113 = qword_140C63678;
		*v112 = v111;
		if (v111 < *(_QWORD*)(v113 + 48))
		{
			v114 = *(_QWORD*)(v113 + 40);
			v115 = 32i64 * (unsigned int)v111;
			v116 = *(_DWORD*)(v114 + v115 + 16);
			if ((unsigned int)(v116 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v114 + v115 + 16) = v116 + 1;
		}
	}
	v117 = sub_1401A6B80(v53, L"TooltipId");
	if (v117 && (v118 = (WCHAR*)sub_1401A4F40(v117 + 32)) != 0i64 && *v118)
	{
		sub_1400E2630(v119, &v272, v118, v110);
		v120 = (int*)v273;
		v257 = v273;
		if (v110)
			sub_14018B900((__int64)v110, 0);
		v121 = v120;
	}
	else
	{
		v122 = sub_1401A6B80(v53, L"Tooltip");
		if (!v122)
		{
			v123 = 0i64;
			v121 = 0i64;
			goto LABEL_175;
		}
		v124 = (int*)sub_1401A4F40(v122 + 32);
		v121 = v124;
		if (v124 && *(_WORD*)v124)
			sub_1400035B0();
	}
	v123 = 0i64;
LABEL_175:
	v125 = sub_1401A6B80(v88, L"TooltipFont");
	if (v125)
		v126 = (int*)sub_1401A4F40(v125 + 32);
	else
		v126 = 0i64;
	v127 = sub_1401A6B80(v88, &word_140A31B48);
	if (v127)
		v123 = (int*)sub_1401A4F40(v127 + 32);
	sub_1400CC9F0(v81, v126);
	sub_1400CCAA0(v81, v123);
	if (v121)
	{
		if (v126 && *(_WORD*)v126 || v123 && *(_WORD*)v123)
			sub_1400CCB50((__int64*)v81, v121);
		else
			sub_1400CCD40((__int64*)v81, v121);
	}
	if (!v261)
		sub_1400E7280(*(_QWORD*)(v253 + 8), (void(__fastcall***)(_QWORD))v81, v268);
	v260 = 1065353216;
	v128 = sub_1401A6B80(v88, L"Scale");
	if (v128)
	{
		v129 = (_WORD*)sub_1401A4F40(v128 + 32);
		if ((unsigned int)sub_1407DF428(v129, (__int64)L"%f", &v260) == 1)
			*(_DWORD*)(v81 + 616) = v260;
	}
	v265 = 0.0;
	v130 = sub_1401A6B80(v88, L"Rotation");
	if (v130)
	{
		v131 = (_WORD*)sub_1401A4F40(v130 + 32);
		if ((unsigned int)sub_1407DF428(v131, (__int64)L"%f", &v265) == 1)
			*(float*)(v81 + 620) = (float)(*(float*)&dword_140C3C148 * v265) * 0.0027777778;
	}
	v132 = sub_1401A6B80(v88, L"TooltipType");
	if (v132)
		v132 = sub_1401A4F40(v132 + 32);
	v133 = (int*)&unk_1409D46A4;
	if (v132)
		v133 = (int*)v132;
	v134 = 0i64;
	v135 = 0i64;
	v268 = 0i64;
	if (*(_WORD*)v133)
	{
		do
			++v134;
		while (*((_WORD*)v133 + v134));
	}
	v136 = (2 * v134) >> 1;
	if ((unsigned __int64)(v136 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v135 = sub_14018B280(2 * (v136 + 1), 0);
		v268 = (wchar_t*)v135;
	}
	v137 = 2 * v136;
	sub_1407DB590(v135, v133, v137);
	v138 = (char*)v135 + v137;
	if ((int*)((char*)v135 + v137))
		*(_WORD*)v138 = 0;
	v139 = 0;
	v140 = off_140A33380;
	v141 = (v138 - (char*)v135) >> 1;
	for (m = 0; m < 4; ++m)
	{
		v143 = (char*)*v140;
		v144 = 0i64;
		if (**v140)
		{
			do
				++v144;
			while (*(_WORD*)&v143[2 * v144]);
		}
		if (v141 == v144)
		{
			v145 = 0i64;
			if (v144)
			{
				v146 = (char*)v135 - v143;
				while (*(_WORD*)&v143[v146] == *(_WORD*)v143)
				{
					++v145;
					v143 += 2;
					if (v145 >= v144)
						goto LABEL_215;
				}
			}
			else
			{
			LABEL_215:
				*(_DWORD*)(v81 + 676) = m;
			}
		}
		++v140;
	}
	v147 = sub_1401A5AE0(v88, L"Control");
	v148 = (__int64(__fastcall***)(_QWORD, _QWORD, __int64, __int64, int, int))v253;
	for (n = v147; n; n = sub_1401A5BC0(n, L"Control"))
	{
		LOBYTE(v248) = 1;
		v150 = (**v148)(v148, 0i64, v81, n, v248, -2);
		if (v150)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v150 + 8i64))(v150);
	}
	v151 = sub_1401A5AE0(v88, L"Event");
	v271 = v151;
	if (v151)
	{
		v152 = v280;
		v153 = v276;
		v154 = v278;
		v155 = (__int64)v274;
		while (1)
		{
			v156 = *(_QWORD*)(v151 + 96);
			if (!v156)
				goto LABEL_238;
			while (1)
			{
				v157 = L"Name";
				v158 = (wchar_t*)sub_1401A4F40(v156 + 8);
				if (v158 == L"Name")
					break;
				v159 = *v158;
				v160 = 0;
				if (!*v158)
					goto LABEL_233;
				do
				{
					if (!*v157 || v159 != *v157)
						break;
					v161 = v160 == 0x7FFFFFFF;
					if (v160 == 0x7FFFFFFF)
						goto LABEL_231;
					v159 = v158[1];
					++v158;
					++v157;
					++v160;
				} while (v159);
				v161 = v160 == 0x7FFFFFFF;
			LABEL_231:
				if (v161)
					break;
				if (!*v158)
				{
				LABEL_233:
					if (!*v157)
						break;
				}
				v156 = *(_QWORD*)(v156 + 56);
				if (!v156)
					goto LABEL_238;
			}
			v162 = (unsigned __int16*)sub_1401A4F40(v156 + 32);
			if (v162)
			{
				sub_14018DD50(&v279, v162);
				v163 = v279;
			}
			else
			{
			LABEL_238:
				v163 = 0i64;
				v279 = 0i64;
			}
			v164 = *(_QWORD*)(v271 + 96);
			v250 = v164;
			if (!v164)
				goto LABEL_251;
			while (1)
			{
				v165 = L"Function";
				v166 = (wchar_t*)sub_1401A4F40(v164 + 8);
				if (v166 == L"Function")
					break;
				v167 = *v166;
				v168 = 0;
				if (!*v166)
					goto LABEL_249;
				do
				{
					if (!*v165 || v167 != *v165)
						break;
					v169 = v168 == 0x7FFFFFFF;
					if (v168 == 0x7FFFFFFF)
						goto LABEL_247;
					v167 = v166[1];
					++v166;
					++v165;
					++v168;
				} while (v167);
				v169 = v168 == 0x7FFFFFFF;
			LABEL_247:
				if (v169)
					break;
				if (!*v166)
				{
				LABEL_249:
					if (!*v165)
						break;
				}
				v164 = *(_QWORD*)(v250 + 56);
				v250 = v164;
				if (!v164)
					goto LABEL_251;
			}
			if (v250 && (v171 = (unsigned __int16*)sub_1401A4F40(v250 + 32)) != 0i64)
			{
				sub_14018DD50(&v275, v171);
				v170 = v275;
				if (v275)
				{
					v173 = v139 | 1;
					v250 = *((_QWORD*)v275 - 1);
					v172 = v250;
					v174 = sub_14018B280(v250 + 17, 0);
					if (v174)
					{
						*((_QWORD*)v174 + 1) = v172;
						*(_QWORD*)v174 = off_140B55060;
					}
					v152 = (__int64)(v174 + 4);
					sub_1407DB590(v174 + 4, v170, v250);
					v280 = v152;
					*(_BYTE*)(v152 + v250) = 0;
					v175 = &v280;
					goto LABEL_262;
				}
			}
			else
			{
			LABEL_251:
				v170 = 0i64;
				v275 = 0i64;
			}
			v173 = v139 | 2;
			v176 = sub_14018B280(17i64, 0);
			if (v176)
			{
				*((_QWORD*)v176 + 1) = 0i64;
				*(_QWORD*)v176 = off_140B55060;
			}
			else
			{
				v176 = 0i64;
			}
			v153 = v176 + 4;
			v175 = (__int64*)&v276;
			*v153 = 0;
			v276 = v153;
		LABEL_262:
			v277 = (int**)v175;
			if (v163)
			{
				v139 = v173 | 4;
				v250 = *((_QWORD*)v163 - 1);
				v177 = v250;
				v178 = sub_14018B280(v250 + 17, 0);
				if (v178)
				{
					*((_QWORD*)v178 + 1) = v177;
					*(_QWORD*)v178 = off_140B55060;
				}
				v154 = (__int64)(v178 + 4);
				sub_1407DB590(v178 + 4, v163, v250);
				v278 = v154;
				*(_BYTE*)(v154 + v250) = 0;
				v179 = &v278;
			}
			else
			{
				v139 = v173 | 8;
				v180 = sub_14018B280(17i64, 0);
				if (v180)
				{
					*((_QWORD*)v180 + 1) = 0i64;
					*(_QWORD*)v180 = off_140B55060;
				}
				v155 = (__int64)(v180 + 4);
				v179 = (__int64*)&v274;
				*((_BYTE*)v180 + 16) = 0;
				v274 = v180 + 4;
			}
			sub_1400D3410(v252, (int*)*v179, *v277);
			if ((v139 & 8) != 0)
			{
				v139 &= ~8u;
				if (v155)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v155 - 16) + 8i64))(v155 - 16);
			}
			if ((v139 & 4) != 0)
			{
				v139 &= ~4u;
				if (v154)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v154 - 16) + 8i64))(v154 - 16);
			}
			if ((v139 & 2) != 0)
			{
				v139 &= ~2u;
				if (v153)
					(*(void(__fastcall**)(_BYTE*))(*((_QWORD*)v153 - 2) + 8i64))(v153 - 16);
			}
			if ((v139 & 1) != 0)
			{
				v139 &= ~1u;
				if (v152)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v152 - 16) + 8i64))(v152 - 16);
			}
			if (v170)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v170 - 2) + 8i64))(v170 - 4);
			if (v163)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v163 - 2) + 8i64))(v163 - 4);
			v151 = sub_1401A5BC0(v271, L"Event");
			v271 = v151;
			if (!v151)
			{
				v81 = v252;
				v88 = v267;
				break;
			}
		}
	}
	v181 = sub_1401A5AE0(v88, L"Pixie");
	if (v181)
	{
		v182 = v253;
		v183 = v261;
		while (1)
		{
			sub_1400C32C0((__int64)&v281);
			sub_1400D45E0((__int64)v304, *(_QWORD*)(v182 + 8), v183, v181, 0i64);
			v184 = *(_QWORD*)(v181 + 96);
			v290 = v305;
			v287 = v304[0];
			v288 = v304[1];
			v289 = v304[2];
			v291 = v306;
			v292 = v307;
			v293 = v308;
			v294 = v309;
			if (v184)
			{
				while (1)
				{
					v185 = L"Line";
					v186 = (wchar_t*)sub_1401A4F40(v184 + 8);
					if (v186 == L"Line")
						break;
					v187 = *v186;
					v188 = 0;
					if (!*v186)
						goto LABEL_299;
					do
					{
						if (!*v185 || v187 != *v185)
							break;
						v189 = v188 == 0x7FFFFFFF;
						if (v188 == 0x7FFFFFFF)
							goto LABEL_297;
						v187 = v186[1];
						++v186;
						++v185;
						++v188;
					} while (v187);
					v189 = v188 == 0x7FFFFFFF;
				LABEL_297:
					if (v189)
						break;
					if (!*v186)
					{
					LABEL_299:
						if (!*v185)
							break;
					}
					v184 = *(_QWORD*)(v184 + 56);
					if (!v184)
						goto LABEL_303;
				}
				v190 = (wchar_t*)sub_1401A4F40(v184 + 32);
				sub_1401A52E0(v190, &v282);
			}
		LABEL_303:
			v191 = sub_1400F66F0(&v252, v181, &word_140A31B38, 0xFFFFFFFF);
			if (&v285 == v191)
			{
				v192 = qword_140C63678;
			}
			else
			{
				sub_1401429A0(qword_140C63678, v285);
				v192 = qword_140C63678;
				v285 = *v191;
				if ((unsigned __int64)v285 < *(_QWORD*)(qword_140C63678 + 48))
				{
					v193 = *(_QWORD*)(qword_140C63678 + 40);
					v194 = 32i64 * v285;
					v195 = *(_DWORD*)(v193 + v194 + 16);
					if ((unsigned int)(v195 - 1) <= 0xFFFFFFFD)
						*(_DWORD*)(v193 + v194 + 16) = v195 + 1;
				}
			}
			sub_1401429A0(v192, v252);
			v196 = 0i64;
			for (ii = 0i64; ii < 6; ++ii)
			{
				v198 = off_140A197A0[ii];
				v249 = 0;
				v199 = sub_1401A6B80(v181, v198);
				if (v199)
				{
					v200 = (wchar_t*)sub_1401A4F40(v199 + 32);
					sub_1401A52E0(v200, &v249);
					if (v249)
						v196 |= 1i64 << ii;
				}
			}
			v183 = v261;
			v303 = v196;
			v201 = *(_QWORD*)(v181 + 96);
			if (v201)
			{
				while (1)
				{
					v202 = L"Font";
					v203 = (wchar_t*)sub_1401A4F40(v201 + 8);
					if (v203 == L"Font")
						break;
					v204 = *v203;
					v205 = 0;
					if (!*v203)
						goto LABEL_323;
					do
					{
						if (!*v202 || v204 != *v202)
							break;
						v206 = v205 == 0x7FFFFFFF;
						if (v205 == 0x7FFFFFFF)
							goto LABEL_321;
						v204 = v203[1];
						++v203;
						++v202;
						++v205;
					} while (v204);
					v206 = v205 == 0x7FFFFFFF;
				LABEL_321:
					if (v206)
						break;
					if (!*v203)
					{
					LABEL_323:
						if (!*v202)
							break;
					}
					v201 = *(_QWORD*)(v201 + 56);
					if (!v201)
						goto LABEL_325;
				}
				v207 = sub_1401A4F40(v201 + 32);
			}
			else
			{
			LABEL_325:
				v207 = 0i64;
			}
			v208 = (int*)&unk_1409D45EC;
			if (v207)
				v208 = (int*)v207;
			v209 = 0i64;
			if (*(_WORD*)v208)
			{
				do
					++v209;
				while (*((_WORD*)v208 + v209));
			}
			v210 = (int*)((char*)v208 + 2 * v209);
			v211 = (v302 - v301) >> 1;
			v212 = (2 * v209) >> 1;
			if (v212 > v211)
			{
				sub_1407DB590((int*)v301, v208, 2 * v211);
				sub_14001C310(&v300, (int*)((char*)v208 + 2 * ((v302 - v301) >> 1)), v210);
			}
			else
			{
				v213 = 2 * v212;
				sub_1407DB590((int*)v301, v208, v213);
				v215 = v302;
				v216 = (int*)&v301[v213];
				if (v216 != (int*)v302)
				{
					sub_1407DB590(v216, (int*)v302, 2ui64);
					v302 -= 2 * ((v215 - (char*)v216) >> 1);
				}
			}
			v217 = (_QWORD*)sub_1400F6570((__int64)&v272, v214, v181, L"TextId", L"Text");
			v218 = v297;
			v297 = v217[1];
			v217[1] = v218;
			v219 = v298;
			v298 = v217[2];
			v217[2] = v219;
			v220 = v299;
			v299 = v217[3];
			v217[3] = v220;
			if ((_QWORD)v273)
				sub_14018B900(v273, 0);
			v221 = sub_1400F66F0(&v253, v181, &word_140A31AB8, 0xFFFFFFFF);
			if (&v286 == v221)
			{
				v222 = qword_140C63678;
			}
			else
			{
				sub_1401429A0(qword_140C63678, v286);
				v222 = qword_140C63678;
				v286 = *v221;
				if ((unsigned __int64)v286 < *(_QWORD*)(qword_140C63678 + 48))
				{
					v223 = *(_QWORD*)(qword_140C63678 + 40);
					v224 = 32i64 * v286;
					v225 = *(_DWORD*)(v223 + v224 + 16);
					if ((unsigned int)(v225 - 1) <= 0xFFFFFFFD)
						*(_DWORD*)(v223 + v224 + 16) = v225 + 1;
				}
			}
			sub_1401429A0(v222, v253);
			v281 = 1;
			if (v282)
			{
				v296[0] = 1065353216;
				v226 = sub_1401A6B80(v181, L"Width");
				if (v226)
				{
					v227 = (_WORD*)sub_1401A4F40(v226 + 32);
					sub_1407DF428(v227, (__int64)L"%f", v296);
				}
			}
			else
			{
				LODWORD(v250) = -1;
				v236 = sub_1401A6B80(v181, L"ResizeHandle");
				if (v236)
				{
					v237 = (_WORD*)sub_1401A4F40(v236 + 32);
					if ((unsigned int)sub_1407DF428(v237, (__int64)L"%d", &v250) == 1)
						LODWORD(v250) = v250 - 1;
				}
				v238 = sub_1401A6B80(v181, L"Sprite");
				if (v238)
					v238 = sub_1401A4F40(v238 + 32);
				v239 = (int*)&unk_1409D4654;
				if (v238)
					v239 = (int*)v238;
				v240 = 0i64;
				if (*(_WORD*)v239)
				{
					do
						++v240;
					while (*((_WORD*)v239 + v240));
				}
				sub_14001C480((__int64)v283, v239, (int*)((char*)v239 + 2 * v240));
				v295 = 0.0;
				v241 = sub_1401A6B80(v181, L"Rotation");
				if (v241)
				{
					v242 = (_WORD*)sub_1401A4F40(v241 + 32);
					sub_1407DF428(v242, (__int64)L"%f", &v295);
				}
				v295 = v295 * (float)(*(float*)&dword_140C3C148 * 0.0027777778);
				if ((v250 & 0x80000000) == 0i64 && !*(_BYTE*)(*(_QWORD*)(v182 + 8) + 2825i64))
				{
					sub_1400D2E90(v81, (__int64)&v281, v250);
					goto LABEL_346;
				}
			}
			sub_1400D3000(v81, &v281);
		LABEL_346:
			if (v301)
				sub_14018B900((__int64)v301, 0);
			if (v297)
				sub_14018B900(v297, 0);
			sub_1401429A0(qword_140C63678, v286);
			sub_1401429A0(qword_140C63678, v285);
			if (v284)
				sub_14018B900(v284, 0);
			v181 = sub_1401A5BC0(v181, L"Pixie");
			if (!v181)
			{
				v88 = v267;
				break;
			}
		}
	}
	v228 = 0;
	v229 = 0i64;
	do
	{
		v230 = sub_1401A6B80(v88, off_140A33318[v229]);
		if (v230)
		{
			v231 = (int*)sub_1401A4F40(v230 + 32);
			v232 = v231;
			if (v231)
			{
				if (*(_WORD*)v231)
				{
					v233 = 0;
					while (1)
					{
						v234 = sub_1401A6B80(v88, off_140A33110[v229]);
						v235 = v234 ? sub_1401A4F40(v234 + 32) : 0i64;
						if ((int*)v235 == v232)
							break;
						if (++v233 >= 4)
						{
							if (*(_WORD*)v232)
							{
								v243 = *(_QWORD*)(v81 + 16);
								v244 = (_QWORD*)(v243 ? v243 + 488 : *(_QWORD*)(v81 + 32) + 2648i64);
								v245 = sub_14014E670(v244, v232);
								if (v245)
									sub_14014E190(v245, (__int64(__fastcall***)(_QWORD))v81, v228);
							}
							break;
						}
					}
				}
			}
		}
		++v228;
		++v229;
	} while (v228 < 4);
	sub_1400D4070(v81, 3u, (char*)v81, byte_1409D03A6);
	v246 = v251;
	if (v268)
		sub_14018B900((__int64)v268, 0);
	sub_1401429A0(qword_140C63678, v246);
	if (v257)
		sub_14018B900(v257, 0);
	sub_1401429A0(qword_140C63678, v255);
LABEL_394:
	if (v269)
		sub_14018B900((__int64)v269, 0);
	if (v270)
		sub_14018B900((__int64)v270, 0);
	return v81;
}
// 1400F6E65: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1400F6F01: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1400F78DC: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1400F7A17: conditional instruction was optimized away because rdi.8!=0
// 1400F7E3D: conditional instruction was optimized away because rdi.8!=0
// 1400F8068: conditional instruction was optimized away because rdi.8!=0
// 1400F755D: variable 'v108' is possibly undefined
// 1400F7625: variable 'v119' is possibly undefined
// 1400F792B: variable 'v248' is possibly undefined
// 1400F80C2: variable 'v214' is possibly undefined
// 1409D03A6: using guessed type _BYTE byte_1409D03A6[2];
// 1409E4114: using guessed type wchar_t aD_16[3];
// 1409E441C: using guessed type wchar_t asc_1409E441C[3];
// 140A190C8: using guessed type wchar_t aSwallowmousecl[19];
// 140A191D0: using guessed type wchar_t aItemslotwindow[15];
// 140A191F0: using guessed type wchar_t aWindow_3[7];
// 140A19200: using guessed type wchar_t aIgnoremouse[12];
// 140A19218: using guessed type wchar_t aWindow_4[7];
// 140A19228: using guessed type wchar_t aAntiimmersive[14];
// 140A192D8: using guessed type wchar_t aNewcontroldept[16];
// 140A197A0: using guessed type wchar_t *off_140A197A0[6];
// 140A31758: using guessed type wchar_t aClass[6];
// 140A31790: using guessed type wchar_t aName_6[5];
// 140A317D0: using guessed type wchar_t aControl[8];
// 140A317F0: using guessed type wchar_t aSubclass[9];
// 140A31808: using guessed type wchar_t aTemplate[9];
// 140A31820: using guessed type wchar_t aWindowsoundtem[20];
// 140A31848: using guessed type wchar_t aSubclassparam[14];
// 140A31898: using guessed type wchar_t aWidth[6];
// 140A318C8: using guessed type wchar_t aTextid[7];
// 140A318D8: using guessed type wchar_t aPixie[6];
// 140A318E8: using guessed type wchar_t aEvent[6];
// 140A31908: using guessed type wchar_t aSprite[7];
// 140A31918: using guessed type wchar_t aText[5];
// 140A31990: using guessed type wchar_t aLine[5];
// 140A319A0: using guessed type wchar_t aRotation[9];
// 140A319B8: using guessed type wchar_t aFunction_2[9];
// 140A319D0: using guessed type wchar_t aName_7[5];
// 140A31A10: using guessed type wchar_t aBgopacity[10];
// 140A31AA8: using guessed type wchar_t aFont[5];
// 140A31AB8: using guessed type __int16 word_140A31AB8;
// 140A31AE0: using guessed type wchar_t aTooltipid[10];
// 140A31AF8: using guessed type wchar_t aTooltip[8];
// 140A31B20: using guessed type wchar_t aTooltipfont[12];
// 140A31B38: using guessed type __int16 word_140A31B38;
// 140A31B48: using guessed type __int16 word_140A31B48;
// 140A31C80: using guessed type wchar_t aScale[6];
// 140A31CB0: using guessed type wchar_t aVisible[8];
// 140A31D00: using guessed type wchar_t aHideineditor[13];
// 140A31FE0: using guessed type wchar_t aResizehandle[13];
// 140A32730: using guessed type wchar_t aTooltiptype[12];
// 140A33110: using guessed type wchar_t *off_140A33110[10];
// 140A33318: using guessed type wchar_t *off_140A33318[6];
// 140A33380: using guessed type wchar_t *off_140A33380[26];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C3C148: using guessed type int dword_140C3C148;
// 140C3C8B0: using guessed type wchar_t *off_140C3C8B0[37];
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C8A0F4: using guessed type _DWORD dword_140C8A0F4;
// 140C8A0F8: using guessed type _DWORD dword_140C8A0F8;
// 1400F6B10: using guessed type int var_10C[3];
// 1400F6B10: using guessed type char var_198[8];

