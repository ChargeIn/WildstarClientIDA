#include "../winhttp.h"

//----- (00000001405F53F0) ----------------------------------------------------
__int64 __fastcall sub_1405F53F0(__int64 a1, _DWORD* a2)
{
	int v2; // esi
	_QWORD** v4; // r8
	_QWORD* v5; // rcx
	__int64 v6; // rdi
	_QWORD* v7; // rdx
	_QWORD* v8; // rax

	v2 = 0;
	v4 = *(_QWORD***)(qword_140C65980 + 48);
	v5 = *v4;
	if (*v4 == v4)
		goto LABEL_8;
	while (1)
	{
		v6 = v5[2];
		if (*(_DWORD*)(v6 + 8) == *a2 && **(_DWORD**)v6 == a2[1])
			break;
		v5 = (_QWORD*)*v5;
		++v2;
		if (v5 == v4)
			goto LABEL_7;
	}
	v7 = (_QWORD*)*v5;
	v8 = (_QWORD*)v5[1];
	*v8 = *v5;
	v7[1] = v8;
	sub_14018B900((__int64)v5, 0);
	sub_140008410(v6 + 24);
	sub_14018B900(*(_QWORD*)(v6 + 32), 0);
	sub_14018B900(v6, 0);
LABEL_7:
	if (!v2)
		LABEL_8 :
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PublicEventVoteEnded", byte_1409ED494, (unsigned int)a2[2]);
	return 0i64;
}
// 1409ED494: using guessed type _BYTE byte_1409ED494[144];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

