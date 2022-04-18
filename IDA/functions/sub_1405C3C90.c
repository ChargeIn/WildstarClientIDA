#include "../winhttp.h"

//----- (00000001405C3C90) ----------------------------------------------------
__int64 sub_1405C3C90()
{
	__int64 v0; // rcx
	__int64 v1; // rax
	__int64 v2; // rcx
	__int16* v3; // rax

	v0 = qword_140C65B98;
	v1 = qword_140C65898;
	*(_DWORD*)(qword_140C65B98 + 164) = 0;
	*(_DWORD*)(v1 + 1368) = 1;
	*(_QWORD*)(v0 + 168) = 16i64;
	*(_QWORD*)(v0 + 176) = 0i64;
	*(_DWORD*)(v0 + 184) = 0;
	sub_140195D70(v0 + 192);
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "MatchingCancelPendingGame", &unk_1409D1256);
	v3 = sub_14034BDD0(v2, 360025);
	sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v3, 0, 0i64);
	return 0i64;
}
// 1405C3D00: variable 'v2' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C65B98: using guessed type __int64 qword_140C65B98;

