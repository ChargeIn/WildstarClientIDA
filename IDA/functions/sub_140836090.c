#include "../winhttp.h"

//----- (0000000140836090) ----------------------------------------------------
char __fastcall sub_140836090(__int64 a1, __int64 a2, float a3, float a4, int* a5, char a6)
{
	__int64 v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // rax
	char result; // al
	__int64 v14; // rax
	__int64 v15; // rdx
	int v16; // edi

	v8 = *(_QWORD*)(a1 + 48);
	if (v8)
	{
		v9 = 0i64;
		v10 = v8;
		while (*(_QWORD*)(v10 + 32) != a2)
		{
			v9 = v10;
			v10 = *(_QWORD*)(v10 + 8);
			if (!v10)
				goto LABEL_5;
		}
		if (a3 != a4)
		{
			sub_14083AB80(qword_140C61B70, *(__int64**)(v10 + 16), 0x10000000i64, a4, *a5, a5[1], 0);
			*(_BYTE*)(v10 + 40) = a6;
			return 1;
		}
		v14 = *(_QWORD*)(v10 + 8);
		if (v10 == v8)
			*(_QWORD*)(a1 + 48) = v14;
		else
			*(_QWORD*)(v9 + 8) = v14;
		goto LABEL_15;
	}
LABEL_5:
	if (a3 == a4)
		return 0;
	v11 = sub_1408819F0(dword_140C10F20, 48i64);
	v10 = v11;
	if (!v11)
		return 0;
	*(_QWORD*)v11 = &off_1409A2EB8;
	*(_QWORD*)(v11 + 16) = 0i64;
	*(_QWORD*)(v11 + 24) = a1;
	*(_QWORD*)(v11 + 32) = a2;
	*(_BYTE*)(v11 + 40) = 0;
	if ((unsigned int)sub_140838280(v11, a3, a4, a5, a6) != 1)
	{
	LABEL_15:
		v15 = *(_QWORD*)(v10 + 16);
		v16 = dword_140C10F20;
		*(_QWORD*)v10 = &off_1409A2EB8;
		if (v15)
			sub_14083B060(qword_140C61B70, v15, v10);
		sub_140881720(v16, v10);
		return 0;
	}
	v12 = *(_QWORD*)(a1 + 48);
	if (v12)
	{
		*(_QWORD*)(v10 + 8) = v12;
		*(_QWORD*)(a1 + 48) = v10;
		return 1;
	}
	else
	{
		*(_QWORD*)(a1 + 48) = v10;
		result = 1;
		*(_QWORD*)(v10 + 8) = 0i64;
	}
	return result;
}
// 1409A2EB8: using guessed type __int64 (__fastcall *off_1409A2EB8)();
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B70: using guessed type __int64 qword_140C61B70;

