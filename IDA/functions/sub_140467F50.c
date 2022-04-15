#include "../winhttp.h"

//----- (0000000140467F50) ----------------------------------------------------
void __fastcall sub_140467F50(__int64 a1, __int64 a2)
{
	__int64 v2; // r12
	__int64 v5; // rax
	__int64 v6; // rbx
	_QWORD** v7; // rdx
	_QWORD** v8; // rax
	unsigned int v9; // r12d
	_QWORD* v10; // rdi
	_QWORD* v11; // rcx
	_QWORD* v12; // rax
	_QWORD* v13; // rsi
	_QWORD* v14; // rax
	__int64 v15; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v18; // rcx
	_QWORD* v19; // rdi
	_QWORD* v20; // rsi
	__int64 v21; // rax
	__int64 v22; // rbx
	__int64 v23; // rax
	__int64 k; // rax
	__int64 m; // rax
	int v26; // eax
	__int64 v27; // rcx
	unsigned __int64 v28; // rcx
	unsigned __int64 v29; // rdx
	__int64 v30; // rcx
	__int64 v31; // rbx
	unsigned int v32; // edx
	_QWORD* v33; // r10
	__int64 v34; // rax
	__int64 v35; // r8
	__int64 v36; // rcx
	__int64 v37; // rax
	__int64 v38; // r8
	__int64 v39; // rcx
	__int64 v40; // rax
	__int64 v41; // rax
	__int64 v42; // rcx
	__int64 v43; // rdx
	__int64 v44; // r8
	__int64 v45; // rcx
	__int64 v46; // rax
	__int64 v47; // rcx
	unsigned int v48; // ecx
	__int64 v49; // rax
	unsigned __int64 v50; // rcx
	const wchar_t* v51; // rdx
	__int64 v52; // rcx
	unsigned int v53; // ecx
	__int64 v54; // rax
	__int64 v55; // r13
	unsigned __int64 v56; // rcx
	__int64 v57; // rdx
	unsigned int* v58; // rdi
	unsigned __int64* v59; // rbx
	__int64 v60; // r15
	unsigned __int64 v61; // rcx
	unsigned int* v62; // rbx
	__int64 v63; // rdi
	__int64 v64; // rdx
	__int64 v65; // rcx
	__int64(__fastcall * v66)(wchar_t**, _QWORD, __int64); // rax
	unsigned int v67; // ebx
	__int64 v68; // rax
	__int64 v69; // rbx
	unsigned int v70; // edi
	__int64 v71; // rax
	__int64 v72; // rcx
	float v73; // xmm0_4
	float v74; // xmm1_4
	__int64 v75; // rcx
	unsigned int v76; // ebx
	unsigned int v77; // esi
	__int64 v78; // rax
	__int64 v79; // rcx
	__int64 v80; // rax
	int v81; // ecx
	unsigned __int64 v82; // rcx
	_DWORD* v83; // rax
	unsigned int v84; // r12d
	__int64 v85; // r15
	_DWORD* v86; // rax
	__int64 v87; // rdi
	BOOL v88; // ebx
	char v89; // bl
	int v90; // eax
	int v91; // ebx
	int v92; // eax
	unsigned __int64 v93; // rcx
	int v94; // ebx
	__int64 v95; // rax
	__int64 v96; // rcx
	__int64 v97; // rcx
	_DWORD* v98; // rcx
	bool v99; // zf
	int v100; // eax
	__int64 v101; // rcx
	int v102; // eax
	__int64 v103; // rcx
	int v104; // eax
	__int64 v105; // rcx
	int v106; // eax
	__int64 v107; // rcx
	int v108; // eax
	__int64 v109; // rcx
	int v110; // eax
	__int64 v111; // rcx
	int v112; // eax
	__int64 v113; // rcx
	int v114; // eax
	__int64 v115; // rcx
	int v116; // eax
	__int64 v117; // rcx
	int v118; // eax
	__int64 v119; // rcx
	int v120; // eax
	__int64 v121; // rcx
	int v122; // eax
	__int64 v123; // rcx
	float v124; // xmm0_4
	unsigned int v125; // ecx
	__int64 v126; // rax
	__int64 v127; // rcx
	__int64 v128; // rcx
	int v129; // ebx
	__int64 v130; // r8
	unsigned int v131; // eax
	__int64 v132; // r8
	__int64 v133; // rcx
	__int64 v134; // rcx
	__int64 v135; // rax
	__int64 v136; // r8
	__int64 v137; // r9
	__int64 v138; // rax
	_QWORD* v139; // rcx
	unsigned __int64 v140; // [rsp+38h] [rbp-29h] BYREF
	__int64 v141; // [rsp+40h] [rbp-21h]
	__int128 v142; // [rsp+48h] [rbp-19h]
	unsigned __int64 v143; // [rsp+C8h] [rbp+67h] BYREF
	__int64 v144; // [rsp+D0h] [rbp+6Fh]

	v2 = *(_QWORD*)(a1 + 5864);
	v144 = v2;
	if (a2 == v2)
		return;
	if (v2)
	{
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v2 + 648i64))(v2, 0i64, 0i64);
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 664i64))(
			*(_QWORD*)(a1 + 5864),
			0i64,
			0i64);
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 680i64))(
			*(_QWORD*)(a1 + 5864),
			0i64,
			0i64);
		if (*(_QWORD*)(a1 + 6184))
			(*(void(__fastcall**)(_QWORD, __int64, __int64, __int64(__fastcall*)(__int64*, __int64, __m128*), void(__fastcall*)(__int64*, __int64, __int64), __int64))(**(_QWORD**)(a1 + 5864) + 1024i64))(
				*(_QWORD*)(a1 + 5864),
				1i64,
				25i64,
				sub_140476A20,
				sub_140476BC0,
				a1);
		v5 = *(_QWORD*)(a1 + 6208);
		v6 = *(_QWORD*)(v5 + 16);
		if (v6 != v5)
		{
			v7 = (_QWORD**)qword_140C7CF68;
			do
			{
				v8 = *(_QWORD***)(v6 + 48);
				v9 = *(_DWORD*)(v6 + 32);
				v10 = *v8;
				if (*v8 != v8)
				{
					do
					{
						v11 = *v7;
						v12 = *v7;
						if (*v7 != v7)
						{
							do
								v12 = (_QWORD*)*v12;
							while (v12 != v7);
							if (v11 != v7)
							{
								do
								{
									v13 = (_QWORD*)*v11;
									if (v10 + 2 == (_QWORD*)v11[2])
									{
										v14 = (_QWORD*)v11[1];
										*v14 = v13;
										v13[1] = v14;
										sub_14018B900((__int64)v11, 0);
										v7 = (_QWORD**)qword_140C7CF68;
									}
									v11 = v13;
								} while (v13 != v7);
							}
						}
						v10 = (_QWORD*)*v10;
					} while (v10 != *(_QWORD**)(v6 + 48));
				}
				if (**(_QWORD**)(v6 + 48) != *(_QWORD*)(v6 + 48))
				{
					(*(void(__fastcall**)(_QWORD, __int64, _QWORD, _BOOL8(__fastcall*)(__int64*, unsigned int, __m128*), void(__fastcall*)(__int64*, int, __int64, double), __int64))(**(_QWORD**)(a1 + 5864) + 1024i64))(
						*(_QWORD*)(a1 + 5864),
						1i64,
						v9,
						sub_140477460,
						sub_140477A10,
						a1);
					v7 = (_QWORD**)qword_140C7CF68;
				}
				v15 = *(_QWORD*)(v6 + 24);
				if (v15)
				{
					v6 = *(_QWORD*)(v6 + 24);
					for (i = *(_QWORD*)(v15 + 16); i; i = *(_QWORD*)(i + 16))
						v6 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v6 + 8); v6 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v6 = j;
					if (*(_QWORD*)(v6 + 24) != j)
						v6 = j;
				}
			} while (v6 != *(_QWORD*)(a1 + 6208));
			v2 = v144;
		}
		v18 = *(_QWORD*)(a1 + 6320);
		if (v18)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 936i64))(v18);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 5864) + 936i64))(*(_QWORD*)(a1 + 5864));
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 5864) + 8i64))(*(_QWORD*)(a1 + 5864));
	}
	v19 = (_QWORD*)(a1 + 13976);
	if (*(_QWORD*)(a1 + 13976))
	{
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v19 + 8i64))(*v19);
		*v19 = 0i64;
		*v19 = 0i64;
	}
	v20 = (_QWORD*)(a1 + 13984);
	if (*(_QWORD*)(a1 + 13984))
	{
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v20 + 8i64))(*v20);
		*v20 = 0i64;
		*v20 = 0i64;
	}
	*(_QWORD*)(a1 + 5864) = a2;
	if (a2)
	{
		(*(void(__fastcall**)(__int64, bool))(*(_QWORD*)a2 + 392i64))(a2, *(_DWORD*)(a1 + 4920) != 0);
		(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64*, unsigned int, int*, int, int, __int64), __int64))(**(_QWORD**)(a1 + 5864) + 648i64))(
			*(_QWORD*)(a1 + 5864),
			sub_140472190,
			a1);
		(*(void(__fastcall**)(_QWORD, __int64(__fastcall*)(__int64*, int, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 5864) + 664i64))(
			*(_QWORD*)(a1 + 5864),
			sub_140472510,
			a1);
		(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64*, unsigned int, int, __m128*, int, int, __m128*), __int64))(**(_QWORD**)(a1 + 5864) + 680i64))(
			*(_QWORD*)(a1 + 5864),
			sub_140472590,
			a1);
		if (*(_QWORD*)(a1 + 6184))
			(*(void(__fastcall**)(_QWORD, __int64, __int64, __int64(__fastcall*)(__int64*, __int64, __m128*), void(__fastcall*)(__int64*, __int64, __int64), __int64))(**(_QWORD**)(a1 + 5864) + 1016i64))(
				*(_QWORD*)(a1 + 5864),
				1i64,
				25i64,
				sub_140476A20,
				sub_140476BC0,
				a1);
		v21 = *(_QWORD*)(a1 + 6208);
		v22 = *(_QWORD*)(v21 + 16);
		if (v22 != v21)
		{
			do
			{
				if (**(_QWORD**)(v22 + 48) != *(_QWORD*)(v22 + 48))
					(*(void(__fastcall**)(_QWORD, __int64, _QWORD, _BOOL8(__fastcall*)(__int64*, unsigned int, __m128*), void(__fastcall*)(__int64*, int, __int64, double), __int64))(**(_QWORD**)(a1 + 5864) + 1016i64))(
						*(_QWORD*)(a1 + 5864),
						1i64,
						*(unsigned int*)(v22 + 32),
						sub_140477460,
						sub_140477A10,
						a1);
				v23 = *(_QWORD*)(v22 + 24);
				if (v23)
				{
					v22 = *(_QWORD*)(v22 + 24);
					for (k = *(_QWORD*)(v23 + 16); k; k = *(_QWORD*)(k + 16))
						v22 = k;
				}
				else
				{
					for (m = *(_QWORD*)(v22 + 8); v22 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
						v22 = m;
					if (*(_QWORD*)(v22 + 24) != m)
						v22 = m;
				}
			} while (v22 != *(_QWORD*)(a1 + 6208));
		}
		if (*(_QWORD*)(a1 + 6320) && !*(_DWORD*)(*(_QWORD*)(qword_140C65898 + 29080) + 24i64))
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 896i64))(*(_QWORD*)(a1 + 5864), 1i64);
		v26 = *(_DWORD*)(a1 + 128);
		if (v26 == 18)
		{
			v27 = *(_QWORD*)(a1 + 3336);
			if (v27)
			{
				if (*v19
					|| ((v28 = *(_QWORD*)(v27 + 8)) != 0
						? (v28 <= qword_140C3FE70
							? (v29 = v28 + qword_140C3FE68)
							: (v29 = 0i64))
						: (v29 = 0i64),
						(*(int(__fastcall**)(_QWORD, unsigned __int64, __int64, _QWORD))(**(_QWORD**)(qword_140C65898 + 29264)
							+ 40i64))(
								*(_QWORD*)(qword_140C65898 + 29264),
								v29,
								a1 + 13976,
								0i64) >= 0))
				{
					v30 = *v19;
					v140 = 150i64;
					v141 = 1065353216i64;
					v142 = 0ui64;
					(*(void(__fastcall**)(__int64, _QWORD, unsigned __int64*))(*(_QWORD*)v30 + 584i64))(v30, 0i64, &v140);
					(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 5864) + 896i64))(
						*(_QWORD*)(a1 + 5864),
						168i64,
						*v19);
				}
				v31 = qword_140C65898;
				v32 = *(_DWORD*)(a1 + 8);
				v33 = *(_QWORD**)(qword_140C65898 + 32144);
				v34 = v33[9];
				v35 = v34;
				v36 = *(_QWORD*)(v34 + 8);
				while (v36)
				{
					if (*(_DWORD*)(v36 + 32) < v32)
					{
						v36 = *(_QWORD*)(v36 + 24);
					}
					else
					{
						v35 = v36;
						v36 = *(_QWORD*)(v36 + 16);
					}
				}
				if (v35 == v34 || (v143 = v35, v32 < *(_DWORD*)(v35 + 32)))
					v143 = v34;
				if (v143 != v34)
					goto LABEL_278;
				v37 = v33[13];
				v38 = v37;
				v39 = *(_QWORD*)(v37 + 8);
				while (v39)
				{
					if (*(_DWORD*)(v39 + 32) < v32)
					{
						v39 = *(_QWORD*)(v39 + 24);
					}
					else
					{
						v38 = v39;
						v39 = *(_QWORD*)(v39 + 16);
					}
				}
				if (v38 == v37 || (v143 = v38, v32 < *(_DWORD*)(v38 + 32)))
					v143 = v37;
				if (v143 == v37)
				{
					v40 = sub_1403967F0((__int64)v33, v32);
					if (!v40)
						goto LABEL_158;
					v41 = *(_QWORD*)(v40 + 16);
					if (!v41
						|| !*(_DWORD*)(v41 + 432)
						|| !*v20
						&& (*(int(__fastcall**)(_QWORD, const wchar_t*, __int64, _QWORD))(**(_QWORD**)(v31 + 29264) + 40i64))(
							*(_QWORD*)(v31 + 29264),
							L"Art\\Icon\\Attachment\\QuestBang\\Icon_Attachment_QuestBang_000.m3",
							a1 + 13984,
							0i64) < 0)
					{
						goto LABEL_158;
					}
					v42 = *v20;
					v140 = 150i64;
					v141 = 1065353216i64;
					v142 = 0ui64;
					(*(void(__fastcall**)(__int64, _QWORD, unsigned __int64*))(*(_QWORD*)v42 + 584i64))(v42, 0i64, &v140);
					v43 = 22i64;
				}
				else
				{
				LABEL_278:
					if (!*v20)
					{
						v44 = v33[5];
						v45 = v44;
						v46 = *(_QWORD*)(v44 + 8);
						while (v46)
						{
							if (*(_DWORD*)(v46 + 32) < v32)
							{
								v46 = *(_QWORD*)(v46 + 24);
							}
							else
							{
								v45 = v46;
								v46 = *(_QWORD*)(v46 + 16);
							}
						}
						if (v45 == v44 || (v143 = v45, v32 < *(_DWORD*)(v45 + 32)))
							v143 = v44;
						if (v143 == v44 || v143 == -40i64 || (v47 = *(_QWORD*)(v143 + 56)) == 0)
							v48 = 2;
						else
							v48 = *(_DWORD*)(v47 + 344);
						v49 = sub_14020CE20(v48);
						if (!v49
							|| ((v50 = *(_QWORD*)(v49 + 48)) != 0
								? (v50 <= qword_140C3FE70
									? (v51 = (const wchar_t*)(v50 + qword_140C3FE68))
									: (v51 = 0i64))
								: (v51 = 0i64),
								!v51 || !*v51))
						{
							v51 = L"Art\\Icon\\Attachment\\Dice\\Icon_Attachment_Dice_000.m3";
						}
						if ((*(int(__fastcall**)(_QWORD, const wchar_t*, __int64, _QWORD))(**(_QWORD**)(qword_140C65898 + 29264)
							+ 40i64))(
								*(_QWORD*)(qword_140C65898 + 29264),
								v51,
								a1 + 13984,
								0i64) < 0)
							*v20 = 0i64;
					}
					v52 = *v20;
					if (!*v20)
						goto LABEL_158;
					v140 = 150i64;
					v141 = 1065353216i64;
					v142 = 0ui64;
					(*(void(__fastcall**)(__int64, _QWORD, unsigned __int64*))(*(_QWORD*)v52 + 584i64))(v52, 0i64, &v140);
					v43 = 22i64;
				}
			LABEL_157:
				(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 5864) + 896i64))(
					*(_QWORD*)(a1 + 5864),
					v43,
					*v20);
			LABEL_158:
				if (!*(_QWORD*)(a1 + 5872))
				{
				LABEL_221:
					if (!(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 408i64))(
						*(_QWORD*)(a1 + 5864),
						166i64)
						|| (v99 = (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 408i64))(
							*(_QWORD*)(a1 + 5864),
							167i64) == 0,
							v100 = 1,
							v99))
					{
						v100 = 0;
					}
					v101 = *(_QWORD*)(a1 + 5864);
					*(_DWORD*)(a1 + 4828) = v100;
					if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v101 + 408i64))(v101, 606i64)
						|| (v99 = (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 408i64))(
							*(_QWORD*)(a1 + 5864),
							607i64) == 0,
							v102 = 1,
							v99))
					{
						v102 = 0;
					}
					v103 = *(_QWORD*)(a1 + 5864);
					*(_DWORD*)(a1 + 4832) = v102;
					if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v103 + 448i64))(v103, 2i64)
						|| (v99 = (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 448i64))(
							*(_QWORD*)(a1 + 5864),
							3i64) == 0,
							v104 = 1,
							v99))
					{
						v104 = 0;
					}
					v105 = *(_QWORD*)(a1 + 5864);
					*(_DWORD*)(a1 + 4836) = v104;
					if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v105 + 408i64))(v105, 7544i64)
						|| (v99 = (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 408i64))(
							*(_QWORD*)(a1 + 5864),
							7545i64) == 0,
							v106 = 1,
							v99))
					{
						v106 = 0;
					}
					v107 = *(_QWORD*)(a1 + 5864);
					*(_DWORD*)(a1 + 4840) = v106;
					if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v107 + 448i64))(v107, 250i64)
						|| (v99 = (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 448i64))(
							*(_QWORD*)(a1 + 5864),
							251i64) == 0,
							v108 = 1,
							v99))
					{
						v108 = 0;
					}
					v109 = *(_QWORD*)(a1 + 5864);
					*(_DWORD*)(a1 + 4844) = v108;
					v110 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v109 + 448i64))(v109, 108i64);
					v111 = *(_QWORD*)(a1 + 5864);
					*(_DWORD*)(a1 + 4852) = v110;
					v112 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v111 + 448i64))(v111, 252i64);
					v113 = *(_QWORD*)(a1 + 5864);
					*(_DWORD*)(a1 + 4856) = v112;
					v114 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v113 + 408i64))(v113, 154i64);
					v115 = *(_QWORD*)(a1 + 5864);
					*(_DWORD*)(a1 + 4860) = v114;
					v116 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v115 + 408i64))(v115, 556i64);
					v117 = *(_QWORD*)(a1 + 5864);
					*(_DWORD*)(a1 + 4864) = v116;
					if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v117 + 448i64))(v117, 166i64)
						|| (v118 = 1, *(_DWORD*)(a1 + 128) != 13))
					{
						v118 = 0;
					}
					v119 = *(_QWORD*)(a1 + 5864);
					*(_DWORD*)(a1 + 4956) = v118;
					if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v119 + 408i64))(v119, 7707i64)
						|| (v99 = (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 408i64))(
							*(_QWORD*)(a1 + 5864),
							7706i64) == 0,
							v120 = 0,
							!v99))
					{
						v120 = 1;
					}
					v121 = *(_QWORD*)(a1 + 5864);
					*(_DWORD*)(a1 + 4868) = v120;
					v122 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v121 + 408i64))(v121, 5414i64);
					v123 = *(_QWORD*)(a1 + 5864);
					*(_DWORD*)(a1 + 4872) = v122;
					v124 = (*(float(__fastcall**)(__int64))(*(_QWORD*)v123 + 1232i64))(v123);
					v125 = *(_DWORD*)(a1 + 216);
					*(float*)(a1 + 1392) = fmaxf(v124, 0.5);
					v126 = sub_14022D500(v125);
					v127 = *(_QWORD*)(a1 + 5864);
					if (v126)
						*(float*)(a1 + 1396) = fminf(
							(*(float(__fastcall**)(__int64))(*(_QWORD*)v127 + 1240i64))(v127),
							*(float*)(v126 + 92) * 1.8);
					else
						*(float*)(a1 + 1396) = (*(float(__fastcall**)(__int64))(*(_QWORD*)v127 + 1240i64))(v127);
					if (*(_QWORD*)(a1 + 5880))
					{
						v128 = *(_QWORD*)(a1 + 5864);
						v140 = 0i64;
						v141 = 1065353216i64;
						v142 = 0ui64;
						(*(void(__fastcall**)(__int64, _QWORD, unsigned __int64*))(*(_QWORD*)v128 + 584i64))(v128, 0i64, &v140);
					}
					if (*(_QWORD*)(a1 + 3264))
					{
						v129 = *(_DWORD*)(a1 + 5160) == 63;
						sub_140471EF0(a1, v129, 1);
						sub_140471EF0(a1, v129, 0);
						(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 3264) + 168i64))(
							*(_QWORD*)(a1 + 3264),
							v129 != 0 ? 3 : 0,
							3i64);
						sub_140195D70(a1 + 5168);
						sub_140195D70(a1 + 5240);
						if (*(_QWORD*)(a1 + 3376) != *(_QWORD*)(a1 + 3384) && !*(_DWORD*)(a1 + 240))
						{
							v130 = *(int*)(a1 + 52);
							if (*(_DWORD*)(a1 + 236) == (_DWORD)v130)
							{
								v131 = *(_DWORD*)(a1 + 216);
								if (*(_DWORD*)(a1 + 232) == v131)
								{
									if (v131 > 0x10 || (unsigned int)v130 > 2)
										v132 = qword_140C658E8;
									else
										v132 = *(_QWORD*)(32i64 * *(int*)(a1 + 216) + *(_QWORD*)(qword_140C658E8 + 88) + 8) + 80 * v130;
									(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 3264) + 312i64))(
										*(_QWORD*)(a1 + 3264),
										a1 + 3368,
										v132);
								}
							}
						}
					}
					(***(void(__fastcall****)(_QWORD))(a1 + 5864))(*(_QWORD*)(a1 + 5864));
					goto LABEL_258;
				}
				v76 = 1000;
				if (*(_BYTE*)(a1 + 432))
					v76 = 0;
				if (*(_DWORD*)(a1 + 680))
				{
					v77 = 1334;
					if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 32i64))(a1))
					{
						v78 = *(_QWORD*)(a1 + 184);
						if (v78)
						{
							if ((*(_DWORD*)(v78 + 96) & 0x100000) != 0)
							{
								v79 = *(_QWORD*)(a1 + 5864);
								if (v79)
								{
									if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v79 + 408i64))(v79, 1334i64)
										&& (!*(_QWORD*)(a1 + 24) || (*(_DWORD*)(a1 + 40) & 0x800) == 0))
									{
										*(_DWORD*)(a1 + 4932) = 42;
										goto LABEL_219;
									}
								}
							}
						}
					}
					if (v76)
					{
						v80 = *(_QWORD*)(a1 + 24);
						if (!v80)
							goto LABEL_179;
						if ((*(_DWORD*)(a1 + 40) & 0x800) == 0 || *(_DWORD*)(a1 + 128) == 18)
						{
							v81 = *(_DWORD*)(a1 + 128);
							if (v81 != 4 && v81 != 30)
							{
								v82 = 0i64;
								v83 = (_DWORD*)(*(_QWORD*)(v80 + 208) + 20i64);
								while (!*v83)
								{
									++v82;
									++v83;
									if (v82 >= 5)
										goto LABEL_179;
								}
							LABEL_180:
								v77 = 1106;
							LABEL_181:
								if ((*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 408i64))(
									*(_QWORD*)(a1 + 5864),
									v77))
								{
									v84 = (int)((*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890) * 65536.0);
									if (*(_QWORD*)(a1 + 5864))
									{
										v85 = (unsigned int)sub_140470540((_DWORD*)a1, v77);
										v86 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 5864)
											+ 424i64))(
												*(_QWORD*)(a1 + 5864),
												v85,
												v84);
										v87 = (__int64)v86;
										if (*v86 != 150)
										{
											v88 = *(_DWORD*)(a1 + 5160) == 63;
											sub_140470B80(a1, (v86[2] & 1) == 0, v86[2] & 8);
											if ((*(_DWORD*)(a1 + 5160) == 63) == v88
												|| (v85 = (unsigned int)sub_140470540((_DWORD*)a1, v77),
													v87 = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 5864) + 424i64))(
														*(_QWORD*)(a1 + 5864),
														v85,
														v84),
													*(_DWORD*)v87 != 150))
											{
												v93 = *(int*)(v87 + 16);
												if (*(_DWORD*)v87 == v77)
												{
													if (v93 >= 8)
														v94 = 9;
													else
														v94 = dword_140B670F0[v93];
												}
												else if (v93 >= 8)
												{
													v94 = 13;
												}
												else
												{
													v94 = dword_140B67110[v93];
												}
												v95 = sub_1404695E0(a1);
												if (*(_DWORD*)(a1 + 4832)
													&& *(float*)(a1 + 4820) == 0.0
													&& fabs(*(float*)(a1 + 4808)) > 0.0000099999997
													&& (!*(_DWORD*)(a1 + 4948)
														|| (*(_BYTE*)(v87 + 4) & 2) != 0
														|| v95
														&& (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v95 + 312) + 112i64) + 264i64) & 0x400000) != 0))
												{
													v96 = *(_QWORD*)(a1 + 5864);
													*(_DWORD*)(a1 + 4880) = 1;
													*(_DWORD*)(a1 + 4820) = 1041865114;
													v140 = 0i64;
													v141 = 1065353216i64;
													v142 = 0ui64;
													(*(void(__fastcall**)(__int64, __int64, unsigned __int64*))(*(_QWORD*)v96 + 584i64))(
														v96,
														7i64,
														&v140);
												}
												v140 = __PAIR64__(v84, v85);
												LODWORD(v142) = v94;
												*(_QWORD*)((char*)&v142 + 4) = 2i64;
												HIDWORD(v142) = 0;
												v97 = *(_QWORD*)(a1 + 5864);
												v141 = 1065353216i64;
												(*(void(__fastcall**)(__int64, __int64, unsigned __int64*))(*(_QWORD*)v97 + 584i64))(
													v97,
													4i64,
													&v140);
												v98 = *(_DWORD**)(a1 + 5600);
												if (v98)
													sub_14071A9F0(v98, 1);
											}
											else
											{
												v89 = ~(unsigned __int8)*(_DWORD*)(a1 + 5160) & 4;
												if (*(_QWORD*)(a1 + 3264))
												{
													v90 = sub_140467ED0(a1);
													*(_DWORD*)(a1 + 5164) &= ~4u;
													*(_DWORD*)(a1 + 5164) |= v89 & 4;
													v91 = *(_DWORD*)(a1 + 5164);
													if ((v90 & 0xFFFFFFF6) == 0 && v90 != 1)
														v91 = 63;
													v92 = *(_DWORD*)(a1 + 5160);
													if (v92 != v91)
													{
														if (v91 == 63)
														{
															sub_140195D70(a1 + 5168);
															sub_140195D70(a1 + 5240);
															(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 3264) + 168i64))(
																*(_QWORD*)(a1 + 3264),
																3i64,
																3i64);
															*(_DWORD*)(a1 + 5312) = 1;
															if (*(_QWORD*)(a1 + 5864))
															{
																sub_140471EF0(a1, 1, 1);
																sub_140471EF0(a1, 1, 0);
															}
														}
														else if (v92 == 63)
														{
															LODWORD(v140) = 0;
															*(_QWORD*)&v142 = sub_140471E50;
															v141 = a1;
															*((_QWORD*)&v142 + 1) = 0i64;
															sub_140195960(a1 + 5168, 150, (__int64)&v140, 4);
															*(_QWORD*)&v142 = sub_140471EA0;
															LODWORD(v140) = 0;
															v141 = a1;
															*((_QWORD*)&v142 + 1) = 0i64;
															sub_140195960(a1 + 5240, 150, (__int64)&v140, 4);
															*(_DWORD*)(a1 + 5312) = 1;
														}
														if ((v91 & 4) != 0)
															sub_140195D70(a1 + 5016);
														if ((v91 & 0x10) != 0)
															sub_140195D70(a1 + 5088);
														*(_DWORD*)(a1 + 5160) = v91;
													}
												}
											}
										}
									}
									v2 = v144;
									v76 = 150;
								}
								goto LABEL_219;
							}
						LABEL_179:
							if (*(_DWORD*)(a1 + 128) != 1)
								goto LABEL_181;
							goto LABEL_180;
						}
					}
				}
			LABEL_219:
				*(_DWORD*)(a1 + 680) = 0;
				if (!v2)
					(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5872) + 368i64))(*(_QWORD*)(a1 + 5872), v76);
				goto LABEL_221;
			}
		}
		if (v26 != 31)
			goto LABEL_158;
		v53 = *(_DWORD*)(a1 + 3400);
		if (!v53)
			goto LABEL_158;
		v54 = sub_14020BD20(v53);
		v55 = v54;
		if (!v54)
			goto LABEL_158;
		if (!*v20)
		{
			v56 = *(_QWORD*)(v54 + 24);
			if (v56)
				v57 = v56 <= qword_140C3FE70 ? v56 + qword_140C3FE68 : 0i64;
			else
				v57 = 0i64;
			if ((*(int(__fastcall**)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD**)(qword_140C65898 + 29264) + 40i64))(
				*(_QWORD*)(qword_140C65898 + 29264),
				v57,
				a1 + 13984,
				0i64) < 0)
				goto LABEL_158;
		}
		v58 = (unsigned int*)(v55 + 56);
		v59 = (unsigned __int64*)(v55 + 40);
		v60 = 2i64;
		do
		{
			v61 = *v59;
			if (*v59 && v61 <= qword_140C3FE70 && v61 + qword_140C3FE68 && *(_WORD*)(v61 + qword_140C3FE68))
				(*(void(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)*v20 + 784i64))(*v20, *v58);
			++v59;
			++v58;
			--v60;
		} while (v60);
		v62 = (unsigned int*)(v55 + 216);
		v63 = 4i64;
		do
		{
			v64 = *v62;
			if ((_DWORD)v64 && (int)v64 < 202)
				(*(void(__fastcall**)(_QWORD, __int64, __int64))(*(_QWORD*)*v20 + 728i64))(*v20, v64, 1i64);
			++v62;
			--v63;
		} while (v63);
		v65 = *v20;
		v140 = 150i64;
		v141 = 1065353216i64;
		v142 = 0ui64;
		(*(void(__fastcall**)(__int64, _QWORD, unsigned __int64*))(*(_QWORD*)v65 + 584i64))(v65, 0i64, &v140);
		v66 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		v67 = *(_DWORD*)(v55 + 260);
		if (qword_140C63840)
		{
			v68 = qword_140C63840(off_140A6B630, v67, qword_140C63858);
		}
		else
		{
			if (dword_140C655EC)
			{
				v69 = 0i64;
				goto LABEL_144;
			}
			if ((int)sub_1402160E0() < 0)
			{
				v69 = 0i64;
			LABEL_143:
				v66 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
			LABEL_144:
				v70 = *(_DWORD*)(v55 + 264);
				if (v66)
				{
					v71 = v66(off_140A6B630, v70, qword_140C63858);
				LABEL_151:
					v72 = v71;
					goto LABEL_152;
				}
				if (dword_140C655EC)
				{
					v72 = 0i64;
				}
				else
				{
					if ((int)sub_1402160E0() >= 0)
					{
						v71 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A78 + 24i64))(
							qword_140C63A78,
							v70);
						goto LABEL_151;
					}
					v72 = 0i64;
				}
			LABEL_152:
				v73 = -1.0;
				v74 = -1.0;
				if (v69)
					v73 = (float)*(int*)(v69 + 4);
				if (v72)
					v74 = (float)*(int*)(v72 + 4);
				v75 = *v20;
				v143 = __PAIR64__(LODWORD(v74), LODWORD(v73));
				(*(void(__fastcall**)(__int64, unsigned __int64*))(*(_QWORD*)v75 + 288i64))(v75, &v143);
				v43 = 21i64;
				goto LABEL_157;
			}
			v68 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A78 + 24i64))(qword_140C63A78, v67);
		}
		v69 = v68;
		goto LABEL_143;
	}
