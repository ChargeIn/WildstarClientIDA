#include "../winhttp.h"

//----- (00000001407771F0) ----------------------------------------------------
__int64* __fastcall sub_1407771F0(__int64 a1, char a2, int* a3, int* a4, _QWORD* a5)
{
	__int64 v5; // rbx
	__int64 v9; // rax
	__int64 v10; // rcx
	int* v11; // r9
	__int64 v12; // rax
	_WORD* v13; // rax
	__int64 v14; // rax

	v5 = 0i64;
	*(_BYTE*)(a1 + 4) = a2;
	if (a2)
	{
		v13 = *(_WORD**)(a1 + 80);
		if (v13 != *(_WORD**)(a1 + 88))
		{
			*v13 = 0;
			*(_QWORD*)(a1 + 88) = *(_QWORD*)(a1 + 80);
		}
	}
	else
	{
		v9 = *(_QWORD*)(a1 + 88);
		v10 = a1 + 72;
		if (*(_QWORD*)(v10 + 8) == v9)
		{
			v11 = (int*)&unk_1409F9BD4;
			v12 = 0i64;
			if (*(_QWORD*)(qword_140C65898 + 136))
				v11 = *(int**)(qword_140C65898 + 136);
			if (*(_WORD*)v11)
			{
				do
					++v12;
				while (*((_WORD*)v11 + v12));
			}
			sub_14001C480(v10, v11, (int*)((char*)v11 + 2 * v12));
		}
	}
	if (a3)
	{
		v14 = 0i64;
		if (*(_WORD*)a3)
		{
			do
				++v14;
			while (*((_WORD*)a3 + v14));
		}
		sub_14001C480(a1 + 8, a3, (int*)((char*)a3 + 2 * v14));
	}
	if (a4)
	{
		if (*(_WORD*)a4)
		{
			do
				++v5;
			while (*((_WORD*)a4 + v5));
		}
		sub_14001C480(a1 + 40, a4, (int*)((char*)a4 + 2 * v5));
	}
	return sub_1407477A0((__int64*)(a1 + 104), a5);
}
// 140C65898: using guessed type __int64 qword_140C65898;

