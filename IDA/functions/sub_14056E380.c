#include "../winhttp.h"

//----- (000000014056E380) ----------------------------------------------------
void __fastcall sub_14056E380(__int64 a1)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	void(__fastcall * **v4)(_QWORD, __int64); // rcx
	__int64 v5; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v8; // rcx
	bool v9; // zf

	sub_14056E480(a1);
	v2 = *(_QWORD**)(a1 + 64);
	v3 = (_QWORD*)v2[2];
	if (v3 != v2)
	{
		do
		{
			v4 = (void(__fastcall***)(_QWORD, __int64))v3[5];
			if (v4)
				(**v4)(v4, 1i64);
			v5 = v3[3];
			if (v5)
			{
				v3 = (_QWORD*)v3[3];
				for (i = *(_QWORD**)(v5 + 16); i; i = (_QWORD*)i[2])
					v3 = i;
			}
			else
			{
				for (j = v3[1]; v3 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = (_QWORD*)j;
				if (v3[3] != j)
					v3 = (_QWORD*)j;
			}
		} while (v3 != *(_QWORD**)(a1 + 64));
	}
	sub_140008410(a1 + 56);
	sub_140008410(a1 + 128);
	sub_140008410(a1 + 160);
	v8 = qword_140C65898;
	if (qword_140C65898)
	{
		v9 = qword_140C65B78 == 0;
		*(_DWORD*)(qword_140C65898 + 28568) = 1;
		if (!v9)
		{
			sub_140575DD0();
			v8 = qword_140C65898;
		}
		Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "PlayerPathRefresh", byte_1409D10FF);
	}
}
// 1409D10FF: using guessed type _BYTE byte_1409D10FF[67];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B78: using guessed type __int64 qword_140C65B78;

