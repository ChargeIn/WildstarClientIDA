#include "../winhttp.h"

//----- (000000014053D890) ----------------------------------------------------
__int64 __fastcall sub_14053D890(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned __int8 a4, __int64 a5)
{
	unsigned __int8 v5; // r13
	__int64 v6; // r9
	__int64 v7; // r8
	__int64 v8; // rcx
	unsigned int* v9; // rdx
	unsigned int v10; // ebx
	int v11; // edi
	int v12; // esi
	int v13; // ebp
	int v14; // r14d
	int v15; // r15d
	int v16; // r12d
	int* v17; // rax
	__int64 result; // rax
	unsigned __int8 v19; // cl
	__int64 v20; // r8
	__int64 v21; // rax
	int v22; // ebx
	int v23; // esi
	int v24; // ebp
	int v25; // r14d
	int v26; // r15d
	int v27; // r12d
	int v28; // r13d
	int v29; // edi
	int* v30; // rax
	bool v31; // cc
	__int64 v32; // [rsp+20h] [rbp-58h] BYREF
	__int64 v33; // [rsp+28h] [rbp-50h]
	int v35; // [rsp+88h] [rbp+10h]
	char v36; // [rsp+88h] [rbp+10h]

	v5 = 0;
	v6 = a3;
	v7 = a1;
	v35 = a2;
	if (a2)
	{
		v8 = a1 + 848;
		v32 = v8;
		do
		{
			v9 = (unsigned int*)(v6 + 28i64 * v5);
			v10 = *v9;
			v11 = v9[1];
			v12 = v9[2];
			v13 = v9[3];
			v14 = v9[4];
			v15 = v9[5];
			v16 = v9[6];
			v17 = sub_14054DD00(v8, v9);
			v8 = v32;
			v6 = a3;
			*v17 = v10;
			v17[1] = v11;
			v17[2] = v12;
			v17[3] = v13;
			v17[4] = v14;
			++v5;
			v17[5] = v15;
			v17[6] = v16;
		} while (v5 < v35);
		v7 = a1;
	}
	result = a4;
	v19 = 0;
	v36 = 0;
	if (a4)
	{
		v20 = v7 + 880;
		v33 = v20;
		do
		{
			v21 = 32i64 * v19;
			v23 = *(_DWORD*)(v21 + a5 + 8);
			v24 = *(_DWORD*)(v21 + a5 + 12);
			v25 = *(_DWORD*)(v21 + a5 + 16);
			v26 = *(_DWORD*)(v21 + a5 + 20);
			v27 = *(_DWORD*)(v21 + a5 + 24);
			v28 = *(_DWORD*)(v21 + a5 + 28);
			v32 = *(_QWORD*)(v21 + a5);
			v22 = v32;
			v29 = HIDWORD(v32);
			v30 = sub_14054DDC0(v20, (unsigned int*)&v32);
			*v30 = v22;
			v30[1] = v29;
			v30[2] = v23;
			v30[3] = v24;
			v30[4] = v25;
			v19 = v36 + 1;
			v30[5] = v26;
			v30[6] = v27;
			v30[7] = v28;
			result = (unsigned __int8)(v36 + 1);
			v31 = (unsigned __int8)(v36 + 1) < (int)a4;
			v20 = v33;
			++v36;
		} while (v31);
	}
	return result;
}

