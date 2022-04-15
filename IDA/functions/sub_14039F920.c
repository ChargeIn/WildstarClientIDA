#include "../winhttp.h"

//----- (000000014039F920) ----------------------------------------------------
void __fastcall sub_14039F920(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx

	(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 30088) + 120i64))(*(_QWORD*)(a1 + 30088), 0i64);
	if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 30088) + 184i64))(*(_QWORD*)(a1 + 30088)))
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 30088) + 408i64))(*(_QWORD*)(a1 + 30088));
	*(_DWORD*)(a1 + 30936) = 0;
	*(_DWORD*)(a1 + 30956) = 0;
	*(_QWORD*)(a1 + 30972) = 0i64;
	*(_QWORD*)(a1 + 30980) = 0i64;
	*(_QWORD*)(a1 + 30988) = 0i64;
	*(_DWORD*)(a1 + 30172) = 0;
	sub_140195D70(a1 + 30216);
	*(_DWORD*)(a1 + 30176) = 0;
	sub_140195D70(a1 + 30288);
	*(_DWORD*)(a1 + 30180) = 0;
	sub_140195D70(a1 + 30360);
	*(_DWORD*)(a1 + 30184) = 0;
	sub_140195D70(a1 + 30432);
	*(_DWORD*)(a1 + 30188) = 0;
	sub_140195D70(a1 + 30504);
	*(_DWORD*)(a1 + 30192) = 0;
	sub_140195D70(a1 + 30576);
	*(_DWORD*)(a1 + 30196) = 0;
	sub_140195D70(a1 + 30648);
	if (*(_DWORD*)(a1 + 25480))
		*(_BYTE*)(a1 + 25508) |= 1u;
	*(_DWORD*)(a1 + 30200) = 0;
	sub_140195D70(a1 + 30720);
	if (*(_DWORD*)(a1 + 25480))
		*(_BYTE*)(a1 + 25508) |= 2u;
	*(_DWORD*)(a1 + 30204) = 0;
	sub_140195D70(a1 + 30792);
	if (*(_DWORD*)(a1 + 25480))
		*(_BYTE*)(a1 + 25508) |= 4u;
	*(_DWORD*)(a1 + 30208) = 0;
	sub_140195D70(a1 + 30864);
	if (*(_DWORD*)(a1 + 25480))
		*(_BYTE*)(a1 + 25508) |= 8u;
	if (!*(_DWORD*)(a1 + 30936)
		&& !*(_DWORD*)(a1 + 30956)
		&& (!*(_QWORD*)(a1 + 120) || (v2 = *(_QWORD*)(a1 + 25744)) == 0 || !(unsigned int)sub_14045E630(v2)))
	{
		*(_DWORD*)(a1 + 30168) = 0;
		dword_140C89A90 = 0;
		v3 = *(_QWORD*)(a1 + 120);
		if (v3)
			sub_1404695E0(v3);
	}
	dword_140C89AA0 = 0;
	*(_DWORD*)(a1 + 28852) = -1;
	*(_QWORD*)(a1 + 28856) = 0i64;
	*(_DWORD*)(a1 + 28912) = 0;
	*(_DWORD*)(a1 + 28864) = 0;
	*(_DWORD*)(a1 + 28920) = 300;
	*(_QWORD*)(a1 + 28924) = -1i64;
	v4 = *(_QWORD*)(a1 + 28992);
	*(_DWORD*)(a1 + 28932) = -1;
	*(_DWORD*)(a1 + 28976) = 0;
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 152i64))(v4);
}
// 140C89A90: using guessed type int dword_140C89A90;
// 140C89AA0: using guessed type int dword_140C89AA0;

