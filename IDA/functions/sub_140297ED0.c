#include "../winhttp.h"

//----- (0000000140297ED0) ----------------------------------------------------
__int64 __fastcall sub_140297ED0(__int64 a1, int* a2, int a3)
{
	int v7; // eax
	int v8; // ebx
	int v9; // edi
	int v10; // r14d
	DWORD CurrentThreadId; // edx
	LONGLONG v12; // rax
	HANDLE EventW; // rcx
	LARGE_INTEGER v14; // [rsp+20h] [rbp-38h] BYREF
	int v15; // [rsp+60h] [rbp+8h] BYREF
	LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp+20h] BYREF

	if (!*(_DWORD*)(a1 + 40))
		return 2147500037i64;
	v7 = (*(__int64(__fastcall**)(_QWORD, int*, __int64))(**(_QWORD**)(a1 + 32) + 56i64))(
		*(_QWORD*)(a1 + 32),
		&v15,
		4i64);
	v8 = 0;
	v9 = v7;
	if (a3)
	{
		if (v7 == 1)
		{
			v10 = sub_14018CDF0() + 10000;
			v9 = (*(__int64(__fastcall**)(_QWORD, int*, _QWORD, __int64))(**(_QWORD**)(a1 + 32) + 56i64))(
				*(_QWORD*)(a1 + 32),
				&v15,
				(unsigned int)(v9 + 3),
				1i64);
			if (v9 == 1)
			{
				while (1)
				{
					if (!dword_140C7F94C)
						sub_14018CC40();
					CurrentThreadId = GetCurrentThreadId();
					if (dword_140C67440 == CurrentThreadId)
						break;
					if (!_InterlockedCompareExchange64(&qword_140C67448, 1i64, 0i64))
					{
						dword_140C67440 = CurrentThreadId;
						goto LABEL_12;
					}
				LABEL_21:
					if (dword_140C884A0 - v10 < 0)
					{
						v9 = (*(__int64(__fastcall**)(_QWORD, int*, __int64, __int64))(**(_QWORD**)(a1 + 32) + 56i64))(
							*(_QWORD*)(a1 + 32),
							&v15,
							4i64,
							1i64);
						if (v9 == 1)
							continue;
					}
					goto LABEL_23;
				}
				++qword_140C67448;
			LABEL_12:
				if ((dword_140C8E0D0 & 1) == 0)
				{
					dword_140C8E0D0 |= 1u;
					QueryPerformanceCounter(&PerformanceCount);
					qword_140C8E0D8 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
				}
				QueryPerformanceCounter(&v14);
				v12 = v14.QuadPart - ::PerformanceCount.QuadPart - qword_140C8E0D8;
				qword_140C8E0D8 = v14.QuadPart - ::PerformanceCount.QuadPart;
				dword_140C884A0 += (v12 + qword_140C8A198) / (unsigned __int64)qword_140C88498;
				qword_140C8A198 = v12
					+ qword_140C8A198
					- qword_140C88498 * (unsigned int)((v12 + qword_140C8A198) / (unsigned __int64)qword_140C88498);
				if ((unsigned __int64)qword_140C67448 <= 1)
				{
					dword_140C67440 = 0;
					_InterlockedExchange64(&qword_140C67448, 0i64);
					if (qword_140C67450)
					{
						if (!qword_140C67458)
						{
							EventW = CreateEventW(0i64, 0, 0, 0i64);
							if (_InterlockedCompareExchange64(
								(volatile signed __int64*)&qword_140C67458,
								(signed __int64)EventW,
								0i64))
							{
								CloseHandle(EventW);
							}
						}
						SetEvent(qword_140C67458);
					}
				}
				else
				{
					--qword_140C67448;
				}
				goto LABEL_21;
			}
		}
	}
	else if (v7 == 1)
	{
		return 1i64;
	}
LABEL_23:
	if (a2)
	{
		if (!v9)
			v8 = v15;
		*a2 = v8;
	}
	return 0i64;
}
// 140C67440: using guessed type int dword_140C67440;
// 140C67448: using guessed type __int64 qword_140C67448;
// 140C67450: using guessed type __int64 qword_140C67450;
// 140C7F94C: using guessed type int dword_140C7F94C;
// 140C88498: using guessed type __int64 qword_140C88498;
// 140C884A0: using guessed type int dword_140C884A0;
// 140C8A198: using guessed type __int64 qword_140C8A198;
// 140C8E0D0: using guessed type int dword_140C8E0D0;
// 140C8E0D8: using guessed type __int64 qword_140C8E0D8;

