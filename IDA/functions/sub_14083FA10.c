//----- (000000014083FA10) ----------------------------------------------------
__int64 __fastcall sub_14083FA10(__int64 a1, unsigned int* a2)
{
	__int64 v2; // r15
	unsigned int v6; // ebp
	__int64 v7; // rax
	__int64* v8; // rdi
	_QWORD* v9; // rdi
	unsigned int v10; // esi
	__int64* v11; // rdi
	__int64 v12; // r8
	unsigned int v13; // r15d
	int* v14; // rax
	int* v15; // r14
	int* v16; // r14
	bool v17; // zf

	v2 = a2[3];
	if (!(_DWORD)v2)
		return 1i64;
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
	v6 = *a2;
	v7 = *a2 % 0xC1;
	v8 = *(__int64**)(a1 + 8 * v7 + 224);
	if (v8)
	{
		while (*((_DWORD*)v8 + 2) != v6)
		{
			v8 = (__int64*)*v8;
			if (!v8)
				goto LABEL_6;
		}
		v9 = v8 + 2;
	}
	else
	{
	LABEL_6:
		v9 = 0i64;
	}
	if (!v9)
	{
		v11 = *(__int64**)(a1 + 216 + 8 * v7 + 8);
		if (!v11)
			goto LABEL_16;
		while (*((_DWORD*)v11 + 2) != v6)
		{
			v11 = (__int64*)*v11;
			if (!v11)
				goto LABEL_16;
		}
		v9 = v11 + 2;
		if (!v9)
			LABEL_16:
		v9 = sub_14083E650((int*)(a1 + 216), v6, *a2 % 0xC1);
		if (!v9)
		{
			v10 = 2;
			goto LABEL_35;
		}
		*((_DWORD*)v9 + 11) = v6;
	LABEL_20:
		v12 = v9[2];
		if ((*((_DWORD*)v9 + 6) - (int)v12) / 24)
		{
			v13 = *(_DWORD*)(v12 + 16);
			if (HIDWORD(qword_140C61B18) != -1)
			{
				v14 = (int*)sub_140881960(SHIDWORD(qword_140C61B18), v13, 0x10u);
				v15 = v14;
				if (v14)
				{
					sub_1407DB590(v14, *(int**)(v9[2] + 8i64), v13);
					v10 = 1;
					*((_DWORD*)v9 + 2) = v13;
					*v9 = v15;
					goto LABEL_35;
				}
			}
		}
		else if (HIDWORD(qword_140C61B18) != -1)
		{
			v16 = (int*)sub_140881960(SHIDWORD(qword_140C61B18), v2, 0x10u);
			if (v16)
			{
				LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
				v10 = sub_14083FC30((__int64*)a1, (__int64)a2, v16);
				EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
				if (v10 == 1)
				{
					*((_DWORD*)v9 + 2) = v2;
					*v9 = v16;
					goto LABEL_35;
				}
				sub_140881720(SHIDWORD(qword_140C61B18), (__int64)v16);
			LABEL_30:
				v17 = (*((_DWORD*)v9 + 10))-- == 1;
				if (v17 && *v9)
				{
					sub_140881720(SHIDWORD(qword_140C61B18), *v9);
					*v9 = 0i64;
					*((_DWORD*)v9 + 2) = 0;
				}
				if (!*((_DWORD*)v9 + 10))
					sub_140843780((int*)(a1 + 216), v6);
				goto LABEL_35;
			}
		}
		v10 = 52;
		goto LABEL_30;
	}
	++* ((_DWORD*)v9 + 10);
	if (!*v9)
		goto LABEL_20;
	v10 = 1;
LABEL_35:
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
	return v10;
}
// 140C61B18: using guessed type __int64 qword_140C61B18;

