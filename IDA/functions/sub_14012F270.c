#include "../winhttp.h"

//----- (000000014012F270) ----------------------------------------------------
__int64 __fastcall sub_14012F270(_QWORD* a1)
{
	__int64 v2; // rdx
	unsigned __int64 v3; // rcx
	__int64 v4; // r8
	__int64 v5; // rax
	_QWORD* v6; // r13
	__int64 v7; // rax
	__int64 v8; // rdi
	unsigned int v9; // ebx
	void(__fastcall * **v10)(_QWORD); // r15
	__int64 v11; // rax
	int* v12; // r14
	__int64 v13; // rcx
	int* v14; // rbp
	bool v15; // zf
	__int64 v16; // rbx
	unsigned __int64 v17; // r12
	__int64 v18; // rcx
	int* v19; // rbx
	int* v20; // rbp
	unsigned __int64 v21; // rdx
	int v22; // r8d
	_DWORD* v23; // rax
	_DWORD* v24; // rcx
	int* v25; // rax
	int* v26; // rsi
	int* v27; // rax
	__int64 v28; // rbx
	int* v29; // rax
	int* v30; // r15
	int* v31; // rdx
	__int64 v32; // rcx
	__int64 v34; // [rsp+30h] [rbp-48h] BYREF
	int* v35; // [rsp+38h] [rbp-40h]
	int* v36; // [rsp+40h] [rbp-38h]
	__int64 v37; // [rsp+48h] [rbp-30h]

	v2 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v2 = (unsigned int)(v2 + 1);
			v5 = (unsigned int)v2;
			if ((unsigned int)v2 >= v3)
				goto LABEL_5;
		}
		v6 = *(_QWORD**)(v4 + 8 * v2);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = sub_14012AAF0(a1, 1u);
	v8 = v7;
	if (v7 && *(_QWORD*)(v7 + 720) != *(_QWORD*)(v7 + 728))
	{
		v9 = dword_140C8A07C + 1;
		v10 = 0i64;
		++dword_140C8A07C;
		if (v6)
		{
			v10 = (void(__fastcall***)(_QWORD))v6[5];
			if (v10)
				(**v10)(v6[5]);
		}
		sub_14018EE90(&v34, (__int64)"ADL_%d", v9);
		v11 = sub_140056BB0(a1, 2u, 0i64);
		v12 = 0i64;
		v13 = -1i64;
		v14 = (int*)v11;
		do
		{
			v15 = *(_BYTE*)(v13 + v11 + 1) == 0;
			++v13;
		} while (!v15);
		v16 = v13 + v11;
		v17 = v13;
		v18 = v13 + 1;
		if (v18 != -1)
			v12 = sub_14018B280(v18, 0);
		sub_1407DB590(v12, v14, v17);
		v19 = (int*)((char*)v12 + v16 - (_QWORD)v14);
		if (v19)
			*(_BYTE*)v19 = 0;
		v20 = v35;
		if (v19 != v12)
		{
			v21 = a1[2];
			v22 = -2;
			v23 = (_DWORD*)(a1[3] + 32i64);
			if ((unsigned __int64)v23 < v21)
			{
				v24 = dword_140A12138;
				if (v23 != dword_140A12138 && *(_DWORD*)(a1[3] + 40i64) == 5)
				{
					if ((unsigned __int64)v23 < v21)
						v24 = (_DWORD*)(a1[3] + 32i64);
					*(_QWORD*)v21 = *(_QWORD*)v24;
					*(_DWORD*)(v21 + 8) = v24[2];
					a1[2] += 16i64;
					v22 = sub_1400578C0((__int64)a1);
				}
			}
			sub_1400EB7D0(v6, v20, v12, *(int**)(qword_140C63650 + 784), v22);
			v25 = sub_14018B280(40i64, 0);
			v26 = v25;
			if (v25)
			{
				*((_QWORD*)v25 + 2) = 0i64;
				*((_QWORD*)v25 + 3) = 0i64;
				*((_QWORD*)v25 + 4) = 0i64;
				v27 = sub_14018B280(8i64, 0);
				*((_QWORD*)v26 + 2) = v27;
				*((_QWORD*)v26 + 3) = v27;
				*((_QWORD*)v26 + 4) = v27 + 2;
				if (v27)
					*(_BYTE*)v27 = 0;
			}
			else
			{
				v26 = 0i64;
			}
			*(_QWORD*)v26 = v10;
			if (&v34 != (__int64*)(v26 + 2))
				sub_14001B1A0((__int64)(v26 + 2), v20, v36);
			v28 = *(_QWORD*)(v8 + 864);
			v29 = sub_14018DB00(*(_QWORD*)(v8 + 856), v28 + 1, 8i64);
			v30 = v29;
			*(_QWORD*)&v29[2 * v28] = v26;
			v31 = *(int**)(v8 + 856);
			if (v31 != v29)
			{
				sub_1407DB590(v29, v31, 8i64 * *(_QWORD*)(v8 + 864));
				v32 = *(_QWORD*)(v8 + 856);
				if (v32)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v32 - 16) + 8i64))(v32 - 16);
				*(_QWORD*)(v8 + 856) = v30;
			}
			*(_QWORD*)(v8 + 864) = v28 + 1;
			LODWORD(v34) = 0;
			if (sub_14012A290(v8))
			{
				LODWORD(v34) = 0;
				v36 = (int*)sub_14012A180;
				v35 = (int*)v8;
				v37 = 0i64;
				sub_140195960(v8 + 784, 0, (__int64)&v34, 2);
			}
		}
		if (v12)
			sub_14018B900((__int64)v12, 0);
		if (v20)
			sub_14018B900((__int64)v20, 0);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C8A07C: using guessed type int dword_140C8A07C;

