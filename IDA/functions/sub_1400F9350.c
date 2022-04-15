#include "../winhttp.h"

//----- (00000001400F9350) ----------------------------------------------------
__int64* __fastcall sub_1400F9350(__int64* a1, __int64* a2, _QWORD* a3, _QWORD* a4, _QWORD* a5)
{
	_WORD* v5; // rax
	__int64 v7; // rdx
	__int64 v11; // r8
	_WORD* v12; // rdx
	_WORD* v14; // rdx
	_WORD* v15; // rdx
	_WORD* v16; // rdi
	__int64 v17; // rdx
	__int64 v18; // rax
	_WORD* v19; // rcx
	__int16 v20; // r9

	v5 = (_WORD*)*a3;
	v7 = *a2;
	if (v7 == *a3 || *a4 == *a5)
	{
		*a1 = v7;
		return a1;
	}
	else
	{
		v11 = *a4 - 2i64;
		if (v11 == *a5)
		{
			do
			{
				v12 = (_WORD*)(*a2 - 2);
				if (*v12 == *(_WORD*)(*a4 - 2i64))
					break;
				*a2 = (__int64)v12;
			} while (v12 != (_WORD*)*a3);
			*a1 = *a2;
			return a1;
		}
		else
		{
			while (1)
			{
				if ((_WORD*)*a2 != v5)
				{
					do
					{
						v14 = (_WORD*)(*a2 - 2);
						if (*v14 == *(_WORD*)(*a4 - 2i64))
							break;
						*a2 = (__int64)v14;
					} while (v14 != (_WORD*)*a3);
				}
				if (*a2 != *a3)
				{
					do
					{
						v15 = (_WORD*)(*a2 - 2);
						if (*v15 == *(_WORD*)(*a4 - 2i64))
							break;
						*a2 = (__int64)v15;
					} while (v15 != (_WORD*)*a3);
				}
				v16 = (_WORD*)*a3;
				if (*a2 == *a3 || (v17 = *a2 - 2, (_WORD*)v17 == v16))
				{
				LABEL_22:
					*a1 = (__int64)v16;
					return a1;
				}
				v18 = v11 - 2;
				v19 = (_WORD*)(*a2 - 4);
				if (*v19 == *(_WORD*)(v11 - 2))
					break;
			LABEL_19:
				*a2 = v17;
				v5 = (_WORD*)*a3;
				if (v17 == *a3)
				{
					*a1 = v17;
					return a1;
				}
			}
			while (v18 != *a5)
			{
				if (v19 == v16)
					goto LABEL_22;
				v20 = *(_WORD*)(v18 - 2);
				v18 -= 2i64;
				if (*--v19 != v20)
					goto LABEL_19;
			}
			*a1 = *a2;
			return a1;
		}
	}
}

