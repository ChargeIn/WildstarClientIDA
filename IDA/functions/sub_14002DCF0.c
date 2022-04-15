#include "../winhttp.h"

//----- (000000014002DCF0) ----------------------------------------------------
void __fastcall sub_14002DCF0(unsigned __int8* a1, unsigned __int64 a2, int** a3)
{
	int* v3; // rsi
	unsigned __int64 v6; // r13
	unsigned __int64 v7; // rbp
	unsigned __int64 v8; // rbx
	int* v9; // rax
	int* v10; // rsi
	int v11; // eax
	int v12; // ecx
	unsigned int v13; // ecx
	unsigned __int64 v14; // rbp
	wchar_t v15; // r12
	__int64 v16; // r15
	__int64 v17; // rax
	int* v18; // rsi
	wchar_t v19; // r12
	__int64 v20; // r15
	__int64 v21; // rax
	int* v22; // rsi
	wchar_t v23; // r12
	__int64 v24; // r15
	__int64 v25; // rax
	int* v26; // rsi
	wchar_t v27; // r15
	__int64 v28; // rbp
	__int64 v29; // rax
	unsigned __int64 v30; // rbp
	int* v31; // rsi
	unsigned __int64 v32; // rbp
	wchar_t v33; // r15
	__int64 v34; // r14
	__int64 v35; // rax
	int* v36; // rsi
	wchar_t v37; // r15
	__int64 v38; // r14
	__int64 v39; // rax
	int* v40; // rsi
	wchar_t v41; // r14
	__int64 v42; // rbp
	__int64 v43; // rax
	int* v44; // rsi
	unsigned __int64 v45; // rbp
	wchar_t v46; // r15
	__int64 v47; // r14
	__int64 v48; // rax
	int* v49; // rsi
	wchar_t v50; // r14
	__int64 v51; // rbp
	__int64 v52; // rax
	__int64 v53; // rbp
	int* v54; // rsi
	__int64 v55; // rbp
	__int64 v56; // rax
	unsigned __int64 v57; // [rsp+58h] [rbp+10h]

	if (a3)
	{
		v3 = *a3;
		v6 = a2 / 3;
		v7 = a2 % 3;
		v57 = a2 % 3;
		v8 = 2 * (a2 / 3 + (a2 % 3 != 0));
		v9 = sub_14018D250(*a3, v8 * 2);
		LOWORD(v9[v8]) = 0;
		*a3 = v9;
		if (v3 != v9 && v3)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v3 - 2) + 8i64))(v3 - 4);
		if (v6)
		{
			do
			{
				v10 = *a3;
				v11 = a1[1] << 8;
				v12 = *a1 << 16;
				a1 += 3;
				v13 = *(a1 - 1) + v11 + v12;
				v14 = v13;
				v15 = aAbcdefghijklmn[(v13 >> 18) & 0x3F];
				if (*a3)
					v16 = *((_QWORD*)v10 - 1);
				else
					v16 = 0i64;
				v17 = sub_14018D140(*a3, v16 + 1);
				*(_WORD*)(v17 + 2 * v16) = v15;
				*(_WORD*)(v17 + 2 * v16 + 2) = 0;
				*a3 = (int*)v17;
				if (v10 != (int*)v17 && v10)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v10 - 2) + 8i64))(v10 - 4);
				v18 = *a3;
				v19 = aAbcdefghijklmn[(v14 >> 12) & 0x3F];
				if (*a3)
					v20 = *((_QWORD*)v18 - 1);
				else
					v20 = 0i64;
				v21 = sub_14018D140(*a3, v20 + 1);
				*(_WORD*)(v21 + 2 * v20) = v19;
				*(_WORD*)(v21 + 2 * v20 + 2) = 0;
				*a3 = (int*)v21;
				if (v18 != (int*)v21 && v18)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v18 - 2) + 8i64))(v18 - 4);
				v22 = *a3;
				v23 = aAbcdefghijklmn[(v14 >> 6) & 0x3F];
				if (*a3)
					v24 = *((_QWORD*)v22 - 1);
				else
					v24 = 0i64;
				v25 = sub_14018D140(*a3, v24 + 1);
				*(_WORD*)(v25 + 2 * v24) = v23;
				*(_WORD*)(v25 + 2 * v24 + 2) = 0;
				*a3 = (int*)v25;
				if (v22 != (int*)v25 && v22)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v22 - 2) + 8i64))(v22 - 4);
				v26 = *a3;
				v27 = aAbcdefghijklmn[v14 & 0x3F];
				if (*a3)
					v28 = *((_QWORD*)v26 - 1);
				else
					v28 = 0i64;
				v29 = sub_14018D140(*a3, v28 + 1);
				*(_WORD*)(v29 + 2 * v28) = v27;
				*(_WORD*)(v29 + 2 * v28 + 2) = 0;
				*a3 = (int*)v29;
				if (v26 != (int*)v29 && v26)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v26 - 2) + 8i64))(v26 - 4);
				--v6;
			} while (v6);
			v7 = v57;
		}
		v30 = v7 - 1;
		if (v30)
		{
			if (v30 != 1)
				return;
			v31 = *a3;
			v32 = (*a1 << 16) + (a1[1] << 8);
			v33 = aAbcdefghijklmn[((unsigned int)((*a1 << 16) + (a1[1] << 8)) >> 18) & 0x3F];
			if (*a3)
				v34 = *((_QWORD*)v31 - 1);
			else
				v34 = 0i64;
			v35 = sub_14018D140(*a3, v34 + 1);
			*(_WORD*)(v35 + 2 * v34) = v33;
			*(_WORD*)(v35 + 2 * v34 + 2) = 0;
			*a3 = (int*)v35;
			if (v31 != (int*)v35 && v31)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v31 - 2) + 8i64))(v31 - 4);
			v36 = *a3;
			v37 = aAbcdefghijklmn[(v32 >> 12) & 0x3F];
			if (*a3)
				v38 = *((_QWORD*)v36 - 1);
			else
				v38 = 0i64;
			v39 = sub_14018D140(*a3, v38 + 1);
			*(_WORD*)(v39 + 2 * v38) = v37;
			*(_WORD*)(v39 + 2 * v38 + 2) = 0;
			*a3 = (int*)v39;
			if (v36 != (int*)v39 && v36)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v36 - 2) + 8i64))(v36 - 4);
			v40 = *a3;
			v41 = aAbcdefghijklmn[(v32 >> 6) & 0x3F];
			if (*a3)
				v42 = *((_QWORD*)v40 - 1);
			else
				v42 = 0i64;
			v43 = sub_14018D140(*a3, v42 + 1);
			*(_WORD*)(v43 + 2 * v42) = v41;
			*(_WORD*)(v43 + 2 * v42 + 2) = 0;
		}
		else
		{
			v44 = *a3;
			v45 = *a1 << 16;
			v46 = aAbcdefghijklmn[(*a1 >> 2) & 0x3F];
			if (*a3)
				v47 = *((_QWORD*)v44 - 1);
			else
				v47 = 0i64;
			v48 = sub_14018D140(*a3, v47 + 1);
			*(_WORD*)(v48 + 2 * v47) = v46;
			*(_WORD*)(v48 + 2 * v47 + 2) = 0;
			*a3 = (int*)v48;
			if (v44 != (int*)v48 && v44)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v44 - 2) + 8i64))(v44 - 4);
			v49 = *a3;
			v50 = aAbcdefghijklmn[(v45 >> 12) & 0x3F];
			if (*a3)
				v51 = *((_QWORD*)v49 - 1);
			else
				v51 = 0i64;
			v52 = sub_14018D140(*a3, v51 + 1);
			*(_WORD*)(v52 + 2 * v51) = v50;
			*(_WORD*)(v52 + 2 * v51 + 2) = 0;
			*a3 = (int*)v52;
			if (v49 != (int*)v52 && v49)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v49 - 2) + 8i64))(v49 - 4);
			v40 = *a3;
			if (*a3)
				v53 = *((_QWORD*)v40 - 1);
			else
				v53 = 0i64;
			v43 = sub_14018D140(*a3, v53 + 1);
			*(_DWORD*)(v43 + 2 * v53) = 61;
		}
		*a3 = (int*)v43;
		if (v40 != (int*)v43 && v40)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v40 - 2) + 8i64))(v40 - 4);
		v54 = *a3;
		if (*a3)
			v55 = *((_QWORD*)v54 - 1);
		else
			v55 = 0i64;
		v56 = sub_14018D140(*a3, v55 + 1);
		*(_DWORD*)(v56 + 2 * v55) = 61;
		*a3 = (int*)v56;
		if (v54 != (int*)v56)
		{
			if (v54)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v54 - 2) + 8i64))(v54 - 4);
		}
	}
}
// 140B554B0: using guessed type wchar_t aAbcdefghijklmn[65];

