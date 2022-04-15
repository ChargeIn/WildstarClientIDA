//----- (00000001408407B0) ----------------------------------------------------
__int64 __fastcall sub_1408407B0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
	__int64 v5; // r15
	unsigned int v6; // esi
	struct _RTL_CRITICAL_SECTION* v7; // rbx
	int v8; // edx
	unsigned int v9; // eax
	unsigned int v10; // r12d
	__int64 v11; // rcx
	unsigned int* v12; // rcx
	unsigned int v13; // r14d
	unsigned int v14; // eax
	__int64 v15; // r13
	__int64 v16; // r8
	__int64* v17; // rax
	_QWORD* v18; // rdi
	__int64* v19; // rax
	__int64 v20; // r8
	int* v21; // rax
	int* v22; // r15
	__int64 v23; // r9
	unsigned int v24; // eax
	unsigned int v25; // eax
	unsigned int v26; // r12d
	__int64 v27; // rdi
	unsigned int v28; // edx
	bool v29; // zf
	int v31; // [rsp+20h] [rbp-48h]
	unsigned int v32; // [rsp+24h] [rbp-44h] BYREF
	__int64 v33; // [rsp+28h] [rbp-40h]
	unsigned int v35; // [rsp+80h] [rbp+18h] BYREF
	int v36; // [rsp+88h] [rbp+20h]

	v35 = a3;
	v5 = a1;
	v6 = 1;
	if (!a3)
		return v6;
	LODWORD(v7) = 0;
	v8 = 0;
	v9 = *(_DWORD*)(a2 + 56);
	v10 = 0;
	v31 = 0;
	v36 = 0;
	if (*(_DWORD*)(a2 + 52) < v9)
	{
		v11 = 0i64;
		v33 = 0i64;
		while (1)
		{
			v12 = (unsigned int*)(*(_QWORD*)(a2 + 64) + v11);
			v13 = *v12;
			v14 = v12[1] - v8;
			v8 = v12[1];
			v10 += v14;
			v36 = v8;
			if (v13)
				break;
			++* (_DWORD*)(a2 + 52);
		LABEL_38:
			v25 = *(_DWORD*)(a2 + 56);
			++v31;
			v11 = v33 + 12;
			v33 += 12i64;
			if (*(_DWORD*)(a2 + 52) >= v25)
			{
				LODWORD(v7) = v31;
				a3 = v35;
				goto LABEL_40;
			}
		}
		v15 = v12[2];
		v7 = (struct _RTL_CRITICAL_SECTION*)(v5 + 120);
		EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 120));
		v16 = v13 % 0xC1;
		v17 = *(__int64**)(v5 + 8 * v16 + 224);
		if (v17)
		{
			while (*((_DWORD*)v17 + 2) != v13)
			{
				v17 = (__int64*)*v17;
				if (!v17)
					goto LABEL_9;
			}
			v18 = v17 + 2;
		}
		else
		{
		LABEL_9:
			v18 = 0i64;
		}
		if (v18)
		{
			++* ((_DWORD*)v18 + 10);
			if (*v18)
			{
				++* (_DWORD*)(a2 + 52);
				LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 120));
			LABEL_37:
				v8 = v36;
				goto LABEL_38;
			}
		}
		else
		{
			v19 = *(__int64**)(v5 + 216 + 8 * v16 + 8);
			if (!v19)
				goto LABEL_19;
			while (*((_DWORD*)v19 + 2) != v13)
			{
				v19 = (__int64*)*v19;
				if (!v19)
					goto LABEL_19;
			}
			v18 = v19 + 2;
			if (v19 == (__int64*)-16i64)
			{
			LABEL_19:
				v18 = sub_14083E650((int*)(v5 + 216), v13, v16);
				if (!v18)
				{
					v6 = 2;
					LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 120));
					LODWORD(v7) = v31;
					goto LABEL_43;
				}
			}
			*((_DWORD*)v18 + 11) = v13;
		}
		v20 = v18[2];
		if ((unsigned int)((v18[3] - v20) / 24))
		{
			LODWORD(v15) = *(_DWORD*)(v20 + 16);
			if (HIDWORD(qword_140C61B18) == -1)
				goto LABEL_50;
			v21 = (int*)sub_140881960(SHIDWORD(qword_140C61B18), (unsigned int)v15, 0x10u);
			v22 = v21;
			if (!v21)
				goto LABEL_50;
			sub_1407DB590(v21, *(int**)(v18[2] + 8i64), (unsigned int)v15);
			v6 = 1;
			goto LABEL_36;
		}
		if (HIDWORD(qword_140C61B18) == -1 || (v22 = (int*)sub_140881960(SHIDWORD(qword_140C61B18), v15, 0x10u)) == 0i64)
		{
		LABEL_50:
			v6 = 52;
		LABEL_51:
			v29 = (*((_DWORD*)v18 + 10))-- == 1;
			if (v29 && *v18)
			{
				sub_140881720(SHIDWORD(qword_140C61B18), *v18);
				*v18 = 0i64;
				*((_DWORD*)v18 + 2) = 0;
			}
			v5 = a1;
			if (!*((_DWORD*)v18 + 10))
				sub_140843780((int*)(a1 + 216), v13);
			LeaveCriticalSection(v7);
			LODWORD(v7) = v31;
		LABEL_43:
			v7 = (struct _RTL_CRITICAL_SECTION*)(int)v7;
			if ((int)v7 > 0)
			{
				v27 = 12i64 * (int)v7;
				do
				{
					v27 -= 12i64;
					v7 = (struct _RTL_CRITICAL_SECTION*)((char*)v7 - 1);
					v28 = *(_DWORD*)(v27 + *(_QWORD*)(a2 + 64));
					if (v28)
						sub_140842320((struct _RTL_CRITICAL_SECTION*)v5, v28);
				} while ((__int64)v7 > 0);
			}
			return v6;
		}
		LeaveCriticalSection(v7);
		if (!v10)
			goto LABEL_31;
		v32 = 0;
		v24 = sub_14083CB00(a1, v10, &v32, v23);
		v6 = v24;
		if (v10 != v32)
		{
			v6 = 2;
			goto LABEL_35;
		}
		v10 = 0;
		if (v24 == 1)
		{
		LABEL_31:
			v32 = 0;
			v6 = sub_14083C410(a1, v22, v15, &v32);
			if (v6 != 1 || (_DWORD)v15 == v32)
				v36 += v32;
			else
				v6 = 2;
		}
	LABEL_35:
		EnterCriticalSection(v7);
		if (v6 != 1)
		{
			sub_140881720(SHIDWORD(qword_140C61B18), (__int64)v22);
			goto LABEL_51;
		}
	LABEL_36:
		*((_DWORD*)v18 + 2) = v15;
		*v18 = v22;
		++* (_DWORD*)(a2 + 52);
		LeaveCriticalSection(v7);
		v5 = a1;
		goto LABEL_37;
	}
LABEL_40:
	v26 = a3 - v36 + v10;
	if (v26)
	{
		v5 = a1;
		v35 = 0;
		sub_14083CB00(a1, v26, &v35, a4);
		if (v26 != v35)
		{
			v6 = 2;
			goto LABEL_43;
		}
	}
	*(_BYTE*)(a2 + 120) |= 4u;
	return v6;
}
// 140840B33: conditional instruction was optimized away because esi.4!=1
// 1408409A1: variable 'v23' is possibly undefined
// 140840A83: variable 'a4' is possibly undefined
// 140C61B18: using guessed type __int64 qword_140C61B18;

