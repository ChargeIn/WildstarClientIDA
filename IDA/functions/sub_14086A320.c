#include "../winhttp.h"

//----- (000000014086A320) ----------------------------------------------------
__int64 __fastcall sub_14086A320(__int64 a1)
{
	__int64* i; // rbx
	__int64 v3; // rdi
	__int64 result; // rax
	int v5; // ecx
	int v6; // esi

	if (*(_DWORD*)(a1 + 388))
	{
		for (i = *(__int64**)(a1 + 360); i; i = (__int64*)*i)
		{
			sub_14083C260(qword_140C61B80, *((_DWORD*)i + 8));
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 312i64))(a1, 3i64);
			v3 = i[5];
			result = *(unsigned int*)(v3 + 136);
			v5 = result ^ (result ^ (result - 1)) & 0x3FFFFFFF;
			*(_DWORD*)(v3 + 136) = v5;
			if ((v5 & 0x3FFFFFFF) == 0)
			{
				v6 = dword_140C10F20;
				sub_14084BD30(v3);
				result = sub_140881720(v6, v3);
			}
		}
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B80: using guessed type __int64 qword_140C61B80;

