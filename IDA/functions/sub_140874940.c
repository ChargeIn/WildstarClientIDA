//----- (0000000140874940) ----------------------------------------------------
__int64 __fastcall sub_140874940(__int64 a1, __int64 a2)
{
	unsigned __int8* v2; // r9
	unsigned int v5; // r10d
	int v6; // r8d
	__int64 v7; // rdx
	_QWORD* v8; // rdi
	int v9; // eax
	char v10; // cl
	__int64 v11; // rax
	_DWORD* v12; // rax
	unsigned int v13; // eax
	unsigned int v14; // ebx
	float* v15; // rdi
	unsigned int v16; // ebx
	int v18; // [rsp+20h] [rbp-59h] BYREF
	_QWORD* v19; // [rsp+28h] [rbp-51h]
	__int64 v20; // [rsp+30h] [rbp-49h]
	int* v21; // [rsp+38h] [rbp-41h]
	__int64 v22; // [rsp+40h] [rbp-39h]
	int v23; // [rsp+48h] [rbp-31h]
	_DWORD* v24; // [rsp+50h] [rbp-29h]
	int v25; // [rsp+58h] [rbp-21h]
	int v26; // [rsp+60h] [rbp-19h]
	int v27; // [rsp+A4h] [rbp+2Bh]
	int v28; // [rsp+A8h] [rbp+2Fh]
	int v29; // [rsp+ACh] [rbp+33h]
	__int64 v30; // [rsp+B0h] [rbp+37h]
	int v31; // [rsp+B8h] [rbp+3Fh]
	char v32; // [rsp+BCh] [rbp+43h]
	char v33; // [rsp+BDh] [rbp+44h]
	char v34; // [rsp+BEh] [rbp+45h]
	int v35; // [rsp+E0h] [rbp+67h] BYREF
	int v36; // [rsp+E4h] [rbp+6Bh]

	v2 = *(unsigned __int8**)(a1 + 40);
	if (v2)
	{
		v5 = *v2;
		v6 = 0;
		while (1)
		{
			v7 = (unsigned int)(v6 + 1);
			if (v2[v7] == 16)
				break;
			++v6;
			if ((unsigned int)v7 >= v5)
				goto LABEL_5;
		}
		v15 = (float*)&v2[4 * v6 + ((v5 + 4) & 0xFFFFFFFC)];
		if (v15)
		{
			if (*v15 == 0.0)
				return 1i64;
			v16 = (unsigned int)sub_1407DDB28() << 15;
			if ((double)(int)(sub_1407DDB28() + v16) * 9.313225754828403e-10 * 100.0 > *v15)
				return 1i64;
		}
	}
LABEL_5:
	v8 = (_QWORD*)sub_140855940(a1);
	if (v8)
	{
		v9 = sub_140855A70(a1);
		v10 = *(_BYTE*)(a1 + 62);
		v24 = 0i64;
		v35 = v9;
		v25 = *(_DWORD*)(a2 + 56);
		v11 = *(_QWORD*)(a2 + 32);
		v36 = v10 & 0x1F;
		v22 = v11;
		LODWORD(v11) = *(_DWORD*)(a2 + 40);
		v27 = 0;
		v23 = v11;
		v12 = *(_DWORD**)(a2 + 48);
		v34 = 0;
		v32 = 0;
		v26 = 0;
		v18 = 0;
		v19 = v8;
		if (v12)
			++* v12;
		v24 = v12;
		v29 = *(_DWORD*)(a2 + 20);
		v20 = *(_QWORD*)(a2 + 72);
		v28 = 0;
		v33 = 1;
		v30 = 0i64;
		v31 = 0;
		v21 = &v35;
		v13 = sub_14084ED10(v8, (__int64)&v18);
		v14 = v13;
		if (v13 == 3)
		{
			v14 = 1;
		}
		else if (v13 == 1)
		{
			v14 = (*(__int64(__fastcall**)(_QWORD*, int*))(*v8 + 632i64))(v8, &v18);
		}
		(*(void(__fastcall**)(_QWORD*))(*v8 + 16i64))(v8);
		if (v24)
			sub_140828460(v24);
	}
	else
	{
		return 15;
	}
	return v14;
}

