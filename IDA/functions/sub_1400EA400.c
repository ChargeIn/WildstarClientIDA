#include "../winhttp.h"

//----- (00000001400EA400) ----------------------------------------------------
__int64 __fastcall sub_1400EA400(__int64 a1, _BYTE* a2, _BYTE* a3, __int64 a4)
{
	__int64 v4; // r14
	_QWORD* v6; // r13
	_QWORD* v8; // r11
	_QWORD* v9; // rbx
	_QWORD* v10; // r10
	int v11; // edi
	_BYTE* v12; // r9
	int v13; // edx
	int v14; // ecx
	_BYTE* v15; // r8
	__int64 v16; // r9
	int v17; // eax
	int v18; // edi
	char* v19; // r8
	int v20; // eax
	int v21; // ecx
	int v22; // edx
	_BYTE* v23; // r9
	int v24; // eax
	__int64 v25; // rax
	__int64 v26; // rdi
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v29; // rsi
	int v30; // r8d
	__int64 v31; // rcx
	__int64 v32; // rcx
	__int64 v33; // rcx
	int* v34; // r14
	int* v35; // rbp
	__int64 v36; // rax
	__int64 v37; // rdi
	unsigned __int64 v38; // rdi
	__int64 v39; // rax
	int* v40; // rax
	int* v41; // rdx
	__int64 v42; // rax
	int* v43; // rdx
	__int64 v44; // rax
	__int64 v46[9]; // [rsp+30h] [rbp-48h] BYREF
	unsigned __int8 v47; // [rsp+80h] [rbp+8h]

	v4 = a1 + 3288;
	v6 = *(_QWORD**)(a1 + 3296);
	v47 = 0;
	v8 = (_QWORD*)v6[1];
	v9 = v6;
	v10 = v8;
	if (v8)
	{
		v11 = (char)*a2;
		while (1)
		{
			v12 = (_BYTE*)v10[4];
			LOBYTE(v13) = *v12;
			v14 = (char)*v12 - v11;
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
				v15 = a2;
				v16 = v12 - a2;
				while ((_BYTE)v13)
				{
					v13 = (char)v15[v16 + 1];
					v17 = (char)*++v15;
					v14 = v13 - v17;
					if (v13 != v17)
						goto LABEL_7;
				}
			}
			v9 = v10;
			v10 = (_QWORD*)v10[2];
		LABEL_10:
			if (!v10)
			{
				v18 = (char)*a2;
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
				LOBYTE(v22) = *a2;
				v23 = a2;
				while ((_BYTE)v22)
				{
					v22 = (char)v23[1];
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
			sub_1400DFE50(v4, v46);
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
		LABEL_68:
			if (v9 == v6)
				return v47;
		}
		v34 = (int*)&unk_1409D3ADC;
		v47 = 1;
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
		++* (_DWORD*)(v29 + 116);
		if (v39)
		{
			if (*(int*)(v39 + 536) < 6)
			{
			LABEL_65:
				if (v35)
					sub_14018B900((__int64)v35, 0);
				v4 = a1 + 3288;
				goto LABEL_68;
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
		if (!*(_BYTE*)(a1 + 2825))
			sub_1400F3040(a1 + 384, *(LARGE_INTEGER*)(v29 + 104), *(_DWORD*)(v29 + 112), *(_QWORD*)(v29 + 48), a3, a4);
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
		goto LABEL_65;
	}
	return 0i64;
}
// 1400EA495: conditional instruction was optimized away because r11.8!=0
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C63650: using guessed type __int64 qword_140C63650;
// 1400EA400: using guessed type __int64 var_48[9];

