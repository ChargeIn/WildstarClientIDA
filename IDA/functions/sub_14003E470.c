#include "../winhttp.h"

//----- (000000014003E470) ----------------------------------------------------
void __fastcall sub_14003E470(__int64 a1, int a2, int* a3)
{
	__int64 v4; // rcx
	_QWORD* v6; // rbx
	int* v7; // rax
	int* v8; // rax
	__int64 v9; // rax
	__int64 v10[24]; // [rsp+20h] [rbp-E8h] BYREF
	__int128 v11; // [rsp+E0h] [rbp-28h]
	int* v12; // [rsp+F0h] [rbp-18h]

	v4 = *(_QWORD*)(a1 + 72);
	if (v4)
	{
		if (a2)
		{
			sub_1400B7090((__int64)v10, a2);
			v6 = 0i64;
			v12 = 0i64;
			v11 = 0i64;
			v10[0] = (__int64)off_140B69230;
			v7 = sub_14018B280(16i64, 0);
			*(_QWORD*)&v11 = v7;
			*((_QWORD*)&v11 + 1) = v7;
			v12 = v7 + 4;
			if (v7)
				*(_WORD*)v7 = 0;
			if (a3)
			{
				v8 = sub_14018B280(96i64, 0);
				if (v8)
					v6 = (_QWORD*)sub_1404DDB40((__int64)v8, a3);
				sub_1400B7480((__int64)v10, v6);
			}
			v9 = sub_1400B7660(v10);
			Apollo_LUAEvent(*(_QWORD*)(a1 + 72), "NetworkStatus", byte_1409D0F64, *(_QWORD*)(v9 + 8));
			if ((_QWORD)v11)
				sub_14018B900(v11, 0);
			sub_1400B7390(v10);
		}
		else
		{
			Apollo_LUAEvent(v4, "NetworkStatus", &unk_1409D01F2);
		}
	}
}
// 1409D0F64: using guessed type _BYTE byte_1409D0F64[3];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();

