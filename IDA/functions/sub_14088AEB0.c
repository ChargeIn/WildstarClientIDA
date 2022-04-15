#include "../winhttp.h"

//----- (000000014088AEB0) ----------------------------------------------------
void __fastcall sub_14088AEB0(__int64 a1, __int64 a2, __int64 a3, int* a4, char a5, int a6)
{
	__int64* v6; // rbx
	__int64 v10; // rax

	v6 = (__int64*)qword_140C629D8;
	if (qword_140C629D8)
	{
		do
		{
			if ((*(__int64(__fastcall**)(__int64*))(*v6 + 120))(v6) == a2)
			{
				v10 = v6[13];
				if ((!a3 || a3 == *(_QWORD*)(v10 + 56)) && (!a6 || a6 == *(_DWORD*)(v10 + 48)))
					sub_14088BA70(v6, a4, a5);
			}
			v6 = (__int64*)v6[15];
		} while (v6);
	}
}
// 140C629D8: using guessed type __int64 qword_140C629D8;

