#include "../winhttp.h"

//----- (00000001402CC040) ----------------------------------------------------
__int64 __fastcall sub_1402CC040(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rax
	__int64 v5; // r15
	int v6; // esi
	__int64 v7; // r13
	__int64 v8; // rbx
	unsigned __int64 v9; // r14
	_QWORD* v10; // rdi
	int* v11; // rax
	__int64 v12; // rax
	__int64 v13; // rcx
	unsigned int v14; // edx
	__int64 v15; // r9
	int v16; // r8d
	_DWORD* v17; // rcx
	__int64 v18; // rax
	__int64* v19; // rdi
	__int64 v20; // r14
	int* v21; // rbx
	unsigned __int64 v22; // r15
	_QWORD* v23; // rdi
	int* v24; // rax
	__int64 v25; // rcx
	int** v26; // rdi
	_WORD* v27; // [rsp+70h] [rbp+8h] BYREF
	int* v28; // [rsp+80h] [rbp+18h] BYREF
	__int64 v29; // [rsp+88h] [rbp+20h]

	v2 = *(_QWORD*)(a1 + 16);
	if (*(_DWORD*)(v2 + 24) == 2 || (result = sub_1402D5980(v2), (_DWORD)result))
	{
		v4 = sub_1402D5890(*(_QWORD*)(a1 + 16));
		v5 = qword_140C657F0;
		v6 = 0;
		v7 = v4;
		v28 = *(int**)(v4 + 48);
		v8 = 0i64;
		v29 = 0i64;
		v9 = (*(__int64(__fastcall**)(int**))(qword_140C657F0 + 80))(&v28);
		v10 = *(_QWORD**)(*(_QWORD*)(v5 + 72) + 8 * (v9 % *(_QWORD*)(v5 + 64)));
		if (!v10)
			goto LABEL_7;
		while (v9 != *v10 || !(*(unsigned int(__fastcall**)(int**, _QWORD*))(v5 + 88))(&v28, v10 + 2))
		{
			v10 = (_QWORD*)v10[1];
			if (!v10)
				goto LABEL_7;
		}
		v19 = v10 + 3;
		if (v19)
		{
			v29 = *v19;
			v8 = v29;
			(**(void(__fastcall***)(__int64))v8)(v8);
		}
		else
		{
		LABEL_7:
			v11 = sub_14018B280(128i64, 0);
			if (v11)
			{
				v12 = sub_1402C9600((__int64)v11);
				if (v12)
					v8 = v12;
				v29 = v8;
			}
			sub_1402C9790(v8, v28);
		}
		if (*(_QWORD*)(a1 + 24) != v8)
		{
			if (v8)
				(**(void(__fastcall***)(__int64))v8)(v8);
			v13 = *(_QWORD*)(a1 + 24);
			if (v13)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
			*(_QWORD*)(a1 + 24) = v8;
		}
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		v14 = *(_DWORD*)(v7 + 56);
		if (v14)
		{
			v15 = *(_QWORD*)(v7 + 64);
			v16 = *(_DWORD*)(a1 + 40);
			v17 = (_DWORD*)v15;
			v27 = *(_WORD**)(v15 + 32);
			v18 = 0i64;
			while (*v17 != v16)
			{
				v18 = (unsigned int)(v18 + 1);
				v17 += 10;
				if ((unsigned int)v18 >= v14)
					goto LABEL_28;
			}
			v27 = *(_WORD**)(v15 + 40 * v18 + 32);
		LABEL_28:
			v20 = qword_140C657F0;
			v21 = 0i64;
			v22 = (*(__int64(__fastcall**)(_WORD**))(qword_140C657F0 + 160))(&v27);
			v23 = *(_QWORD**)(*(_QWORD*)(v20 + 152) + 8 * (v22 % *(_QWORD*)(v20 + 144)));
			if (!v23)
				goto LABEL_32;
			while (v22 != *v23 || !(*(unsigned int(__fastcall**)(_WORD**, _QWORD*))(v20 + 168))(&v27, v23 + 2))
			{
				v23 = (_QWORD*)v23[1];
				if (!v23)
					goto LABEL_32;
			}
			v26 = (int**)(v23 + 3);
			if (v26)
			{
				v21 = *v26;
				(**(void(__fastcall***)(int*)) * v26)(*v26);
			}
			else
			{
			LABEL_32:
				v24 = sub_14018B280(64i64, 0);
				if (v24)
				{
					v21 = v24;
					*(_QWORD*)v24 = off_140B62C10;
					v24[2] = 1;
					*((_QWORD*)v24 + 2) = 0i64;
					v24[6] = 0;
					*((_QWORD*)v24 + 4) = 0i64;
					*((_QWORD*)v24 + 5) = 0i64;
					*((_QWORD*)v24 + 6) = 0i64;
					*(_QWORD*)v24 = off_140B62870;
					v24[14] = 0;
				}
				if ((int)sub_1402D57C0((__int64)v21, v27) < 0 && v21)
				{
					(*(void(__fastcall**)(int*))(*(_QWORD*)v21 + 8i64))(v21);
					v21 = 0i64;
				}
			}
			if (*(int**)(a1 + 32) != v21)
			{
				if (v21)
					(**(void(__fastcall***)(int*))v21)(v21);
				v25 = *(_QWORD*)(a1 + 32);
				if (v25)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25);
				*(_QWORD*)(a1 + 32) = v21;
			}
			if (v21)
				(*(void(__fastcall**)(int*))(*(_QWORD*)v21 + 8i64))(v21);
		}
		LOBYTE(v6) = *(_QWORD*)(a1 + 32) != 0i64;
		result = 1i64;
		*(_DWORD*)(a1 + 56) = v6 + 2;
	}
	return result;
}
// 140B62870: using guessed type __int64 (__fastcall *off_140B62870[67])();
// 140B62C10: using guessed type __int64 (__fastcall *off_140B62C10[19])();
// 140C657F0: using guessed type __int64 qword_140C657F0;

