#include "../winhttp.h"

//----- (0000000140332F60) ----------------------------------------------------
int __fastcall sub_140332F60(__int64 a1)
{
	LONGLONG v2; // r14
	LARGE_INTEGER v3; // rcx
	__int64 v4; // rbp
	__int64 v5; // rbx
	LARGE_INTEGER* v6; // rdi
	__int64 v7; // r9
	LONGLONG* v8; // rcx
	_QWORD* v9; // rax
	_QWORD* v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rax
	void(__fastcall * **v13)(_QWORD); // rcx
	BOOL v14; // edi
	_QWORD* v15; // rax
	int result; // eax
	LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp+8h] BYREF

	if (!dword_140C796CC)
	{
		if ((unsigned int)(dword_140C636A8 - dword_140C785B0) <= 0x7530)
			sub_1401C4FB0(0);
		else
			dword_140C796CC = 1;
	}
	QueryPerformanceCounter(&PerformanceCount);
	v2 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	QueryPerformanceCounter(&PerformanceCount);
	sub_14018CDF0();
	v4 = *(_QWORD*)(a1 + 240);
	while (v4)
	{
		v5 = v4;
		v6 = (LARGE_INTEGER*)(v4 + 784);
		v4 = *(_QWORD*)(v4 + 784);
		sub_140332AE0(v3, v5);
		if (*(int*)(v5 + 796) > 0
			&& (*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 176i64))(a1, *(unsigned int*)(v5 + 16)) > *(_DWORD*)(v5 + 796))
		{
			v7 = *(unsigned int*)(v5 + 16);
			PerformanceCount.QuadPart = 0x141DEBF00i64;
			sub_1401A2E50(0xBu, 0, &PerformanceCount, v7);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 128i64))(a1, *(unsigned int*)(v5 + 16));
		}
		v8 = *(LONGLONG**)(v5 + 776);
		if (v8)
			*v8 = v6->QuadPart;
		v3 = *v6;
		if (v6->QuadPart)
			*(_QWORD*)(v3.QuadPart + 776) = *(_QWORD*)(v5 + 776);
		v9 = *(_QWORD**)(v5 + 128);
		*(_QWORD*)(v5 + 776) = 0i64;
		v6->QuadPart = 0i64;
		if (*v9)
		{
			do
			{
				v10 = **(_QWORD***)(v5 + 128);
				v11 = v10[2];
				v12 = v10[4];
				if (v11 == v12 && !v10[7])
					break;
				*(_QWORD*)(a1 + 248) += v12 - v11;
				sub_140337F20((_QWORD*)(*(_QWORD*)(v5 + 24) + 384i64), v10);
			} while (**(_QWORD**)(v5 + 128));
			v13 = *(void(__fastcall****)(_QWORD))(v5 + 24);
			v14 = *(_DWORD*)(v5 + 8) == 2;
			PerformanceCount.QuadPart = (LONGLONG)v13;
			if (v13)
				(**v13)(v13);
			(*(void(__fastcall**)(_QWORD, LARGE_INTEGER*, BOOL))(**(_QWORD**)(a1 + 48) + 40i64))(
				*(_QWORD*)(a1 + 48),
				&PerformanceCount,
				v14);
			v15 = *(_QWORD**)(v5 + 128);
			if (v15)
			{
				if (*v15)
					*(_QWORD*)(v5 + 104) = v15[1];
				else
					*(_QWORD*)(v5 + 104) = 0i64;
			}
			else
			{
				*(_QWORD*)(v5 + 112) = 0i64;
			}
		}
	}
	result = QueryPerformanceCounter(&PerformanceCount);
	if (!dword_140C796CC)
	{
		result = dword_140C636A8 - dword_140C785B0;
		if ((unsigned int)(dword_140C636A8 - dword_140C785B0) <= 0x7530)
			return sub_1401C5100(L"H Network_Outgoing", 0, PerformanceCount.QuadPart - v2 - ::PerformanceCount.QuadPart, 1);
		else
			dword_140C796CC = 1;
	}
	return result;
}
// 140333010: variable 'v3' is possibly undefined
// 140AF1850: using guessed type wchar_t aHNetworkOutgoi[19];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C785B0: using guessed type int dword_140C785B0;
// 140C796CC: using guessed type int dword_140C796CC;

