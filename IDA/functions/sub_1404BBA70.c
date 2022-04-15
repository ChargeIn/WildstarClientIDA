#include "../winhttp.h"

//----- (00000001404BBA70) ----------------------------------------------------
__int64 __fastcall sub_1404BBA70(__int64 a1, _QWORD* a2)
{
	_QWORD* v3; // r14
	int* v4; // rsi
	__int64 v5; // r15
	__int64 v6; // rbx
	int* v7; // rax
	int* v8; // rdi
	unsigned __int64 v9; // rbx

	v3 = (_QWORD*)qword_140C659F0;
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingNeighborInviteRecieved", byte_1409EC0C4, a2[2]);
	v3[43] = *a2;
	v3[44] = a2[1];
	v4 = (int*)a2[2];
	v5 = v3[45];
	if (v4)
	{
		v6 = 0i64;
		if (*(_WORD*)v4)
		{
			do
				++v6;
			while (*((_WORD*)v4 + v6));
		}
		v7 = sub_14018B280(2 * v6 + 18, 0);
		if (v7)
		{
			*((_QWORD*)v7 + 1) = v6;
			*(_QWORD*)v7 = off_140B55060;
		}
		else
		{
			v7 = 0i64;
		}
		v8 = v7 + 4;
		v9 = 2 * v6;
		sub_1407DB590(v7 + 4, v4, v9);
		*(_WORD*)((char*)v8 + v9) = 0;
		v3[45] = v8;
	}
	else
	{
		v3[45] = 0i64;
	}
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	return 0i64;
}
// 1409EC0C4: using guessed type _BYTE byte_1409EC0C4[16];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

