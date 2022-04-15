#include "../winhttp.h"

//----- (00000001400628F0) ----------------------------------------------------
__int64 __fastcall sub_1400628F0(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v6; // [rsp+30h] [rbp+8h] BYREF

	if (*(_QWORD*)a1)
		return **(unsigned __int8**)(a1 + 8);
	v2 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(a1 + 16))(*(_QWORD*)(a1 + 32), *(_QWORD*)(a1 + 24), &v6);
	if (v2)
	{
		v3 = v6;
		if (v6)
		{
			v4 = v6 - 1;
			*(_QWORD*)(a1 + 8) = v2;
			*(_QWORD*)a1 = v3 - 1;
			*(_QWORD*)(a1 + 8) = v2 + 1;
			*(_QWORD*)a1 = v4 + 1;
			*(_QWORD*)(a1 + 8) = v2;
			return **(unsigned __int8**)(a1 + 8);
		}
	}
	return 0xFFFFFFFFi64;
}
// 140062937: conditional instruction was optimized away because ecx.4<100u

