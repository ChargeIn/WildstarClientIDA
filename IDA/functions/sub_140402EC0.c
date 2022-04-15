#include "../winhttp.h"

//----- (0000000140402EC0) ----------------------------------------------------
__int64 __fastcall sub_140402EC0(__int64 a1, int* a2)
{
	__int64 v3; // rax
	int v5; // [rsp+20h] [rbp-18h]

	v3 = sub_140401220((__int64*)qword_140C658A0, 2u, 0i64);
	if (v3)
	{
		v5 = *a2;
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "AccountSupportTicketResult", "Hb", v3, v5);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

