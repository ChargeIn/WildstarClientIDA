#include "../winhttp.h"

//----- (0000000140350850) ----------------------------------------------------
__int64 __fastcall sub_140350850(__int64 a1)
{
	unsigned __int32 v2; // ebp
	_QWORD* v3; // rbx
	__int64 v4; // rsi

	v2 = _InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if (!v2)
	{
		v3 = (_QWORD*)(a1 + 688);
		v4 = 11i64;
		do
		{
			if (*v3)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v3 + 8i64))(*v3);
				*v3 = 0i64;
			}
			++v3;
			--v4;
		} while (v4);
		sub_1401981B0((__int64**)(a1 + 776));
	}
	if ((*(_DWORD*)(a1 + 12))-- == 1)
	{
		sub_14034D010(a1);
		sub_14018B900(a1, 0);
	}
	return v2;
}

