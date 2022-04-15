#include "../winhttp.h"

//----- (00000001401411C0) ----------------------------------------------------
__int64 __fastcall sub_1401411C0(__int64 a1)
{
	unsigned __int64 v1; // rsi
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rbx
	__int64 result; // rax
	__int64(__fastcall * **v7)(_QWORD, __int64); // r14
	__int64 v8; // rbx
	__int64 v9; // rcx
	__int64 v10; // rbx

	v1 = 0i64;
	if (*(int*)(a1 + 116) < 0)
	{
		sub_1401A59A0(a1 + 24);
		*(_DWORD*)(a1 + 116) = 0;
		v3 = *(_QWORD*)(a1 + 128);
		*(_QWORD*)(a1 + 128) = 0i64;
		if (v3)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
		sub_14018B900(*(_QWORD*)(a1 + 136), 0);
		*(_QWORD*)(a1 + 136) = 0i64;
	}
	sub_140140280(a1);
	v4 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 832) = 0;
	if (v4)
		v5 = *(_QWORD*)(v4 + 16);
	else
		v5 = 0i64;
	result = (__int64)sub_14018B280(48i64, 0);
	if (result)
	{
		result = sub_14013EEF0(result, v5, a1);
		v7 = (__int64(__fastcall***)(_QWORD, __int64))result;
	}
	else
	{
		v7 = 0i64;
	}
	v8 = *(_QWORD*)(a1 + 72);
	if (v8)
	{
		while (1)
		{
			result = (**(__int64(__fastcall***)(__int64))v8)(v8);
			v9 = result;
			if (result)
				break;
			v8 = *(_QWORD*)(v8 + 72);
			if (!v8)
				goto LABEL_14;
		}
	}
	else
	{
	LABEL_14:
		v9 = 0i64;
	}
	*(_QWORD*)(a1 + 664) = v9;
	if (v9)
		result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v9 + 112i64))(v9, v7);
	if (v7)
		result = (**v7)(v7, 1i64);
	*(_WORD*)(a1 + 824) = 0;
	*(_DWORD*)(a1 + 828) = 0;
	*(_QWORD*)(a1 + 840) = 0i64;
	if (*(_QWORD*)(a1 + 816))
	{
		do
		{
			v10 = *(_QWORD*)(*(_QWORD*)(a1 + 808) + 8 * v1);
			*(float*)(a1 + 828) = (*(float(__fastcall**)(__int64))(*(_QWORD*)v10 + 24i64))(v10) + *(float*)(a1 + 828);
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 32i64))(v10);
			++v1;
			*(_QWORD*)(a1 + 840) += result;
		} while (v1 < *(_QWORD*)(a1 + 816));
	}
	return result;
}

