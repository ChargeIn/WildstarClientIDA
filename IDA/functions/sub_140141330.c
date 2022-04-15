#include "../winhttp.h"

//----- (0000000140141330) ----------------------------------------------------
__int64 __fastcall sub_140141330(__int64 a1)
{
	__int64 v1; // rbx
	unsigned __int64 v2; // rbp
	__int64 result; // rax
	__int64 v5; // rbx
	float v6; // xmm6_4
	unsigned __int64 v7; // r14
	unsigned __int64 v8; // rbx
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rcx
	__int128* v12; // rax
	__int64 v13; // rax
	__int64 v14; // rbx
	int* v15; // rax
	__int64(__fastcall * **v16)(_QWORD, __int64); // r14
	__int64 i; // rbx
	_QWORD* v18; // rdi
	__int64 v19; // rbx
	__int64 v20; // rbx
	__int64 v21; // rbx
	__int128 v22; // [rsp+20h] [rbp-68h] BYREF
	__int128 v23[2]; // [rsp+30h] [rbp-58h] BYREF
	char v24[32]; // [rsp+50h] [rbp-38h] BYREF

	v1 = *(_QWORD*)(a1 + 72);
	v2 = 0i64;
	if (v1)
	{
		while (1)
		{
			result = (**(__int64(__fastcall***)(__int64))v1)(v1);
			if (result)
				break;
			v1 = *(_QWORD*)(v1 + 72);
			if (!v1)
				goto LABEL_4;
		}
	}
	else
	{
	LABEL_4:
		result = 0i64;
	}
	*(_QWORD*)(a1 + 664) = result;
	if (result)
	{
		if (*(_QWORD*)(a1 + 816) > 0x1F4ui64)
		{
			do
			{
				v5 = **(_QWORD**)(a1 + 808);
				v6 = *(float*)((*(__int64(__fastcall**)(__int64, __int128*))(*(_QWORD*)v5 + 16i64))(v5, v23) + 20);
				(**(void(__fastcall***)(__int64, __int64))v5)(v5, 1i64);
				sub_140141C00(a1 + 808);
			} while (*(_QWORD*)(a1 + 816) > 0x1F4ui64);
			v7 = *(_QWORD*)(a1 + 816);
			v8 = 0i64;
			for (*(float*)(a1 + 692) = *(float*)(a1 + 692) - v6; v8 < v7; v23[1] = v12[1])
			{
				v9 = *(_QWORD*)(*(_QWORD*)(a1 + 808) + 8 * v8);
				(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v9 + 16i64))(v9, v23);
				v10 = *(_QWORD*)(a1 + 808);
				v22 = v23[0];
				*((float*)&v22 + 1) = *((float*)v23 + 1) - v6;
				(*(void(__fastcall**)(_QWORD, __int128*))(**(_QWORD**)(v10 + 8 * v8) + 104i64))(
					*(_QWORD*)(v10 + 8 * v8),
					&v22);
				v11 = *(_QWORD*)(*(_QWORD*)(a1 + 808) + 8 * v8);
				v12 = (__int128*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v11 + 16i64))(v11, v24);
				++v8;
				v23[0] = *v12;
			}
		}
		v13 = *(_QWORD*)(a1 + 16);
		if (v13)
			v14 = *(_QWORD*)(v13 + 16);
		else
			v14 = 0i64;
		v15 = sub_14018B280(48i64, 0);
		if (v15)
			v16 = (__int64(__fastcall***)(_QWORD, __int64))sub_14013EEF0((__int64)v15, v14, a1);
		else
			v16 = 0i64;
		for (i = *(_QWORD*)(*(_QWORD*)(a1 + 664) + 48i64); i; i = *(_QWORD*)(i + 72))
		{
			v18 = (_QWORD*)(**(__int64(__fastcall***)(__int64))i)(i);
			if (v18)
				goto LABEL_20;
		}
	LABEL_19:
		v18 = 0i64;
	LABEL_20:
		while (1)
		{
			v19 = v18[9];
			if (!v19)
				break;
			while (!(**(__int64(__fastcall***)(__int64))v19)(v19))
			{
				v19 = *(_QWORD*)(v19 + 72);
				if (!v19)
					goto LABEL_23;
			}
			v21 = v18[9];
			if (!v21)
				goto LABEL_19;
			while (1)
			{
				v18 = (_QWORD*)(**(__int64(__fastcall***)(__int64))v21)(v21);
				if (v18)
					break;
				v21 = *(_QWORD*)(v21 + 72);
				if (!v21)
					goto LABEL_19;
			}
		}
	LABEL_23:
		result = (*(__int64(__fastcall**)(_QWORD*, _QWORD))(*v18 + 112i64))(v18, v16);
		if (v16)
			result = (**v16)(v16, 1i64);
		*(_BYTE*)(a1 + 825) = 0;
	}
	*(_DWORD*)(a1 + 828) = 0;
	*(_QWORD*)(a1 + 840) = 0i64;
	if (*(_QWORD*)(a1 + 816))
	{
		do
		{
			v20 = *(_QWORD*)(*(_QWORD*)(a1 + 808) + 8 * v2);
			*(float*)(a1 + 828) = (*(float(__fastcall**)(__int64))(*(_QWORD*)v20 + 24i64))(v20) + *(float*)(a1 + 828);
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v20 + 32i64))(v20);
			++v2;
			*(_QWORD*)(a1 + 840) += result;
		} while (v2 < *(_QWORD*)(a1 + 816));
	}
	return result;
}
// 140141330: using guessed type char var_38[32];

