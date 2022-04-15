#include "../winhttp.h"

//----- (0000000140870740) ----------------------------------------------------
char __fastcall sub_140870740(__int64 a1)
{
	__m128* v2; // rax
	int v3; // eax
	__int64 v4; // rcx
	void(__fastcall * **v5)(_QWORD, _QWORD); // rdi
	int v6; // esi

	v2 = (__m128*)sub_140881960(dword_140C10F20, 208i64, 0x10u);
	if (v2)
		v2 = sub_1408717E0(v2);
	*(_QWORD*)(a1 + 24) = v2;
	if (!v2 || (v3 = sub_140871CB0((__int64)v2, *(unsigned __int16*)(a1 + 52), 1), v3 != 1))
	{
		v4 = *(_QWORD*)(a1 + 24);
		if (v4)
		{
			sub_140872290(v4);
			v5 = *(void(__fastcall****)(_QWORD, _QWORD))(a1 + 24);
			v6 = dword_140C10F20;
			if (v5)
			{
				(**v5)(v5, 0i64);
				sub_140881720(v6, (__int64)v5);
			}
			*(_QWORD*)(a1 + 24) = 0i64;
		}
		LOBYTE(v3) = 0;
	}
	return v3;
}
// 140C10F20: using guessed type int dword_140C10F20;

