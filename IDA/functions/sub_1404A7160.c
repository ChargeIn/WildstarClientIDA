#include "../winhttp.h"

//----- (00000001404A7160) ----------------------------------------------------
__int64 __fastcall sub_1404A7160(_QWORD* a1)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	int** v4; // rdi
	int* v5; // rcx
	int v6; // edx
	int v7; // edx
	int** v8; // rsi
	int v9; // eax
	int v10; // ecx
	int* v11; // rax
	int* v12; // rax
	int v13; // eax
	int v14; // ecx
	int* v15; // rax
	int* v16; // rax
	char* v17; // rdx
	__int64 v18; // rcx
	int v19; // eax
	int* v20; // rcx
	int v21; // eax
	int* v22; // rax
	int v23; // eax
	int* v24; // rcx
	int v25; // eax
	int* v26; // rax
	int v27; // eax
	int v28; // eax
	__int64 v29; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64* v32; // rbx
	__int64 v33; // r14
	__int64 v34; // rcx
	__int64 v35; // rdi
	unsigned __int64 v36; // rsi
	_QWORD* v37; // rbx
	__int64 v38; // r8
	unsigned int* v40; // rbx
	bool v41; // cf
	int v42; // [rsp+20h] [rbp-E0h] BYREF
	_QWORD v43[2]; // [rsp+28h] [rbp-D8h] BYREF
	_QWORD v44[2]; // [rsp+38h] [rbp-C8h] BYREF
	_QWORD v45[2]; // [rsp+48h] [rbp-B8h] BYREF
	_QWORD v46[2]; // [rsp+58h] [rbp-A8h] BYREF
	_QWORD v47[2]; // [rsp+68h] [rbp-98h] BYREF
	_QWORD v48[2]; // [rsp+78h] [rbp-88h] BYREF
	_QWORD v49[2]; // [rsp+88h] [rbp-78h] BYREF
	_QWORD v50[2]; // [rsp+98h] [rbp-68h] BYREF
	_QWORD v51[2]; // [rsp+A8h] [rbp-58h] BYREF
	char v52[16]; // [rsp+B8h] [rbp-48h] BYREF
	char v53[16]; // [rsp+C8h] [rbp-38h] BYREF
	char v54[16]; // [rsp+D8h] [rbp-28h] BYREF
	char v55[16]; // [rsp+E8h] [rbp-18h] BYREF
	char v56[16]; // [rsp+F8h] [rbp-8h] BYREF
	char v57[16]; // [rsp+108h] [rbp+8h] BYREF
	char v58[16]; // [rsp+118h] [rbp+18h] BYREF
	char v59; // [rsp+128h] [rbp+28h] BYREF
	char v60; // [rsp+138h] [rbp+38h] BYREF
	char v61[16]; // [rsp+148h] [rbp+48h] BYREF
	char v62[16]; // [rsp+158h] [rbp+58h] BYREF
	char v63[16]; // [rsp+168h] [rbp+68h] BYREF
	char v64[16]; // [rsp+178h] [rbp+78h] BYREF
	char v65[16]; // [rsp+188h] [rbp+88h] BYREF
	char v66; // [rsp+198h] [rbp+98h] BYREF
	char v67[16]; // [rsp+1A8h] [rbp+A8h] BYREF
	_QWORD v68[2]; // [rsp+1B8h] [rbp+B8h] BYREF

	sub_1404A8D30(a1);
	v2 = (_QWORD*)a1[2];
	v3 = (_QWORD*)v2[2];
	if (v3 != v2)
	{
		do
		{
			v4 = (int**)v3[5];
			v5 = *v4;
			v6 = (*v4)[1];
			if (v6)
			{
				v7 = v6 - 1;
				if (v7)
				{
					if (v7 != 1)
						goto LABEL_21;
					v8 = (int**)v4[1];
					if (!v8)
						goto LABEL_21;
					if (((_DWORD)v8[5] & 0xFFFFFFFD) == 0 && (v5[14] & 0xFFFFFFFD) == 0)
					{
						v9 = *v5;
						v68[1] = v3[5];
						LODWORD(v68[0]) = v9;
						sub_140055F80((__int64)(a1 + 34), (__int64)v61, v68);
						v10 = **v8;
						v11 = *v4;
						v50[1] = v8;
						LODWORD(v50[0]) = v10;
						v42 = v11[10];
						v12 = sub_1404A8A10((__int64)(a1 + 50), &v42);
						sub_140055F80((__int64)v12, (__int64)v55, v50);
						v42 = (*v4)[10];
						sub_1400293C0((__int64)(a1 + 46), (__int64)v52, &v42);
					}
					if (*((_DWORD*)v8 + 10) > 1u || (unsigned int)(*v4)[14] > 1)
						goto LABEL_21;
					v13 = **v4;
					v48[1] = v4;
					LODWORD(v48[0]) = v13;
					sub_140055F80((__int64)(a1 + 66), (__int64)v57, v48);
					v14 = **v8;
					v15 = *v4;
					v46[1] = v8;
					LODWORD(v46[0]) = v14;
					v42 = v15[10];
					v16 = sub_1404A8A10((__int64)(a1 + 82), &v42);
					sub_140055F80((__int64)v16, (__int64)v63, v46);
					v17 = &v59;
					v42 = (*v4)[10];
					v18 = (__int64)(a1 + 78);
				}
				else
				{
					if ((v5[14] & 0xFFFFFFFD) == 0)
					{
						v19 = *v5;
						v43[1] = v3[5];
						LODWORD(v43[0]) = v19;
						sub_140055F80((__int64)(a1 + 38), (__int64)v65, v43);
						v20 = *v4;
						v21 = **v4;
						v44[1] = v4;
						LODWORD(v44[0]) = v21;
						v42 = v20[10];
						v22 = sub_1404A8A10((__int64)(a1 + 58), &v42);
						sub_140055F80((__int64)v22, (__int64)v53, v44);
						v42 = (*v4)[10];
						sub_1400293C0((__int64)(a1 + 54), (__int64)v54, &v42);
					}
					if ((unsigned int)(*v4)[14] > 1)
						goto LABEL_21;
					v23 = **v4;
					v45[1] = v4;
					LODWORD(v45[0]) = v23;
					sub_140055F80((__int64)(a1 + 70), (__int64)v56, v45);
					v24 = *v4;
					v25 = **v4;
					v47[1] = v4;
					LODWORD(v47[0]) = v25;
					v42 = v24[10];
					v26 = sub_1404A8A10((__int64)(a1 + 90), &v42);
					sub_140055F80((__int64)v26, (__int64)v58, v47);
					v17 = &v60;
					v42 = (*v4)[10];
					v18 = (__int64)(a1 + 86);
				}
			}
			else
			{
				if ((v5[14] & 0xFFFFFFFD) == 0)
				{
					v27 = *v5;
					v49[1] = v3[5];
					LODWORD(v49[0]) = v27;
					sub_140055F80((__int64)(a1 + 30), (__int64)v62, v49);
					v42 = (*v4)[10];
					sub_1400293C0((__int64)(a1 + 42), (__int64)v64, &v42);
				}
				if ((unsigned int)(*v4)[14] > 1)
					goto LABEL_21;
				v28 = **v4;
				v51[1] = v4;
				LODWORD(v51[0]) = v28;
				sub_140055F80((__int64)(a1 + 62), (__int64)v67, v51);
				v17 = &v66;
				v42 = (*v4)[10];
				v18 = (__int64)(a1 + 74);
			}
			sub_1400293C0(v18, (__int64)v17, &v42);
		LABEL_21:
			v29 = v3[3];
			if (v29)
			{
				v3 = (_QWORD*)v3[3];
				for (i = *(_QWORD**)(v29 + 16); i; i = (_QWORD*)i[2])
					v3 = i;
			}
			else
			{
				for (j = v3[1]; v3 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = (_QWORD*)j;
				if (v3[3] != j)
					v3 = (_QWORD*)j;
			}
		} while (v3 != (_QWORD*)a1[2]);
	}
	v32 = a1 + 29;
	if (a1[29])
	{
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)a1[29] + 8i64))(a1[29]);
		*v32 = 0i64;
	}
	if ((int)sub_1407129A0(v32) >= 0)
	{
		v33 = *v32;
		v34 = *(_QWORD*)(*v32 + 48);
		if (v34)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v34 + 8i64))(v34);
			*(_QWORD*)(v33 + 48) = 0i64;
		}
		v35 = qword_140C63628;
		v42 = 166;
		v36 = (*(__int64(__fastcall**)(int*))(qword_140C63628 + 664))(&v42);
		v37 = *(_QWORD**)(*(_QWORD*)(v35 + 656) + 8 * (v36 % *(_QWORD*)(v35 + 648)));
		if (!v37)
			goto LABEL_39;
		while (v36 != *v37 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v35 + 672))(&v42, v37 + 2))
		{
			v37 = (_QWORD*)v37[1];
			if (!v37)
				goto LABEL_39;
		}
		v40 = (unsigned int*)v37 + 5;
		if (v40)
		{
			v38 = *v40;
			v41 = v40[2] < 2;
			HIDWORD(v68[0]) = v40[1];
			if (!v41)
				v38 = 0i64;
		}
		else
		{
		LABEL_39:
			v38 = 0i64;
		}
		(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65848 + 24i64))(
			qword_140C65848,
			v33 + 48,
			v38);
	}
	return 0i64;
}
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65848: using guessed type __int64 qword_140C65848;
// 1404A7160: using guessed type char var_A8[16];
// 1404A7160: using guessed type char var_108[16];
// 1404A7160: using guessed type char var_138[16];
// 1404A7160: using guessed type char var_E8[16];
// 1404A7160: using guessed type char var_88[16];
// 1404A7160: using guessed type char var_68[16];
// 1404A7160: using guessed type char var_128[16];
// 1404A7160: using guessed type char var_118[16];
// 1404A7160: using guessed type char var_F8[16];
// 1404A7160: using guessed type char var_D8[16];
// 1404A7160: using guessed type char var_98[16];
// 1404A7160: using guessed type char var_78[16];
// 1404A7160: using guessed type char var_48[16];

