#include "../winhttp.h"

//----- (000000014002D4B0) ----------------------------------------------------
__int64 __fastcall sub_14002D4B0(__int64 a1)
{
	__int64* v2; // rax
	__int64* v3; // rdi
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // ecx
	_QWORD* v7; // rax
	_QWORD* v8; // rsi
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // rdi
	__int64 v14; // rdx
	unsigned __int64* v15; // r14
	unsigned __int64 v16; // rdi
	__int64 v17; // rbx
	__int64 v18; // rax
	__int64 v19; // rcx
	__int64 v20; // rbx
	__int64 v21; // rax
	_QWORD* v22; // rax
	_QWORD* v23; // rdi
	int v24; // esi
	__int64 v25; // rax
	__int64 v26; // rcx
	__int64 v27; // rbx
	__int64 v28; // rax
	__int64 v29; // r14
	__int64 v30; // rdx
	__int64 v31; // rdx
	unsigned __int64* v32; // r15
	unsigned __int64 v33; // r14
	__int64 v34; // rbx
	__int64 v35; // rax
	__int64 v36; // rcx
	__int64 v37; // rbx
	__int64 v38; // rax
	int v39; // r13d
	_QWORD* v40; // rax
	_QWORD* v41; // rbx
	__int64 v42; // rax
	unsigned __int64* v43; // r12
	unsigned __int64 v44; // r15
	__int64 v45; // r14
	__int64 v46; // rax
	__int64 v47; // rcx
	__int64* v49; // [rsp+20h] [rbp-78h]
	__int64 v50; // [rsp+28h] [rbp-70h] BYREF
	__int64 v51; // [rsp+30h] [rbp-68h]
	__int64 v52; // [rsp+A0h] [rbp+8h]
	int v53; // [rsp+A8h] [rbp+10h]
	__int64 v54; // [rsp+B0h] [rbp+18h]
	_QWORD* v55; // [rsp+B8h] [rbp+20h]

	v2 = (__int64*)sub_14002CDB0();
	v3 = sub_14002CE60(v2);
	v49 = v3;
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v4 = *(_QWORD*)(a1 + 16);
	v5 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	v6 = 0;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(a1 + 16) += 16i64;
	v7 = (_QWORD*)v3[1];
	v8 = (_QWORD*)*v7;
	v55 = (_QWORD*)*v7;
	if ((_QWORD*)*v7 != v7)
	{
		do
		{
			v9 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v9 + 8) = 3;
			v53 = v6 + 1;
			*(double*)v9 = (double)(v6 + 1);
			v10 = *(_QWORD*)(a1 + 32);
			*(_QWORD*)(a1 + 16) += 16i64;
			if (*(_QWORD*)(v10 + 120) >= *(_QWORD*)(v10 + 112))
				sub_14005E2C0(a1);
			v11 = *(_QWORD*)(a1 + 16);
			v12 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v11 + 8) = 5;
			*(_QWORD*)v11 = v12;
			*(_QWORD*)(a1 + 16) += 16i64;
			v13 = v8[2];
			v54 = v13;
			sub_1400F0870(a1, v14, L"strGroupName", *(unsigned __int16**)(v13 + 8));
			v15 = (unsigned __int64*)sub_14018F0E0(&v50, L"arCredits")[1];
			if (v15)
			{
				v16 = -1i64;
				do
					++v16;
				while (*((_BYTE*)v15 + v16));
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v17 = *(_QWORD*)(a1 + 16);
				v18 = sub_140062650(a1, v15, v16);
				v13 = v54;
				*(_DWORD*)(v17 + 8) = 4;
				*(_QWORD*)v17 = v18;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			}
			v19 = v51;
			*(_QWORD*)(a1 + 16) += 16i64;
			if (v19)
				sub_14018B900(v19, 0);
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v20 = *(_QWORD*)(a1 + 16);
			v21 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v20 + 8) = 5;
			*(_QWORD*)v20 = v21;
			*(_QWORD*)(a1 + 16) += 16i64;
			v22 = *(_QWORD**)(v13 + 40);
			v23 = (_QWORD*)*v22;
			if ((_QWORD*)*v22 != v22)
			{
				v24 = 0;
				do
				{
					v25 = *(_QWORD*)(a1 + 16);
					++v24;
					*(_DWORD*)(v25 + 8) = 3;
					*(double*)v25 = (double)v24;
					v26 = *(_QWORD*)(a1 + 32);
					*(_QWORD*)(a1 + 16) += 16i64;
					if (*(_QWORD*)(v26 + 120) >= *(_QWORD*)(v26 + 112))
						sub_14005E2C0(a1);
					v27 = *(_QWORD*)(a1 + 16);
					v28 = sub_14005C1B0(a1, 0, 0);
					*(_DWORD*)(v27 + 8) = 5;
					*(_QWORD*)v27 = v28;
					*(_QWORD*)(a1 + 16) += 16i64;
					v29 = v23[2];
					v52 = v29;
					sub_1400F0870(a1, v30, L"strPersonName", *(unsigned __int16**)(v29 + 8));
					sub_1400F0870(a1, v31, L"strImage", *(unsigned __int16**)(v29 + 40));
					v32 = (unsigned __int64*)sub_14018F0E0(&v50, L"arTitles")[1];
					if (v32)
					{
						v33 = -1i64;
						do
							++v33;
						while (*((_BYTE*)v32 + v33));
						if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
							sub_14005E2C0(a1);
						v34 = *(_QWORD*)(a1 + 16);
						v35 = sub_140062650(a1, v32, v33);
						v29 = v52;
						*(_DWORD*)(v34 + 8) = 4;
						*(_QWORD*)v34 = v35;
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
					}
					v36 = v51;
					*(_QWORD*)(a1 + 16) += 16i64;
					if (v36)
						sub_14018B900(v36, 0);
					if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
						sub_14005E2C0(a1);
					v37 = *(_QWORD*)(a1 + 16);
					v38 = sub_14005C1B0(a1, 0, 0);
					*(_DWORD*)(v37 + 8) = 5;
					v39 = 0;
					*(_QWORD*)v37 = v38;
					*(_QWORD*)(a1 + 16) += 16i64;
					v40 = *(_QWORD**)(v29 + 72);
					v41 = (_QWORD*)*v40;
					if ((_QWORD*)*v40 != v40)
					{
						do
						{
							v42 = *(_QWORD*)(a1 + 16);
							++v39;
							*(_DWORD*)(v42 + 8) = 3;
							*(double*)v42 = (double)v39;
							*(_QWORD*)(a1 + 16) += 16i64;
							v43 = (unsigned __int64*)sub_14018F0E0(&v50, (unsigned __int16*)v41[3])[1];
							if (v43)
							{
								v44 = -1i64;
								do
									++v44;
								while (*((_BYTE*)v43 + v44));
								if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
									sub_14005E2C0(a1);
								v45 = *(_QWORD*)(a1 + 16);
								v46 = sub_140062650(a1, v43, v44);
								*(_DWORD*)(v45 + 8) = 4;
								*(_QWORD*)v45 = v46;
								v29 = v52;
							}
							else
							{
								*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
							}
							v47 = v51;
							*(_QWORD*)(a1 + 16) += 16i64;
							if (v47)
								sub_14018B900(v47, 0);
							sub_14005EA50(
								a1,
								(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
								(int*)(*(_QWORD*)(a1 + 16) - 32i64),
								(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
							*(_QWORD*)(a1 + 16) -= 32i64;
							v41 = (_QWORD*)*v41;
						} while (v41 != *(_QWORD**)(v29 + 72));
					}
					sub_14005EA50(
						a1,
						(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
						(int*)(*(_QWORD*)(a1 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
					*(_QWORD*)(a1 + 16) -= 32i64;
					sub_14005EA50(
						a1,
						(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
						(int*)(*(_QWORD*)(a1 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
					*(_QWORD*)(a1 + 16) -= 32i64;
					v23 = (_QWORD*)*v23;
				} while (v23 != *(_QWORD**)(v54 + 40));
				v8 = v55;
			}
			sub_14005EA50(
				a1,
				(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
				(int*)(*(_QWORD*)(a1 + 16) - 32i64),
				(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 32i64;
			sub_14005EA50(
				a1,
				(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
				(int*)(*(_QWORD*)(a1 + 16) - 32i64),
				(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 32i64;
			v8 = (_QWORD*)*v8;
			v6 = v53;
			v55 = v8;
		} while (v8 != (_QWORD*)v49[1]);
	}
	return 1i64;
}
// 14002D5B5: variable 'v14' is possibly undefined
// 14002D70E: variable 'v30' is possibly undefined
// 14002D721: variable 'v31' is possibly undefined
// 1409EEBF8: using guessed type wchar_t aArcredits[10];
// 1409EEC10: using guessed type wchar_t aStrgroupname[13];
// 1409EEC30: using guessed type wchar_t aStrimage[9];
// 1409EEC48: using guessed type wchar_t aStrpersonname[14];
// 1409EEC68: using guessed type wchar_t aArtitles[9];

