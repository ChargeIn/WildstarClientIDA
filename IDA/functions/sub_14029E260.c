#include "../winhttp.h"

//----- (000000014029E260) ----------------------------------------------------
void __fastcall sub_14029E260(__int64 a1)
{
	__int64 v2; // rcx
	int v3; // eax
	int v4; // ecx
	__int64 v5; // rax

	v2 = *(_QWORD*)(a1 + 88);
	if (v2)
	{
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v2 + 64i64))(
			v2,
			*(unsigned int*)(a1 + 148),
			0i64);
		v4 = 0;
		if (v3 < 0)
		{
			v5 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(a1 + 68) = 0;
			*(_DWORD*)(v5 + 6252) = 1;
		}
		else
		{
			LOBYTE(v4) = v3 != 142213121;
			*(_DWORD*)(a1 + 68) = v4;
		}
		if (*(_DWORD*)(a1 + 68))
		{
			if (*(_DWORD*)(a1 + 152))
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6320i64) + 80i64))(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6320i64));
		}
	}
}

