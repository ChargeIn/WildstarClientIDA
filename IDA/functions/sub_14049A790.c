#include "../winhttp.h"

//----- (000000014049A790) ----------------------------------------------------
__int64 sub_14049A790()
{
	__int64 v0; // rdi
	_QWORD* v1; // rax
	_QWORD* v2; // rbx
	void(__fastcall * **v3)(_QWORD, __int64); // rcx
	__int64 v4; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	v0 = qword_140C65990;
	v1 = *(_QWORD**)(qword_140C65990 + 16);
	v2 = (_QWORD*)v1[2];
	if (v2 != v1)
	{
		do
		{
			v3 = (void(__fastcall***)(_QWORD, __int64))v2[5];
			if (v3)
				(**v3)(v3, 1i64);
			v4 = v2[3];
			if (v4)
			{
				v2 = (_QWORD*)v2[3];
				for (i = *(_QWORD**)(v4 + 16); i; i = (_QWORD*)i[2])
					v2 = i;
			}
			else
			{
				for (j = v2[1]; v2 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v2 = (_QWORD*)j;
				if (v2[3] != j)
					v2 = (_QWORD*)j;
			}
		} while (v2 != *(_QWORD**)(v0 + 16));
	}
	sub_140008410(v0 + 8);
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GalacticArchiveRefresh", &unk_1409D11E3);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65990: using guessed type __int64 qword_140C65990;

