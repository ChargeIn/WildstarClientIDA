#include "../winhttp.h"

//----- (00000001405E2530) ----------------------------------------------------
void sub_1405E2530(__int64 a1, _QWORD* a2, __int64 a3, ...)
{
	__int64 v3; // r14
	unsigned __int64* v7; // r14
	int v8; // esi
	int* v9; // rax
	int* v10; // rbx
	int** i; // rax
	unsigned __int64 v12; // r13
	int** v13; // rbp
	int* v14; // rax
	int* v15; // rcx
	unsigned __int64 v16; // rbp
	int** v17; // rsi
	int* v18; // rax
	int* v19; // rcx
	__int64 v20; // rcx
	_WORD* v21; // rcx
	__int64 v22; // rdx
	__int64 v23; // r12
	__int16 v24; // ax
	__int64 v25; // rcx
	__int64 v26; // r9
	__int64 v27; // rcx
	unsigned __int64 v28; // rbx
	__int64 v29; // rax
	int v30; // eax
	__int64 v31; // rcx
	__int64 v32; // [rsp+20h] [rbp-28h]
	int* v33; // [rsp+68h] [rbp+20h] BYREF
	va_list va; // [rsp+68h] [rbp+20h]
	__int64 v35; // [rsp+70h] [rbp+28h]
	__int64 v36; // [rsp+78h] [rbp+30h]
	__int64 v37; // [rsp+80h] [rbp+38h]
	va_list va1; // [rsp+88h] [rbp+40h] BYREF

	va_start(va1, a3);
	va_start(va, a3);
	v33 = va_arg(va1, int*);
	v35 = va_arg(va1, _QWORD);
	v36 = va_arg(va1, _QWORD);
	v37 = va_arg(va1, _QWORD);
	if (*(_DWORD*)a2 && a2[1] && a3 && !(unsigned int)sub_1404BC580(a1 + 160, (__int64)a2, (int**)va))
	{
		v32 = v3;
		v7 = (unsigned __int64*)(a1 + 320);
		v8 = 1;
		if ((unsigned int)sub_1404BC580(a1 + 320, (__int64)a2, (int**)va))
		{
			v10 = v33;
		}
		else
		{
			v9 = sub_14018B280(224i64, 0);
			v10 = v9;
			if (v9)
			{
				*v9 = 0;
				v9[44] = 0;
				*((_QWORD*)v9 + 23) = 0i64;
				v9[48] = 23;
				*(_QWORD*)(v9 + 49) = 4i64;
				*((_QWORD*)v9 + 26) = 0i64;
				*((_QWORD*)v9 + 27) = 0i64;
				*(_QWORD*)(v9 + 1) = 0i64;
				*(_QWORD*)(v9 + 3) = 0i64;
				*(_QWORD*)(v9 + 5) = 0i64;
				*(_QWORD*)(v9 + 7) = 0i64;
				*(_QWORD*)(v9 + 9) = 0i64;
				*(_QWORD*)(v9 + 11) = 0i64;
				*(_QWORD*)(v9 + 13) = 0i64;
				*(_QWORD*)(v9 + 15) = 0i64;
				*((_WORD*)v9 + 34) = 0;
				sub_1407E4830((int*)((char*)v9 + 70), 0i64, 0x66ui64);
			}
			else
			{
				v10 = 0i64;
			}
			if (!*((_QWORD*)v10 + 26))
			{
				for (i = (int**)(a1 + 624); *i; i = (int**)(*i + 54))
					;
				*((_QWORD*)v10 + 26) = i;
				*((_QWORD*)v10 + 27) = 0i64;
				*i = v10;
			}
			*v10 = ++ * (_DWORD*)(a1 + 648);
			if (*(_QWORD*)(a1 + 280) == *(_QWORD*)(a1 + 288))
				sub_1400290D0(a1 + 280);
			v12 = (*(__int64(__fastcall**)(int*))(a1 + 304))(v10);
			v13 = (int**)(*(_QWORD*)(a1 + 296) + 8 * (v12 % *(_QWORD*)(a1 + 288)));
			v14 = sub_14018B280(32i64, 0);
			if (v14)
			{
				v15 = *v13;
				*(_QWORD*)v14 = v12;
				*((_QWORD*)v14 + 1) = v15;
				LODWORD(v15) = *v10;
				*((_QWORD*)v14 + 3) = v10;
				v14[4] = (int)v15;
			}
			else
			{
				v14 = 0i64;
			}
			*v13 = v14;
			++* (_QWORD*)(a1 + 280);
			if (*v7 == *(_QWORD*)(a1 + 328))
				sub_1400290D0(a1 + 320);
			v16 = (*(__int64(__fastcall**)(_QWORD*))(a1 + 344))(a2);
			v17 = (int**)(*(_QWORD*)(a1 + 336) + 8 * (v16 % *(_QWORD*)(a1 + 328)));
			v18 = sub_14018B280(40i64, 0);
			if (v18)
			{
				v19 = *v17;
				*(_QWORD*)v18 = v16;
				*((_QWORD*)v18 + 1) = v19;
				*((_QWORD*)v18 + 2) = *a2;
				v20 = a2[1];
				*((_QWORD*)v18 + 4) = v10;
				*((_QWORD*)v18 + 3) = v20;
				*v17 = v18;
			}
			else
			{
				*v17 = 0i64;
			}
			++* v7;
			v8 = 0;
		}
		v21 = v10 + 1;
		v22 = 33i64;
		v23 = a3 - (_QWORD)(v10 + 1);
		while (v22 != -2147483613)
		{
			v24 = *(_WORD*)((char*)v21 + v23);
			if (!v24)
				break;
			*v21++ = v24;
			if (!--v22)
			{
				--v21;
				break;
			}
		}
		*v21 = 0;
		v25 = qword_140C65898;
		*((_WORD*)v10 + 35) = 0;
		*((_QWORD*)v10 + 22) = *a2;
		*((_QWORD*)v10 + 23) = a2[1];
		v10[48] = v35;
		v10[49] = v36;
		v10[50] = v37;
		v26 = (unsigned int)*v10;
		v27 = *(_QWORD*)(v25 + 29504);
		if (v8)
			sub_1400EA3E0(v27, "FriendshipSuggestedUpdate", byte_1409EAADC, v26, v32);
		else
			sub_1400EA3E0(v27, "FriendshipSuggestedAdd", byte_1409EAB0C, v26, v32);
		v28 = *v7;
		v29 = sub_140200220(0x345u);
		if (v29)
			v30 = *(_DWORD*)(v29 + 4);
		else
			v30 = 50;
		if (v28 > v30)
		{
			sub_1400EA3E0(
				*(_QWORD*)(qword_140C65898 + 29504),
				"FriendshipSuggestedRemove",
				byte_1409EAABC,
				**(unsigned int**)(a1 + 624));
			sub_1400B6120(a1 + 320, *(_QWORD*)(a1 + 624) + 176i64);
			sub_1400B6120(a1 + 280, *(_QWORD*)(a1 + 624));
			v31 = *(_QWORD*)(a1 + 624);
			if (v31)
				sub_1405DDE00(v31);
		}
	}
}
// 1405E2530: could not find valid save-restore pair for r14
// 1405E2797: conditional instruction was optimized away because rdx.8!=0
// 1405E258C: variable 'v3' is possibly undefined
// 1409EAABC: using guessed type _BYTE byte_1409EAABC[32];
// 1409EAADC: using guessed type _BYTE byte_1409EAADC[48];
// 1409EAB0C: using guessed type _BYTE byte_1409EAB0C[16];
// 140C65898: using guessed type __int64 qword_140C65898;

