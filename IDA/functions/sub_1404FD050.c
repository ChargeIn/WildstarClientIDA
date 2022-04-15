#include "../winhttp.h"

//----- (00000001404FD050) ----------------------------------------------------
__int64 __fastcall sub_1404FD050(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rcx
	int v5; // ebp
	unsigned int v6; // esi
	__int64 v7; // rcx
	__int64 v8; // rcx

	v2 = sub_1404F87C0(a1, 1u);
	v3 = v2;
	if (!v2)
		return 0i64;
	v4 = *(_QWORD*)(v2 + 2328);
	if (v4 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 2328) + 112i64))(*(_QWORD*)(v3 + 2328));
	if (!*(_QWORD*)(v3 + 2168))
		return 0i64;
	v5 = sub_140056D60(a1, 2u);
	v6 = sub_140056D60(a1, 3u);
	if (v5 == 13)
		v6 = 0;
	if ((*(_DWORD*)(v3 + 7188) != v5 || *(_DWORD*)(v3 + 7192) != v6)
		&& (unsigned int)sub_14002EAF0((_DWORD*)(v3 + 2336), v5)
		&& (unsigned int)sub_14002EBD0(v3 + 2336, v6))
	{
		sub_14002F5D0(v3 + 2336, *(__int64**)(v3 + 2168), *(_QWORD*)(v3 + 2160));
		sub_14002FE90(v3 + 2336, *(_QWORD*)(v3 + 2168));
		sub_140030080(v3 + 2336, *(_QWORD*)(v3 + 2168));
		v7 = *(_QWORD*)(v3 + 2176);
		if (v7)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
			*(_QWORD*)(v3 + 2176) = 0i64;
		}
		v8 = *(_QWORD*)(v3 + 2184);
		if (v8)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
			*(_QWORD*)(v3 + 2184) = 0i64;
		}
	}
	return 1i64;
}

