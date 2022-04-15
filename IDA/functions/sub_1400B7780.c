//----- (00000001400B7780) ----------------------------------------------------
__int64 __fastcall sub_1400B7780(__int64 a1, int* a2, __int64* a3)
{
	__int64 v7; // rcx
	int* v8; // r12
	__int64 v9; // rax
	int* v10; // r13
	__int64 v11; // rbx
	signed __int64 v12; // rbx
	char* v13; // rsi
	__int64 v14; // rbp
	char* v15; // rax
	__int64 v16; // rbx
	__int64* v17; // rcx
	int* v18; // rsi
	_WORD* v19; // rdi
	unsigned __int64 v20; // rcx
	int* v21; // rbx
	__int64 v22; // rcx
	__int64 v23; // rbp
	char* v24; // rax
	__int64 v25; // rdi
	__int64 v26; // rbx
	unsigned __int64 v27; // rbx
	__int64 v28; // r10
	__int64 v29; // r8
	__int64* v30; // rcx
	__int64 v31; // r15
	_WORD* v32; // rbx
	unsigned __int64 v33; // rcx
	int* v34; // rax
	_WORD* v35; // rdx
	__int64 v36; // r8
	int* v37; // rdi
	int* v38; // rbp
	__int64 v39; // rax
	__int64 v40; // rbx
	int* v41; // rax
	unsigned __int64 v42; // rbx
	__int64 v43; // rax
	__int64 v44; // r15
	int* v45; // rax
	__int64 v46; // r12
	int* v47; // rbp
	__int64 v48; // rbx
	int* v49; // rax
	int* v50; // rdi
	unsigned __int64 v51; // rbx
	__int64 v52; // rcx
	int* v53; // rax
	__int64 v54; // r15
	int* v55; // rbp
	__int64 v56; // rbx
	int* v57; // rax
	int* v58; // rdi
	unsigned __int64 v59; // rbx
	__int64 v60; // [rsp+20h] [rbp-58h] BYREF
	__int64 v61; // [rsp+28h] [rbp-50h] BYREF
	__int64 v62; // [rsp+30h] [rbp-48h]
	int v64; // [rsp+88h] [rbp+10h] BYREF
	__int64 v65; // [rsp+98h] [rbp+20h] BYREF

	if (!*(_WORD*)a2)
		return 0i64;
	v7 = *a3;
	v8 = 0i64;
	v64 = 0;
	*a3 = 0i64;
	if (v7)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
	v9 = 0i64;
	v10 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v9;
		while (*((_WORD*)a2 + v9));
	}
	v11 = (2 * v9) >> 1;
	if ((unsigned __int64)(v11 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v10 = sub_14018B280(2 * (v11 + 1), 0);
	v12 = 2 * v11;
	sub_1407DB590(v10, a2, v12);
	v13 = (char*)v10 + v12;
	if ((int*)((char*)v10 + v12))
		*(_WORD*)v13 = 0;
	v14 = v12 >> 1;
	if (!(v12 >> 1) || (WORD1(v65) = 41, v15 = (char*)sub_14002C8A0(v10, (__int64)v10 + v12, v65), v15 == v13))
		v16 = -1i64;
	else
		v16 = (v15 - (char*)v10) >> 1;
	if (sub_1400B8010((__int64*)a1, (__int64)a2 + 2, a3) && *a3)
	{
		if (v16 != -1)
			v14 = v16 + 1;
	}
	else if (v16 != -1)
	{
		v17 = &v65;
		v65 = v14 - 1;
		if (v14 - 1 >= (unsigned __int64)(v16 - 1))
			v17 = &v60;
		v60 = v16 - 1;
		v18 = 0i64;
		v19 = (_WORD*)v10 + *v17 + 1;
		v20 = ((2 * *v17) >> 1) + 1;
		if (v20 <= 0x7FFFFFFFFFFFFFFEi64)
			v18 = sub_14018B280(2 * v20, 0);
		v21 = v18;
		if ((_WORD*)((char*)v10 + 2) != v19)
		{
			v22 = (char*)v10 - (char*)v18 + 2;
			do
			{
				if (v21)
					*(_WORD*)v21 = *(_WORD*)((char*)v21 + v22);
				v21 = (int*)((char*)v21 + 2);
			} while ((_WORD*)((char*)v21 + v22) != v19);
		}
		if (v21)
			*(_WORD*)v21 = 0;
		if (v18 == v21)
		{
			if (v18)
				sub_14018B900((__int64)v18, 0);
			v14 = 2i64;
		}
		else
		{
			v23 = ((char*)v21 - (char*)v18) >> 1;
			v62 = v23;
			if (!v23
				|| (WORD1(v65) = 46, v24 = (char*)sub_14002C8A0(v18, (__int64)v21, v65), v24 == (char*)v21)
				|| (v25 = (v24 - (char*)v18) >> 1, v25 == -1))
			{
				v43 = (*(__int64(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 8) + 8i64))(*(_QWORD*)(a1 + 8), v18);
				v44 = v43;
				if (v43)
				{
					v45 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v43 + 16i64))(v43);
					v46 = *a3;
					v47 = v45;
					if (v45)
					{
						v48 = 0i64;
						if (*(_WORD*)v45)
						{
							do
								++v48;
							while (*((_WORD*)v45 + v48));
						}
						v49 = sub_14018B280(2 * v48 + 18, 0);
						if (v49)
						{
							*((_QWORD*)v49 + 1) = v48;
							*(_QWORD*)v49 = off_140B55060;
						}
						else
						{
							v49 = 0i64;
						}
						v50 = v49 + 4;
						v51 = 2 * v48;
						sub_1407DB590(v49 + 4, v47, v51);
						*(_WORD*)((char*)v50 + v51) = 0;
						*a3 = (__int64)v50;
					}
					else
					{
						*a3 = 0i64;
					}
					if (v46)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v46 - 16) + 8i64))(v46 - 16);
					v64 = 1;
					*(_QWORD*)(a1 + 16) = v44;
				}
				else
				{
					v52 = *(_QWORD*)(a1 + 16);
					if (v52)
					{
						v53 = (int*)(*(__int64(__fastcall**)(__int64, int*, __int64, int*, __int64))(*(_QWORD*)v52 + 56i64))(
							v52,
							v18,
							1i64,
							&v64,
							v60);
						v54 = *a3;
						v55 = v53;
						if (v53)
						{
							v56 = 0i64;
							if (*(_WORD*)v53)
							{
								do
									++v56;
								while (*((_WORD*)v53 + v56));
							}
							v57 = sub_14018B280(2 * v56 + 18, 0);
							if (v57)
							{
								*((_QWORD*)v57 + 1) = v56;
								*(_QWORD*)v57 = off_140B55060;
							}
							else
							{
								v57 = 0i64;
							}
							v58 = v57 + 4;
							v59 = 2 * v56;
							sub_1407DB590(v57 + 4, v55, v59);
							*(_WORD*)((char*)v58 + v59) = 0;
							*a3 = (__int64)v58;
						}
						else
						{
							*a3 = 0i64;
						}
						if (v54)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v54 - 16) + 8i64))(v54 - 16);
					}
				}
			}
			else
			{
				v26 = (2 * v25) >> 1;
				if ((unsigned __int64)(v26 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					v8 = sub_14018B280(2 * (v26 + 1), 0);
				v27 = 2 * v26;
				sub_1407DB590(v8, v18, v27);
				if ((int*)((char*)v8 + v27))
					*(_WORD*)((char*)v8 + v27) = 0;
				v28 = (*(__int64(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 8) + 8i64))(*(_QWORD*)(a1 + 8), v8);
				v65 = v28;
				if (v28)
				{
					v29 = v25 + 1;
					v30 = &v60;
					v61 = -1i64;
					v60 = v23 - (v25 + 1);
					if (v60 == -1)
						v30 = &v61;
					v31 = 0i64;
					v32 = (_WORD*)v18 + v29 + *v30;
					v33 = ((2 * (v29 + *v30) - 2 * (v25 + 1)) >> 1) + 1;
					if (v33 <= 0x7FFFFFFFFFFFFFFEi64)
					{
						v34 = sub_14018B280(2 * v33, 0);
						v28 = v65;
						v31 = (__int64)v34;
					}
					v35 = (_WORD*)v31;
					if ((_WORD*)((char*)v18 + 2 * v25 + 2) != v32)
					{
						v36 = (__int64)v18 + 2 * v25 - v31 + 2;
						do
						{
							if (v35)
								*v35 = *(_WORD*)((char*)v35 + v36);
							++v35;
						} while ((_WORD*)((char*)v35 + v36) != v32);
					}
					v37 = 0i64;
					if (v35)
						*v35 = 0;
					v38 = (int*)(*(__int64(__fastcall**)(__int64, __int64, __int64, int*, __int64, __int64))(*(_QWORD*)v28 + 56i64))(
						v28,
						v31,
						1i64,
						&v64,
						v60,
						v61);
					v39 = *a3;
					v61 = *a3;
					if (v38)
					{
						v40 = 0i64;
						if (*(_WORD*)v38)
						{
							do
								++v40;
							while (*((_WORD*)v38 + v40));
						}
						v41 = sub_14018B280(2 * v40 + 18, 0);
						if (v41)
						{
							*((_QWORD*)v41 + 1) = v40;
							*(_QWORD*)v41 = off_140B55060;
						}
						else
						{
							v41 = 0i64;
						}
						v37 = v41 + 4;
						v42 = 2 * v40;
						sub_1407DB590(v41 + 4, v38, v42);
						*(_WORD*)((char*)v37 + v42) = 0;
						v39 = v61;
					}
					*a3 = (__int64)v37;
					if (v39)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v39 - 16) + 8i64))(v39 - 16);
					*(_QWORD*)(a1 + 16) = v65;
					if (v31)
						sub_14018B900(v31, 0);
				}
				if (v8)
					sub_14018B900((__int64)v8, 0);
			}
			v14 = v62 + 2;
			if (v18)
				sub_14018B900((__int64)v18, 0);
		}
	}
	if (v10)
		sub_14018B900((__int64)v10, 0);
	return v14;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

