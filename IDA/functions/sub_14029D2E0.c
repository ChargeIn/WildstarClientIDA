#include "../winhttp.h"

//----- (000000014029D2E0) ----------------------------------------------------
__int64 __fastcall sub_14029D2E0(__int64 a1, __int64* a2)
{
	__int64 v2; // r15
	__int64 v3; // r12
	__int64 v4; // r13
	__int64 v5; // rax
	int v6; // edx
	int v7; // r8d
	int v9; // ecx
	unsigned int* v11; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v13; // rdx
	volatile signed __int64* v14; // rsi
	__int64 v15; // rcx
	__int64 v16; // rcx
	int v17; // ebx
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rcx
	unsigned int v22; // eax
	__int64 v23; // rcx
	__int64 v24; // rcx
	HANDLE EventW; // rcx
	volatile signed __int64* v26; // [rsp+30h] [rbp-59h]
	__int64 v27; // [rsp+38h] [rbp-51h]
	unsigned __int64 v28; // [rsp+38h] [rbp-51h]
	__int64 v29; // [rsp+40h] [rbp-49h]
	__int64 v30; // [rsp+60h] [rbp-29h] BYREF
	__int64 v31; // [rsp+68h] [rbp-21h] BYREF
	__int64 v32; // [rsp+70h] [rbp-19h] BYREF
	__int64 v33; // [rsp+78h] [rbp-11h] BYREF
	unsigned int v34; // [rsp+80h] [rbp-9h] BYREF
	unsigned int v35; // [rsp+84h] [rbp-5h]
	int v36; // [rsp+88h] [rbp-1h]
	int v37; // [rsp+8Ch] [rbp+3h]
	int v38; // [rsp+90h] [rbp+7h]
	__int64 v39; // [rsp+94h] [rbp+Bh]

	v2 = a2[3];
	v3 = a2[4];
	v4 = a2[2];
	v27 = *a2;
	v5 = a2[1];
	v6 = HIDWORD(*a2);
	HIDWORD(v29) = HIDWORD(v5);
	v7 = v5;
	v9 = v27;
	if (!(_DWORD)v27)
		v9 = 1;
	if (!v6)
		v6 = 1;
	if ((unsigned int)v5 <= 1)
		v7 = 25;
	v28 = __PAIR64__(v6, v9);
	LODWORD(v29) = v7;
	if (v2 != *(_QWORD*)(a1 + 48) || (_DWORD)v3 != *(_DWORD*)(a1 + 56))
		return 2147500037i64;
	if (v9 == *(_DWORD*)(a1 + 24) && v6 == *(_DWORD*)(a1 + 28) && __PAIR64__(HIDWORD(v5), v7) == *(_QWORD*)(a1 + 32))
		return 0i64;
	v11 = (unsigned int*)(*(_QWORD*)(a1 + 16) + 24i64);
	v26 = (volatile signed __int64*)v11;
	CurrentThreadId = GetCurrentThreadId();
	v13 = CurrentThreadId;
	v14 = (volatile signed __int64*)(v11 + 2);
	if (*v11 == CurrentThreadId)
	{
		++* v14;
	}
	else
	{
		v15 = 0i64;
		while (_InterlockedCompareExchange64(v14, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v15 >= 0x400)
			{
				sub_14019FB60((__int64)v11, CurrentThreadId);
				goto LABEL_20;
			}
		}
		*v11 = CurrentThreadId;
	}
LABEL_20:
	*(_QWORD*)(a1 + 24) = v28;
	*(_QWORD*)(a1 + 32) = v29;
	*(_QWORD*)(a1 + 40) = v4;
	*(_QWORD*)(a1 + 48) = v2;
	*(_QWORD*)(a1 + 56) = v3;
	if (!*(_QWORD*)(a1 + 88))
	{
		v17 = sub_14029D910(a1, 0);
		if (v17 < 0)
			goto LABEL_44;
		v17 = sub_14029D910(a1, 2);
		if (v17 < 0)
			goto LABEL_44;
		goto LABEL_43;
	}
	v16 = *(_QWORD*)(a1 + 16);
	if (*(_QWORD*)(v16 + 8584))
	{
		v17 = sub_140278900(v16);
		if (v17 < 0)
			goto LABEL_44;
	}
	v18 = *(_QWORD*)(a1 + 104);
	if (v18)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v18 + 16i64))(v18, v13);
		*(_QWORD*)(a1 + 104) = 0i64;
	}
	v19 = *(_QWORD*)(a1 + 112);
	if (v19)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v19 + 16i64))(v19, v13);
		*(_QWORD*)(a1 + 112) = 0i64;
	}
	v20 = *(_QWORD*)(a1 + 128);
	if (v20)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v20 + 16i64))(v20, v13);
		*(_QWORD*)(a1 + 128) = 0i64;
	}
	v21 = *(_QWORD*)(a1 + 136);
	if (v21)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v21 + 16i64))(v21, v13);
		*(_QWORD*)(a1 + 136) = 0i64;
	}
	v22 = *(_DWORD*)(a1 + 24);
	v39 = 0i64;
	v34 = v22;
	v35 = *(_DWORD*)(a1 + 28);
	v36 = *(_DWORD*)(a1 + 40);
	v37 = 1;
	v23 = *(_QWORD*)(a1 + 88);
	v38 = dword_140AE7F90[*(int*)(a1 + 32)];
	v17 = (*(__int64(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v23 + 112i64))(v23, &v34);
	if (v17 >= 0)
	{
		v17 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, int, int))(**(_QWORD**)(a1 + 88) + 104i64))(
			*(_QWORD*)(a1 + 88),
			0i64,
			v34,
			v35,
			v38,
			2);
		if (v17 < 0)
		{
			v32 = 0x141DE5418i64;
			sub_1401A3130(14, 2, &v32, (unsigned int)v17);
			goto LABEL_44;
		}
		v17 = sub_14029DEC0(a1);
		if (v17 < 0)
		{
			v30 = 0x141DE5408i64;
			sub_1401A3130(14, 2, &v30, (unsigned int)v17);
			goto LABEL_44;
		}
		v24 = *(_QWORD*)(a1 + 16);
		if (*(_QWORD*)(v24 + 8584))
		{
			v17 = sub_1402786A0(v24);
			if (v17 < 0)
				goto LABEL_44;
		}
		else
		{
			v31 = 0x141DE4FA8i64;
			sub_1401A3130(14, 2, &v31);
		}
	LABEL_43:
		v17 = 0;
		goto LABEL_44;
	}
	v33 = 0x141DE5428i64;
	sub_1401A3130(14, 2, &v33, (unsigned int)v17);
LABEL_44:
	if (*v14 <= 1ui64)
	{
		*(_DWORD*)v26 = 0;
		_InterlockedExchange64(v14, 0i64);
		if (*((_QWORD*)v26 + 2))
		{
			if (!*((_QWORD*)v26 + 3))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64(v26 + 3, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*((HANDLE*)v26 + 3));
		}
	}
	else
	{
		--* v14;
	}
	return (unsigned int)v17;
}
// 14029D44B: variable 'v13' is possibly undefined
// 140AE7F90: using guessed type _DWORD dword_140AE7F90[28];

