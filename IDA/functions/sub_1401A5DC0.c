#include "../winhttp.h"

//----- (00000001401A5DC0) ----------------------------------------------------
wchar_t* __fastcall sub_1401A5DC0(_QWORD* a1, wchar_t* a2, __int64 a3)
{
	wchar_t* v4; // r14
	_QWORD* v6; // rcx
	wchar_t* v7; // rax
	_QWORD** v8; // rdi
	__int64 v9; // rax
	int v10; // ecx
	__int64 v11; // rbx
	_QWORD* v12; // rax
	__int64 v13; // rdx
	_QWORD* v14; // rbx
	_WORD* v15; // rbx
	_WORD* v16; // rax
	int v17; // ecx
	bool v18; // zf
	_QWORD* v19; // rcx
	__int64 v20; // rax
	__int64 v21; // rax
	_QWORD* v22; // rcx
	_QWORD* v23; // rcx
	__int64 v24; // rax
	__int64 v25; // rbx
	_QWORD* v26; // rbx
	_QWORD* v28; // rbx
	__int64 v29; // rbx
	_QWORD* v30; // rax
	__int64 v31; // rdx
	int v32; // [rsp+20h] [rbp-20h] BYREF
	__int64 v33; // [rsp+28h] [rbp-18h]
	__int64 v34; // [rsp+30h] [rbp-10h]
	_QWORD** v35; // [rsp+78h] [rbp+38h] BYREF

	v4 = a2;
	if (!a2)
		return 0i64;
	while (1)
	{
		if (!*v4)
			return 0i64;
		v6 = (_QWORD*)a1[1];
		v35 = 0i64;
		v7 = sub_1401A5420(v6, v4, (__int64*)&v35);
		v8 = v35;
		if (!v35)
			return 0i64;
		v32 = 0;
		v33 = 0i64;
		v34 = 0i64;
		v4 = (wchar_t*)((__int64(__fastcall*)(_QWORD**, wchar_t*, int*))(*v35)[16])(v35, v7, &v32);
		if (!v4)
		{
			(*(void(__fastcall**)(_QWORD*))(*v8[10] + 32i64))(v8[10]);
			v28 = v8[10];
			((void(__fastcall*)(_QWORD**, _QWORD))(*v8)[15])(v8, 0i64);
			(*(void(__fastcall**)(_QWORD*, _QWORD**))(*v28 + 24i64))(v28, v8);
			v29 = a1[1];
			if (!*(_DWORD*)(v29 + 92))
			{
				*(_DWORD*)(v29 + 92) = -1603862511;
				v30 = sub_14018D540(&v35, (__int64)L"%0.8x", 2691104785i64);
				v31 = *(_QWORD*)(v29 + 104);
				*(_QWORD*)(v29 + 104) = *v30;
				*v30 = v31;
				if (v35)
					((void(__fastcall*)(_QWORD**))(*(v35 - 2))[1])(v35 - 2);
			}
			goto LABEL_57;
		}
		v9 = ((__int64(__fastcall*)(_QWORD**))(*v8)[1])(v8);
		if (v9)
			break;
	LABEL_27:
		if (v8[1] == (_QWORD*)a1[1])
		{
			v19 = v8[2];
			if (v19)
			{
				v20 = v19[6];
				if (v8 == (_QWORD**)v20)
					v19[6] = *(_QWORD*)(v20 + 72);
				v21 = v19[7];
				if (v8 == (_QWORD**)v21)
					v19[7] = *(_QWORD*)(v21 + 64);
				v22 = v8[8];
				if (v22)
					v22[9] = v8[9];
				v23 = v8[9];
				if (v23)
					v23[8] = v8[8];
				v8[2] = 0i64;
			}
			else
			{
				(*(void(__fastcall**)(_QWORD*))(*v8[10] + 32i64))(v8[10]);
			}
			v24 = a1[7];
			if (v24)
			{
				*(_QWORD*)(v24 + 72) = v8;
				v8[8] = (_QWORD*)a1[7];
				a1[7] = v8;
			}
			else
			{
				a1[7] = v8;
				a1[6] = v8;
				v8[8] = 0i64;
			}
			v8[9] = 0i64;
			v8[2] = a1;
		}
		if ((v32 & 0x200) != 0)
			sub_14018B900(v33, 0);
		v32 = 0;
		v33 = 0i64;
		v34 = 0i64;
	}
	v10 = *(_DWORD*)(v9 + 88);
	if (v10 != 2)
	{
		if (v33 == v34)
		{
			if (!v10)
				goto LABEL_9;
		}
		else
		{
			if (v10)
				goto LABEL_9;
			v15 = ((__int64(__fastcall*)(_QWORD**))(*v8)[6])(v8) ? 0i64 : (_WORD*)sub_1401A4F40((__int64)(v8 + 3));
			v16 = (_WORD*)sub_1401A4F40((__int64)&v32);
			if (v16 != v15)
			{
				v17 = 0;
				if (!*v16)
					goto LABEL_62;
				do
				{
					if (!*v15 || *v16 != *v15)
						break;
					v18 = v17 == 0x7FFFFFFF;
					if (v17 == 0x7FFFFFFF)
						goto LABEL_24;
					++v16;
					++v15;
					++v17;
				} while (*v16);
				v18 = v17 == 0x7FFFFFFF;
			LABEL_24:
				if (!v18)
				{
				LABEL_62:
					if (*v16 || *v15)
					{
					LABEL_9:
						v11 = a1[1];
						if (*(int*)(v11 + 92) >= 0)
						{
							*(_DWORD*)(v11 + 92) = -1603862512;
							v12 = sub_14018D540(&v35, (__int64)L"%0.8x", 2691104784i64);
							v13 = *(_QWORD*)(v11 + 104);
							*(_QWORD*)(v11 + 104) = *v12;
							*v12 = v13;
							if (v35)
								((void(__fastcall*)(_QWORD**))(*(v35 - 2))[1])(v35 - 2);
						}
						(*(void(__fastcall**)(_QWORD*))(*v8[10] + 32i64))(v8[10]);
						v14 = v8[10];
						((void(__fastcall*)(_QWORD**, _QWORD))(*v8)[15])(v8, 0i64);
						(*(void(__fastcall**)(_QWORD*, _QWORD**))(*v14 + 24i64))(v14, v8);
					LABEL_57:
						if ((v32 & 0x200) != 0)
							sub_14018B900(v33, 0);
						return 0i64;
					}
				}
			}
		}
		goto LABEL_27;
	}
	if (a3)
	{
		v25 = v9 + 24;
		if (v9 + 24 != a3)
		{
			if ((*(_DWORD*)a3 & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(a3 + 8), 0);
			*(_DWORD*)a3 = 0;
			*(_QWORD*)(a3 + 8) = 0i64;
			*(_QWORD*)(a3 + 16) = 0i64;
			*(_DWORD*)a3 = *(_DWORD*)v25;
			*(_QWORD*)(a3 + 8) = *(_QWORD*)(v25 + 8);
			*(_QWORD*)(a3 + 16) = *(_QWORD*)(v25 + 16);
			*(_DWORD*)v25 = 0;
			*(_QWORD*)(v25 + 8) = 0i64;
			*(_QWORD*)(v25 + 16) = 0i64;
		}
	}
	(*(void(__fastcall**)(_QWORD*))(*v8[10] + 32i64))(v8[10]);
	v26 = v8[10];
	((void(__fastcall*)(_QWORD**, _QWORD))(*v8)[15])(v8, 0i64);
	(*(void(__fastcall**)(_QWORD*, _QWORD**))(*v26 + 24i64))(v26, v8);
	if ((v32 & 0x200) != 0)
		sub_14018B900(v33, 0);
	return v4;
}
// 140A45318: using guessed type wchar_t a08x_2[6];

