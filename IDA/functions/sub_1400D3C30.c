//----- (00000001400D3C30) ----------------------------------------------------
char __fastcall sub_1400D3C30(__int64 a1, unsigned int a2, char* a3, char* a4, _BYTE* a5, __int64 a6)
{
	_QWORD* v6; // rsi
	char* v7; // rbp
	_QWORD* v8; // r11
	_QWORD* v9; // rbx
	_QWORD* v10; // r9
	_BYTE* v11; // r10
	int v12; // r8d
	int v13; // ecx
	char* v14; // rdx
	__int64 v15; // r10
	int v16; // eax
	int v17; // edi
	char* v18; // r8
	int v19; // eax
	int v20; // ecx
	int v21; // edx
	char* v22; // r9
	int v23; // eax
	__int64 v24; // rcx
	__int64 v25; // rax
	_QWORD* i; // rcx
	__int64 j; // rcx
	LARGE_INTEGER* v28; // rsi
	__int64 QuadPart; // rcx
	__int64 v30; // rcx
	__int64 v31; // rcx
	LONGLONG* v32; // rcx
	LARGE_INTEGER v33; // rax
	int* v34; // rax
	int* v35; // rdx
	__int64 v36; // rax
	__int64 v37; // rdi
	int* v38; // rcx
	int v39; // eax
	_QWORD* v40; // rax
	LONGLONG* v41; // rax
	LONGLONG v42; // rdx
	LARGE_INTEGER* v43; // rcx
	char result; // al
	int v45; // edi
	__int64 v46; // rcx
	char v47; // [rsp+40h] [rbp-58h]
	unsigned int v48; // [rsp+44h] [rbp-54h]
	_QWORD* v49; // [rsp+48h] [rbp-50h]
	__int64 v50; // [rsp+50h] [rbp-48h] BYREF
	__int64 v51; // [rsp+58h] [rbp-40h]
	__int64 v52[3]; // [rsp+60h] [rbp-38h]
	unsigned __int64 v55; // [rsp+B0h] [rbp+18h]

	v55 = (unsigned __int64)a3;
	v6 = (_QWORD*)a1;
	v7 = a3;
	v48 = a2 - 1;
	if (a2 - 1 <= 0x4E)
	{
		v7 = off_140C2C4D0[a2];
		v55 = (unsigned __int64)v7;
	}
	v47 = 0;
	v52[0] = *(_QWORD*)(a1 + 32) + 384i64;
	v51 = a1 + 992;
	v8 = *(_QWORD**)(*(_QWORD*)(a1 + 1000) + 8i64);
	v49 = *(_QWORD**)(a1 + 1000);
	v9 = v49;
	v10 = v8;
	if (v8)
	{
		while (1)
		{
			v11 = (_BYTE*)v10[4];
			LOBYTE(v12) = *v11;
			v13 = (char)*v11 - *v7;
			if (v13)
			{
			LABEL_8:
				if (v13 < 0)
				{
					v10 = (_QWORD*)v10[3];
					goto LABEL_11;
				}
			}
			else
			{
				v14 = v7;
				v15 = v11 - v7;
				while ((_BYTE)v12)
				{
					v12 = v14[v15 + 1];
					v16 = *++v14;
					v13 = v12 - v16;
					if (v12 != v16)
						goto LABEL_8;
				}
			}
			v9 = v10;
			v10 = (_QWORD*)v10[2];
		LABEL_11:
			if (!v10)
			{
				v17 = *v7;
				while (1)
				{
					v18 = (char*)v8[4];
					v19 = *v18;
					v20 = v17 - v19;
					if (v17 == v19)
						break;
				LABEL_17:
					if (v20 >= 0)
						goto LABEL_19;
					v49 = v8;
					v8 = (_QWORD*)v8[2];
				LABEL_20:
					if (!v8)
						goto LABEL_21;
				}
				LOBYTE(v21) = *v7;
				v22 = v7;
				while ((_BYTE)v21)
				{
					v21 = v22[1];
					v23 = v18[1];
					++v22;
					++v18;
					v20 = v21 - v23;
					if (v21 != v23)
						goto LABEL_17;
				}
			LABEL_19:
				v8 = (_QWORD*)v8[3];
				goto LABEL_20;
			}
		}
	}
LABEL_21:
	if (v9 == v49)
		goto LABEL_56;
	do
	{
		v24 = v9[3];
		v25 = (__int64)v9;
		if (v24)
		{
			v9 = (_QWORD*)v9[3];
			for (i = *(_QWORD**)(v24 + 16); i; i = (_QWORD*)i[2])
				v9 = i;
		}
		else
		{
			for (j = v9[1]; v9 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
				v9 = (_QWORD*)j;
			if (v9[3] != j)
				v9 = (_QWORD*)j;
		}
		v28 = *(LARGE_INTEGER**)(v25 + 40);
		if (!LOBYTE(v28->LowPart))
		{
			v50 = v25;
			sub_1400DFE50(v51, &v50);
			QuadPart = v28[10].QuadPart;
			if (QuadPart)
				sub_14018B900(QuadPart, 0);
			v30 = v28[6].QuadPart;
			if (v30)
				sub_14018B900(v30, 0);
			v31 = v28[2].QuadPart;
			if (v31)
				sub_14018B900(v31, 0);
			v32 = (LONGLONG*)v28;
			goto LABEL_53;
		}
		v33 = v28[13];
		if (v33.QuadPart)
		{
			if (*(int*)(v33.QuadPart + 536) < 6)
				continue;
			v34 = *(int**)(v33.QuadPart + 160);
			v35 = (int*)&word_140B7B704;
			if (v34)
				v35 = v34;
			v36 = 0i64;
			if (*(_WORD*)v35)
			{
				do
					++v36;
				while (*((_WORD*)v35 + v36));
			}
		}
		else
		{
			v35 = (int*)&word_140B7B704;
			if (v28[10].QuadPart)
				v35 = (int*)v28[10].QuadPart;
			v36 = 0i64;
			if (*(_WORD*)v35)
			{
				do
					++v36;
				while (*((_WORD*)v35 + v36));
			}
		}
		sub_14001C480(qword_140C63650 + 776, v35, (int*)((char*)v35 + 2 * v36));
		v47 = 1;
		v37 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 3232i64);
		v38 = sub_14018B280(24i64, 0);
		if (v38 != (int*)-16i64)
			*((_QWORD*)v38 + 2) = a1;
		*(_QWORD*)v38 = v37;
		*((_QWORD*)v38 + 1) = *(_QWORD*)(v37 + 8);
		**(_QWORD**)(v37 + 8) = v38;
		*(_QWORD*)(v37 + 8) = v38;
		v39 = sub_1400D45B0(a1);
		sub_1400F3790(v52[0], v28[13], v39, v28[6].QuadPart, a1, (__int64)a4, a5, a6);
		v40 = *(_QWORD**)(*(_QWORD*)(a1 + 32) + 3232i64);
		if ((_QWORD*)*v40 != v40)
		{
			v32 = (LONGLONG*)v40[1];
			v41 = (LONGLONG*)v32[1];
			v42 = *v32;
			*v41 = *v32;
			*(_QWORD*)(v42 + 8) = v41;
		LABEL_53:
			sub_14018B900((__int64)v32, 0);
		}
	} while (v9 != v49);
	v6 = (_QWORD*)a1;
LABEL_56:
	if (v48 <= 0x4E)
		(*(void(__fastcall**)(_QWORD*, _QWORD, char*, _BYTE*, __int64))(*v6 + 424i64))(v6, a2, a4, a5, a6);
	v43 = (LARGE_INTEGER*)v6[35];
	result = v47;
	if (v43)
	{
		if (!v47)
		{
			v45 = v55;
			result = sub_140151740(v43, v55, (__int64)v6, a4, a5, a6);
			goto LABEL_62;
		}
	}
	else
	{
		v45 = v55;
	LABEL_62:
		if (!result)
		{
			v46 = v6[2];
			if (v46)
			{
				if (a2 == 21)
					return 0;
				else
					return sub_1400D3C30(v46, a2, v45, (_DWORD)a4, (__int64)a5, a6);
			}
		}
	}
	return result;
}
// 1400D3D07: conditional instruction was optimized away because r11.8!=0
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C2C4D0: using guessed type char *off_140C2C4D0[80];
// 140C63650: using guessed type __int64 qword_140C63650;
// 1400D3C30: using guessed type __int64 var_38[3];

