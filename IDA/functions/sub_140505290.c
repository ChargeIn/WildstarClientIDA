//----- (0000000140505290) ----------------------------------------------------
void __fastcall sub_140505290(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
	char v7; // si
	int** v8; // r12
	__int64 i; // r15
	int* v10; // rax
	int* v11; // rax
	int v12; // edx
	int v13; // r8d
	_QWORD* v14; // r14
	int* v15; // rdi
	__int64 v16; // rax
	__int64 v18; // rsi
	int* v19; // rax
	__int64 v20; // rcx
	int* v21; // rax
	__int64 v22; // rcx
	int* v23; // rdx
	__int64 v24; // rax
	int* v26; // [rsp+28h] [rbp-D8h] BYREF
	char v27[8]; // [rsp+30h] [rbp-D0h] BYREF
	int* v28; // [rsp+38h] [rbp-C8h]
	int* v29; // [rsp+40h] [rbp-C0h]
	__int64 v30; // [rsp+48h] [rbp-B8h]
	__int64 v31[11]; // [rsp+50h] [rbp-B0h] BYREF
	char v32[8]; // [rsp+A8h] [rbp-58h] BYREF
	int* v33; // [rsp+B0h] [rbp-50h]
	int* v34; // [rsp+B8h] [rbp-48h]
	__int128 v35; // [rsp+110h] [rbp+10h]
	int* v36; // [rsp+120h] [rbp+20h]
	unsigned __int64 v37[4]; // [rsp+130h] [rbp+30h] BYREF

	v7 = a4;
	sub_14001C2B0(a2, *(int**)(a2 + 8), *(int**)(a2 + 16));
	sub_140503CA0(a1, a3, v37);
	v8 = (int**)(a1 + 360);
	for (i = 3i64; i >= 0; --i)
	{
		if (!*((_BYTE*)v8 - 56) || v7 && !v37[i])
			goto LABEL_39;
		sub_1400B7090((__int64)v31, 683343);
		v31[0] = (__int64)off_140B69230;
		v36 = 0i64;
		v35 = 0i64;
		v10 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v35 = v10;
		*((_QWORD*)&v35 + 1) = v10;
		v36 = v10 + 4;
		if (v10)
			*(_WORD*)v10 = 0;
		v11 = sub_14018B280(96i64, 0);
		if (v11)
		{
			v12 = 0x7FFFFFFF;
			v13 = 0x80000000;
			if (LODWORD(v37[i]) != 0x7FFFFFFF)
				v12 = v37[i];
			if (v12 != 0x80000000)
				v13 = v12;
			v14 = (_QWORD*)sub_1404DDC40((__int64)v11, *v8, v13);
		}
		else
		{
			v14 = 0i64;
		}
		v15 = 0i64;
		v28 = 0i64;
		v29 = 0i64;
		v30 = 0i64;
		v16 = 0i64;
		while (aDenomination[++v16] != 0)
			;
		v18 = (2 * v16) >> 1;
		if ((unsigned __int64)(v18 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v15 = sub_14018B280(2 * (v18 + 1), 0);
			v28 = v15;
			v29 = v15;
			v30 = (__int64)v15 + 2 * v18 + 2;
		}
		sub_1407DB590(v15, (int*)L"denomination", 2 * v18);
		v19 = (int*)((char*)v15 + 2 * v18);
		v29 = v19;
		if (v19)
			*(_WORD*)v19 = 0;
		sub_1400B7480((__int64)v31, v14);
		(*(void(__fastcall**)(_QWORD*, char*))(*v14 + 72i64))(v14, v27);
		v20 = (__int64)v28;
		if (v28)
			sub_14018B900((__int64)v28, 0);
		if (*(_QWORD*)(a2 + 8) != *(_QWORD*)(a2 + 16))
		{
			v21 = (int*)sub_14034BDD0(v20, 683344);
			v22 = 0i64;
			if (*(_WORD*)v21)
			{
				do
					++v22;
				while (*((_WORD*)v21 + v22));
			}
			sub_14001C310((_QWORD*)a2, v21, (int*)((char*)v21 + 2 * v22));
		}
		v23 = v33;
		if (v33 == v34 && qword_140C63648)
		{
			v26 = 0i64;
			(**(void(__fastcall***)(__int64, __int64, __int64*, int**))qword_140C63648)(
				qword_140C63648,
				v31[2],
				v31,
				&v26);
			if (v26)
			{
				v24 = 0i64;
				if (*(_WORD*)v26)
				{
					do
						++v24;
					while (*((_WORD*)v26 + v24));
				}
				sub_14001C480((__int64)v32, v26, (int*)((char*)v26 + 2 * v24));
				v23 = v33;
				goto LABEL_34;
			}
			v23 = v33;
			if (v33 != v34)
			{
				*(_WORD*)v33 = 0;
				v23 = v33;
				v34 = v33;
			LABEL_34:
				if (v26)
				{
					(*(void(__fastcall**)(int*, int*))(*((_QWORD*)v26 - 2) + 8i64))(v26 - 4, v23);
					v23 = v33;
				}
			}
		}
		sub_14001C310((_QWORD*)a2, v23, v34);
		if ((_QWORD)v35)
			sub_14018B900(v35, 0);
		sub_1400B7390(v31);
		v7 = a4;
	LABEL_39:
		v8 -= 11;
	}
}
// 140505473: variable 'v20' is possibly undefined
// 140B10198: using guessed type wchar_t aDenomination[13];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C63648: using guessed type __int64 qword_140C63648;
// 140505290: using guessed type unsigned __int64 var_60[4];
// 140505290: using guessed type char var_160[8];
// 140505290: using guessed type char var_E8[8];

