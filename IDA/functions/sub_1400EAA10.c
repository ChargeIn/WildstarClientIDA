//----- (00000001400EAA10) ----------------------------------------------------
__int64 sub_1400EAA10(__int64 a1, int a2, __int64 a3, ...)
{
	__int64 v3; // r14
	unsigned __int8 v4; // r12
	_QWORD* v6; // r15
	__int64 v7; // rbp
	_QWORD* v8; // r10
	_QWORD* v9; // rbx
	_QWORD* v10; // r9
	char* v11; // rdi
	char* v12; // rcx
	int v13; // r8d
	int v14; // edx
	__int64 v15; // r11
	int v16; // eax
	char* v17; // r11
	int v18; // esi
	char* v19; // r8
	int v20; // eax
	int v21; // ecx
	int v22; // edx
	char* v23; // r9
	int v24; // eax
	__int64 v25; // rax
	__int64 v26; // rdi
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v29; // rbp
	int v30; // r8d
	__int64 v31; // rcx
	__int64 v32; // rcx
	__int64 v33; // rcx
	int* v34; // rsi
	int* v35; // r14
	__int64 v36; // rax
	__int64 v37; // rdi
	unsigned __int64 v38; // rdi
	__int64 v39; // rax
	int* v40; // rax
	int* v41; // rdx
	__int64 v42; // rax
	int* v43; // rdx
	__int64 v44; // rax
	__int64 v46[11]; // [rsp+30h] [rbp-58h] BYREF
	va_list va; // [rsp+A8h] [rbp+20h] BYREF

	va_start(va, a3);
	v3 = a1 + 3288;
	v4 = 0;
	v6 = *(_QWORD**)(a1 + 3296);
	v7 = a2;
	v8 = (_QWORD*)v6[1];
	v9 = v6;
	v10 = v8;
	if (v8)
	{
		v11 = off_140C2C4D0[a2];
		while (1)
		{
			v12 = (char*)v10[4];
			LOBYTE(v13) = *v12;
			v14 = *v12 - *v11;
			if (v14)
			{
			LABEL_7:
				if (v14 < 0)
				{
					v10 = (_QWORD*)v10[3];
					goto LABEL_10;
				}
			}
			else
			{
				v15 = v11 - v12;
				while ((_BYTE)v13)
				{
					v13 = v12[1];
					v16 = (v12++)[v15 + 1];
					v14 = v13 - v16;
					if (v13 != v16)
						goto LABEL_7;
				}
			}
			v9 = v10;
			v10 = (_QWORD*)v10[2];
		LABEL_10:
			if (!v10)
			{
				v17 = off_140C2C4D0[v7];
				v18 = *v17;
				while (1)
				{
					v19 = (char*)v8[4];
					v20 = *v19;
					v21 = v18 - v20;
					if (v18 == v20)
						break;
				LABEL_16:
					if (v21 >= 0)
						goto LABEL_18;
					v6 = v8;
					v8 = (_QWORD*)v8[2];
				LABEL_19:
					if (!v8)
						goto LABEL_20;
				}
				LOBYTE(v22) = *v17;
				v23 = off_140C2C4D0[v7];
				while ((_BYTE)v22)
				{
					v22 = v23[1];
					v24 = v19[1];
					++v23;
					++v19;
					v21 = v22 - v24;
					if (v22 != v24)
						goto LABEL_16;
				}
			LABEL_18:
				v8 = (_QWORD*)v8[3];
				goto LABEL_19;
			}
		}
	}
LABEL_20:
	if (v9 != v6)
	{
		while (1)
		{
			v25 = v9[3];
			v26 = (__int64)v9;
			if (v25)
			{
				v9 = (_QWORD*)v9[3];
				for (i = *(_QWORD**)(v25 + 16); i; i = (_QWORD*)i[2])
					v9 = i;
			}
			else
			{
				for (j = v9[1]; v9 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v9 = (_QWORD*)j;
				if (v9[3] != j)
					v9 = (_QWORD*)j;
			}
			v29 = *(_QWORD*)(v26 + 40);
			if (*(_BYTE*)v29)
				break;
			v30 = *(_DWORD*)(v29 + 112);
			if (v30 != -2)
				sub_1400579E0(*(_QWORD*)(a1 + 400), 0i64, v30);
			v46[0] = v26;
			sub_1400DFE50(v3, v46);
			v31 = *(_QWORD*)(v29 + 80);
			if (v31)
				sub_14018B900(v31, 0);
			v32 = *(_QWORD*)(v29 + 48);
			if (v32)
				sub_14018B900(v32, 0);
			v33 = *(_QWORD*)(v29 + 16);
			if (v33)
				sub_14018B900(v33, 0);
			sub_14018B900(v29, 0);
		LABEL_66:
			if (v9 == v6)
				return v4;
		}
		++* (_DWORD*)(v29 + 116);
		v34 = (int*)&unk_1409D3B5C;
		v4 = 1;
		v35 = 0i64;
		v36 = 0i64;
		if (*(_QWORD*)(qword_140C63650 + 784))
			v34 = *(int**)(qword_140C63650 + 784);
		if (*(_WORD*)v34)
		{
			do
				++v36;
			while (*((_WORD*)v34 + v36));
		}
		v37 = (2 * v36) >> 1;
		if ((unsigned __int64)(v37 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v35 = sub_14018B280(2 * (v37 + 1), 0);
		v38 = 2 * v37;
		sub_1407DB590(v35, v34, v38);
		if ((int*)((char*)v35 + v38))
			*(_WORD*)((char*)v35 + v38) = 0;
		v39 = *(_QWORD*)(v29 + 104);
		if (v39)
		{
			if (*(int*)(v39 + 536) < 6)
			{
			LABEL_63:
				if (v35)
					sub_14018B900((__int64)v35, 0);
				v3 = a1 + 3288;
				goto LABEL_66;
			}
			v40 = *(int**)(v39 + 160);
			v41 = (int*)&word_140B7B704;
			if (v40)
				v41 = v40;
			v42 = 0i64;
			if (*(_WORD*)v41)
			{
				do
					++v42;
				while (*((_WORD*)v41 + v42));
			}
		}
		else
		{
			v41 = (int*)&word_140B7B704;
			if (*(_QWORD*)(v29 + 80))
				v41 = *(int**)(v29 + 80);
			v42 = 0i64;
			if (*(_WORD*)v41)
			{
				do
					++v42;
				while (*((_WORD*)v41 + v42));
			}
		}
		sub_14001C480(qword_140C63650 + 776, v41, (int*)((char*)v41 + 2 * v42));
		sub_1400F3040(a1 + 384, a3, (char)va);
		v43 = (int*)&word_140B7B704;
		v44 = 0i64;
		if (v35)
			v43 = v35;
		if (*(_WORD*)v43)
		{
			do
				++v44;
			while (*((_WORD*)v43 + v44));
		}
		sub_14001C480(qword_140C63650 + 776, v43, (int*)((char*)v43 + 2 * v44));
		goto LABEL_63;
	}
	return v4;
}
// 1400EAABF: conditional instruction was optimized away because r10.8!=0
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C2C4D0: using guessed type char *off_140C2C4D0[80];
// 140C63650: using guessed type __int64 qword_140C63650;
// 1400EAA10: using guessed type __int64 var_58[11];

