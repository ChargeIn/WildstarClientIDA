#include "../winhttp.h"

//----- (0000000140582FA0) ----------------------------------------------------
__int64 __fastcall sub_140582FA0(__int64 a1, unsigned int* a2)
{
	unsigned int* v2; // rax
	unsigned __int64 v3; // r11
	__int64 v4; // rcx
	__int64 v5; // rdx
	__int64 v6; // rax
	__int64 v7; // r8
	__int64 v8; // r9
	__int64 v9; // r10
	unsigned __int64 v10; // rdi
	_QWORD* v11; // rax
	__int64 v12; // rdx
	__int64* v13; // rbx
	int* v14; // rbx
	int* v15; // rax
	unsigned __int64 v16; // r12
	__int64 v17; // r15
	__int64 v18; // r13
	int* v19; // rsi
	__int64 v20; // rdi
	int* v21; // rax
	int* v22; // rbx
	unsigned __int64 v23; // rdi
	__int64 v24; // rdi
	int* v25; // rax
	unsigned __int64 v26; // rdi
	__int64 v27; // r14
	int* v28; // rsi
	int* v29; // r10
	int* v30; // r8
	int v31; // edi
	unsigned __int16* v32; // r11
	__int64 v33; // r9
	int v34; // eax
	int v35; // ecx
	int v36; // edx
	int v37; // eax
	_WORD* v38; // r9
	__int64 v39; // r8
	int v40; // edx
	int v41; // ecx
	int v42; // eax
	__int64 v43; // rax
	__int64 v44; // rcx
	__int64 i; // rcx
	__int64 j; // rcx
	unsigned __int64 v47; // rax
	bool v48; // cf
	int* v50; // [rsp+20h] [rbp-E0h] BYREF
	unsigned __int64 v51; // [rsp+28h] [rbp-D8h]
	__int64 v52; // [rsp+30h] [rbp-D0h]
	__int64 v53; // [rsp+38h] [rbp-C8h]
	__int64 v54; // [rsp+40h] [rbp-C0h]
	unsigned int* v55; // [rsp+48h] [rbp-B8h]
	__int64 v56; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v57; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v58; // [rsp+60h] [rbp-A0h] BYREF
	int* v59; // [rsp+68h] [rbp-98h] BYREF
	char v60[24]; // [rsp+78h] [rbp-88h] BYREF
	__int64 v61; // [rsp+90h] [rbp-70h]
	__int128 v62; // [rsp+B0h] [rbp-50h] BYREF
	char v63[8]; // [rsp+C8h] [rbp-38h] BYREF
	int* v64; // [rsp+D0h] [rbp-30h]
	__int64 v65; // [rsp+D8h] [rbp-28h]
	__int64 v66; // [rsp+E8h] [rbp-18h]
	unsigned __int64 v67; // [rsp+110h] [rbp+10h] BYREF
	_QWORD v68[11]; // [rsp+118h] [rbp+18h] BYREF

	v2 = a2;
	v55 = a2;
	v3 = 0i64;
	v51 = 0i64;
	if (*a2)
	{
		v4 = qword_140C7DE58;
		v5 = 0i64;
		v54 = 0i64;
		do
		{
			v6 = *((_QWORD*)v2 + 1);
			v7 = *(_QWORD*)(v5 + v6 + 8);
			v8 = *(_QWORD*)(v5 + v6 + 16);
			v9 = *(_QWORD*)(v5 + v6 + 24);
			v10 = *(_QWORD*)(v5 + v6);
			v11 = *(_QWORD**)(v4 + 8);
			v61 = v7;
			v53 = v8;
			v52 = v9;
			v12 = v4;
			if (!v11)
				goto LABEL_11;
			do
			{
				if (v11[4] < v10)
				{
					v11 = (_QWORD*)v11[3];
				}
				else
				{
					v12 = (__int64)v11;
					v11 = (_QWORD*)v11[2];
				}
			} while (v11);
			if (v12 == v4 || v10 < *(_QWORD*)(v12 + 32))
			{
			LABEL_11:
				v58 = v4;
				v13 = &v58;
			}
			else
			{
				v56 = v12;
				v13 = &v56;
			}
			v14 = (int*)*v13;
			if (v14 == (int*)v4)
			{
				if (!(_DWORD)v7)
					goto LABEL_77;
				v62 = 0i64;
				v15 = sub_14018B280(40i64, 0);
				v65 = 0i64;
				v64 = v15;
				*(_BYTE*)v15 = 0;
				*((_QWORD*)v64 + 1) = 0i64;
				*((_QWORD*)v64 + 2) = v64;
				*((_QWORD*)v64 + 3) = v64;
				v66 = 0i64;
				v67 = v10;
				sub_14058FA40((__int64)v68, (__int64)&v62);
				sub_140590880((__int64)&unk_140C7DE50, (__int64)&v59, &v67);
				v14 = v59;
				sub_140582D30(v68);
				if (v66)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v66 - 16) + 8i64))(v66 - 16);
				if (v65)
				{
					sub_140590310((__int64)v63, *((_QWORD**)v64 + 1));
					*((_QWORD*)v64 + 2) = v64;
					*((_QWORD*)v64 + 1) = 0i64;
					*((_QWORD*)v64 + 3) = v64;
					v65 = 0i64;
				}
				sub_14018B900((__int64)v64, 0);
				if (*((_QWORD*)&v62 + 1))
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*((_QWORD*)&v62 + 1) - 16i64) + 8i64))(*((_QWORD*)&v62 + 1) - 16i64);
				if ((_QWORD)v62)
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)(v62 - 16) + 8i64))(v62 - 16);
				v4 = qword_140C7DE58;
				v8 = v53;
				v9 = v52;
				v3 = v51;
			}
			else if (!(_DWORD)v7)
			{
				v50 = v14;
				sub_140590980((__int64)&unk_140C7DE50, (__int64*)&v50);
			LABEL_76:
				v3 = v51;
				v4 = qword_140C7DE58;
				goto LABEL_77;
			}
			v16 = HIDWORD(v61);
			v17 = 0i64;
			if (HIDWORD(v61))
			{
				v18 = (__int64)(v14 + 16);
				while (1)
				{
					v19 = *(int**)(v8 + 8 * v17);
					if (*(_DWORD*)(v9 + 4 * v17))
					{
						if (v19)
						{
							v20 = 0i64;
							if (*(_WORD*)v19)
							{
								do
									++v20;
								while (*((_WORD*)v19 + v20));
							}
							v21 = sub_14018B280(2 * v20 + 18, 0);
							if (v21)
							{
								*((_QWORD*)v21 + 1) = v20;
								*(_QWORD*)v21 = off_140B55060;
							}
							else
							{
								v21 = 0i64;
							}
							v22 = v21 + 4;
							v23 = 2 * v20;
							sub_1407DB590(v21 + 4, v19, v23);
							*(_WORD*)((char*)v22 + v23) = 0;
						}
						else
						{
							v22 = 0i64;
						}
						v50 = v22;
						sub_140590490(v18, (__int64)v60, &v50);
						if (!v22)
							goto LABEL_75;
						goto LABEL_74;
					}
					if (v19)
					{
						v24 = 0i64;
						if (*(_WORD*)v19)
						{
							do
								++v24;
							while (*((_WORD*)v19 + v24));
						}
						v25 = sub_14018B280(2 * v24 + 18, 0);
						if (v25)
						{
							*((_QWORD*)v25 + 1) = v24;
							*(_QWORD*)v25 = off_140B55060;
						}
						else
						{
							v25 = 0i64;
						}
						v22 = v25 + 4;
						v26 = 2 * v24;
						sub_1407DB590(v25 + 4, v19, v26);
						*(_WORD*)((char*)v22 + v26) = 0;
					}
					else
					{
						v22 = 0i64;
					}
					v27 = *(_QWORD*)(v18 + 8);
					v28 = (int*)v27;
					v29 = *(int**)(v27 + 8);
					v30 = v29;
					if (v29)
						break;
				LABEL_63:
					v43 = v27;
					while ((int*)v43 != v28)
					{
						v44 = *(_QWORD*)(v43 + 24);
						if (v44)
						{
							v43 = *(_QWORD*)(v43 + 24);
							for (i = *(_QWORD*)(v44 + 16); i; i = *(_QWORD*)(i + 16))
								v43 = i;
						}
						else
						{
							for (j = *(_QWORD*)(v43 + 8); v43 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
								v43 = j;
							if (*(_QWORD*)(v43 + 24) != j)
								v43 = j;
						}
					}
					v50 = v28;
					v57 = v27;
					sub_140590FD0(v18, &v57, (__int64*)&v50);
					if (!v22)
						goto LABEL_75;
				LABEL_74:
					(*(void(__fastcall**)(int*))(*((_QWORD*)v22 - 2) + 8i64))(v22 - 4);
				LABEL_75:
					v8 = v53;
					v9 = v52;
					if (++v17 >= v16)
						goto LABEL_76;
				}
				v31 = *(unsigned __int16*)v22;
				while (2)
				{
					v32 = (unsigned __int16*)*((_QWORD*)v30 + 4);
					v33 = 0i64;
					v34 = *v32;
					v35 = v31 - v34;
					if (v31 == v34)
					{
						LOWORD(v36) = *(_WORD*)v22;
						while ((_WORD)v36)
						{
							v36 = *((unsigned __int16*)v22 + v33 + 1);
							v37 = v32[++v33];
							v35 = v36 - v37;
							if (v36 != v37)
								goto LABEL_52;
						}
					LABEL_54:
						v30 = (int*)*((_QWORD*)v30 + 3);
					}
					else
					{
					LABEL_52:
						if (v35 >= 0)
							goto LABEL_54;
						v28 = v30;
						v30 = (int*)*((_QWORD*)v30 + 2);
					}
					if (v30)
						continue;
					break;
				}
				while (2)
				{
					v38 = (_WORD*)*((_QWORD*)v29 + 4);
					v39 = 0i64;
					LOWORD(v40) = *v38;
					v41 = (unsigned __int16)*v38 - *(unsigned __int16*)v22;
					if (v41)
					{
					LABEL_59:
						if (v41 >= 0)
							goto LABEL_60;
						v29 = (int*)*((_QWORD*)v29 + 3);
					}
					else
					{
						while ((_WORD)v40)
						{
							v40 = (unsigned __int16)v38[v39 + 1];
							v42 = *((unsigned __int16*)v22 + ++v39);
							v41 = v40 - v42;
							if (v40 != v42)
								goto LABEL_59;
						}
					LABEL_60:
						v27 = (__int64)v29;
						v29 = (int*)*((_QWORD*)v29 + 2);
					}
					if (!v29)
						goto LABEL_63;
					continue;
				}
			}
		LABEL_77:
			++v3;
			v47 = *v55;
			v5 = v54 + 32;
			v51 = v3;
			v48 = v3 < v47;
			v2 = v55;
			v54 += 32i64;
		} while (v48);
	}
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "RecruitmentGuildsUpdated", &unk_1409D0ED3);
	return 0i64;
}
// 140583337: conditional instruction was optimized away because r10.8!=0
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DE58: using guessed type __int64 qword_140C7DE58;
// 140582FA0: using guessed type _QWORD var_88[11];
// 140582FA0: using guessed type char var_D8[8];
// 140582FA0: using guessed type char var_128[24];

