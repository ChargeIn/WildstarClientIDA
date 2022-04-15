#include "../winhttp.h"

//----- (000000014087A750) ----------------------------------------------------
__int64 __fastcall sub_14087A750(__int64 a1)
{
	__int16 v1; // r9
	int v4; // r10d
	__int64 result; // rax

	v1 = 0;
	*(_QWORD*)a1 = off_1409A70A8;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_DWORD*)(a1 + 16) = 0;
	_RAX = 0i64;
	v4 = 0;
	__asm { cpuid }
	if ((int)_RAX >= 1)
	{
		_RAX = 1i64;
		__asm { cpuid }
		v4 = _RDX;
		v1 = _RCX;
	}
	_RAX = 0x80000000i64;
	__asm { cpuid }
	if ((unsigned int)_RAX < 0x80000006)
	{
		*(_DWORD*)(a1 + 16) = 64;
		*(_DWORD*)(a1 + 12) = 1024;
	}
	else
	{
		_RAX = 2147483654i64;
		__asm { cpuid }
		*(_DWORD*)(a1 + 16) = (unsigned __int8)_RCX;
		*(_DWORD*)(a1 + 12) = WORD1(_RCX);
	}
	if ((v4 & 0x2000000) != 0)
		*(_DWORD*)(a1 + 8) |= 1u;
	if ((v4 & 0x4000000) != 0)
		*(_DWORD*)(a1 + 8) |= 2u;
	if ((v1 & 1) != 0)
		*(_DWORD*)(a1 + 8) |= 4u;
	result = a1;
	if ((v1 & 0x200) != 0)
		*(_DWORD*)(a1 + 8) |= 8u;
	return result;
}
// 1409A70A8: using guessed type __int64 (__fastcall *off_1409A70A8[5])();

