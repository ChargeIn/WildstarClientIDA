#include "../winhttp.h"

//----- (0000000140398400) ----------------------------------------------------
void __fastcall sub_140398400(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v2; // rax
	__int64 v3; // [rsp+30h] [rbp+8h] BYREF

	v3 = a1;
	v1 = qword_140C65898;
	v2 = *(_QWORD*)(qword_140C65898 + 120);
	if (v2 && !*(_DWORD*)(v2 + 592))
	{
		if (*(_DWORD*)(qword_140C65898 + 26336))
		{
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "Vacuum", &unk_1409D132A);
			sub_140051AF0(0, 110);
			LOBYTE(v3) = 0;
			sub_1403F4900(v1, 0x1ADu, (__int64)&v3);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

