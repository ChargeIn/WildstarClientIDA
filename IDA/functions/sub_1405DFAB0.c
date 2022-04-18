#include "../winhttp.h"

//----- (00000001405DFAB0) ----------------------------------------------------
__int64 __fastcall sub_1405DFAB0(__int64 a1, unsigned __int16* a2)
{
	__int64 v2; // r14
	unsigned __int16* v3; // r12
	unsigned __int64 v5; // r15
	__int64 v6; // rbp
	unsigned __int64 v7; // rsi
	_QWORD* v8; // rbx
	int* v9; // rax
	__int64 v10; // rbx
	unsigned __int64 v11; // rbp
	int** v12; // rsi
	int* v13; // rax
	int* v14; // rcx
	__int64 v15; // rcx
	unsigned __int64 v16; // rbp
	int** v17; // r14
	int* v18; // rax
	int* v19; // rcx
	unsigned __int64 v20; // rbp
	int** v21; // r15
	int* v22; // rax
	int* v23; // rcx
	__int64 v24; // rcx
	__int64 v25; // rcx
	int v26; // edx
	__int64 v27; // r9
	__int64 v28; // rdx
	__int64 v29; // rcx
	__int64 v31[2]; // [rsp+30h] [rbp-58h] BYREF
	__int64 v32[2]; // [rsp+40h] [rbp-48h] BYREF
	unsigned __int64 v33; // [rsp+90h] [rbp+8h]
	__int64 v35; // [rsp+A0h] [rbp+18h]

	v2 = 0i64;
	v3 = a2;
	v5 = 0i64;
	v33 = 0i64;
	if (*a2)
	{
		v35 = 0i64;
		do
		{
			v6 = v2 + *((_QWORD*)v3 + 1);
			v7 = (*(__int64(__fastcall**)(__int64))(a1 + 144))(v6);
			v8 = *(_QWORD**)(*(_QWORD*)(a1 + 136) + 8 * (v7 % *(_QWORD*)(a1 + 128)));
			if (!v8)
				goto LABEL_9;
			while (v7 != *v8 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 152))(v6, v8 + 2))
			{
				v8 = (_QWORD*)v8[1];
				if (!v8)
					goto LABEL_9;
			}
			if (v8 == (_QWORD*)-24i64)
			{
			LABEL_9:
				v9 = sub_14018B280(280i64, 0);
				if (v9)
					v10 = sub_1405DA9F0(
						(__int64)v9,
						(__int64*)(v2 + *((_QWORD*)v3 + 1)),
						(_QWORD*)(a1 + 600),
						++ * (_DWORD*)(a1 + 648));
				else
					v10 = 0i64;
				if (*(_QWORD*)(a1 + 120) == *(_QWORD*)(a1 + 128))
					sub_1400290D0(a1 + 120);
				v11 = (*(__int64(__fastcall**)(__int64))(a1 + 144))(v10);
				v12 = (int**)(*(_QWORD*)(a1 + 136) + 8 * (v11 % *(_QWORD*)(a1 + 128)));
				v13 = sub_14018B280(32i64, 0);
				if (v13)
				{
					v14 = *v12;
					*(_QWORD*)v13 = v11;
					*((_QWORD*)v13 + 1) = v14;
					v15 = *(_QWORD*)v10;
					*((_QWORD*)v13 + 3) = v10;
					*((_QWORD*)v13 + 2) = v15;
				}
				else
				{
					v13 = 0i64;
				}
				*v12 = v13;
				++* (_QWORD*)(a1 + 120);
				if (*(_QWORD*)(a1 + 80) == *(_QWORD*)(a1 + 88))
					sub_1400290D0(a1 + 80);
				v16 = (*(__int64(__fastcall**)(__int64))(a1 + 104))(v10 + 8);
				v17 = (int**)(*(_QWORD*)(a1 + 96) + 8 * (v16 % *(_QWORD*)(a1 + 88)));
				v18 = sub_14018B280(32i64, 0);
				if (v18)
				{
					v19 = *v17;
					*(_QWORD*)v18 = v16;
					*((_QWORD*)v18 + 1) = v19;
					LODWORD(v19) = *(_DWORD*)(v10 + 8);
					*((_QWORD*)v18 + 3) = v10;
					v18[4] = (int)v19;
				}
				else
				{
					v18 = 0i64;
				}
				*v17 = v18;
				++* (_QWORD*)(a1 + 80);
				if (*(_QWORD*)(a1 + 160) == *(_QWORD*)(a1 + 168))
					sub_1400290D0(a1 + 160);
				v20 = (*(__int64(__fastcall**)(__int64))(a1 + 184))(v10 + 184);
				v21 = (int**)(*(_QWORD*)(a1 + 176) + 8 * (v20 % *(_QWORD*)(a1 + 168)));
				v22 = sub_14018B280(40i64, 0);
				if (v22)
				{
					v23 = *v21;
					*(_QWORD*)v22 = v20;
					*((_QWORD*)v22 + 1) = v23;
					*((_QWORD*)v22 + 2) = *(_QWORD*)(v10 + 184);
					v24 = *(_QWORD*)(v10 + 192);
					*((_QWORD*)v22 + 4) = v10;
					*((_QWORD*)v22 + 3) = v24;
				}
				else
				{
					v22 = 0i64;
				}
				*v21 = v22;
				++* (_QWORD*)(a1 + 160);
				if (v10)
				{
					v25 = *(unsigned int*)(v10 + 208);
					v26 = 1;
					if (!(_DWORD)v25 || (_DWORD)v25 == 4)
					{
						v26 = 2;
					}
					else if ((_DWORD)v25 == 3)
					{
						v26 = 3;
					}
					v31[1] = (__int64)sub_1405E2A30;
					v31[0] = a1;
					sub_1403F8660(v25, v26, (__int64*)(v10 + 184), v31);
				}
				v27 = *(unsigned int*)(v10 + 8);
				v28 = *(unsigned int*)(v10 + 184);
				v32[0] = a1;
				v32[1] = (__int64)sub_1405E2C10;
				sub_1403F87B0(qword_140C65898, v28, v32, v27);
				v2 = v35;
				v5 = v33;
				v3 = a2;
				*(_DWORD*)(v10 + 256) = 1;
			}
			++v5;
			v2 += 40i64;
			v33 = v5;
			v35 = v2;
		} while (v5 < *v3);
	}
	v29 = qword_140C65898;
	*(_DWORD*)(a1 + 652) = 1;
	Apollo_LUAEvent(*(_QWORD*)(v29 + 29504), "FriendshipLoaded", &unk_1409D0ED6);
	return 0i64;
}
// 1405DFD07: conditional instruction was optimized away because ecx.4 is in (1..2|>=5u)
// 140C65898: using guessed type __int64 qword_140C65898;

