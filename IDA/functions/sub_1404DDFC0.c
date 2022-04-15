#include "../winhttp.h"

//----- (00000001404DDFC0) ----------------------------------------------------
__int64 __fastcall sub_1404DDFC0(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	__int64 v5; // rcx
	int* v6; // rax
	__int64 v7; // rdx
	_QWORD* v8; // rax
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]

	result = sub_1404835C0(qword_140C65918, a2);
	if (result)
	{
		v6 = (int*)sub_14034BDD0(v5, *(_DWORD*)(result + 8));
		if (v6)
		{
			v7 = 0i64;
			if (*(_WORD*)v6)
			{
				do
					++v7;
				while (*((_WORD*)v6 + v7));
			}
			sub_14001C480(a1 + 152, v6, (int*)((char*)v6 + 2 * v7));
			return *(_QWORD*)(a1 + 160);
		}
		else
		{
			v8 = sub_14018EFA0(&v9, (__int64)L"##-- Creature %d not found -##", a2);
			if (v8 != (_QWORD*)(a1 + 152))
				sub_14001C480(a1 + 152, (int*)v8[1], (int*)v8[2]);
			if (v10)
				sub_14018B900(v10, 0);
			return *(_QWORD*)(a1 + 160);
		}
	}
	return result;
}
// 1404DDFEE: variable 'v5' is possibly undefined
// 140B0ADB8: using guessed type wchar_t aCreatureDNotFo[31];
// 140C65918: using guessed type __int64 qword_140C65918;

