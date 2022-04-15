#include "../winhttp.h"

//----- (00000001400526A0) ----------------------------------------------------
__int64 __fastcall sub_1400526A0(__int64 a1, __int64 a2)
{
	if (*(_DWORD*)(a1 + 76) != 1)
		return 1i64;
	if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 32i64))(*(_QWORD*)(a1 + 128))
		&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 136) + 32i64))(*(_QWORD*)(a1 + 136), a2)
		&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 112) + 32i64))(*(_QWORD*)(a1 + 112), a2))
	{
		*(_DWORD*)(a1 + 76) = 2;
		*(_DWORD*)(a1 + 88) = sub_14018CDF0();
		return 1i64;
	}
	return 0i64;
}

