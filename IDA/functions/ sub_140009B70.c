#include "../winhttp.h"

//----- (0000000140009B70) ----------------------------------------------------
__int64 __fastcall sub_140009B70(__int64 a1)
{
	int v1; // eax
	__int64 result; // rax
	LONGLONG v4; // rsi
	LONGLONG v5; // rbx
	LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

	v1 = *(_DWORD*)(a1 + 64);
	if ((v1 & 1) == 0 || (v1 & 4) == 0)
		return 2147500037i64;
	if ((v1 & 0x20) != 0)
		return 0i64;
	if ((*(unsigned int (**)(void))(*(_QWORD*)qword_140C65670 + 600i64))())
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 616i64))(qword_140C65670);
		QueryPerformanceCounter(&PerformanceCount);
		v4 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
		(*(void(__fastcall**)(__int64, void*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
			qword_140C65670,
			&unk_140C79A80,
			&unk_140C3FE88,
			&unk_140C3FE88,
			&unk_140C3FE88);
		(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
			qword_140C65670,
			&unk_140C79A80,
			1i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 96i64))(a1);
		if ((int)result >= 0)
		{
			QueryPerformanceCounter(&PerformanceCount);
			v5 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
			*(_QWORD*)(a1 + 216) += PerformanceCount.QuadPart - ::PerformanceCount.QuadPart - v4;
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
			QueryPerformanceCounter(&PerformanceCount);
			*(_QWORD*)(a1 + 224) += PerformanceCount.QuadPart - ::PerformanceCount.QuadPart - v5;
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 680i64))(qword_140C65670);
			return 0i64;
		}
	}
	else
	{
		*(_DWORD*)(a1 + 64) |= 0x100u;
		return 0i64;
	}
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;

