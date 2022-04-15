//----- (000000014086F8F0) ----------------------------------------------------
__int64 __fastcall sub_14086F8F0(__int64 a1)
{
	__int64 v1; // rbx
	unsigned int i; // edi
	unsigned int v4; // eax

	v1 = *(_QWORD*)(a1 + 168);
	for (i = 1; v1 != *(_QWORD*)(a1 + 176); v1 += 16i64)
	{
		v4 = sub_140856410(*(_QWORD*)(v1 + 8));
		if (v4 != 1)
			i = v4;
	}
	return i;
}

