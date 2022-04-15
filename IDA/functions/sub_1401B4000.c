#include "../winhttp.h"

//----- (00000001401B4000) ----------------------------------------------------
int __fastcall sub_1401B4000(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v3; // rcx
	unsigned __int64 v4; // rsi
	unsigned __int64 i; // rdi
	__int64 v6; // rax
	__int64 v7; // rcx
	_QWORD* v8; // r14
	unsigned __int64 j; // rdi
	__int64 v10; // rax
	__int64 v11; // rcx
	_QWORD* v12; // r14
	__int64 v13; // rcx
	__int64 v14; // rdi
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rcx
	__int64 v19; // rcx

	v1 = *(_QWORD*)(a1 + 4888);
	if (v1)
	{
		sub_1401CF300(*(_QWORD*)(a1 + 4888));
		sub_14018B900(v1, 0);
	}
	v3 = *(_QWORD*)(a1 + 4848);
	if (v3)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v3 + 32i64))(v3, 0xFFFFFFFFi64);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 4848) + 8i64))(*(_QWORD*)(a1 + 4848));
	}
	v4 = 0i64;
	for (i = 0i64; i < *(_QWORD*)(a1 + 2136); ++i)
	{
		v6 = *(_QWORD*)(a1 + 2128);
		v7 = *(_QWORD*)(v6 + 8 * i);
		v8 = (_QWORD*)(v6 + 8 * i);
		if (v7)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
			*v8 = 0i64;
		}
	}
	for (j = 0i64; j < *(_QWORD*)(a1 + 2152); ++j)
	{
		v10 = *(_QWORD*)(a1 + 2144);
		v11 = *(_QWORD*)(v10 + 8 * j);
		v12 = (_QWORD*)(v10 + 8 * j);
		if (v11)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
			*v12 = 0i64;
		}
	}
	v13 = *(_QWORD*)(a1 + 8);
	if (v13)
	{
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v13 + 16i64))(v13))
		{
			do
			{
				PostQueuedCompletionStatus(*(HANDLE*)a1, 0, 0i64, 0i64);
				++v4;
			} while (v4 < (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 16i64))(*(_QWORD*)(a1 + 8)));
		}
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 8) + 48i64))(*(_QWORD*)(a1 + 8), 0xFFFFFFFFi64);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 8i64))(*(_QWORD*)(a1 + 8));
	}
	if (*(_QWORD*)a1)
		CloseHandle(*(HANDLE*)a1);
	v14 = qword_140C63758;
	if (qword_140C63758 && !_InterlockedDecrement((volatile signed __int32*)qword_140C63758) && v14)
	{
		sub_1401C8010(v14);
		sub_14018B900(v14, 0);
	}
	v15 = *(_QWORD*)(a1 + 4904);
	if (v15)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
	v16 = *(_QWORD*)(a1 + 4896);
	if (v16)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v16 - 16) + 8i64))(v16 - 16);
	v17 = *(_QWORD*)(a1 + 4880);
	if (v17)
		LODWORD(v17) = CloseHandle(*(HANDLE*)(a1 + 4880));
	v18 = *(_QWORD*)(a1 + 2144);
	if (v18)
		LODWORD(v17) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
	v19 = *(_QWORD*)(a1 + 2128);
	if (v19)
		LODWORD(v17) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
	return v17;
}
// 140C63758: using guessed type __int64 qword_140C63758;

