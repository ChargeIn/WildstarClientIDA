#include "../winhttp.h"

//----- (00000001403A8360) ----------------------------------------------------
__int64 sub_1403A8360()
{
	__int64 v0; // rbx

	v0 = qword_140C65898;
	if (*(_QWORD*)(qword_140C65898 + 25536))
		sub_1400EA3E0(
			*(_QWORD*)(qword_140C65898 + 29504),
			"UpdateCCStateStun",
			byte_1409E9C9C,
			fminf((float)(*(_DWORD*)(qword_140C65898 + 25500) + 1) / (float)*(int*)(qword_140C65898 + 25504), 1.0));
	*(_QWORD*)(v0 + 25480) = 0i64;
	*(_QWORD*)(v0 + 25488) = 0i64;
	*(_QWORD*)(v0 + 25496) = 0i64;
	*(_QWORD*)(v0 + 25504) = 0i64;
	*(_DWORD*)(v0 + 25512) = 0;
	sub_140195D70(v0 + 25520);
	return sub_1400EA3E0(*(_QWORD*)(v0 + 29504), "RemoveCCStateStun", &unk_1409D0CEB);
}
// 1409E9C9C: using guessed type _BYTE byte_1409E9C9C[40];
// 140C65898: using guessed type __int64 qword_140C65898;

