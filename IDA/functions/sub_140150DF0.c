//----- (0000000140150DF0) ----------------------------------------------------
__int64 __fastcall sub_140150DF0(__int64 a1, int* a2)
{
	__int64 v3; // r15
	int* v4; // rax
	int* v5; // r12
	signed __int64 v6; // r14
	__int64 v7; // rax
	bool v8; // zf
	char* v9; // r13
	unsigned __int64 v10; // rbx
	_BYTE* v11; // r13
	__int64 v12; // rax
	int* v13; // rbx
	int* v14; // rdi
	__int64 v15; // r15
	unsigned __int64* v16; // rcx
	__int64 v17; // rbp
	unsigned __int64* v18; // r8
	int v19; // eax
	bool v20; // sf
	__int64 v21; // rdx
	__int64 v22; // rbp
	unsigned __int64* v23; // r8
	__int64 v24; // rdi
	int v25; // eax
	bool v26; // sf
	__int64 v27; // r13
	int* v28; // rbp
	_QWORD* v29; // rbx
	unsigned __int64* v30; // rcx
	__int64 v31; // rdi
	__int64* v32; // r8
	int v33; // eax
	bool v34; // sf
	__int64 v36; // [rsp+20h] [rbp-78h]
	__int64 v37; // [rsp+28h] [rbp-70h] BYREF
	__int64 v38; // [rsp+30h] [rbp-68h]
	__int64 v39; // [rsp+38h] [rbp-60h]
	__int64 v40; // [rsp+40h] [rbp-58h]
	__int64 v41; // [rsp+48h] [rbp-50h]
	__int64 v42; // [rsp+A0h] [rbp+8h] BYREF
	__int64 v43; // [rsp+A8h] [rbp+10h] BYREF
	int* v44; // [rsp+B0h] [rbp+18h] BYREF
	__int64 v45; // [rsp+B8h] [rbp+20h] BYREF

	v42 = a1;
	v3 = a1;
	v4 = sub_14018B280(64i64, 0);
	if (v4)
		v43 = sub_140150870((__int64)v4, *(_QWORD*)(v3 + 32), a2);
	else
		v43 = 0i64;
	v5 = 0i64;
	v6 = -1i64;
	v7 = -1i64;
	do
		v8 = *((_BYTE*)a2 + ++v7) == 0;
	while (!v8);
	v9 = (char*)a2 + v7;
	v10 = v7;
	if (v7 != -2)
		v5 = sub_14018B280(v7 + 1, 0);
	sub_1407DB590(v5, a2, v10);
	v11 = (char*)v5 + v9 - (char*)a2;
	if (v11)
		*v11 = 0;
	v12 = *(_QWORD*)(v3 + 8);
	v36 = v12;
	v13 = (int*)v12;
	v14 = *(int**)(v12 + 8);
	if (v14)
	{
		v15 = v11 - (_BYTE*)v5;
		v44 = (int*)(v11 - (_BYTE*)v5);
		while (1)
		{
			v16 = (unsigned __int64*)*((_QWORD*)v14 + 5);
			v18 = (unsigned __int64*)&v44;
			v45 = *((_QWORD*)v14 + 6) - (_QWORD)v16;
			v17 = v45;
			if (v15 >= v45)
				v18 = (unsigned __int64*)&v45;
			v19 = sub_1407E6AF0(v16, (__int64)v5, *v18);
			v20 = v19 < 0;
			if (!v19)
			{
				if (v17 < v15)
					goto LABEL_19;
				LOBYTE(v19) = v17 > v15;
				v20 = v19 < 0;
			}
			if (v20)
			{
			LABEL_19:
				v14 = (int*)*((_QWORD*)v14 + 3);
				goto LABEL_20;
			}
			v13 = v14;
			v14 = (int*)*((_QWORD*)v14 + 2);
		LABEL_20:
			if (!v14)
			{
				v12 = v36;
				v3 = v42;
				break;
			}
		}
	}
	if (v13 != (int*)v12)
	{
		v21 = *((_QWORD*)v13 + 5);
		v22 = *((_QWORD*)v13 + 6) - v21;
		v23 = (unsigned __int64*)&v42;
		v24 = v11 - (_BYTE*)v5;
		v42 = v22;
		v44 = (int*)(v11 - (_BYTE*)v5);
		if (v22 >= v11 - (_BYTE*)v5)
			v23 = (unsigned __int64*)&v44;
		v25 = sub_1407E6AF0((unsigned __int64*)v5, v21, *v23);
		v26 = v25 < 0;
		if (v25)
		{
		LABEL_28:
			if (!v26)
				goto LABEL_31;
			goto LABEL_29;
		}
		if (v24 >= v22)
		{
			LOBYTE(v25) = v24 > v22;
			v26 = v25 < 0;
			goto LABEL_28;
		}
	}
LABEL_29:
	v38 = 0i64;
	v39 = 0i64;
	v40 = 0i64;
	sub_14001B240(&v37, v5, (__int64)v11);
	v41 = 0i64;
	v42 = (__int64)v13;
	sub_1400EE370(v3, &v44, &v42, (__int64)&v37);
	v13 = v44;
	if (v38)
		sub_14018B900(v38, 0);
LABEL_31:
	v27 = v43;
	*((_QWORD*)v13 + 8) = v43;
	if (v5)
		sub_14018B900((__int64)v5, 0);
	v28 = 0i64;
	do
		v8 = *((_BYTE*)a2 + ++v6) == 0;
	while (!v8);
	if (v6 != -2)
		v28 = sub_14018B280(v6 + 1, 0);
	sub_1407DB590(v28, a2, v6);
	if ((int*)((char*)v28 + v6))
		*((_BYTE*)v28 + v6) = 0;
	v29 = *(_QWORD**)(*(_QWORD*)(v3 + 8) + 8i64);
	if (v29)
	{
		v42 = v6;
		do
		{
			v30 = (unsigned __int64*)v29[5];
			v32 = &v42;
			v43 = v29[6] - (_QWORD)v30;
			v31 = v43;
			if (v6 >= v43)
				v32 = &v43;
			v33 = sub_1407E6AF0(v30, (__int64)v28, *v32);
			v34 = v33 < 0;
			if (!v33)
			{
				if (v31 < v6)
					goto LABEL_48;
				LOBYTE(v33) = v31 > v6;
				v34 = v33 < 0;
			}
			if (v34)
			{
			LABEL_48:
				v29 = (_QWORD*)v29[3];
				continue;
			}
			v29 = (_QWORD*)v29[2];
		} while (v29);
	}
	if (v28)
		sub_14018B900((__int64)v28, 0);
	return v27;
}

