#include "../winhttp.h"

//----- (00000001406F5730) ----------------------------------------------------
__int64 __fastcall sub_1406F5730(__int64 a1, unsigned int a2)
{
	unsigned int v2; // ebp
	__int64 v4; // r13
	int v5; // esi
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // r12d
	int v9; // r15d
	__int64 v10; // rsi
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rbx
	__int64 v14; // rax
	__int64 v15; // rdx
	__int64 v16; // rdx
	__int64 v17; // rax
	__int64* v18; // rax
	__int64 v19; // rax
	__int64* v20; // rax
	__int64 v21; // rax
	__int64* v22; // rax
	__int64 v23; // rax
	__int64* v24; // rax
	unsigned __int64* v25; // rdx
	unsigned __int64 v26; // r8
	__int64 v27; // rbx
	__int64 v28; // rax
	int v29; // ebp
	int* v30; // rsi
	__int64 v31; // rax
	__int64 v32; // rcx
	__int64 v33; // rbx
	__int64 v34; // rax
	int v35; // r14d
	__int64 v36; // rbx
	__int64 v37; // rax
	__int64 v38; // rax
	__int64* v39; // rax
	int v40; // r14d
	__int64 v41; // rbx
	__int64 v42; // rax
	__int64 v43; // rax
	__int64* v44; // rax
	int v45; // r14d
	__int64 v46; // rbx
	__int64 v47; // rax
	__int64 v48; // rax
	__int64* v49; // rax
	__int64 v51; // [rsp+20h] [rbp-58h] BYREF
	__int64 v52; // [rsp+28h] [rbp-50h]
	int v53; // [rsp+80h] [rbp+8h]

	v2 = a2;
	v4 = *(_QWORD*)(qword_140C65898 + 30088);
	if (v4)
		v5 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)v4 + 312i64))(*(_QWORD*)(qword_140C65898 + 30088));
	else
		v5 = 0;
	v53 = v5;
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v6 = *(_QWORD*)(a1 + 16);
	v7 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	v8 = 0;
	*(_QWORD*)v6 = v7;
	*(_QWORD*)(a1 + 16) += 16i64;
	v9 = 0;
	if (v5 > 0)
	{
		do
		{
			v10 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v4 + 328i64))(v4, (unsigned int)v9, v2);
			if (((*(_DWORD*)(v10 + 132) - 1) & 0xFFFFFFF7) != 0)
			{
				v11 = *(_QWORD*)(a1 + 16);
				++v8;
				*(_DWORD*)(v11 + 8) = 3;
				*(double*)v11 = (double)v8;
				v12 = *(_QWORD*)(a1 + 32);
				*(_QWORD*)(a1 + 16) += 16i64;
				if (*(_QWORD*)(v12 + 120) >= *(_QWORD*)(v12 + 112))
					sub_14005E2C0(a1);
				v13 = *(_QWORD*)(a1 + 16);
				v14 = sub_14005C1B0(a1, 0, 0);
				*(_DWORD*)(v13 + 8) = 5;
				*(_QWORD*)v13 = v14;
				*(_QWORD*)(a1 + 16) += 16i64;
				sub_1400F0090(a1, v15, (unsigned __int64*)"strAction", (unsigned __int16*)(v10 + 68));
				sub_1400F0090(a1, v16, (unsigned __int64*)"strActionLocalized", (unsigned __int16*)(v10 + 4));
				LODWORD(v13) = *(_DWORD*)v10;
				sub_140058710(a1, (unsigned __int64*)"idAction", 8ui64);
				v17 = *(_QWORD*)(a1 + 16);
				*(_DWORD*)(v17 + 8) = 3;
				*(double*)v17 = (double)(int)v13;
				*(_QWORD*)(a1 + 16) += 16i64;
				v18 = (__int64*)sub_1400580E0(a1, -3);
				sub_14005EA50(a1, v18, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 32i64;
				LODWORD(v13) = *(_DWORD*)(v10 + 132);
				sub_140058710(a1, (unsigned __int64*)"idCategory", 0xAui64);
				v19 = *(_QWORD*)(a1 + 16);
				*(_DWORD*)(v19 + 8) = 3;
				*(double*)v19 = (double)(int)v13;
				*(_QWORD*)(a1 + 16) += 16i64;
				v20 = (__int64*)sub_1400580E0(a1, -3);
				sub_14005EA50(a1, v20, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 32i64;
				LODWORD(v13) = *(_DWORD*)(v10 + 148);
				sub_140058710(a1, (unsigned __int64*)"nDisplayIndex", 0xDui64);
				v21 = *(_QWORD*)(a1 + 16);
				*(_DWORD*)(v21 + 8) = 3;
				*(double*)v21 = (double)(int)v13;
				*(_QWORD*)(a1 + 16) += 16i64;
				v22 = (__int64*)sub_1400580E0(a1, -3);
				sub_14005EA50(a1, v22, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 32i64;
				LODWORD(v13) = *(_DWORD*)(v10 + 152);
				sub_140058710(a1, (unsigned __int64*)"iInputKeyLookupGroup", 0x14ui64);
				v23 = *(_QWORD*)(a1 + 16);
				*(_DWORD*)(v23 + 8) = 3;
				*(double*)v23 = (double)(int)v13;
				*(_QWORD*)(a1 + 16) += 16i64;
				v24 = (__int64*)sub_1400580E0(a1, -3);
				sub_14005EA50(a1, v24, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 32i64;
				v25 = (unsigned __int64*)sub_14018F0E0(&v51, L"arInputs")[1];
				if (v25)
				{
					v26 = -1i64;
					do
						++v26;
					while (*((_BYTE*)v25 + v26));
					sub_140058710(a1, v25, v26);
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
					*(_QWORD*)(a1 + 16) += 16i64;
				}
				if (v52)
					sub_14018B900(v52, 0);
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v27 = *(_QWORD*)(a1 + 16);
				v28 = sub_14005C1B0(a1, 0, 0);
				*(_DWORD*)(v27 + 8) = 5;
				v29 = 0;
				*(_QWORD*)v27 = v28;
				*(_QWORD*)(a1 + 16) += 16i64;
				v30 = (int*)(v10 + 164);
				do
				{
					v31 = *(_QWORD*)(a1 + 16);
					++v29;
					*(_DWORD*)(v31 + 8) = 3;
					*(double*)v31 = (double)v29;
					v32 = *(_QWORD*)(a1 + 32);
					*(_QWORD*)(a1 + 16) += 16i64;
					if (*(_QWORD*)(v32 + 120) >= *(_QWORD*)(v32 + 112))
						sub_14005E2C0(a1);
					v33 = *(_QWORD*)(a1 + 16);
					v34 = sub_14005C1B0(a1, 0, 0);
					*(_DWORD*)(v33 + 8) = 5;
					*(_QWORD*)v33 = v34;
					*(_QWORD*)(a1 + 16) += 16i64;
					v35 = *(v30 - 2);
					if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
						sub_14005E2C0(a1);
					v36 = *(_QWORD*)(a1 + 16);
					v37 = sub_140062650(a1, (unsigned __int64*)"eDevice", 7ui64);
					*(_DWORD*)(v36 + 8) = 4;
					*(_QWORD*)v36 = v37;
					*(_QWORD*)(a1 + 16) += 16i64;
					v38 = *(_QWORD*)(a1 + 16);
					*(_DWORD*)(v38 + 8) = 3;
					*(double*)v38 = (double)v35;
					*(_QWORD*)(a1 + 16) += 16i64;
					v39 = (__int64*)sub_1400580E0(a1, -3);
					sub_14005EA50(a1, v39, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
					*(_QWORD*)(a1 + 16) -= 32i64;
					v40 = *v30;
					if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
						sub_14005E2C0(a1);
					v41 = *(_QWORD*)(a1 + 16);
					v42 = sub_140062650(a1, (unsigned __int64*)"nCode", 5ui64);
					*(_DWORD*)(v41 + 8) = 4;
					*(_QWORD*)v41 = v42;
					*(_QWORD*)(a1 + 16) += 16i64;
					v43 = *(_QWORD*)(a1 + 16);
					*(_DWORD*)(v43 + 8) = 3;
					*(double*)v43 = (double)v40;
					*(_QWORD*)(a1 + 16) += 16i64;
					v44 = (__int64*)sub_1400580E0(a1, -3);
					sub_14005EA50(a1, v44, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
					*(_QWORD*)(a1 + 16) -= 32i64;
					v45 = *(v30 - 1);
					if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
						sub_14005E2C0(a1);
					v46 = *(_QWORD*)(a1 + 16);
					v47 = sub_140062650(a1, (unsigned __int64*)"eModifier", 9ui64);
					*(_DWORD*)(v46 + 8) = 4;
					*(_QWORD*)v46 = v47;
					*(_QWORD*)(a1 + 16) += 16i64;
					v48 = *(_QWORD*)(a1 + 16);
					*(_DWORD*)(v48 + 8) = 3;
					*(double*)v48 = (double)v45;
					*(_QWORD*)(a1 + 16) += 16i64;
					v49 = (__int64*)sub_1400580E0(a1, -3);
					sub_14005EA50(a1, v49, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
					*(_QWORD*)(a1 + 16) -= 32i64;
					sub_14005EA50(
						a1,
						(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
						(int*)(*(_QWORD*)(a1 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
					*(_QWORD*)(a1 + 16) -= 32i64;
					v30 += 7;
				} while ((unsigned int)v29 < 8);
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
				v2 = a2;
			}
			++v9;
		} while (v9 < v53);
	}
	return 1i64;
}
// 1406F584E: variable 'v15' is possibly undefined
// 1406F5861: variable 'v16' is possibly undefined
// 140B41358: using guessed type wchar_t aArinputs_0[9];
// 140C65898: using guessed type __int64 qword_140C65898;

