//----- (00000001408857E0) ----------------------------------------------------
__int64 __fastcall sub_1408857E0(__int64 a1, __int64 a2)
{
	unsigned __int8 v2; // al
	float v5; // xmm6_4
	_DWORD* v6; // rax
	__int64 v7; // r14
	char v8; // di
	char v9; // cl
	__int64 v10; // rax
	unsigned int v11; // r12d
	unsigned __int64 v12; // rbp
	__int64* v13; // rcx
	__int64* v14; // rdx
	__int64 v15; // r8
	__int64 v16; // rax
	__int64* v17; // rbx
	__int64 v18; // r8
	__int64* v19; // rax
	__int64 v20; // r12
	__int64* i; // rdx
	__int64* v22; // r14
	__int64* v24; // [rsp+30h] [rbp-48h]
	__int64* v25; // [rsp+30h] [rbp-48h]

	v2 = *(_BYTE*)(a2 + 13);
	if (v2 > 0x64u)
		return 31i64;
	*(_BYTE*)(a1 - 4) = v2;
	v5 = *(float*)a2;
	if (*(float*)a2 <= 1.0)
		v5 = 1.0;
	v6 = *(_DWORD**)(a1 - 80);
	v7 = *(unsigned int*)(a2 + 8);
	if (v7 > *(_QWORD*)v6 && (*(_BYTE*)(a1 - 3) & 0x10) != 0)
		LODWORD(v7) = *v6;
	if (*(_DWORD*)(a1 + 28) == (_DWORD)v7 && *(_DWORD*)(a1 + 24) == *(_DWORD*)(a2 + 4))
	{
		v8 = 1;
		if (*(_BYTE*)(a2 + 12))
			v8 = *(_BYTE*)(a2 + 12);
		if (v5 != *(float*)(a1 + 20) || *(_BYTE*)(a1 + 73) != v8)
		{
			EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
			*(_BYTE*)(a1 + 73) = v8;
			*(float*)(a1 + 20) = v5;
			sub_140885F10(a1 - 120);
			LeaveCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
		}
	}
	else
	{
		EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
		*(float*)(a1 + 20) = v5;
		v9 = *(_BYTE*)(a2 + 12);
		if (!v9)
			v9 = 1;
		*(_BYTE*)(a1 + 73) = v9;
		v10 = *(_QWORD*)(a1 - 120);
		v11 = *(_DWORD*)(a2 + 4) - *(_DWORD*)(a2 + 4) % *(_DWORD*)(a1 - 8);
		*(_DWORD*)(a1 + 24) = v11;
		(*(void(__fastcall**)(__int64, _QWORD))(v10 + 88))(a1 - 120, (unsigned int)v7);
		v12 = *(_QWORD*)(a1 + 8);
		v13 = *(__int64**)(a1 + 56);
		v14 = 0i64;
		if (*(_BYTE*)(a1 + 72))
		{
			v15 = *(unsigned __int8*)(a1 + 72);
			do
			{
				v16 = v13[1];
				v14 = v13;
				v13 = (__int64*)*v13;
				v12 = *(_QWORD*)v16 + *(unsigned int*)(v16 + 24);
				--v15;
			} while (v15);
		}
		if ((_DWORD)v7 && v12 >= (unsigned int)v7)
			v12 = v11;
		v17 = 0i64;
		if (v13)
		{
			do
			{
				v18 = v13[1];
				if (*(_QWORD*)v18 + *((unsigned int*)v13 + 4) == v12)
				{
					v12 = *(_QWORD*)v18 + *(unsigned int*)(v18 + 24);
					if ((_DWORD)v7 && v12 >= (unsigned int)v7)
						v12 = v11;
					v14 = v13;
					v13 = (__int64*)*v13;
				}
				else
				{
					v19 = (__int64*)*v13;
					v24 = (__int64*)*v13;
					if (v13 == *(__int64**)(a1 + 56))
						*(_QWORD*)(a1 + 56) = v19;
					else
						*v14 = (__int64)v19;
					if (v13 == *(__int64**)(a1 + 64))
						*(_QWORD*)(a1 + 64) = v14;
					--* (_DWORD*)(a1 + 48);
					if (v17)
					{
						*v13 = (__int64)v17;
						v17 = v13;
					}
					else
					{
						v17 = v13;
						*v13 = 0i64;
					}
					v13 = v24;
				}
			} while (v13);
			if (v17)
			{
				v20 = *(_QWORD*)(a1 - 24);
				EnterCriticalSection((LPCRITICAL_SECTION)(v20 + 24));
				for (i = v17; ; i = v25)
				{
					v22 = (__int64*)*i;
					v25 = (__int64*)*i;
					if (i == v17)
						v17 = (__int64*)*i;
					else
						MEMORY[0] = *i;
					sub_140883FE0(a1 - 120, (__int64)i);
					if (!v22)
						break;
				}
				sub_1408893C0(*(_QWORD*)(a1 - 24));
				LeaveCriticalSection((LPCRITICAL_SECTION)(v20 + 24));
			}
		}
		(*(void(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)(a1 - 120) + 72i64))(a1 - 120, v12);
		sub_140885F10(a1 - 120);
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
	}
	return 1i64;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

