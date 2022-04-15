#include "../winhttp.h"

//----- (000000014019F5E0) ----------------------------------------------------
signed int __fastcall sub_14019F5E0(__int64 a1)
{
	signed int result; // eax
	__int64 v3; // rax
	unsigned int i; // ecx
	__int64 v5; // rax
	unsigned int j; // edi
	HANDLE Thread; // rsi
	ULONG_PTR Arguments[2]; // [rsp+30h] [rbp-48h] BYREF
	DWORD ThreadId[2]; // [rsp+40h] [rbp-38h] BYREF

	result = sub_1401A1070((__int64*)(a1 + 80), 1, 0, 0i64, 0);
	if (result >= 0)
	{
		result = sub_1401A1070((__int64*)(a1 + 88), 1, 0, 0i64, 0);
		if (result >= 0)
		{
			v3 = 16i64 * *(unsigned int*)(a1 + 56);
			if (!is_mul_ok(*(unsigned int*)(a1 + 56), 0x10ui64))
				v3 = -1i64;
			*(_QWORD*)(a1 + 72) = sub_14018B280(v3, 0);
			*(_DWORD*)(a1 + 68) = 0;
			for (i = 0; i < *(_DWORD*)(a1 + 56); ++i)
			{
				v5 = *(_QWORD*)(a1 + 72) + 16i64 * i;
				*(_QWORD*)v5 = a1;
				*(_DWORD*)(v5 + 8) = -1608056831;
			}
			*(_DWORD*)(a1 + 64) = 0;
			LODWORD(Arguments[0]) = 4096;
			Arguments[1] = *(_QWORD*)(a1 + 16);
			*(_QWORD*)ThreadId = 0i64;
			for (j = 0; j < *(_DWORD*)(a1 + 56); ++j)
			{
				Thread = CreateThread(
					0i64,
					0i64,
					(LPTHREAD_START_ROUTINE)StartAddress,
					(LPVOID)(*(_QWORD*)(a1 + 72) + 16i64 * j),
					0,
					ThreadId);
				if (!Thread)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 40i64))(a1);
					return -2147467259;
				}
				if (*(_QWORD*)(a1 + 16))
					RaiseException(0x406D1388u, 0, 6u, Arguments);
				SetThreadPriority(Thread, dword_140B5E7B8[*(int*)(a1 + 24)]);
				CloseHandle(Thread);
				++* (_DWORD*)(a1 + 8);
				++* (_DWORD*)(a1 + 68);
				_InterlockedIncrement(&dword_140C884A4);
			}
			return 0;
		}
	}
	return result;
}
// 140B5E7B8: using guessed type _DWORD dword_140B5E7B8[6];
// 140C884A4: using guessed type int dword_140C884A4;

