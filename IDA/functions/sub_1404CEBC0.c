#include "../winhttp.h"

//----- (00000001404CEBC0) ----------------------------------------------------
__int64 __fastcall sub_1404CEBC0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx

	*(_QWORD*)(a1 + 32) = 0i64;
	*(_DWORD*)(a1 + 40) = 0;
	*(_QWORD*)a1 = off_140B68FE0;
	v2 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 56) = v2;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 56) + 16i64) = *(_QWORD*)(a1 + 56);
	*(_QWORD*)(*(_QWORD*)(a1 + 56) + 24i64) = *(_QWORD*)(a1 + 56);
	*(_DWORD*)(a1 + 136) = 0;
	*(_QWORD*)(a1 + 80) = sub_14034BDD0(0i64, 455626);
	*(_QWORD*)(a1 + 88) = sub_14034BDD0(v3, 455627);
	*(_QWORD*)(a1 + 96) = sub_14034BDD0(v4, 455628);
	*(_QWORD*)(a1 + 104) = sub_14034BDD0(v5, 648116);
	*(_QWORD*)(a1 + 112) = sub_14034BDD0(v6, 455630);
	*(_QWORD*)(a1 + 120) = sub_14034BDD0(v7, 455636);
	*(_QWORD*)(a1 + 128) = sub_14034BDD0(v8, 455637);
	return a1;
}
// 1404CEC23: variable 'v3' is possibly undefined
// 1404CEC31: variable 'v4' is possibly undefined
// 1404CEC3F: variable 'v5' is possibly undefined
// 1404CEC4D: variable 'v6' is possibly undefined
// 1404CEC5B: variable 'v7' is possibly undefined
// 1404CEC69: variable 'v8' is possibly undefined
// 140B68FE0: using guessed type __int64 (__fastcall *off_140B68FE0[31])();

