#include "../winhttp.h"

//----- (000000014005E8E0) ----------------------------------------------------
__int64 __fastcall sub_14005E8E0(__int64 a1, __int64 a2, int* a3, __int64 a4)
{
	int v8; // r14d
	int v9; // eax
	__int64 v10; // rbx
	_QWORD* v11; // rsi
	__int64 v12; // rcx
	_QWORD* v13; // rbx
	__int64 result; // rax
	__int64 v15; // rdx
	__int64 v16; // r8

	v8 = 0;
	while (1)
	{
		v9 = *(_DWORD*)(a2 + 8);
		if (v9 == 5)
		{
			v10 = *(_QWORD*)a2;
			v11 = sub_14005C450(*(_QWORD*)a2, a3);
			if (*((_DWORD*)v11 + 2)
				|| (v12 = *(_QWORD*)(v10 + 16)) == 0
				|| (*(_BYTE*)(v12 + 10) & 1) != 0
				|| (v13 = sub_140062370(v12, 0, *(_QWORD*)(*(_QWORD*)(a1 + 32) + 296i64))) == 0i64)
			{
				*(_QWORD*)a4 = *v11;
				result = *((unsigned int*)v11 + 2);
				*(_DWORD*)(a4 + 8) = result;
				return result;
			}
		}
		else
		{
			v15 = v9 == 7
				? *(_QWORD*)(*(_QWORD*)a2 + 16i64)
				: *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8i64 * *(int*)(a2 + 8) + 224);
			if (v15)
			{
				v16 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 296i64);
				v13 = (_QWORD*)(*(_QWORD*)(v15 + 32)
					+ 40 * (*(int*)(v16 + 12) & (unsigned __int64)(int)((1i64 << *(_BYTE*)(v15 + 11)) - 1)));
				while (*((_DWORD*)v13 + 6) != 4 || v13[2] != v16)
				{
					v13 = (_QWORD*)v13[4];
					if (!v13)
						goto LABEL_16;
				}
			}
			else
			{
			LABEL_16:
				v13 = &unk_140A12138;
			}
			if (!*((_DWORD*)v13 + 2))
				sub_14005A950(a1, a2, aIndex_2);
		}
		if (*((_DWORD*)v13 + 2) == 6)
			return sub_14005E780(a1, a4, (_DWORD)v13, a2, (__int64)a3);
		++v8;
		a2 = (__int64)v13;
		if (v8 >= 100)
			sub_14005ABE0(a1, aLoopInGettable);
	}
}
// 14005ABE0: using guessed type void __noreturn sub_14005ABE0(_QWORD, const char *, ...);
// 14005E780: using guessed type __int64 __fastcall sub_14005E780(_DWORD, _DWORD, _DWORD, _DWORD, __int64);

