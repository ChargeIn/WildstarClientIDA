#include "../winhttp.h"

//----- (0000000140579860) ----------------------------------------------------
void __fastcall sub_140579860(const void** a1, int a2)
{
	const void*** v2; // rdi
	const void** i; // rbx
	_QWORD* v5; // rcx
	_QWORD* v6; // rdx
	const void** v7; // rcx
	const void** v8; // rcx
	const void** v9; // rbx
	const void** v10; // [rsp+30h] [rbp+8h] BYREF

	v10 = a1;
	v2 = (const void***)qword_140C65B78;
	i = *(const void***)qword_140C65B78;
	*(_QWORD*)qword_140C65B78 = 0i64;
	v10 = i;
	if (i)
	{
		i[3] = &v10;
		for (i = v10; v10; i = v10)
		{
			v5 = i[3];
			if (v5)
				*v5 = i[4];
			v6 = i[4];
			v7 = i + 4;
			if (v6)
				v6[3] = i[3];
			*v7 = 0i64;
			i[3] = v2;
			*v7 = *v2;
			*v2 = i;
			if (*v7)
				*((_QWORD*)*v7 + 3) = v7;
			if ((*((unsigned int(__fastcall**)(const void**)) * i + 7))(i) == a2
				&& !*(_DWORD*)((*((__int64(__fastcall**)(const void**)) * i + 2))(i) + 72))
			{
				(*((void(__fastcall**)(const void**, _QWORD)) * i + 10))(i, 0i64);
			}
		}
	}
	v8 = v2[1];
	if (v8)
	{
		do
		{
			v9 = (const void**)v8[4];
			if (*((_DWORD*)v8 + 11) == a2)
				(*(void(__fastcall**)(const void**, __int64)) * v8)(v8, 1i64);
			v8 = v9;
		} while (v9);
		i = v10;
	}
	if (i)
		sub_1401A4A00(&v10);
}
// 140C65B78: using guessed type __int64 qword_140C65B78;

