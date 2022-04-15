#include "../winhttp.h"

//----- (00000001402FAA60) ----------------------------------------------------
__int64 __fastcall sub_1402FAA60(__int64 a1, void(__fastcall*** a2)(_QWORD), int a3)
{
	__int64 result; // rax
	__int64 v7; // rcx
	__int64 v8; // rcx
	int v9; // ecx

	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 1008i64))(a1);
	if (!(_DWORD)result)
	{
		v7 = *(_QWORD*)(a1 + 1080);
		*(_QWORD*)(a1 + 1080) = 0i64;
		if (v7)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
		if (*(void(__fastcall****)(_QWORD))(a1 + 1088) != a2)
		{
			if (a2)
				(**a2)(a2);
			v8 = *(_QWORD*)(a1 + 1088);
			if (v8)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
			*(_QWORD*)(a1 + 1088) = a2;
		}
		result = *(unsigned int*)(a1 + 52);
		*(_DWORD*)(a1 + 1096) = a3;
		if ((result & 8) != 0)
		{
			_InterlockedExchange((volatile __int32*)(a1 + 52), result & 0xFFFFFFF7);
			for (result = *(_QWORD*)(a1 + 1216); result; result = *(_QWORD*)(result + 1216))
			{
				v9 = *(_DWORD*)(result + 52);
				if ((v9 & 0x20) == 0)
					break;
				_InterlockedExchange((volatile __int32*)(result + 52), v9 & 0xFFFFFFDF);
			}
		}
	}
	return result;
}