LABEL_258:
	v133 = *(_QWORD*)(a1 + 5872);
	if (v133)
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v133 + 336i64))(v133, *(_QWORD*)(a1 + 5864));
	v134 = *(_QWORD*)(a1 + 5872);
	v135 = v134;
	if (!v134)
		v135 = *(_QWORD*)(a1 + 5880);
	if (v135)
	{
		if (!v134)
			v134 = *(_QWORD*)(a1 + 5880);
		*(float*)(a1 + 4928) = fmaxf(
			1.0,
			*(float*)((*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v134 + 72i64))(
				v134,
				1i64)
				+ 48)
			* 2.0);
	}
	else
	{
		*(_DWORD*)(a1 + 4928) = 1065353216;
	}
	*(_DWORD*)(a1 + 4940) = 2;
	sub_14046CDC0(a1, 1, 0);
	v138 = *(_QWORD*)(a1 + 3848);
	for (*(_DWORD*)(a1 + 14052) = 0; v138; v138 = *(_QWORD*)(v138 + 3864))
		*(_DWORD*)(v138 + 14052) = 0;
	v139 = *(_QWORD**)(qword_140C65898 + 27728);
	if (v139)
		sub_1406015C0(v139, a1);
	if (*(_QWORD*)(a1 + 5864))
		sub_140579600((__int64)v139, a1, v136, v137);
	if (!v2)
	{
		if (*(_QWORD*)(a1 + 5864))
			sub_14045F080(a1);
	}
}
// 140468929: conditional instruction was optimized away because rax.8!=0
// 1404689B9: conditional instruction was optimized away because esi.4 is in (==452|==536)
// 1404692A3: variable 'v139' is possibly undefined
// 1404692A3: variable 'v136' is possibly undefined
// 1404692A3: variable 'v137' is possibly undefined
// 140A6B630: using guessed type wchar_t *off_140A6B630[2];
// 140B07D20: using guessed type wchar_t aArtIconAttachm_0[53];
// 140B085D0: using guessed type wchar_t aArtIconAttachm[63];
// 140B670F0: using guessed type int dword_140B670F0[8];
// 140B67110: using guessed type int dword_140B67110[8];
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A78: using guessed type __int64 qword_140C63A78;
// 140C655EC: using guessed type int dword_140C655EC;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658E8: using guessed type __int64 qword_140C658E8;
// 140C77890: using guessed type __int64 qword_140C77890;
// 140C7CF68: using guessed type __int64 qword_140C7CF68;

