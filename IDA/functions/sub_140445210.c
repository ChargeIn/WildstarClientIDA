#include "../winhttp.h"

//----- (0000000140445210) ----------------------------------------------------
__int64 __fastcall sub_140445210(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rdx
	__int64 v4; // rax
	int v5; // esi
	__int64 v6; // rax
	int v7; // ecx
	int v8; // ecx
	bool v9; // zf
	int v10; // r8d
	__int64 v11; // rax
	int v12; // edx
	int v13; // eax
	__int64 result; // rax

	v2 = *(_QWORD*)(qword_140C65898 + 120);
	if (v2)
	{
		v3 = *(_QWORD*)(qword_140C65898 + 29272);
		if (v3 && *(_DWORD*)(v3 + 20) || !sub_1403B48B0(v2))
		{
			v5 = 0;
		}
		else
		{
			v4 = sub_140200220(0x937u);
			if (v4)
				v5 = *(_DWORD*)(v4 + 4);
			else
				v5 = 90;
		}
		if ((unsigned int)sub_1403C86D0())
			v5 = sub_1403C86D0();
		v6 = *(_QWORD*)(qword_140C65898 + 29272);
		if (v6)
		{
			v8 = *(_DWORD*)(v6 + 20);
			if (v8 == 3 || (v9 = v8 == 8, v7 = 0, v9))
				v7 = 1;
		}
		else
		{
			v7 = 0;
		}
		if (v6)
			v10 = *(_DWORD*)(v6 + 64);
		else
			v10 = 0;
		v11 = *(_QWORD*)(qword_140C65898 + 120);
		v12 = *(_DWORD*)(v11 + 60);
		if (!v12)
			v12 = *(_DWORD*)(v11 + 56);
		v13 = *(_DWORD*)(v11 + 56);
		*(_DWORD*)(a1 + 24) = v5;
		*(_DWORD*)a1 = v13;
		*(_DWORD*)(a1 + 4) = v12;
		*(_DWORD*)(a1 + 16) = 0;
		result = a1;
		*(_DWORD*)(a1 + 20) = v10;
		*(_DWORD*)(a1 + 28) = v7;
		*(_QWORD*)(a1 + 8) = 0i64;
	}
	else
	{
		*(_QWORD*)a1 = 1i64;
		*(_QWORD*)(a1 + 16) = 0i64;
		*(_QWORD*)(a1 + 24) = 0i64;
		result = a1;
		*(_QWORD*)(a1 + 8) = 0i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

