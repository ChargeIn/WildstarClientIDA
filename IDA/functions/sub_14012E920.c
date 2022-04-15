#include "../winhttp.h"

//----- (000000014012E920) ----------------------------------------------------
__int64 __fastcall sub_14012E920(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v4; // rsi
	int v5; // edx
	int v6; // edx
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	__int64 v9; // rdi
	const char* v10; // rbx
	char* v11; // rax
	int v12; // ecx
	bool v13; // zf
	unsigned __int16* v14; // rsi
	__int64 v15; // rdi
	const char* v16; // rbx
	char* v17; // rax
	int v18; // edx
	bool v19; // zf
	unsigned __int64* v20; // rdx
	unsigned __int64 v21; // r8
	WCHAR* v22; // rax
	unsigned __int64 v23; // xmm0_8
	__int64 v24; // rax
	__int64 v25; // rdi
	const char* v26; // rbx
	char* v27; // rax
	int v28; // ecx
	bool v29; // zf
	_WORD* v30; // rax
	_WORD* v31; // r9
	unsigned __int16 v32; // r10
	__int64 v33; // r8
	int v34; // edx
	int v35; // eax
	__int64 v36; // r8
	int v37; // edx
	int v38; // eax
	__int64 v39; // r8
	int v40; // edx
	int v41; // eax
	__int64 v42; // r8
	__int64 v43; // rdx
	int v44; // eax
	__int64 v45; // rax
	unsigned __int16* v46; // rdx
	unsigned __int64* v47; // rdx
	unsigned __int64 v48; // r8
	__int64 v49; // rax
	WCHAR* v50; // rax
	unsigned __int64 v51; // xmm0_8
	__int64 v52; // rax
	__int64 v53; // rax
	unsigned __int16* v54; // rax
	unsigned __int16* v55; // r9
	int v56; // eax
	__int64 v57; // r8
	int v58; // edx
	int v59; // ecx
	int v60; // eax
	_DWORD* v61; // rcx
	__int64 v62; // [rsp+20h] [rbp-28h] BYREF
	__int64 v63; // [rsp+28h] [rbp-20h]
	__int64 v64; // [rsp+60h] [rbp+18h]

	result = sub_1401A5AE0(a2, "N");
	v4 = result;
	v64 = result;
	while (result)
	{
		if (((__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 24)) >> 4) + 2 > 8000)
			goto LABEL_65;
		if ((__int64)(*(_QWORD*)(a1 + 56) - *(_QWORD*)(a1 + 16)) <= 32)
		{
			v5 = *(_DWORD*)(a1 + 88);
			if (v5 < 2)
				v6 = v5 + 2;
			else
				v6 = 2 * v5;
			sub_140061210(a1, v6);
		}
		v7 = *(_QWORD*)(a1 + 40);
		v8 = *(_QWORD*)(a1 + 16) + 32i64;
		if (*(_QWORD*)(v7 + 16) < v8)
			*(_QWORD*)(v7 + 16) = v8;
		v9 = *(_QWORD*)(v4 + 96);
		if (v9)
		{
			while (1)
			{
				v10 = "K";
				v11 = (char*)sub_1401A4F40(v9 + 8);
				if (v11 == "K")
					break;
				v12 = 0;
				if (*(_WORD*)v11)
				{
					do
					{
						if (!*(_WORD*)v10 || *(_WORD*)v11 != *(_WORD*)v10)
							break;
						v13 = v12 == 0x7FFFFFFF;
						if (v12 == 0x7FFFFFFF)
							goto LABEL_18;
						v11 += 2;
						v10 += 2;
						++v12;
					} while (*(_WORD*)v11);
					v13 = v12 == 0x7FFFFFFF;
				LABEL_18:
					if (v13)
						break;
				}
				if (!*(_WORD*)v11 && !*(_WORD*)v10)
					break;
				v9 = *(_QWORD*)(v9 + 56);
				if (!v9)
					goto LABEL_22;
			}
			v14 = (unsigned __int16*)sub_1401A4F40(v9 + 32);
		}
		else
		{
		LABEL_22:
			v14 = 0i64;
		}
		v15 = *(_QWORD*)(v64 + 96);
		if (v15)
		{
			while (1)
			{
				v16 = "F";
				v17 = (char*)sub_1401A4F40(v15 + 8);
				if (v17 == "F")
					break;
				v18 = 0;
				if (*(_WORD*)v17)
				{
					do
					{
						if (!*(_WORD*)v16 || *(_WORD*)v17 != *(_WORD*)v16)
							break;
						v19 = v18 == 0x7FFFFFFF;
						if (v18 == 0x7FFFFFFF)
							goto LABEL_31;
						v17 += 2;
						v16 += 2;
						++v18;
					} while (*(_WORD*)v17);
					v19 = v18 == 0x7FFFFFFF;
				LABEL_31:
					if (v19)
						break;
				}
				if (!*(_WORD*)v17 && !*(_WORD*)v16)
					break;
				v15 = *(_QWORD*)(v15 + 56);
				if (!v15)
					goto LABEL_35;
			}
			v22 = (WCHAR*)sub_1401A4F40(v15 + 32);
			if (v22)
			{
				if (*v22)
				{
					v23 = sub_1407DFE80(v22, 0i64).m128_u64[0];
					v24 = *(_QWORD*)(a1 + 16);
					*(_DWORD*)(v24 + 8) = 3;
					*(_QWORD*)v24 = v23;
					*(_QWORD*)(a1 + 16) += 16i64;
					goto LABEL_52;
				}
			}
		}
	LABEL_35:
		if (v14 && *v14)
		{
			v20 = (unsigned __int64*)sub_14018F0E0(&v62, v14)[1];
			if (!v20)
				goto LABEL_46;
			v21 = -1i64;
			do
				++v21;
			while (*((_BYTE*)v20 + v21));
		}
		else
		{
			v20 = (unsigned __int64*)sub_14018F0E0(&v62, word_1409D860C)[1];
			if (!v20)
			{
			LABEL_46:
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
				*(_QWORD*)(a1 + 16) += 16i64;
				goto LABEL_50;
			}
			v21 = -1i64;
			do
				++v21;
			while (*((_BYTE*)v20 + v21));
		}
		sub_140058710(a1, v20, v21);
	LABEL_50:
		if (v63)
			sub_14018B900(v63, 0);
	LABEL_52:
		v4 = v64;
		v25 = *(_QWORD*)(v64 + 96);
		if (v25)
		{
			while (1)
			{
				v26 = "T";
				v27 = (char*)sub_1401A4F40(v25 + 8);
				if (v27 == "T")
					break;
				v28 = 0;
				if (*(_WORD*)v27)
				{
					do
					{
						if (!*(_WORD*)v26 || *(_WORD*)v27 != *(_WORD*)v26)
							break;
						v29 = v28 == 0x7FFFFFFF;
						if (v28 == 0x7FFFFFFF)
							goto LABEL_60;
						v27 += 2;
						v26 += 2;
						++v28;
					} while (*(_WORD*)v27);
					v29 = v28 == 0x7FFFFFFF;
				LABEL_60:
					if (v29)
						break;
				}
				if (!*(_WORD*)v27 && !*(_WORD*)v26)
					break;
				v25 = *(_QWORD*)(v25 + 56);
				if (!v25)
					goto LABEL_64;
			}
			v30 = (_WORD*)sub_1401A4F40(v25 + 32);
			v31 = v30;
			if (v30)
			{
				v32 = *v30;
				if (*v30)
				{
					v33 = 0i64;
					if (v32 == 115)
					{
						LOWORD(v34) = *v30;
						while ((_WORD)v34)
						{
							v34 = (unsigned __int16)v31[v33 + 1];
							v35 = (unsigned __int16)word_1409D826E[v33++];
							if (v34 != v35)
								goto LABEL_73;
						}
						v45 = sub_1401A6B80(v64, "V");
						if (v45)
							v45 = sub_1401A4F40(v45 + 32);
						v46 = (unsigned __int16*)&unk_1409D861C;
						if (v45)
							v46 = (unsigned __int16*)v45;
						v47 = (unsigned __int64*)sub_14018F0E0(&v62, v46)[1];
						if (v47)
						{
							v48 = -1i64;
							do
								++v48;
							while (*((_BYTE*)v47 + v48));
							sub_140058710(a1, v47, v48);
						}
						else
						{
							*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
							*(_QWORD*)(a1 + 16) += 16i64;
						}
						if (v63)
							sub_14018B900(v63, 0);
						goto LABEL_110;
					}
				LABEL_73:
					v36 = 0i64;
					if (v32 == 110)
					{
						LOWORD(v37) = v32;
						while ((_WORD)v37)
						{
							v37 = (unsigned __int16)v31[v36 + 1];
							v38 = (unsigned __int16)word_1409D8146[v36++];
							if (v37 != v38)
								goto LABEL_77;
						}
						v49 = sub_1401A6B80(v64, "V");
						if (v49)
						{
							v50 = (WCHAR*)sub_1401A4F40(v49 + 32);
							if (v50)
							{
								v51 = sub_1407DFE80(v50, 0i64).m128_u64[0];
								v52 = *(_QWORD*)(a1 + 16);
								*(_DWORD*)(v52 + 8) = 3;
								*(_QWORD*)v52 = v51;
								*(_QWORD*)(a1 + 16) += 16i64;
							LABEL_110:
								sub_14005EA50(
									a1,
									(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
									(int*)(*(_QWORD*)(a1 + 16) - 32i64),
									(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
								*(_QWORD*)(a1 + 16) -= 32i64;
								goto LABEL_65;
							}
						}
					}
					else
					{
					LABEL_77:
						v39 = 0i64;
						if (v32 == 98)
						{
							LOWORD(v40) = v32;
							while ((_WORD)v40)
							{
								v40 = (unsigned __int16)v31[v39 + 1];
								v41 = (unsigned __int16)word_1409D815E[v39++];
								if (v40 != v41)
									goto LABEL_81;
							}
							v53 = sub_1401A6B80(v64, "V");
							if (v53)
							{
								v54 = (unsigned __int16*)sub_1401A4F40(v53 + 32);
								v55 = v54;
								if (v54)
								{
									v56 = *v54;
									v57 = 0i64;
									v58 = v56 - 43;
									if (v56 == 43)
									{
										LOWORD(v59) = 43;
										while ((_WORD)v59)
										{
											v59 = v55[v57 + 1];
											v60 = (unsigned __int16)word_1409D8306[v57++];
											v58 = v59 - v60;
											if (v59 != v60)
												goto LABEL_108;
										}
										v58 = 0;
									}
								LABEL_108:
									v61 = *(_DWORD**)(a1 + 16);
									v61[2] = 1;
									*v61 = v58 == 0;
									*(_QWORD*)(a1 + 16) += 16i64;
									goto LABEL_110;
								}
							}
						}
						else
						{
						LABEL_81:
							v42 = 0i64;
							if (v32 == 116)
							{
								v43 = v32;
								while ((_WORD)v43)
								{
									v43 = (unsigned __int16)v31[v42 + 1];
									v44 = (unsigned __int16)word_1409D819E[v42++];
									if ((_DWORD)v43 != v44)
										goto LABEL_64;
								}
								sub_140058900(a1, v43, 0);
								sub_14012E920(a1, v64);
								goto LABEL_110;
							}
						}
					}
				}
			}
		}
	LABEL_64:
		*(_QWORD*)(a1 + 16) -= 16i64;
	LABEL_65:
		result = sub_1401A5BC0(v4, "N");
		v4 = result;
		v64 = result;
	}
	return result;
}
// 14012EB12: conditional instruction was optimized away because rdi.8!=0
// 14012EB2C: conditional instruction was optimized away because rdi.8!=0
// 14012EC7D: conditional instruction was optimized away because rdi.8!=0
// 1409D8146: using guessed type __int16 word_1409D8146[];
// 1409D815E: using guessed type __int16 word_1409D815E[];
// 1409D819E: using guessed type __int16 word_1409D819E[];
// 1409D826E: using guessed type __int16 word_1409D826E[];
// 1409D8306: using guessed type __int16 word_1409D8306[];
// 1409D860C: using guessed type unsigned __int16 word_1409D860C[8];

