#include "../winhttp.h"

//----- (00000001407E4578) ----------------------------------------------------
__int64 sub_1407E4578()
{
	_WORD* v0; // rbx
	int v1; // edi
	_QWORD* v3; // rdi
	char* v4; // rbx
	int v5; // esi
	char* v6; // rax

	v0 = qword_140C5F548;
	v1 = 0;
	if (!qword_140C5F548)
		return 0xFFFFFFFFi64;
	while (*v0)
	{
		if (*v0 != 61)
			++v1;
		v0 += sub_1407E6CA0(v0) + 1;
	}
	v3 = sub_1407E2BB0(v1 + 1, 8ui64);
	qword_140C5F508 = v3;
	if (!v3)
		return 0xFFFFFFFFi64;
	v4 = (char*)qword_140C5F548;
	if (*(_WORD*)qword_140C5F548)
	{
		while (1)
		{
			v5 = sub_1407E6CA0(v4) + 1;
			if (*(_WORD*)v4 != 61)
			{
				v6 = (char*)sub_1407E2BB0(v5, 2ui64);
				*v3 = v6;
				if (!v6)
				{
					sub_1407E14C0(qword_140C5F508);
					qword_140C5F508 = 0i64;
					return 0xFFFFFFFFi64;
				}
				if ((unsigned int)sub_1407E6BF4(v6, v5, v4))
				{
					sub_1407DC390();
					__debugbreak();
				}
				++v3;
			}
			v4 += 2 * v5;
			if (!*(_WORD*)v4)
			{
				v4 = (char*)qword_140C5F548;
				break;
			}
		}
	}
	sub_1407E14C0(v4);
	qword_140C5F548 = 0i64;
	*v3 = 0i64;
	dword_140DC6364 = 1;
	return 0i64;
}
// 140DC6364: using guessed type int dword_140DC6364;

