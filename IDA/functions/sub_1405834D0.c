#include "../winhttp.h"

//----- (00000001405834D0) ----------------------------------------------------
__int64 __fastcall sub_1405834D0(__int64 a1, _DWORD* a2)
{
	__int64 v2; // rcx
	_DWORD* v3; // rax
	int* v4; // rsi
	__int64 v5; // rax
	unsigned __int64 v6; // r13
	int* v7; // r14
	int* v8; // r12
	__int64 v9; // rax
	__int64 v10; // rcx
	_QWORD* v11; // rax
	__int64* v12; // rbx
	__int64 v13; // rbx
	int* v14; // rax
	__int64 v15; // r15
	__int64 v16; // rdi
	int* v17; // rax
	int* v18; // rsi
	unsigned __int64 v19; // rdi
	__int64 v20; // r14
	__int64 v21; // rdi
	int* v22; // rax
	unsigned __int64 v23; // rdi
	int* v24; // rax
	int* v25; // rbx
	bool v26; // cf
	__int64 v28; // [rsp+20h] [rbp-E0h]
	int* v29; // [rsp+28h] [rbp-D8h]
	__int64 v30; // [rsp+30h] [rbp-D0h]
	__int64 v31; // [rsp+38h] [rbp-C8h]
	__int64 v33; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v34; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v35; // [rsp+58h] [rbp-A8h]
	__int64 v36[5]; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v37; // [rsp+88h] [rbp-78h]
	__int128 v38; // [rsp+90h] [rbp-70h] BYREF
	char v39[8]; // [rsp+A8h] [rbp-58h] BYREF
	int* v40; // [rsp+B0h] [rbp-50h]
	__int64 v41; // [rsp+B8h] [rbp-48h]
	__int64 v42; // [rsp+C8h] [rbp-38h]
	unsigned __int64 v43; // [rsp+F0h] [rbp-10h] BYREF
	_QWORD v44[11]; // [rsp+F8h] [rbp-8h] BYREF

	v2 = 0i64;
	v3 = a2;
	v31 = 0i64;
	v4 = 0i64;
	v29 = 0i64;
	v28 = 0i64;
	if (*a2)
	{
		v30 = 0i64;
		while (1)
		{
			v5 = *((_QWORD*)v3 + 1);
			v6 = *(_QWORD*)(v2 + v5);
			v7 = *(int**)(v2 + v5 + 8);
			v8 = *(int**)(v2 + v5 + 16);
			v9 = *(_QWORD*)(v2 + v5 + 24);
			v10 = qword_140C7DE58;
			v35 = v9;
			v37 = v9;
			v11 = *(_QWORD**)(qword_140C7DE58 + 8);
			if (!v11)
				goto LABEL_12;
			do
			{
				if (v11[4] < v6)
				{
					v11 = (_QWORD*)v11[3];
				}
				else
				{
					v10 = (__int64)v11;
					v11 = (_QWORD*)v11[2];
				}
			} while (v11);
			if (v10 == qword_140C7DE58 || v6 < *(_QWORD*)(v10 + 32))
			{
			LABEL_12:
				v34 = qword_140C7DE58;
				v12 = &v34;
			}
			else
			{
				v33 = v10;
				v12 = &v33;
			}
			v13 = *v12;
			if (v13 == qword_140C7DE58)
			{
				v38 = 0i64;
				v14 = sub_14018B280(40i64, 0);
				v41 = 0i64;
				v40 = v14;
				*(_BYTE*)v14 = 0;
				*((_QWORD*)v40 + 1) = 0i64;
				*((_QWORD*)v40 + 2) = v40;
				*((_QWORD*)v40 + 3) = v40;
				v42 = 0i64;
				v43 = v6;
				sub_14058FA40((__int64)v44, (__int64)&v38);
				sub_140590880((__int64)&unk_140C7DE50, (__int64)v36, &v43);
				v13 = v36[0];
				sub_140582D30(v44);
				if (v42)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v42 - 16) + 8i64))(v42 - 16);
				if (v41)
				{
					sub_140590310((__int64)v39, *((_QWORD**)v40 + 1));
					*((_QWORD*)v40 + 2) = v40;
					*((_QWORD*)v40 + 1) = 0i64;
					*((_QWORD*)v40 + 3) = v40;
					v41 = 0i64;
				}
				sub_14018B900((__int64)v40, 0);
				if (*((_QWORD*)&v38 + 1))
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*((_QWORD*)&v38 + 1) - 16i64) + 8i64))(*((_QWORD*)&v38 + 1) - 16i64);
				if ((_QWORD)v38)
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)(v38 - 16) + 8i64))(v38 - 16);
			}
			v15 = *(_QWORD*)(v13 + 40);
			if (v7)
			{
				v16 = 0i64;
				if (*(_WORD*)v7)
				{
					do
						++v16;
					while (*((_WORD*)v7 + v16));
				}
				v17 = sub_14018B280(2 * v16 + 18, 0);
				if (v17)
				{
					*((_QWORD*)v17 + 1) = v16;
					*(_QWORD*)v17 = off_140B55060;
				}
				else
				{
					v17 = 0i64;
				}
				v18 = v17 + 4;
				v19 = 2 * v16;
				sub_1407DB590(v17 + 4, v7, v19);
				*(_WORD*)((char*)v18 + v19) = 0;
				*(_QWORD*)(v13 + 40) = v18;
				v4 = 0i64;
			}
			else
			{
				*(_QWORD*)(v13 + 40) = 0i64;
			}
			if (v15)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
			v20 = *(_QWORD*)(v13 + 48);
			if (v8)
			{
				v21 = 0i64;
				if (*(_WORD*)v8)
				{
					do
						++v21;
					while (*((_WORD*)v8 + v21));
				}
				v22 = sub_14018B280(2 * v21 + 18, 0);
				if (v22)
				{
					*((_QWORD*)v22 + 1) = v21;
					*(_QWORD*)v22 = off_140B55060;
				}
				else
				{
					v22 = 0i64;
				}
				v4 = v22 + 4;
				v23 = 2 * v21;
				sub_1407DB590(v22 + 4, v8, v23);
				*(_WORD*)((char*)v4 + v23) = 0;
			}
			*(_QWORD*)(v13 + 48) = v4;
			if (v20)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v20 - 16) + 8i64))(v20 - 16);
			v4 = v29;
			*(_WORD*)(v13 + 56) = v35;
			*(_WORD*)(v13 + 58) = WORD1(v37);
			*(_DWORD*)(v13 + 60) = HIDWORD(v37);
			v24 = sub_14018DB00((__int64)v29, v31 + 1, 8i64);
			*(_QWORD*)&v24[2 * v31] = v6;
			v25 = v24;
			if (v29 != v24)
			{
				sub_1407DB590(v24, v29, 8 * v31);
				if (v29)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v29 - 2) + 8i64))(v29 - 4);
				v4 = v25;
				v29 = v25;
			}
			v2 = v30 + 32;
			v26 = v28 + 1 < (unsigned __int64)(unsigned int)*a2;
			v3 = a2;
			++v31;
			++v28;
			v30 += 32i64;
			if (!v26)
				break;
			v4 = 0i64;
		}
	}
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "RecruitmentGuildsUpdated", &unk_1409D0ED3);
	if (v4)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v4 - 2) + 8i64))(v4 - 4);
	return 0i64;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DE58: using guessed type __int64 qword_140C7DE58;
// 1405834D0: using guessed type _QWORD var_88[11];
// 1405834D0: using guessed type __int64 var_120[5];
// 1405834D0: using guessed type char var_D8[8];

