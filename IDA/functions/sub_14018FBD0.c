#include "../winhttp.h"

//----- (000000014018FBD0) ----------------------------------------------------
void __fastcall sub_14018FBD0(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4)
{
	_WORD* v4; // r10
	__int64 v5; // rdi
	_WORD* v6; // r14
	__int64 v7; // rax
	_WORD* v12; // rax
	__int64 v13; // rbx
	_WORD* v14; // rax
	unsigned __int64 v15; // rcx
	__int64* v16; // rax
	unsigned __int64 v17; // rdi
	bool v18; // cf
	char* v19; // rdi
	char* v20; // rbp
	int* v21; // r8
	char* v22; // r9
	unsigned __int64 v23; // rbx
	__int64 v24; // rbx
	int* v25; // rdx
	signed __int64 v26; // rdi
	__int64 v27; // rcx
	__int64 v28; // rax
	__int64 v29; // r8
	__int64 v30; // rdx
	__int64 v31; // rcx
	char* v32; // rdi
	__int64 v33; // rcx
	__int64* v34; // rax
	int* v35; // rcx
	__int64 v36; // rax
	char* v37; // r8
	char* v38; // rbp
	unsigned __int64 v39; // rbx
	__int64 v40; // rbx
	int* v41; // rdx
	signed __int64 v42; // rdi
	__int64 v43; // rax
	_WORD* v44; // rax
	unsigned __int64 v45[9]; // [rsp+20h] [rbp-48h] BYREF
	unsigned __int64 v46; // [rsp+70h] [rbp+8h] BYREF
	unsigned __int64 v47; // [rsp+88h] [rbp+20h] BYREF

	v4 = *(_WORD**)(a4 + 8);
	v5 = *(_QWORD*)(a1 + 16);
	v6 = *(_WORD**)(a1 + 8);
	v7 = *(_QWORD*)(a4 + 16) - (_QWORD)v4;
	v45[0] = (unsigned __int64)v4;
	v45[1] = (unsigned __int64)&v4[v7 >> 1];
	v12 = sub_1400F9810(v6, v5, (_WORD**)v45, a4);
	if (v12 == (_WORD*)v5)
		v13 = -1i64;
	else
		v13 = v12 - v6;
	v14 = (_WORD*)sub_14018FF60(a1, a4, v13);
	v45[0] = (unsigned __int64)v14;
	if (v14 != (_WORD*)-1i64 || v13 != -1)
	{
		v15 = (unsigned __int64)v14 - v13;
		v16 = (__int64*)&v46;
		v17 = ((v5 - (__int64)v6) >> 1) - v13;
		v47 = v15;
		v18 = v17 < v15;
		v46 = v17;
		v19 = (char*)&v6[v13];
		if (!v18)
			v16 = (__int64*)&v47;
		v20 = (char*)&v6[v13 + *v16];
		v21 = 0i64;
		v22 = 0i64;
		v23 = ((v20 - v19) >> 1) + 1;
		if (v23 <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v24 = 2 * v23;
			v21 = sub_14018B280(v24, 0);
			v22 = (char*)v21 + v24;
		}
		v25 = v21;
		if (v19 != v20)
		{
			v26 = v19 - (char*)v21;
			do
			{
				if (v25)
					*(_WORD*)v25 = *(_WORD*)((char*)v25 + v26);
				v25 = (int*)((char*)v25 + 2);
			} while ((char*)v25 + v26 != v20);
		}
		if (v25)
			*(_WORD*)v25 = 0;
		v27 = a2[1];
		a2[1] = v21;
		a2[2] = v25;
		a2[3] = v22;
		if (v27)
			sub_14018B900(v27, 0);
		v28 = sub_1400F99E0(a1, *(_WORD**)(a4 + 8), v45[0], (__int64)(*(_QWORD*)(a4 + 16) - *(_QWORD*)(a4 + 8)) >> 1);
		v29 = v28;
		if (v28 == -1)
		{
			v44 = (_WORD*)a3[1];
			if (v44 != (_WORD*)a3[2])
			{
				*v44 = 0;
				a3[2] = a3[1];
			}
		}
		else
		{
			v30 = *(_QWORD*)(a1 + 8);
			v31 = *(_QWORD*)(a1 + 16) - v30;
			v32 = (char*)(v30 + 2 * v28);
			v47 = -1i64;
			v33 = (v31 >> 1) - v28;
			v34 = (__int64*)&v46;
			v18 = v33 != -1;
			v46 = v33;
			v35 = 0i64;
			if (!v18)
				v34 = (__int64*)&v47;
			v36 = v29 + *v34;
			v37 = 0i64;
			v38 = (char*)(v30 + 2 * v36);
			v39 = ((v38 - v32) >> 1) + 1;
			if (v39 <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v40 = 2 * v39;
				v35 = sub_14018B280(v40, 0);
				v37 = (char*)v35 + v40;
			}
			v41 = v35;
			if (v32 != v38)
			{
				v42 = v32 - (char*)v35;
				do
				{
					if (v41)
						*(_WORD*)v41 = *(_WORD*)((char*)v41 + v42);
					v41 = (int*)((char*)v41 + 2);
				} while ((char*)v41 + v42 != v38);
			}
			if (v41)
				*(_WORD*)v41 = 0;
			v43 = a3[1];
			a3[1] = v35;
			a3[2] = v41;
			a3[3] = v37;
			if (v43)
				sub_14018B900(v43, 0);
		}
	}
}
// 14018FBD0: using guessed type unsigned __int64 var_48[9];

