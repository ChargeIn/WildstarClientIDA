//----- (000000014051DCB0) ----------------------------------------------------
__int64 __fastcall sub_14051DCB0(__int64 a1)
{
	__int64 v1; // rdx
	unsigned int v2; // ebx
	__int64 v3; // rax
	int v4; // eax

	v1 = *(_QWORD*)(a1 + 16);
	v2 = 100;
	if (v1)
	{
		v3 = sub_1403ACBB0(qword_140C65898 + 160, v1);
		if (v3)
		{
			v4 = sub_1405150D0(v3);
			if (v4 > 1)
			{
				if (v4 <= 3)
				{
					return 250;
				}
				else if (v4 <= 7)
				{
					return 1000i64;
				}
			}
		}
	}
	return v2;
}
// 140C65898: using guessed type __int64 qword_140C65898;

