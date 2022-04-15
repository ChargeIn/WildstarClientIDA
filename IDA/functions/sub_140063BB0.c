#include "../winhttp.h"

//----- (0000000140063BB0) ----------------------------------------------------
__int64 __fastcall sub_140063BB0(__int64 a1, __int64* a2)
{
	__int64 v2; // rax
	int v5; // edi
	_QWORD* v6; // rcx
	__int64 v8; // rcx
	int v9; // edx
	__int64 v10; // rsi
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rax
	_QWORD* v14; // rcx
	__int64 v16; // rcx
	int v17; // edx
	__int64 v18; // rsi
	__int64 v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rax
	int v22; // eax
	_QWORD* v23; // rcx
	__int64 v24; // rdx
	__int64 v25; // rcx
	int v26; // edx
	_QWORD* v27; // rcx
	__int64 v29; // rcx
	int v30; // edx
	__int64 v31; // rsi
	__int64 v32; // rax
	__int64 v33; // rcx
	__int64 v34; // rax
	int v35; // edx
	__int64 result; // rax
	int v37; // eax
	_QWORD* v38; // rcx
	__int64 v40; // rcx
	int v41; // edx
	__int64 v42; // rsi
	__int64 v43; // rax
	__int64 v44; // rcx
	__int64 v45; // rax
	_QWORD* v46; // rcx
	__int64 v48; // rcx
	int v49; // edi
	__int64 v50; // rsi
	__int64 v51; // rax
	__int64 v52; // rcx
	__int64 v53; // rax
	_QWORD* v54; // rcx
	__int64 v56; // rcx
	int v57; // edx
	__int64 v58; // rsi
	__int64 v59; // rax
	__int64 v60; // rcx
	__int64 v61; // rax
	_QWORD* v62; // rcx
	__int64 v64; // rcx
	int v65; // edi
	__int64 v66; // rsi
	__int64 v67; // rax
	__int64 v68; // rcx
	__int64 v69; // rax
	_QWORD* v70; // rcx
	__int64 v72; // rcx
	int v73; // edx
	__int64 v74; // rsi
	__int64 v75; // rax
	__int64 v76; // rcx
	__int64 v77; // rax
	_QWORD* v78; // rcx
	__int64 v80; // rcx
	int v81; // edi
	__int64 v82; // rsi
	__int64 v83; // rax
	__int64 v84; // rcx
	__int64 v85; // rax
	_QWORD* v86; // rcx
	__int64 v88; // rcx
	int v89; // edx
	__int64 v90; // rsi
	__int64 v91; // rax
	__int64 v92; // rcx
	__int64 v93; // rax
	_QWORD* v94; // rcx
	__int64 v96; // rcx
	int v97; // edi
	__int64 v98; // rsi
	__int64 v99; // rax
	__int64 v100; // rcx
	__int64 v101; // rax
	_QWORD* v102; // rcx
	__int64 v104; // rcx
	int v105; // edx
	__int64 v106; // rsi
	__int64 v107; // rax
	__int64 v108; // rcx
	__int64 v109; // rax
	_QWORD* v110; // rcx
	__int64 v112; // rcx
	__int64 v113; // rsi
	__int64 v114; // rax
	__int64 v115; // rcx
	__int64 v116; // rax
	unsigned int v117; // r14d
	_QWORD* v118; // rcx
	__int64 v120; // rcx
	int v121; // edi
	__int64 v122; // rsi
	__int64 v123; // rax
	__int64 v124; // rcx
	__int64 v125; // rax
	_QWORD* v126; // rcx
	__int64 v127; // rdx
	__int64 v128; // rcx
	int v129; // edx
	__int64 v130; // rax
	unsigned __int8 v131; // cl
	__int64 v132; // [rsp+50h] [rbp+30h] BYREF
	__int64 v133; // [rsp+60h] [rbp+40h] BYREF
	__int64 v134; // [rsp+68h] [rbp+48h] BYREF

	v2 = *(_QWORD*)(a1 + 72);
	v5 = -1;
LABEL_2:
	*(_QWORD*)(v2 + 8) = 0i64;
	while (2)
	{
		switch (*(_DWORD*)a1)
		{
		case 0xFFFFFFFF:
			return 287i64;
		case 0xA:
		case 0xD:
			sub_140062E00(a1);
			continue;
		case 0x22:
		case 0x27:
			sub_140063700(a1, *(_DWORD*)a1, a2);
			return 286i64;
		case 0x2D:
			v6 = *(_QWORD**)(a1 + 64);
			if ((*v6)--)
			{
				v8 = *(_QWORD*)(a1 + 64);
				v9 = *(unsigned __int8*)(*(_QWORD*)(v8 + 8))++;
			}
			else
			{
				v10 = *(_QWORD*)(a1 + 64);
				v11 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v10 + 16))(
					*(_QWORD*)(v10 + 32),
					*(_QWORD*)(v10 + 24),
					&v132);
				if (v11 && (v12 = v132) != 0)
				{
					*(_QWORD*)(v10 + 8) = v11;
					v13 = v11 + 1;
					*(_QWORD*)v10 = v12 - 1;
					v9 = *(unsigned __int8*)(v13 - 1);
					*(_QWORD*)(v10 + 8) = v13;
				}
				else
				{
					v9 = -1;
				}
			}
			*(_DWORD*)a1 = v9;
			if (v9 != 45)
				return 45i64;
			v14 = *(_QWORD**)(a1 + 64);
			if ((*v14)--)
			{
				v16 = *(_QWORD*)(a1 + 64);
				v17 = *(unsigned __int8*)(*(_QWORD*)(v16 + 8))++;
			}
			else
			{
				v18 = *(_QWORD*)(a1 + 64);
				v19 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v18 + 16))(
					*(_QWORD*)(v18 + 32),
					*(_QWORD*)(v18 + 24),
					&v133);
				if (v19 && (v20 = v133) != 0)
				{
					*(_QWORD*)(v18 + 8) = v19;
					v21 = v19 + 1;
					*(_QWORD*)v18 = v20 - 1;
					v17 = *(unsigned __int8*)(v21 - 1);
					*(_QWORD*)(v18 + 8) = v21;
				}
				else
				{
					v17 = -1;
				}
			}
			*(_DWORD*)a1 = v17;
			if (v17 == 91)
			{
				v22 = sub_140063340(a1);
				*(_QWORD*)(*(_QWORD*)(a1 + 72) + 8i64) = 0i64;
				if (v22 >= 0)
				{
					sub_140063490(a1, 0i64, v22);
					v2 = *(_QWORD*)(a1 + 72);
					goto LABEL_2;
				}
			}
			if (*(_DWORD*)a1 != 10)
			{
				do
				{
					if (*(_DWORD*)a1 == 13 || *(_DWORD*)a1 == -1)
						break;
					v23 = *(_QWORD**)(a1 + 64);
					v24 = (*v23)--;
					v25 = *(_QWORD*)(a1 + 64);
					if (v24)
						v26 = *(unsigned __int8*)(*(_QWORD*)(v25 + 8))++;
					else
						v26 = sub_1400628A0(v25);
					*(_DWORD*)a1 = v26;
				} while (v26 != 10);
			}
			continue;
		case 0x2E:
			sub_140062AA0(a1, *(_DWORD*)a1);
			v102 = *(_QWORD**)(a1 + 64);
			if ((*v102)--)
			{
				v104 = *(_QWORD*)(a1 + 64);
				v105 = *(unsigned __int8*)(*(_QWORD*)(v104 + 8))++;
			}
			else
			{
				v106 = *(_QWORD*)(a1 + 64);
				v107 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v106 + 16))(
					*(_QWORD*)(v106 + 32),
					*(_QWORD*)(v106 + 24),
					&v132);
				if (v107 && (v108 = v132) != 0)
				{
					*(_QWORD*)(v106 + 8) = v107;
					v109 = v107 + 1;
					*(_QWORD*)v106 = v108 - 1;
					v105 = *(unsigned __int8*)(v109 - 1);
					*(_QWORD*)(v106 + 8) = v109;
				}
				else
				{
					v105 = -1;
				}
			}
			*(_DWORD*)a1 = v105;
			if (sub_1407DE0B4((__int64)asc_140C1E1DC, v105))
			{
				sub_140062AA0(a1, *(_DWORD*)a1);
				v110 = *(_QWORD**)(a1 + 64);
				if ((*v110)--)
				{
					v112 = *(_QWORD*)(a1 + 64);
					v5 = *(unsigned __int8*)(*(_QWORD*)(v112 + 8))++;
				}
				else
				{
					v113 = *(_QWORD*)(a1 + 64);
					v114 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v113 + 16))(
						*(_QWORD*)(v113 + 32),
						*(_QWORD*)(v113 + 24),
						&v132);
					if (v114)
					{
						v115 = v132;
						if (v132)
						{
							*(_QWORD*)(v113 + 8) = v114;
							v116 = v114 + 1;
							*(_QWORD*)v113 = v115 - 1;
							v5 = *(unsigned __int8*)(v116 - 1);
							*(_QWORD*)(v113 + 8) = v116;
						}
					}
				}
				*(_DWORD*)a1 = v5;
				if (sub_1407DE0B4((__int64)asc_140C1E1CC, v5) && (unsigned int)sub_140063010(a1))
					return 279i64;
				else
					return 278i64;
			}
			else
			{
				if ((unsigned int)sub_1407DE874(*(_DWORD*)a1))
					goto LABEL_116;
				return 46i64;
			}
		case 0x3C:
			v54 = *(_QWORD**)(a1 + 64);
			if ((*v54)--)
			{
				v56 = *(_QWORD*)(a1 + 64);
				v57 = *(unsigned __int8*)(*(_QWORD*)(v56 + 8))++;
			}
			else
			{
				v58 = *(_QWORD*)(a1 + 64);
				v59 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v58 + 16))(
					*(_QWORD*)(v58 + 32),
					*(_QWORD*)(v58 + 24),
					&v132);
				if (v59 && (v60 = v132) != 0)
				{
					*(_QWORD*)(v58 + 8) = v59;
					v61 = v59 + 1;
					*(_QWORD*)v58 = v60 - 1;
					v57 = *(unsigned __int8*)(v61 - 1);
					*(_QWORD*)(v58 + 8) = v61;
				}
				else
				{
					v57 = -1;
				}
			}
			*(_DWORD*)a1 = v57;
			if (v57 != 61)
				return 60i64;
			v62 = *(_QWORD**)(a1 + 64);
			if ((*v62)--)
			{
				v64 = *(_QWORD*)(a1 + 64);
				v65 = *(unsigned __int8*)(*(_QWORD*)(v64 + 8))++;
				result = 282i64;
				*(_DWORD*)a1 = v65;
			}
			else
			{
				v66 = *(_QWORD*)(a1 + 64);
				v67 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v66 + 16))(
					*(_QWORD*)(v66 + 32),
					*(_QWORD*)(v66 + 24),
					&v132);
				if (v67)
				{
					v68 = v132;
					if (v132)
					{
						*(_QWORD*)(v66 + 8) = v67;
						v69 = v67 + 1;
						*(_QWORD*)v66 = v68 - 1;
						v5 = *(unsigned __int8*)(v69 - 1);
						*(_QWORD*)(v66 + 8) = v69;
					}
				}
				*(_DWORD*)a1 = v5;
				return 282i64;
			}
			return result;
		case 0x3D:
			v38 = *(_QWORD**)(a1 + 64);
			if ((*v38)--)
			{
				v40 = *(_QWORD*)(a1 + 64);
				v41 = *(unsigned __int8*)(*(_QWORD*)(v40 + 8))++;
			}
			else
			{
				v42 = *(_QWORD*)(a1 + 64);
				v43 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v42 + 16))(
					*(_QWORD*)(v42 + 32),
					*(_QWORD*)(v42 + 24),
					&v132);
				if (v43 && (v44 = v132) != 0)
				{
					*(_QWORD*)(v42 + 8) = v43;
					v45 = v43 + 1;
					*(_QWORD*)v42 = v44 - 1;
					v41 = *(unsigned __int8*)(v45 - 1);
					*(_QWORD*)(v42 + 8) = v45;
				}
				else
				{
					v41 = -1;
				}
			}
			*(_DWORD*)a1 = v41;
			if (v41 != 61)
				return 61i64;
			v46 = *(_QWORD**)(a1 + 64);
			if ((*v46)--)
			{
				v48 = *(_QWORD*)(a1 + 64);
				v49 = *(unsigned __int8*)(*(_QWORD*)(v48 + 8))++;
				result = 280i64;
				*(_DWORD*)a1 = v49;
			}
			else
			{
				v50 = *(_QWORD*)(a1 + 64);
				v51 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v50 + 16))(
					*(_QWORD*)(v50 + 32),
					*(_QWORD*)(v50 + 24),
					&v132);
				if (v51)
				{
					v52 = v132;
					if (v132)
					{
						*(_QWORD*)(v50 + 8) = v51;
						v53 = v51 + 1;
						*(_QWORD*)v50 = v52 - 1;
						v5 = *(unsigned __int8*)(v53 - 1);
						*(_QWORD*)(v50 + 8) = v53;
					}
				}
				*(_DWORD*)a1 = v5;
				return 280i64;
			}
			return result;
		case 0x3E:
			v70 = *(_QWORD**)(a1 + 64);
			if ((*v70)--)
			{
				v72 = *(_QWORD*)(a1 + 64);
				v73 = *(unsigned __int8*)(*(_QWORD*)(v72 + 8))++;
			}
			else
			{
				v74 = *(_QWORD*)(a1 + 64);
				v75 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v74 + 16))(
					*(_QWORD*)(v74 + 32),
					*(_QWORD*)(v74 + 24),
					&v132);
				if (v75 && (v76 = v132) != 0)
				{
					*(_QWORD*)(v74 + 8) = v75;
					v77 = v75 + 1;
					*(_QWORD*)v74 = v76 - 1;
					v73 = *(unsigned __int8*)(v77 - 1);
					*(_QWORD*)(v74 + 8) = v77;
				}
				else
				{
					v73 = -1;
				}
			}
			*(_DWORD*)a1 = v73;
			if (v73 != 61)
				return 62i64;
			v78 = *(_QWORD**)(a1 + 64);
			if ((*v78)--)
			{
				v80 = *(_QWORD*)(a1 + 64);
				v81 = *(unsigned __int8*)(*(_QWORD*)(v80 + 8))++;
				result = 281i64;
				*(_DWORD*)a1 = v81;
			}
			else
			{
				v82 = *(_QWORD*)(a1 + 64);
				v83 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v82 + 16))(
					*(_QWORD*)(v82 + 32),
					*(_QWORD*)(v82 + 24),
					&v132);
				if (v83)
				{
					v84 = v132;
					if (v132)
					{
						*(_QWORD*)(v82 + 8) = v83;
						v85 = v83 + 1;
						*(_QWORD*)v82 = v84 - 1;
						v5 = *(unsigned __int8*)(v85 - 1);
						*(_QWORD*)(v82 + 8) = v85;
					}
				}
				*(_DWORD*)a1 = v5;
				return 281i64;
			}
			return result;
		case 0x5B:
			v37 = sub_140063340(a1);
			if (v37 < 0)
			{
				if (v37 != -1)
					sub_140062CF0(a1, aInvalidLongStr, 286);
				return 91i64;
			}
			else
			{
				sub_140063490(a1, a2, v37);
				return 286i64;
			}
		case 0x7E:
			v86 = *(_QWORD**)(a1 + 64);
			if ((*v86)--)
			{
				v88 = *(_QWORD*)(a1 + 64);
				v89 = *(unsigned __int8*)(*(_QWORD*)(v88 + 8))++;
			}
			else
			{
				v90 = *(_QWORD*)(a1 + 64);
				v91 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v90 + 16))(
					*(_QWORD*)(v90 + 32),
					*(_QWORD*)(v90 + 24),
					&v132);
				if (v91 && (v92 = v132) != 0)
				{
					*(_QWORD*)(v90 + 8) = v91;
					v93 = v91 + 1;
					*(_QWORD*)v90 = v92 - 1;
					v89 = *(unsigned __int8*)(v93 - 1);
					*(_QWORD*)(v90 + 8) = v93;
				}
				else
				{
					v89 = -1;
				}
			}
			*(_DWORD*)a1 = v89;
			if (v89 != 61)
				return 126i64;
			v94 = *(_QWORD**)(a1 + 64);
			if ((*v94)--)
			{
				v96 = *(_QWORD*)(a1 + 64);
				v97 = *(unsigned __int8*)(*(_QWORD*)(v96 + 8))++;
				result = 283i64;
				*(_DWORD*)a1 = v97;
			}
			else
			{
				v98 = *(_QWORD*)(a1 + 64);
				v99 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v98 + 16))(
					*(_QWORD*)(v98 + 32),
					*(_QWORD*)(v98 + 24),
					&v132);
				if (v99)
				{
					v100 = v132;
					if (v132)
					{
						*(_QWORD*)(v98 + 8) = v99;
						v101 = v99 + 1;
						*(_QWORD*)v98 = v100 - 1;
						v5 = *(unsigned __int8*)(v101 - 1);
						*(_QWORD*)(v98 + 8) = v101;
					}
				}
				*(_DWORD*)a1 = v5;
				return 283i64;
			}
			return result;
		default:
			if ((unsigned int)sub_1407DE9E8(*(_DWORD*)a1))
			{
				v27 = *(_QWORD**)(a1 + 64);
				if ((*v27)--)
				{
					v29 = *(_QWORD*)(a1 + 64);
					v30 = *(unsigned __int8*)(*(_QWORD*)(v29 + 8))++;
					*(_DWORD*)a1 = v30;
				}
				else
				{
					v31 = *(_QWORD*)(a1 + 64);
					v32 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v31 + 16))(
						*(_QWORD*)(v31 + 32),
						*(_QWORD*)(v31 + 24),
						&v134);
					if (v32 && (v33 = v134) != 0)
					{
						*(_QWORD*)(v31 + 8) = v32;
						v34 = v32 + 1;
						*(_QWORD*)v31 = v33 - 1;
						v35 = *(unsigned __int8*)(v34 - 1);
						*(_QWORD*)(v31 + 8) = v34;
						*(_DWORD*)a1 = v35;
					}
					else
					{
						*(_DWORD*)a1 = -1;
					}
				}
				continue;
			}
			if ((unsigned int)sub_1407DE874(*(_DWORD*)a1))
			{
			LABEL_116:
				sub_140063180(a1, (unsigned __int64*)a2);
				return 284i64;
			}
			else if ((unsigned int)sub_1407DE778(*(_DWORD*)a1) || (v117 = *(_DWORD*)a1, *(_DWORD*)a1 == 95))
			{
				do
				{
					sub_140062AA0(a1, *(_DWORD*)a1);
					v126 = *(_QWORD**)(a1 + 64);
					v127 = (*v126)--;
					v128 = *(_QWORD*)(a1 + 64);
					if (v127)
						v129 = *(unsigned __int8*)(*(_QWORD*)(v128 + 8))++;
					else
						v129 = sub_1400628A0(v128);
					*(_DWORD*)a1 = v129;
				} while ((unsigned int)sub_1407DE6F8(v129) || *(_DWORD*)a1 == 95);
				v130 = sub_140062DA0(a1, **(unsigned __int64***)(a1 + 72), *(_QWORD*)(*(_QWORD*)(a1 + 72) + 8i64));
				v131 = *(_BYTE*)(v130 + 10);
				if (v131)
				{
					return (unsigned int)v131 + 256;
				}
				else
				{
					*a2 = v130;
					return 285i64;
				}
			}
			else
			{
				v118 = *(_QWORD**)(a1 + 64);
				if ((*v118)--)
				{
					v120 = *(_QWORD*)(a1 + 64);
					v121 = *(unsigned __int8*)(*(_QWORD*)(v120 + 8))++;
					result = v117;
					*(_DWORD*)a1 = v121;
				}
				else
				{
					v122 = *(_QWORD*)(a1 + 64);
					v123 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v122 + 16))(
						*(_QWORD*)(v122 + 32),
						*(_QWORD*)(v122 + 24),
						&v132);
					if (v123)
					{
						v124 = v132;
						if (v132)
						{
							*(_QWORD*)(v122 + 8) = v123;
							v125 = v123 + 1;
							*(_QWORD*)v122 = v124 - 1;
							v5 = *(unsigned __int8*)(v125 - 1);
							*(_QWORD*)(v122 + 8) = v125;
						}
					}
					*(_DWORD*)a1 = v5;
					return v117;
				}
			}
			return result;
		}
	}
}

