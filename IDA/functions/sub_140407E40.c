#include "../winhttp.h"

//----- (0000000140407E40) ----------------------------------------------------
void __fastcall sub_140407E40(__int64 a1, __int64 a2)
{
	__int64 v3; // r14
	__int64 v4; // rcx
	__int64 v5; // rdi
	unsigned __int64 v6; // rsi
	int** v7; // rbx
	int* v8; // rax
	int* v9; // rcx
	int* v10; // rcx
	int* v11; // rax
	int* v12; // rsi
	unsigned __int64 v13; // r14
	_QWORD* v14; // rbx
	__int64 v15; // rcx
	__int64 v16; // rdi
	unsigned __int64 v17; // rsi
	int** v18; // rbx
	int* v19; // rax
	int* v20; // rcx
	int* v21; // rcx
	int* v22; // rax
	int* v23; // rsi
	unsigned __int64 v24; // r14
	_QWORD* v25; // rbx
	unsigned __int64 v26; // r12
	__int64 v27; // r15
	__int64 v28; // rdi
	unsigned __int64 v29; // rsi
	_QWORD* v30; // rbx
	unsigned __int64 v31; // rsi
	int** v32; // rbx
	int* v33; // rax
	int* v34; // rcx
	int* v35; // rcx
	int* v36; // rax
	int* v37; // rsi
	unsigned __int64 v38; // r14
	_QWORD* v39; // rbx
	__int64 v40; // r15
	unsigned __int64 i; // r12
	__int64 v42; // rdi
	unsigned __int64 v43; // rsi
	_QWORD* v44; // rbx
	unsigned __int64 v45; // rsi
	int** v46; // rbx
	int* v47; // rax
	int* v48; // rcx
	int* v49; // rcx
	int* v50; // rax
	int* v51; // r14
	unsigned __int64 v52; // rsi
	_QWORD* v53; // rbx
	__int64 v54; // rax
	unsigned __int64 v55; // rsi
	int** v56; // rbx
	int* v57; // rax
	int* v58; // rcx
	int* v59; // rcx
	__int64 v60; // [rsp+20h] [rbp-28h] BYREF
	unsigned __int16* v61; // [rsp+28h] [rbp-20h]
	int* v62; // [rsp+30h] [rbp-18h]
	int* v63; // [rsp+38h] [rbp-10h]
	int* v65; // [rsp+98h] [rbp+50h] BYREF
	int* v66; // [rsp+A0h] [rbp+58h] BYREF
	int* v67; // [rsp+A8h] [rbp+60h] BYREF

	v65 = (int*)a2;
	v3 = a1;
	if (*(_QWORD*)(a2 + 128) != *(_QWORD*)(a2 + 136))
	{
		v4 = *(_QWORD*)(qword_140C65898 + 29504);
		v66 = *(int**)(a2 + 128);
		sub_1400EC4B0(v4, v66, (__int64)sub_140405E70, a2);
		v5 = v3 + 16;
		if (*(_QWORD*)(v3 + 16) == *(_QWORD*)(v3 + 24))
			sub_1400290D0(v3 + 16);
		v6 = (*(__int64(__fastcall**)(int**))(v3 + 40))(&v66);
		v7 = (int**)(*(_QWORD*)(v3 + 32) + 8 * (v6 % *(_QWORD*)(v3 + 24)));
		v8 = sub_14018B280(32i64, 0);
		if (v8)
		{
			v9 = *v7;
			*(_QWORD*)v8 = v6;
			*((_QWORD*)v8 + 1) = v9;
			v10 = v66;
			*((_QWORD*)v8 + 3) = a2;
			*((_QWORD*)v8 + 2) = v10;
		}
		else
		{
			v8 = 0i64;
		}
		*v7 = v8;
		++* (_QWORD*)v5;
		v11 = sub_14018B280(16i64, 0);
		v61 = (unsigned __int16*)v11;
		v62 = v11;
		v63 = v11 + 4;
		if (v11)
			*(_WORD*)v11 = 0;
		sub_1400A7B60(&v60, v66);
		v12 = (int*)v61;
		if ((unsigned int)sub_14018E2C0((__int64)v66, v61))
		{
			v67 = v12;
			v13 = (*(__int64(__fastcall**)(int**))(v3 + 40))(&v67);
			v14 = *(_QWORD**)(*(_QWORD*)(v5 + 16) + 8 * (v13 % *(_QWORD*)(v5 + 8)));
			if (!v14)
				goto LABEL_16;
			while (v13 != *v14 || !(*(unsigned int(__fastcall**)(int**, _QWORD*))(v5 + 32))(&v67, v14 + 2))
			{
				v14 = (_QWORD*)v14[1];
				if (!v14)
					goto LABEL_16;
			}
			if (v14 == (_QWORD*)-24i64)
			{
			LABEL_16:
				if ((int)sub_1400EC4B0(*(_QWORD*)(qword_140C65898 + 29504), v12, (__int64)sub_140405E70, a2) >= 0)
				{
					v67 = v12;
					sub_14040ADF0(v5, &v67, &v65);
				}
			}
			v3 = a1;
		}
		if (v12)
			sub_14018B900((__int64)v12, 0);
	}
	if (*(_QWORD*)(a2 + 160) != *(_QWORD*)(a2 + 168))
	{
		v15 = *(_QWORD*)(qword_140C65898 + 29504);
		v67 = *(int**)(a2 + 160);
		sub_1400EC4B0(v15, v67, (__int64)sub_140405E70, a2);
		v16 = v3 + 16;
		if (*(_QWORD*)(v3 + 16) == *(_QWORD*)(v3 + 24))
			sub_1400290D0(v3 + 16);
		v17 = (*(__int64(__fastcall**)(int**))(v3 + 40))(&v67);
		v18 = (int**)(*(_QWORD*)(v3 + 32) + 8 * (v17 % *(_QWORD*)(v3 + 24)));
		v19 = sub_14018B280(32i64, 0);
		if (v19)
		{
			v20 = *v18;
			*(_QWORD*)v19 = v17;
			*((_QWORD*)v19 + 1) = v20;
			v21 = v67;
			*((_QWORD*)v19 + 3) = a2;
			*((_QWORD*)v19 + 2) = v21;
		}
		else
		{
			v19 = 0i64;
		}
		*v18 = v19;
		++* (_QWORD*)v16;
		v22 = sub_14018B280(16i64, 0);
		v61 = (unsigned __int16*)v22;
		v62 = v22;
		v63 = v22 + 4;
		if (v22)
			*(_WORD*)v22 = 0;
		sub_1400A7B60(&v60, v67);
		v23 = (int*)v61;
		if ((unsigned int)sub_14018E2C0((__int64)v67, v61))
		{
			v66 = v23;
			v24 = (*(__int64(__fastcall**)(int**))(v3 + 40))(&v66);
			v25 = *(_QWORD**)(*(_QWORD*)(v16 + 16) + 8 * (v24 % *(_QWORD*)(v16 + 8)));
			if (!v25)
				goto LABEL_36;
			while (v24 != *v25 || !(*(unsigned int(__fastcall**)(int**, _QWORD*))(v16 + 32))(&v66, v25 + 2))
			{
				v25 = (_QWORD*)v25[1];
				if (!v25)
					goto LABEL_36;
			}
			if (v25 == (_QWORD*)-24i64)
			{
			LABEL_36:
				if ((int)sub_1400EC4B0(*(_QWORD*)(qword_140C65898 + 29504), v23, (__int64)sub_140405E70, a2) >= 0)
				{
					v66 = v23;
					sub_14040ADF0(v16, &v66, &v65);
				}
			}
			v3 = a1;
		}
		if (v23)
			sub_14018B900((__int64)v23, 0);
	}
	v26 = 0i64;
	v27 = a2 + 64;
	do
	{
		if (v27 == 8)
			break;
		if (*(_QWORD*)v27 != *(_QWORD*)(v27 + 8))
		{
			v28 = v3 + 16;
			v66 = *(int**)v27;
			v29 = (*(__int64(__fastcall**)(int**))(v3 + 40))(&v66);
			v30 = *(_QWORD**)(*(_QWORD*)(v3 + 32) + 8 * (v29 % *(_QWORD*)(v3 + 24)));
			if (!v30)
				goto LABEL_50;
			while (v29 != *v30 || !(*(unsigned int(__fastcall**)(int**, _QWORD*))(v3 + 48))(&v66, v30 + 2))
			{
				v30 = (_QWORD*)v30[1];
				if (!v30)
					goto LABEL_50;
			}
			if (v30 == (_QWORD*)-24i64)
			{
			LABEL_50:
				sub_1400EC4B0(*(_QWORD*)(qword_140C65898 + 29504), v66, (__int64)sub_140405E70, a2);
				if (*(_QWORD*)v28 == *(_QWORD*)(v3 + 24))
					sub_1400290D0(v3 + 16);
				v31 = (*(__int64(__fastcall**)(int**))(v3 + 40))(&v66);
				v32 = (int**)(*(_QWORD*)(v3 + 32) + 8 * (v31 % *(_QWORD*)(v3 + 24)));
				v33 = sub_14018B280(32i64, 0);
				if (v33)
				{
					v34 = *v32;
					*(_QWORD*)v33 = v31;
					*((_QWORD*)v33 + 1) = v34;
					v35 = v66;
					*((_QWORD*)v33 + 3) = a2;
					*((_QWORD*)v33 + 2) = v35;
				}
				else
				{
					v33 = 0i64;
				}
				*v32 = v33;
				++* (_QWORD*)v28;
				v36 = sub_14018B280(16i64, 0);
				v61 = (unsigned __int16*)v36;
				v62 = v36;
				v63 = v36 + 4;
				if (v36)
					*(_WORD*)v36 = 0;
				sub_1400A7B60(&v60, v66);
				v37 = (int*)v61;
				if ((unsigned int)sub_14018E2C0((__int64)v66, v61))
				{
					v67 = v37;
					v38 = (*(__int64(__fastcall**)(int**))(v3 + 40))(&v67);
					v39 = *(_QWORD**)(*(_QWORD*)(v28 + 16) + 8 * (v38 % *(_QWORD*)(v28 + 8)));
					if (!v39)
						goto LABEL_64;
					while (v38 != *v39 || !(*(unsigned int(__fastcall**)(int**, _QWORD*))(v28 + 32))(&v67, v39 + 2))
					{
						v39 = (_QWORD*)v39[1];
						if (!v39)
							goto LABEL_64;
					}
					if (v39 == (_QWORD*)-24i64)
					{
					LABEL_64:
						if ((int)sub_1400EC4B0(*(_QWORD*)(qword_140C65898 + 29504), v37, (__int64)sub_140405E70, a2) >= 0)
						{
							v67 = v37;
							sub_14040ADF0(v28, &v67, &v65);
						}
					}
					v3 = a1;
				}
				if (v37)
					sub_14018B900((__int64)v37, 0);
			}
		}
		++v26;
		v27 += 32i64;
	} while (v26 < 2);
	v40 = a2 + 192;
	for (i = 0i64; i < 2; ++i)
	{
		if (v40 == 8)
			break;
		if (*(_QWORD*)v40 != *(_QWORD*)(v40 + 8))
		{
			v42 = v3 + 16;
			v65 = *(int**)v40;
			v43 = (*(__int64(__fastcall**)(int**))(v3 + 40))(&v65);
			v44 = *(_QWORD**)(*(_QWORD*)(v3 + 32) + 8 * (v43 % *(_QWORD*)(v3 + 24)));
			if (!v44)
				goto LABEL_79;
			while (v43 != *v44 || !(*(unsigned int(__fastcall**)(int**, _QWORD*))(v3 + 48))(&v65, v44 + 2))
			{
				v44 = (_QWORD*)v44[1];
				if (!v44)
					goto LABEL_79;
			}
			if (v44 == (_QWORD*)-24i64)
			{
			LABEL_79:
				sub_1400EC4B0(*(_QWORD*)(qword_140C65898 + 29504), v65, (__int64)sub_140405E70, a2);
				if (*(_QWORD*)v42 == *(_QWORD*)(v3 + 24))
					sub_1400290D0(v3 + 16);
				v45 = (*(__int64(__fastcall**)(int**))(v3 + 40))(&v65);
				v46 = (int**)(*(_QWORD*)(v3 + 32) + 8 * (v45 % *(_QWORD*)(v3 + 24)));
				v47 = sub_14018B280(32i64, 0);
				if (v47)
				{
					v48 = *v46;
					*(_QWORD*)v47 = v45;
					*((_QWORD*)v47 + 1) = v48;
					v49 = v65;
					*((_QWORD*)v47 + 3) = a2;
					*((_QWORD*)v47 + 2) = v49;
				}
				else
				{
					v47 = 0i64;
				}
				*v46 = v47;
				++* (_QWORD*)v42;
				v50 = sub_14018B280(16i64, 0);
				v61 = (unsigned __int16*)v50;
				v62 = v50;
				v63 = v50 + 4;
				if (v50)
					*(_WORD*)v50 = 0;
				sub_1400A7B60(&v60, v65);
				v51 = (int*)v61;
				if ((unsigned int)sub_14018E2C0((__int64)v65, v61))
				{
					v66 = v51;
					v52 = (*(__int64(__fastcall**)(int**))(v42 + 24))(&v66);
					v53 = *(_QWORD**)(*(_QWORD*)(v42 + 16) + 8 * (v52 % *(_QWORD*)(v42 + 8)));
					if (!v53)
						goto LABEL_93;
					while (v52 != *v53 || !(*(unsigned int(__fastcall**)(int**, _QWORD*))(v42 + 32))(&v66, v53 + 2))
					{
						v53 = (_QWORD*)v53[1];
						if (!v53)
							goto LABEL_93;
					}
					if (v53 == (_QWORD*)-24i64)
					{
					LABEL_93:
						if ((int)sub_1400EC4B0(*(_QWORD*)(qword_140C65898 + 29504), v51, (__int64)sub_140405E70, a2) >= 0)
						{
							v54 = *(_QWORD*)(v42 + 8);
							v66 = v51;
							if (*(_QWORD*)v42 == v54)
								sub_1400290D0(v42);
							v55 = (*(__int64(__fastcall**)(int**))(v42 + 24))(&v66);
							v56 = (int**)(*(_QWORD*)(v42 + 16) + 8 * (v55 % *(_QWORD*)(v42 + 8)));
							v57 = sub_14018B280(32i64, 0);
							if (v57)
							{
								v58 = *v56;
								*(_QWORD*)v57 = v55;
								*((_QWORD*)v57 + 1) = v58;
								v59 = v66;
								*((_QWORD*)v57 + 3) = a2;
								*((_QWORD*)v57 + 2) = v59;
							}
							*v56 = v57;
							++* (_QWORD*)v42;
						}
					}
				}
				if (v51)
					sub_14018B900((__int64)v51, 0);
			}
		}
		v3 = a1;
		v40 += 32i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

