#include "../winhttp.h"

//----- (000000014088A770) ----------------------------------------------------
void __fastcall sub_14088A770(__int64 a1, __int64 a2, __int64 a3, int* a4, int a5)
{
	_QWORD* v5; // rbx
	__int64 v9; // rax

	v5 = (_QWORD*)qword_140C629D8;
	if (qword_140C629D8)
	{
		do
		{
			if ((*(__int64(__fastcall**)(_QWORD*))(*v5 + 120i64))(v5) == a2)
			{
				v9 = v5[13];
				if ((!a3 || a3 == *(_QWORD*)(v9 + 56)) && (!a5 || a5 == *(_DWORD*)(v9 + 48)))
					sub_14088B860((__int64)v5, a4);
			}
			v5 = (_QWORD*)v5[15];
		} while (v5);
	}
}
// 140C629D8: using guessed type __int64 qword_140C629D8;

