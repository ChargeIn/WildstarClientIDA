#include "../winhttp.h"

//----- (00000001400E8C50) ----------------------------------------------------
__int64 __fastcall sub_1400E8C50(_QWORD* a1, char* a2)
{
	char* v2; // rbx
	__int64 result; // rax
	__int64 v6; // rcx

	v2 = (char*)a1[360];
	if (a2 != v2)
	{
		if (v2)
			result = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)v2 + 416i64))(a1[360]);
		a1[360] = a2;
		if (a2)
		{
			v6 = a1[311];
			if (v6 && (a2[432] & 2) == 0)
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v6 + 120i64))(v6, 0i64);
			(**(void(__fastcall***)(_QWORD))a1[360])(a1[360]);
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)a1[360] + 408i64))(a1[360]);
			sub_1400D4070(a1[360], 0xFu, (char*)a1[360], "W", v2);
			result = (*(__int64(__fastcall**)(_QWORD*, __int64, _QWORD, _QWORD))(*a1 + 64i64))(a1, 1027i64, 0i64, a1[360]);
		}
		if (v2)
		{
			sub_1400D4070((__int64)v2, 0x10u, v2, "W", a1[360]);
			(*(void(__fastcall**)(_QWORD*, __int64, _QWORD, char*))(*a1 + 64i64))(a1, 1028i64, 0i64, v2);
			return (*(__int64(__fastcall**)(char*))(*(_QWORD*)v2 + 8i64))(v2);
		}
	}
	return result;
}

