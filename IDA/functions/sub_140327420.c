#include "../winhttp.h"

//----- (0000000140327420) ----------------------------------------------------
__int64 __fastcall sub_140327420(__int64 a1)
{
	__int64 result; // rax
	_QWORD* v3; // rcx
	__int64(__fastcall * v4)(_QWORD*, _QWORD, __int64, _QWORD, _DWORD, _QWORD); // r10
	int v5; // eax
	__int64 v6; // rcx
	__int64 v7; // rdx

	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 1008i64))(*(_QWORD*)(a1 + 16));
	if (!(_DWORD)result)
	{
		v3 = *(_QWORD**)(a1 + 16);
		v4 = (__int64(__fastcall*)(_QWORD*, _QWORD, __int64, _QWORD, _DWORD, _QWORD))v3[118];
		if (v4)
		{
			return v4(v3, *(unsigned int*)(a1 + 64), a1 + 68, *(unsigned int*)(a1 + 100), *(_DWORD*)(a1 + 8), v3[119]);
		}
		else if (*(char*)(a1 + 88) < 0)
		{
			result = (*(__int64(__fastcall**)(_QWORD*, _QWORD))(*v3 + 416i64))(v3, *(unsigned int*)(a1 + 68));
			if ((_DWORD)result)
			{
				v5 = sub_1401AE6A0(0, 0xFFFF);
				v6 = *(_QWORD*)(a1 + 16);
				v7 = *(unsigned int*)(a1 + 64);
				*(_DWORD*)(a1 + 72) = v5;
				return (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v6 + 584i64))(v6, v7, a1 + 68);
			}
		}
	}
	return result;
}

