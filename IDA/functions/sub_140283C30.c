#include "../winhttp.h"

//----- (0000000140283C30) ----------------------------------------------------
void __fastcall sub_140283C30(__int64 a1)
{
	__int64 i; // rbx
	unsigned int j; // esi
	__int64 v3; // rdi
	unsigned __int64 k; // rdi
	__int64 v5; // rax
	__int64 v6; // rcx
	_QWORD* v7; // rsi
	int v8; // eax
	__int64 m; // rax

	for (i = *(_QWORD*)(a1 + 56); i; i = *(_QWORD*)(i + 2480))
	{
		for (j = 0; j < *(_DWORD*)(i + 264); *(_QWORD*)(v3 + 272) = 0i64)
		{
			v3 = i + 8i64 * j;
			sub_14018B900(*(_QWORD*)(v3 + 272), 0);
			++j;
		}
		*(_DWORD*)(i + 264) = 0;
		for (k = 0i64; k < *(_QWORD*)(i + 2328); ++k)
		{
			v5 = *(_QWORD*)(i + 2320);
			v6 = *(_QWORD*)(v5 + 8 * k);
			v7 = (_QWORD*)(v5 + 8 * k);
			if (v6)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
				*v7 = 0i64;
			}
		}
		*(_QWORD*)(i + 2328) = 0i64;
		v8 = *(_DWORD*)(i + 2364);
		*(_QWORD*)(i + 2336) = 0i64;
		*(_DWORD*)(i + 2344) = v8;
		*(_DWORD*)(i + 2348) = v8;
		for (m = *(_QWORD*)(i + 96); m; m = *(_QWORD*)(m + 272))
			*(_QWORD*)(m + 192) = 0i64;
	}
}

