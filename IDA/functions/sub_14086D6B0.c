#include "../winhttp.h"

//----- (000000014086D6B0) ----------------------------------------------------
__int64 __fastcall sub_14086D6B0(__int64 a1, __int64 a2)
{
	bool v2; // zf
	__int64 v5; // rax
	__int64 v6; // rcx
	unsigned int v8; // ebx
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // [rsp+20h] [rbp-48h] BYREF
	int v14; // [rsp+28h] [rbp-40h]
	_QWORD v15[3]; // [rsp+30h] [rbp-38h] BYREF
	__int16 v16; // [rsp+48h] [rbp-20h]
	__int64 v17; // [rsp+50h] [rbp-18h]
	int v18; // [rsp+58h] [rbp-10h]

	v2 = (*(_BYTE*)(a1 + 479) & 0x40) == 0;
	*(_BYTE*)(a1 + 486) = 1;
	if (v2)
		return sub_14086E3E0(a1, a2);
	if (*(_DWORD*)a2)
	{
		v9 = *(_QWORD*)(a2 + 144);
		if (!v9 || *(_QWORD*)(v9 + 32))
			return sub_14086E4D0((__int16*)a1, a2);
		v10 = sub_140865FC0();
		v11 = *(_QWORD*)(a2 + 144);
		v12 = *(_QWORD*)(v11 + 32);
		*(_QWORD*)(v11 + 32) = v10;
		if (v12)
			sub_140866000(v12);
		if (*(_QWORD*)(*(_QWORD*)(a2 + 144) + 32i64))
			return sub_14086E4D0((__int16*)a1, a2);
		else
			return 2i64;
	}
	else
	{
		*(_QWORD*)(a2 + 8) = a1;
		v15[2] = &v13;
		v15[0] = 0i64;
		v15[1] = 0i64;
		v16 = 0;
		v13 = 0i64;
		v17 = 0i64;
		v18 = 0;
		*(_DWORD*)a2 = 1;
		v14 = 0;
		v5 = sub_140865FC0();
		v6 = v17;
		v17 = v5;
		if (v6)
		{
			sub_140866000(v6);
			v5 = v17;
		}
		if (v5)
		{
			*(_QWORD*)(a2 + 144) = v15;
			v8 = sub_14086E4D0((__int16*)a1, a2);
			if (v17)
				sub_140866000(v17);
			return v8;
		}
		else
		{
			return 2i64;
		}
	}
}
// 14086D6B0: using guessed type _QWORD var_38[3];

