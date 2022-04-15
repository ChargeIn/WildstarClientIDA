//----- (00000001400F2000) ----------------------------------------------------
char __fastcall sub_1400F2000(__int64 a1, const char* a2, int** a3)
{
	_QWORD* v3; // rbx
	__int64 v7; // rax
	__int64 v8; // r8
	_QWORD* v9; // rax
	__int64 v10; // rcx
	_QWORD* v11; // rcx
	__int64 v12; // r14
	__int64 v13; // r8
	const char* v14; // rax
	_QWORD* v15; // rax
	int* v16; // r13
	int* v17; // r14
	__int64 v18; // rbx
	int* v19; // rax
	int* v20; // rdi
	unsigned __int64 v21; // rbx
	__int64 v22; // rcx
	_QWORD* v24; // rbx
	char* v25; // rax
	__int64 v26; // r9
	int v27; // eax
	__int64 v28; // rcx
	unsigned __int64 v29; // rdx
	_QWORD* v30; // rcx
	const char* v31; // rax
	_QWORD* v32; // rax
	int* v33; // r13
	int* v34; // r14
	__int64 v35; // rbx
	int* v36; // rax
	int* v37; // rdi
	unsigned __int64 v38; // rbx
	__int64 v39; // rcx
	int* v40; // rbx
	int* v41; // rax
	int* v42; // rax
	__int64 v43; // [rsp+30h] [rbp-468h] BYREF
	__int64 v44; // [rsp+38h] [rbp-460h]
	char v45[1024]; // [rsp+50h] [rbp-448h] BYREF

	v3 = *(_QWORD**)(a1 + 16);
	if (*(_QWORD*)(v3[4] + 120i64) >= *(_QWORD*)(v3[4] + 112i64))
		sub_14005E2C0(*(_QWORD*)(a1 + 16));
	v7 = v3[5];
	if (v7 == v3[10])
		v8 = v3[15];
	else
		v8 = *(_QWORD*)(**(_QWORD**)(v7 + 8) + 24i64);
	v9 = sub_140060AB0((__int64)v3, 0, v8);
	v9[4] = sub_1400F3FF0;
	v10 = v3[2];
	*(_QWORD*)v10 = v9;
	*(_DWORD*)(v10 + 8) = 6;
	v3[2] += 16i64;
	v11 = *(_QWORD**)(a1 + 16);
	v12 = (__int64)(v11[2] - v11[3]) >> 4;
	v13 = -1i64;
	do
		++v13;
	while (a2[v13]);
	if ((unsigned int)sub_140057F80(v11, (__int64)a2, v13, 0i64))
	{
		v14 = (const char*)sub_140056BB0(*(_QWORD**)(a1 + 16), 0xFFFFFFFF, 0i64);
		sub_1400EFDD0(v45, 1024i64, "%s: %s", a2, v14);
		v15 = sub_14018F2D0(&v43, v45);
		v16 = *a3;
		v17 = (int*)v15[1];
		if (v17)
		{
			v18 = 0i64;
			if (*(_WORD*)v17)
			{
				do
					++v18;
				while (*((_WORD*)v17 + v18));
			}
			v19 = sub_14018B280(2 * v18 + 18, 0);
			if (v19)
			{
				*((_QWORD*)v19 + 1) = v18;
				*(_QWORD*)v19 = off_140B55060;
			}
			else
			{
				v19 = 0i64;
			}
			v20 = v19 + 4;
			v21 = 2 * v18;
			sub_1407DB590(v19 + 4, v17, v21);
			*(_WORD*)((char*)v20 + v21) = 0;
			*a3 = v20;
		}
		else
		{
			*a3 = 0i64;
		}
		if (v16)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v16 - 2) + 8i64))(v16 - 4);
		if (v44)
			sub_14018B900(v44, 0);
		v22 = *(_QWORD*)(a1 + 24);
		if (v22 || *(_QWORD*)(a1 + 32))
			(*(void(__fastcall**)(__int64, char*))(a1 + 32))(v22, v45);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		return 0;
	}
	else
	{
		v24 = *(_QWORD**)(a1 + 16);
		if ((_DWORD)v12)
			v25 = (char*)sub_1400580E0(*(_QWORD*)(a1 + 16), v12) - v24[8];
		else
			v25 = 0i64;
		v26 = v24[2] - 16i64;
		LODWORD(v44) = -1;
		v43 = v26;
		v27 = sub_140061FB0(
			(__int64)v24,
			(void(__fastcall*)(__int64, __int64))sub_140058DB0,
			(__int64)&v43,
			v26 - v24[8],
			(__int64)v25);
		v28 = v24[5];
		v29 = v24[2];
		if (v29 >= *(_QWORD*)(v28 + 16))
			*(_QWORD*)(v28 + 16) = v29;
		v30 = *(_QWORD**)(a1 + 16);
		if (v27)
		{
			v31 = (const char*)sub_140056BB0(v30, 0xFFFFFFFF, 0i64);
			sub_1400EFDD0(v45, 1024i64, "%s: %s", a2, v31);
			v32 = sub_14018F2D0(&v43, v45);
			v33 = *a3;
			v34 = (int*)v32[1];
			if (v34)
			{
				v35 = 0i64;
				if (*(_WORD*)v34)
				{
					do
						++v35;
					while (*((_WORD*)v34 + v35));
				}
				v36 = sub_14018B280(2 * v35 + 18, 0);
				if (v36)
				{
					*((_QWORD*)v36 + 1) = v35;
					*(_QWORD*)v36 = off_140B55060;
				}
				else
				{
					v36 = 0i64;
				}
				v37 = v36 + 4;
				v38 = 2 * v35;
				sub_1407DB590(v36 + 4, v34, v38);
				*(_WORD*)((char*)v37 + v38) = 0;
				*a3 = v37;
			}
			else
			{
				*a3 = 0i64;
			}
			if (v33)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v33 - 2) + 8i64))(v33 - 4);
			if (v44)
				sub_14018B900(v44, 0);
			v39 = *(_QWORD*)(a1 + 24);
			if (v39 || *(_QWORD*)(a1 + 32))
				(*(void(__fastcall**)(__int64, char*))(a1 + 32))(v39, v45);
			sub_1400582A0(*(_QWORD*)(a1 + 16), -2);
			return 0;
		}
		else
		{
			sub_1400582A0((__int64)v30, -2);
			v40 = *a3;
			v41 = sub_14018B280(18i64, 0);
			if (v41)
			{
				*((_QWORD*)v41 + 1) = 0i64;
				*(_QWORD*)v41 = off_140B55060;
			}
			else
			{
				v41 = 0i64;
			}
			v42 = v41 + 4;
			*(_WORD*)v42 = 0;
			*a3 = v42;
			if (v40)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v40 - 2) + 8i64))(v40 - 4);
			return 1;
		}
	}
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

