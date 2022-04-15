//----- (00000001400EB5D0) ----------------------------------------------------
void __fastcall sub_1400EB5D0(__int64 a1, int* a2)
{
	int* v2; // rbp
	__int64 v5; // rax
	char* v7; // rsi
	unsigned __int64 v8; // rdi
	__int64 v9; // rsi
	__int64 v10; // r13
	__int64 v11; // r14
	_QWORD* v12; // rbx
	unsigned __int64* v13; // rcx
	__int64 v14; // rdi
	__int64* v15; // r8
	int v16; // eax
	bool v17; // sf
	__int64 v18; // rdx
	__int64 v19; // rbx
	__int64* v20; // r8
	int v21; // eax
	bool v22; // sf
	__int64 v23; // rbx
	__int64 v24; // rax
	int v25; // edx
	int v26; // [rsp+20h] [rbp-58h] BYREF
	__int64 v27; // [rsp+28h] [rbp-50h]
	void(__fastcall * v28)(__int64); // [rsp+30h] [rbp-48h]
	__int64 v29; // [rsp+38h] [rbp-40h]
	__int64 v30; // [rsp+88h] [rbp+10h] BYREF
	__int64 v31; // [rsp+90h] [rbp+18h] BYREF

	if (!a2)
		return;
	v2 = 0i64;
	v5 = -1i64;
	while (*((_BYTE*)a2 + ++v5) != 0)
		;
	v7 = (char*)a2 + v5;
	v8 = v5;
	if (v5 != -2)
		v2 = sub_14018B280(v5 + 1, 0);
	sub_1407DB590(v2, a2, v8);
	v9 = v7 - (char*)a2;
	if ((int*)((char*)v2 + v9))
		*((_BYTE*)v2 + v9) = 0;
	v10 = *(_QWORD*)(a1 + 216);
	v11 = v10;
	v12 = *(_QWORD**)(v10 + 8);
	if (v12)
	{
		v30 = v9;
		do
		{
			v13 = (unsigned __int64*)v12[5];
			v15 = &v30;
			v31 = v12[6] - (_QWORD)v13;
			v14 = v31;
			if (v9 >= v31)
				v15 = &v31;
			v16 = sub_1407E6AF0(v13, (__int64)v2, *v15);
			v17 = v16 < 0;
			if (!v16)
			{
				if (v14 < v9)
					goto LABEL_17;
				LOBYTE(v16) = v14 > v9;
				v17 = v16 < 0;
			}
			if (v17)
			{
			LABEL_17:
				v12 = (_QWORD*)v12[3];
				continue;
			}
			v11 = (__int64)v12;
			v12 = (_QWORD*)v12[2];
		} while (v12);
	}
	if (v11 == v10)
		goto LABEL_26;
	v18 = *(_QWORD*)(v11 + 40);
	v19 = *(_QWORD*)(v11 + 48) - v18;
	v20 = &v30;
	v31 = v9;
	v30 = v19;
	if (v19 >= v9)
		v20 = &v31;
	v21 = sub_1407E6AF0((unsigned __int64*)v2, v18, *v20);
	v22 = v21 < 0;
	if (!v21)
	{
		if (v9 < v19)
		{
		LABEL_26:
			v30 = v10;
			goto LABEL_27;
		}
		LOBYTE(v21) = v9 > v19;
		v22 = v21 < 0;
	}
	v30 = v11;
	if (v22)
		goto LABEL_26;
LABEL_27:
	v23 = v30;
	if (v2)
		sub_14018B900((__int64)v2, 0);
	if (v23 != *(_QWORD*)(a1 + 216))
	{
		v24 = *(_QWORD*)(v23 + 64);
		if (!*(_QWORD*)(v24 + 96))
		{
			v26 = 0;
			v29 = 0i64;
			v25 = *(_DWORD*)(v24 + 72);
			v28 = sub_1400E2D20;
			v27 = v24;
			sub_140195960(v24 + 80, v25, (__int64)&v26, 4);
		}
	}
}

