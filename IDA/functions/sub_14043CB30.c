#include "../winhttp.h"

//----- (000000014043CB30) ----------------------------------------------------
__int64 __fastcall sub_14043CB30(_QWORD* a1)
{
	void(__fastcall * **v2)(_QWORD); // rcx
	__int64 result; // rax
	__int64 v4; // rcx
	__int64 v5; // rbx
	unsigned int v6; // eax

	v2 = (void(__fastcall***)(_QWORD))qword_140C7CD78;
	if (!qword_140C7CD78)
	{
		result = sub_1407129A0(&qword_140C7CD78);
		if ((int)result < 0)
			return result;
		v4 = qword_140C7CD78;
		v5 = *(_QWORD*)(qword_140C7CD78 + 16);
		if (v5)
		{
			v6 = sub_1400518A0(qword_140C63628, 104, 2, 0);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 80i64))(v5, v6);
			v4 = qword_140C7CD78;
		}
		sub_140712CE0(v4);
		v2 = (void(__fastcall***)(_QWORD))qword_140C7CD78;
	}
	(**v2)(v2);
	*a1 = qword_140C7CD78;
	return 0i64;
}
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C7CD78: using guessed type __int64 qword_140C7CD78;

