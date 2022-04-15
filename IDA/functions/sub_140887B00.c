//----- (0000000140887B00) ----------------------------------------------------
__int64 sub_140887B00(
	__int64 a1,
	__int64 a2,
	unsigned int a3,
	unsigned __int64 a4,
	unsigned int a5,
	unsigned int a6,
	char a7,
	unsigned int* a8,
	...)
{
	__int64 v8; // r14
	__int64 v13; // rbx
	bool v14; // zf
	int v15; // eax
	_QWORD* v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rax
	__int64 v19; // r8
	unsigned int v20; // edx
	int v21; // r9d
	__int64 v22; // r10
	__int64 v23; // rax
	__int64 v24; // rdx
	_QWORD* v25; // rax
	__int64 v26; // rax
	__int64 v27; // rcx
	_QWORD* v28; // rax
	_QWORD* v31; // [rsp+B0h] [rbp+48h] BYREF
	va_list va; // [rsp+B0h] [rbp+48h]
	va_list va1; // [rsp+B8h] [rbp+50h] BYREF

	va_start(va1, a8);
	va_start(va, a8);
	v31 = va_arg(va1, _QWORD*);
	v8 = (__int64)v31;
	*v31 = 0i64;
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	v13 = *(_QWORD*)(a1 + 280);
	if (v13)
		*(_QWORD*)(a1 + 280) = *(_QWORD*)v13;
	v14 = *(_BYTE*)(a1 + 248) == 0;
	v31 = 0i64;
	if (v14 || a3 == -1 || (v15 = sub_1408896B0(a1 + 168, a3, a4, a5, a6, a7, a8, (__int64*)va), (v16 = v31) == 0i64))
	{
		sub_140889870(a1 + 168, (__int64*)va);
		if (!v31)
		{
			sub_140884080(a1, (_QWORD*)v13);
			sub_1408893E0(a1);
			v13 = 0i64;
			goto LABEL_21;
		}
		v19 = *(_QWORD*)(a1 + 296);
		v20 = *a8;
		v21 = *(_DWORD*)(a1 + 264);
		v22 = v31[1];
		if (v19)
			*(_QWORD*)(a1 + 296) = *(_QWORD*)v19;
		v23 = (unsigned int)(*(_DWORD*)(a2 + 112) * *(_DWORD*)(*(_QWORD*)(a2 + 40) + 8i64));
		*(_DWORD*)(v19 + 72) &= 0xFFFFFFFC;
		*(_DWORD*)(v19 + 16) = v21;
		*(_QWORD*)(v19 + 24) = v22;
		*(_DWORD*)(v19 + 20) = v20;
		*(_QWORD*)(v19 + 8) = a4 + v23;
		*(_QWORD*)(v19 + 40) = v19;
		*(_QWORD*)(v19 + 48) = 0i64;
		*(_QWORD*)(v19 + 64) = a2;
		*(_QWORD*)(v19 + 32) = sub_14088A0D0;
		v24 = (__int64)v31;
		*(_QWORD*)v8 = v19;
		sub_140889C10(a1 + 168, v24, v19, a3, a4, *a8);
		v25 = v31;
		*(_DWORD*)(v13 + 20) &= 0xFFFFFFF8;
		*(_QWORD*)(v13 + 8) = v25;
		*(_DWORD*)(v13 + 16) = 0;
		v26 = *(_QWORD*)v8;
		v27 = *(_QWORD*)(*(_QWORD*)v8 + 56i64);
		if (v27)
		{
			*(_QWORD*)(v13 + 24) = v27;
			*(_QWORD*)(v26 + 56) = v13;
		}
		else
		{
			*(_QWORD*)(v26 + 56) = v13;
			*(_QWORD*)(v13 + 24) = 0i64;
		}
	}
	else
	{
		*(_DWORD*)(v13 + 20) &= 0xFFFFFFF8;
		*(_QWORD*)(v13 + 8) = v16;
		*(_DWORD*)(v13 + 16) = v15;
		v17 = v31[2];
		*(_QWORD*)v8 = v17;
		if (v17)
		{
			v18 = *(_QWORD*)(v17 + 56);
			if (v18)
			{
				*(_QWORD*)(v13 + 24) = v18;
				*(_QWORD*)(v17 + 56) = v13;
			}
			else
			{
				*(_QWORD*)(v17 + 56) = v13;
				*(_QWORD*)(v13 + 24) = 0i64;
			}
		}
	}
	*(_QWORD*)v13 = 0i64;
	v28 = *(_QWORD**)(a2 + 208);
	if (v28)
		*v28 = v13;
	else
		*(_QWORD*)(a2 + 200) = v13;
	*(_QWORD*)(a2 + 208) = v13;
	*(_QWORD*)(v13 + 32) = a2;
LABEL_21:
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	return v13;
}

