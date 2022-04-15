#include "../winhttp.h"

//----- (00000001405DA6B0) ----------------------------------------------------
void __fastcall sub_1405DA6B0(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	__int64 a4,
	unsigned int a5,
	void(__fastcall*** a6)(_QWORD, _QWORD, __int64, __int64))
{
	__int64 v6; // r11
	__int64 v8; // rax
	__int64 v9; // rcx
	unsigned int v10; // ebx
	__int64 v11; // rbp
	int v12; // eax
	__int64 v13; // rax
	_QWORD* v14; // rdi
	__int64 v15; // rcx
	__int64 v16; // rax
	__int64 v17; // rdi
	__int64 v18; // rdx
	__int64 v19; // rcx
	__int64 v20; // [rsp+40h] [rbp+8h]

	if (a4)
	{
		v6 = *(_QWORD*)(a2 + 1760);
		v8 = *(_QWORD*)(v6 + 8);
		v9 = v6;
		while (v8)
		{
			if (*(_DWORD*)(v8 + 32) < a5)
			{
				v8 = *(_QWORD*)(v8 + 24);
			}
			else
			{
				v9 = v8;
				v8 = *(_QWORD*)(v8 + 16);
			}
		}
		if (v9 == v6 || (v20 = v9, a5 < *(_DWORD*)(v9 + 32)))
			v20 = *(_QWORD*)(a2 + 1760);
		v10 = 0;
		if (v20 == v6)
			v11 = 0i64;
		else
			v11 = *(_QWORD*)(v20 + 40);
		v12 = *(_DWORD*)(a4 + 64);
		if (v12)
		{
			v13 = sub_1407A1500(a2, v12);
			v14 = (_QWORD*)v13;
			if (v13 && *(_QWORD*)(v13 + 8))
			{
				v15 = 0i64;
				do
				{
					(**a6)(a6, *(unsigned int*)(*v14 + 4 * v15), v11, a3);
					v15 = ++v10;
				} while ((unsigned __int64)v10 < v14[1]);
			}
		}
		else if (*(_DWORD*)(a4 + 68))
		{
			v16 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65B70 + 48i64))(qword_140C65B70);
			v17 = v16;
			if (v16)
			{
				v18 = *(_QWORD*)(v16 + 8);
				if ((*(_QWORD*)(v16 + 16) - v18) >> 2)
				{
					v19 = 0i64;
					do
					{
						(**a6)(a6, *(unsigned int*)(v18 + 4 * v19), v11, a3);
						v18 = *(_QWORD*)(v17 + 8);
						v19 = ++v10;
					} while (v10 < (unsigned __int64)((*(_QWORD*)(v17 + 16) - v18) >> 2));
				}
			}
		}
	}
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

