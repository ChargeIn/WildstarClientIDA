#include "../winhttp.h"

//----- (00000001405828F0) ----------------------------------------------------
__int64 __fastcall sub_1405828F0(__int64 a1, unsigned int* a2)
{
	__int64 v2; // rdi
	__int64 v3; // rbx
	__int64 v4; // rcx
	unsigned __int64* v5; // rcx
	int* v6; // rsi
	int* v7; // r14
	__int64 v8; // r12
	__int64 v9; // r13
	int* v10; // rax
	__int64 v11; // r15
	__int64 v12; // rbx
	int* v13; // rax
	int* v14; // rdi
	unsigned __int64 v15; // rbx
	__int64 v16; // rsi
	__int64 v17; // rbx
	int* v18; // rax
	int* v19; // rdi
	unsigned __int64 v20; // rbx
	unsigned __int64 v21; // r14
	int* v22; // r12
	int* v23; // rsi
	int* v24; // rax
	int* v25; // rbx
	unsigned __int64 v26; // rdi
	int* v27; // rax
	int* v28; // rax
	__int64 v29; // rbx
	__int64 v30; // rcx
	bool v31; // cf
	int* v33; // [rsp+20h] [rbp-99h] BYREF
	unsigned int* v34; // [rsp+28h] [rbp-91h]
	__int64 v35; // [rsp+30h] [rbp-89h]
	__int64 v36; // [rsp+38h] [rbp-81h]
	unsigned __int64 v37[3]; // [rsp+40h] [rbp-79h] BYREF
	__int64 v38; // [rsp+58h] [rbp-61h]
	__int64 v39; // [rsp+60h] [rbp-59h]
	int* v40; // [rsp+68h] [rbp-51h]
	char v41[16]; // [rsp+70h] [rbp-49h] BYREF
	__int128 v42; // [rsp+80h] [rbp-39h] BYREF
	__int16 v43; // [rsp+90h] [rbp-29h]
	__int16 v44; // [rsp+92h] [rbp-27h]
	int v45; // [rsp+94h] [rbp-25h]
	char v46[8]; // [rsp+98h] [rbp-21h] BYREF
	int* v47; // [rsp+A0h] [rbp-19h]
	__int64 v48; // [rsp+A8h] [rbp-11h]
	__int64 v49; // [rsp+B8h] [rbp-1h]

	v2 = 0i64;
	v3 = (__int64)a2;
	v34 = a2;
	if (qword_140C7DE60)
	{
		sub_140590610((__int64)&unk_140C7DE50, *(_QWORD**)(qword_140C7DE58 + 8));
		*(_QWORD*)(qword_140C7DE58 + 16) = qword_140C7DE58;
		*(_QWORD*)(qword_140C7DE58 + 8) = 0i64;
		*(_QWORD*)(qword_140C7DE58 + 24) = qword_140C7DE58;
		qword_140C7DE60 = 0i64;
	}
	v35 = 0i64;
	if (*(_DWORD*)v3)
	{
		v4 = 0i64;
		v36 = 0i64;
		do
		{
			v5 = (unsigned __int64*)(*(_QWORD*)(v3 + 8) + v4);
			v6 = (int*)v5[1];
			v7 = (int*)v5[2];
			v8 = v5[3];
			v9 = v5[4];
			v37[0] = *v5;
			v10 = (int*)v5[5];
			v37[1] = (unsigned __int64)v6;
			v42 = 0i64;
			v37[2] = (unsigned __int64)v7;
			v38 = v8;
			v39 = v9;
			v33 = v10;
			v40 = v10;
			v47 = sub_14018B280(40i64, 0);
			v48 = 0i64;
			*(_BYTE*)v47 = 0;
			*((_QWORD*)v47 + 1) = 0i64;
			*((_QWORD*)v47 + 2) = v47;
			*((_QWORD*)v47 + 3) = v47;
			v11 = v42;
			v49 = 0i64;
			if (v6)
			{
				v12 = 0i64;
				if (*(_WORD*)v6)
				{
					do
						++v12;
					while (*((_WORD*)v6 + v12));
				}
				v13 = sub_14018B280(2 * v12 + 18, 0);
				if (v13)
				{
					*((_QWORD*)v13 + 1) = v12;
					*(_QWORD*)v13 = off_140B55060;
				}
				else
				{
					v13 = 0i64;
				}
				v14 = v13 + 4;
				v15 = 2 * v12;
				sub_1407DB590(v13 + 4, v6, v15);
				*(_WORD*)((char*)v14 + v15) = 0;
				*(_QWORD*)&v42 = v14;
				v2 = 0i64;
			}
			else
			{
				*(_QWORD*)&v42 = 0i64;
			}
			if (v11)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
			v16 = *((_QWORD*)&v42 + 1);
			if (v7)
			{
				v17 = 0i64;
				if (*(_WORD*)v7)
				{
					do
						++v17;
					while (*((_WORD*)v7 + v17));
				}
				v18 = sub_14018B280(2 * v17 + 18, 0);
				if (v18)
				{
					*((_QWORD*)v18 + 1) = v17;
					*(_QWORD*)v18 = off_140B55060;
				}
				else
				{
					v18 = 0i64;
				}
				v19 = v18 + 4;
				v20 = 2 * v17;
				sub_1407DB590(v18 + 4, v7, v20);
				*(_WORD*)((char*)v19 + v20) = 0;
				*((_QWORD*)&v42 + 1) = v19;
				v2 = 0i64;
			}
			else
			{
				*((_QWORD*)&v42 + 1) = 0i64;
			}
			if (v16)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v16 - 16) + 8i64))(v16 - 16);
			v43 = v8;
			v21 = 0i64;
			v44 = WORD1(v38);
			v45 = HIDWORD(v38);
			if ((_DWORD)v9)
			{
				v22 = v33;
				do
				{
					v23 = *(int**)&v22[2 * v21];
					if (v23)
					{
						if (*(_WORD*)v23)
						{
							do
								++v2;
							while (*((_WORD*)v23 + v2));
						}
						v24 = sub_14018B280(2 * v2 + 18, 0);
						if (v24)
						{
							*((_QWORD*)v24 + 1) = v2;
							*(_QWORD*)v24 = off_140B55060;
						}
						v25 = v24 + 4;
						v26 = 2 * v2;
						sub_1407DB590(v24 + 4, v23, v26);
						*(_WORD*)((char*)v25 + v26) = 0;
						v2 = 0i64;
					}
					else
					{
						v25 = 0i64;
					}
					v33 = v25;
					sub_140590490((__int64)v46, (__int64)v41, &v33);
					if (v25)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v25 - 2) + 8i64))(v25 - 4);
					++v21;
				} while (v21 < (unsigned int)v9);
			}
			v27 = sub_14058F8A0((__int64)&unk_140C7DE50, v37);
			sub_140582DD0((int**)v27, (__int64)&v42);
			if (v49)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v49 - 16) + 8i64))(v49 - 16);
			if (v48)
			{
				v28 = v47;
				v29 = *((_QWORD*)v47 + 1);
				if (v29)
				{
					do
					{
						sub_140590310((__int64)v46, *(_QWORD**)(v29 + 24));
						v30 = *(_QWORD*)(v29 + 32);
						v2 = *(_QWORD*)(v29 + 16);
						if (v30)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v30 - 16) + 8i64))(v30 - 16);
						sub_14018B900(v29, 0);
						v29 = v2;
					} while (v2);
					v28 = v47;
				}
				*((_QWORD*)v28 + 2) = v28;
				*((_QWORD*)v47 + 1) = 0i64;
				*((_QWORD*)v47 + 3) = v47;
				v48 = 0i64;
			}
			sub_14018B900((__int64)v47, 0);
			if (*((_QWORD*)&v42 + 1))
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*((_QWORD*)&v42 + 1) - 16i64) + 8i64))(*((_QWORD*)&v42 + 1) - 16i64);
			if ((_QWORD)v42)
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)(v42 - 16) + 8i64))(v42 - 16);
			v4 = v36 + 48;
			v31 = ++v35 < (unsigned __int64)*v34;
			v3 = (__int64)v34;
			v36 += 48i64;
		} while (v31);
	}
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "RecruitmentGuildsList", &unk_1409D0EEB);
	return 0i64;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DE58: using guessed type __int64 qword_140C7DE58;
// 140C7DE60: using guessed type __int64 qword_140C7DE60;
// 1405828F0: using guessed type char var_A0[16];
// 1405828F0: using guessed type char var_78[8];

