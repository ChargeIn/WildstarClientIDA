//----- (0000000140705830) ----------------------------------------------------
__int64 __fastcall sub_140705830(__int64 a1)
{
	int v2; // ecx
	int v4; // eax
	unsigned int v5; // ecx
	__int64 v6; // rax
	int v7; // ecx
	__int64 v8; // rax

	v2 = qword_140C65898;
	if (qword_140C65898)
	{
		v4 = sub_1403D2140(qword_140C65898, 0xAu);
		v5 = 1098;
		if (v4)
			v5 = 145;
		v6 = sub_140200220(v5);
		if (v6)
			v7 = *(_DWORD*)(v6 + 4);
		else
			v7 = 1;
		v8 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v8 + 8) = 3;
		*(double*)v8 = (double)v7;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = qword_140C65898;
		*(_QWORD*)(a1 + 16) += 16i64;
		return (unsigned int)(v2 + 1);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

