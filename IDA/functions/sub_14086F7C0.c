#include "../winhttp.h"

//----- (000000014086F7C0) ----------------------------------------------------
__int64 __fastcall sub_14086F7C0(_QWORD* a1, __int64 a2)
{
	_QWORD* v4; // rbx

	if (!(*(__int64(__fastcall**)(_QWORD*))(*a1 + 528i64))(a1))
	{
		v4 = (_QWORD*)a1[8];
		if (v4)
		{
			while (!(*(__int64(__fastcall**)(_QWORD*))(*v4 + 528i64))(v4))
			{
				v4 = (_QWORD*)v4[8];
				if (!v4)
					goto LABEL_5;
			}
		}
		else
		{
		LABEL_5:
			sub_140852C90((__int64)a1);
		}
	}
	return sub_14084EEF0((__int64)a1, a2);
}

