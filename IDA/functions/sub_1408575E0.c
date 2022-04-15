#include "../winhttp.h"

//----- (00000001408575E0) ----------------------------------------------------
__int64 __fastcall sub_1408575E0(int a1)
{
	__int64 result; // rax
	__int64 v3; // rdi
	LPCRITICAL_SECTION v4; // rbx
	__int64 v5; // r8

	result = sub_1408819F0(dword_140C10F20, 96i64);
	v3 = result;
	if (result)
	{
		sub_140865E10(result, a1);
		*(_DWORD*)(v3 + 32) = -1;
		*(_QWORD*)(v3 + 40) = 0i64;
		*(_QWORD*)(v3 + 48) = 0i64;
		*(_QWORD*)(v3 + 56) = 0i64;
		*(_DWORD*)(v3 + 64) = 0;
		*(_QWORD*)(v3 + 72) = 0i64;
		*(_QWORD*)(v3 + 80) = 0i64;
		*(_DWORD*)(v3 + 88) = 0;
		*(_QWORD*)v3 = off_1409A3A30;
		v4 = qword_140C61BA8 + 398;
		EnterCriticalSection(qword_140C61BA8 + 398);
		v5 = *(_DWORD*)(v3 + 24) % 0xC1u;
		*(_QWORD*)(v3 + 16) = *((_QWORD*)&v4[1].DebugInfo + v5);
		*((_QWORD*)&v4[1].DebugInfo + v5) = v3;
		++LODWORD(v4[39].LockSemaphore);
		LeaveCriticalSection(v4);
		return v3;
	}
	return result;
}
// 1409A3A30: using guessed type __int64 (__fastcall *off_1409A3A30[5])();
// 140C10F20: using guessed type int dword_140C10F20;

