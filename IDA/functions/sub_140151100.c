//----- (0000000140151100) ----------------------------------------------------
__int64 __fastcall sub_140151100(__int64 a1, int* a2)
{
	int v2; // r13d
	__int64 v4; // rsi
	int* v5; // r14
	__int64 v6; // rax
	char* v8; // rdi
	unsigned __int64 v9; // rbx
	_BYTE* v10; // r12
	__int64 v11; // rdi
	__int64 v12; // r15
	_QWORD* v13; // rbx
	__int64 v14; // rsi
	unsigned __int64* v15; // rcx
	__int64 v16; // rdi
	__int64* v17; // r8
	int v18; // eax
	bool v19; // sf
	__int64 v20; // rdx
	__int64 v21; // r12
	__int64 v22; // rbx
	__int64* v23; // r8
	int v24; // eax
	bool v25; // sf
	__int64 v26; // rbx
	__int64 v28; // [rsp+70h] [rbp+8h] BYREF
	__int64 v29; // [rsp+78h] [rbp+10h] BYREF
	__int64 v30; // [rsp+80h] [rbp+18h] BYREF
	__int64 v31; // [rsp+88h] [rbp+20h]

	v28 = a1;
	v2 = 0;
	v4 = a1;
	v5 = 0i64;
	v6 = -1i64;
	while (*((_BYTE*)a2 + ++v6) != 0)
		;
	v8 = (char*)a2 + v6;
	v9 = v6;
	if (v6 != -2)
		v5 = sub_14018B280(v6 + 1, 0);
	sub_1407DB590(v5, a2, v9);
	v10 = (char*)v5 + v8 - (char*)a2;
	if (v10)
		*v10 = 0;
	v11 = *(_QWORD*)(v4 + 8);
	v31 = v11;
	v12 = v11;
	v13 = *(_QWORD**)(v11 + 8);
	if (v13)
	{
		v14 = v10 - (_BYTE*)v5;
		v29 = v10 - (_BYTE*)v5;
		while (1)
		{
			v15 = (unsigned __int64*)v13[5];
			v17 = &v29;
			v30 = v13[6] - (_QWORD)v15;
			v16 = v30;
			if (v14 >= v30)
				v17 = &v30;
			v18 = sub_1407E6AF0(v15, (__int64)v5, *v17);
			v19 = v18 < 0;
			if (!v18)
			{
				if (v16 < v14)
					goto LABEL_16;
				v19 = 0;
			}
			if (v19)
			{
			LABEL_16:
				v13 = (_QWORD*)v13[3];
				goto LABEL_17;
			}
			v12 = (__int64)v13;
			v13 = (_QWORD*)v13[2];
		LABEL_17:
			if (!v13)
			{
				v11 = v31;
				v4 = v28;
				break;
			}
		}
	}
	if (v12 != v11)
	{
		v20 = *(_QWORD*)(v12 + 40);
		v21 = v10 - (_BYTE*)v5;
		v22 = *(_QWORD*)(v12 + 48) - v20;
		v23 = &v28;
		v29 = v21;
		v28 = v22;
		if (v22 >= v21)
			v23 = &v29;
		v24 = sub_1407E6AF0((unsigned __int64*)v5, v20, *v23);
		v25 = v24 < 0;
		if (v24)
		{
		LABEL_25:
			v28 = v12;
			if (!v25)
				goto LABEL_27;
			goto LABEL_26;
		}
		if (v21 >= v22)
		{
			LOBYTE(v2) = v21 > v22;
			v25 = v2 < 0;
			goto LABEL_25;
		}
	}
LABEL_26:
	v28 = v11;
LABEL_27:
	v26 = v28;
	if (v5)
		sub_14018B900((__int64)v5, 0);
	if (v26 == *(_QWORD*)(v4 + 8))
		return sub_140150DF0(v4, a2);
	else
		return *(_QWORD*)(v26 + 64);
}

