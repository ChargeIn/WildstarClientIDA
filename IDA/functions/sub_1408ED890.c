//----- (00000001408ED890) ----------------------------------------------------
__int64 __fastcall sub_1408ED890(__int64 a1, __int64 a2)
{
	__int64 v2; // r9
	__int64 v3; // r8
	__int64 v4; // r12
	unsigned __int64 v6; // rdx
	unsigned __int64 v7; // rax
	void* v9; // rsp
	unsigned __int64 v10; // rcx
	unsigned __int64 v11; // rax
	void* v12; // rsp
	__int64 v13; // rax
	__int64* v14; // r13
	void* v15; // rsp
	__int64 v16; // rax
	signed __int64 v17; // rax
	void* v18; // rsp
	int v19; // ebx
	void* v20; // rsp
	__int64 v21; // r14
	__int64 v22; // r13
	__int64* v23; // r12
	unsigned __int64 v24; // r13
	int v25; // eax
	__int64 v26; // rdx
	unsigned __int64 v27; // rcx
	__int64 v28; // rax
	void* v29; // rsp
	_DWORD* v30; // rax
	bool v31; // zf
	__int64 v32; // rax
	int v33; // r8d
	__int64 v34; // rdx
	__int64 v35; // rcx
	_DWORD* v36; // r9
	int v37; // r14d
	__int64 v38; // r12
	__int64 v39; // rcx
	int v40; // r11d
	int v41; // r8d
	__int64* v42; // r9
	__int64* v43; // r10
	__int64* v44; // rdx
	__int64 v45; // rax
	int v46; // eax
	__int64 i; // r10
	unsigned __int8* v48; // rcx
	int* v49; // rdx
	__int64 v50; // r9
	__int64 v51; // r8
	int v52; // eax
	int v53; // ecx
	int v54; // r15d
	__int64 v55; // r14
	__int64* v56; // r13
	__int64 v57; // r12
	int v58; // eax
	float** v59; // rdi
	__int64 v61; // [rsp+30h] [rbp+0h] BYREF
	__int64* v62; // [rsp+38h] [rbp+8h]
	__int64* v63; // [rsp+40h] [rbp+10h]
	int v64; // [rsp+A0h] [rbp+70h]
	int v65; // [rsp+A8h] [rbp+78h]
	__int64 v66; // [rsp+B0h] [rbp+80h]

	v2 = *(_QWORD*)(a1 + 32);
	v3 = *(int*)(a1 + 24);
	v4 = *(int*)(v2 + 4i64 * *(int*)(a1 + 148));
	v6 = 8 * v3;
	v7 = 8 * v3 + 15;
	v66 = v2;
	v65 = *(_DWORD*)(v2 + 4i64 * *(int*)(a1 + 148));
	if (v7 <= 8 * v3)
		v7 = 0xFFFFFFFFFFFFFF0i64;
	v9 = alloca(v7 & 0xFFFFFFFFFFFFFFF0ui64);
	v10 = 4 * v3;
	v11 = 4 * v3 + 15;
	if (v11 <= 4 * v3)
		v11 = 0xFFFFFFFFFFFFFF0i64;
	v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0ui64);
	v13 = v10 + 15;
	v14 = &v61;
	v62 = &v61;
	if (v10 + 15 <= v10)
		v13 = 0xFFFFFFFFFFFFFF0i64;
	v15 = alloca(v13 & 0xFFFFFFFFFFFFFFF0ui64);
	v16 = v6 + 15;
	if (v6 + 15 <= v6)
		v16 = 0xFFFFFFFFFFFFFF0i64;
	v17 = v16 & 0xFFFFFFFFFFFFFFF0ui64;
	v18 = alloca(v17);
	v19 = 0;
	v20 = alloca(v17);
	v64 = 0;
	v21 = 0i64;
	v63 = &v61;
	if ((int)v3 > 0)
	{
		v22 = v4;
		v23 = &v61;
		v24 = (unsigned __int64)(4 * v22) >> 1;
		v61 = a1 - (_QWORD)&v61 + 40;
		do
		{
			v25 = 0;
			if (*(int*)a2 > 1)
				v25 = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v21);
			v26 = (__int64)*(char*)(*(_QWORD*)(a2 + 16) + 2i64 * v25) << 6;
			v27 = 4i64 * *(int*)(v26 + *(_QWORD*)(v2 + 48) + 52);
			v28 = v27 + 15;
			if (v27 + 15 <= v27)
				v28 = 0xFFFFFFFFFFFFFF0i64;
			v29 = alloca(v28 & 0xFFFFFFFFFFFFFFF0ui64);
			*v23 = (__int64)&v61;
			v30 = sub_1408EE4C0(a1, *(_QWORD*)(v2 + 48) + v26, &v61);
			*v23 = (__int64)v30;
			v31 = v30 == 0i64;
			v32 = v61;
			*((_DWORD*)&v61 + v21) = !v31;
			sub_1407E4830(*(int**)((char*)v23 + v32), 0i64, (unsigned int)v24);
			v2 = v66;
			++v21;
			++v23;
			++v64;
		} while (v64 < *(_DWORD*)(a1 + 24));
		v14 = v62;
	}
	v33 = 0;
	if (*(int*)(a2 + 24) > 0)
	{
		v34 = 0i64;
		do
		{
			v35 = *(_QWORD*)(a2 + 32);
			v36 = (_DWORD*)&v61 + *(unsigned __int8*)(v35 + v34);
			if (*v36 || *((_DWORD*)&v61 + *(unsigned __int8*)(v35 + v34 + 1)))
			{
				*v36 = 1;
				*((_DWORD*)&v61 + *(unsigned __int8*)(v34 + *(_QWORD*)(a2 + 32) + 1)) = 1;
			}
			++v33;
			v34 += 2i64;
		} while (v33 < *(_DWORD*)(a2 + 24));
	}
	v37 = 0;
	if (*(int*)a2 > 0)
	{
		v38 = 0i64;
		do
		{
			v39 = 0i64;
			v40 = 0;
			v41 = 0;
			if (*(int*)(a1 + 24) > 0)
			{
				v42 = &v61;
				v43 = v14;
				v44 = (__int64*)(a1 + 40);
				do
				{
					v45 = *(_QWORD*)(a2 + 8);
					if (!v45 || *(unsigned __int8*)(v45 + v39) == v37)
					{
						++v40;
						v43 = (__int64*)((char*)v43 + 4);
						*((_DWORD*)v43 - 1) = *((_DWORD*)&v61 + v39) != 0;
						*v42++ = *v44;
					}
					++v41;
					++v39;
					++v44;
				} while (v41 < *(_DWORD*)(a1 + 24));
			}
			sub_1408EEC60(
				a1,
				*(_QWORD*)(v66 + 56) + 40i64 * *(char*)(*(_QWORD*)(a2 + 16) + v38 + 1),
				(__int64)&v61,
				(__int64)v14,
				v40);
			++v37;
			v38 += 2i64;
		} while (v37 < *(_DWORD*)a2);
	}
	v46 = *(_DWORD*)(a2 + 24) - 1;
	for (i = v46; i >= 0; --i)
	{
		v48 = (unsigned __int8*)(*(_QWORD*)(a2 + 32) + 2 * i);
		v49 = *(int**)(a1 + 8i64 * *v48 + 40);
		if (v65 / 2 > 0i64)
		{
			v50 = *(_QWORD*)(a1 + 8i64 * v48[1] + 40) - (_QWORD)v49;
			v51 = v65 / 2;
			do
			{
				v52 = *v49;
				v53 = *(int*)((char*)v49 + v50);
				if (*v49 <= 0)
				{
					if (v53 <= 0)
					{
						*(int*)((char*)v49 + v50) = v52;
						*v49 = v52 - v53;
					}
					else
					{
						*(int*)((char*)v49 + v50) = v52 + v53;
					}
				}
				else if (v53 <= 0)
				{
					*(int*)((char*)v49 + v50) = v52;
					*v49 = v52 + v53;
				}
				else
				{
					*(int*)((char*)v49 + v50) = v52 - v53;
				}
				++v49;
				--v51;
			} while (v51);
		}
	}
	v54 = 0;
	v55 = 0i64;
	if (*(int*)(a1 + 24) > 0)
	{
		v56 = v63;
		v57 = a1 - (_QWORD)v63;
		do
		{
			v58 = 0;
			if (*(int*)a2 > 1)
				v58 = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v55);
			sub_1408EE7B0(
				a1,
				*(_QWORD*)(v66 + 48) + ((__int64)*(char*)(*(_QWORD*)(a2 + 16) + 2i64 * v58) << 6),
				(_DWORD*)*v56,
				*(int**)((char*)v56 + v57 + 40));
			++v54;
			++v55;
			++v56;
		} while (v54 < *(_DWORD*)(a1 + 24));
		if (*(int*)(a1 + 24) > 0)
		{
			v59 = (float**)(a1 + 40);
			do
			{
				sub_1408EC210(v65, *v59);
				++v19;
				++v59;
			} while (v19 < *(_DWORD*)(a1 + 24));
		}
	}
	return 0i64;
}

