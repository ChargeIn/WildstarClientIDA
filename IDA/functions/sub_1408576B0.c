//----- (00000001408576B0) ----------------------------------------------------
__int64 __fastcall sub_1408576B0(int a1)
{
	__int64 result; // rax
	__int64 v3; // rdi
	LONG* p_LockCount; // rbx
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
		*(_QWORD*)v3 = off_1409A3A08;
		p_LockCount = &qword_140C61BA8[358].LockCount;
		EnterCriticalSection((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 14328));
		v5 = *(_DWORD*)(v3 + 24) % 0xC1u;
		*(_QWORD*)(v3 + 16) = *(_QWORD*)&p_LockCount[2 * v5 + 10];
		*(_QWORD*)&p_LockCount[2 * v5 + 10] = v3;
		++p_LockCount[396];
		LeaveCriticalSection((LPCRITICAL_SECTION)p_LockCount);
		return v3;
	}
	return result;
}
// 1409A3A08: using guessed type __int64 (__fastcall *off_1409A3A08[10])();
// 140C10F20: using guessed type int dword_140C10F20;

